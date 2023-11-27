/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CustomProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

CustomProperty::CustomProperty() : 
    m_fullyQualifiedNameHasBeenSet(false),
    m_dataType(NodeDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_dataEncoding(NodeDataEncoding::NOT_SET),
    m_dataEncodingHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deprecationMessageHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_structFullyQualifiedNameHasBeenSet(false)
{
}

CustomProperty::CustomProperty(JsonView jsonValue) : 
    m_fullyQualifiedNameHasBeenSet(false),
    m_dataType(NodeDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_dataEncoding(NodeDataEncoding::NOT_SET),
    m_dataEncodingHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deprecationMessageHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_structFullyQualifiedNameHasBeenSet(false)
{
  *this = jsonValue;
}

CustomProperty& CustomProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fullyQualifiedName"))
  {
    m_fullyQualifiedName = jsonValue.GetString("fullyQualifiedName");

    m_fullyQualifiedNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = NodeDataTypeMapper::GetNodeDataTypeForName(jsonValue.GetString("dataType"));

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataEncoding"))
  {
    m_dataEncoding = NodeDataEncodingMapper::GetNodeDataEncodingForName(jsonValue.GetString("dataEncoding"));

    m_dataEncodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deprecationMessage"))
  {
    m_deprecationMessage = jsonValue.GetString("deprecationMessage");

    m_deprecationMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("structFullyQualifiedName"))
  {
    m_structFullyQualifiedName = jsonValue.GetString("structFullyQualifiedName");

    m_structFullyQualifiedNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomProperty::Jsonize() const
{
  JsonValue payload;

  if(m_fullyQualifiedNameHasBeenSet)
  {
   payload.WithString("fullyQualifiedName", m_fullyQualifiedName);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", NodeDataTypeMapper::GetNameForNodeDataType(m_dataType));
  }

  if(m_dataEncodingHasBeenSet)
  {
   payload.WithString("dataEncoding", NodeDataEncodingMapper::GetNameForNodeDataEncoding(m_dataEncoding));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_deprecationMessageHasBeenSet)
  {
   payload.WithString("deprecationMessage", m_deprecationMessage);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_structFullyQualifiedNameHasBeenSet)
  {
   payload.WithString("structFullyQualifiedName", m_structFullyQualifiedName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
