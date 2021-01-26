/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ObjectTypeField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ObjectTypeField::ObjectTypeField() : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_contentType(FieldContentType::NOT_SET),
    m_contentTypeHasBeenSet(false)
{
}

ObjectTypeField::ObjectTypeField(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_contentType(FieldContentType::NOT_SET),
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectTypeField& ObjectTypeField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = FieldContentTypeMapper::GetFieldContentTypeForName(jsonValue.GetString("ContentType"));

    m_contentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectTypeField::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", FieldContentTypeMapper::GetNameForFieldContentType(m_contentType));
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
