/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ErrorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ErrorInfo::ErrorInfo() : 
    m_type(IngestionErrorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ErrorInfo::ErrorInfo(JsonView jsonValue) : 
    m_type(IngestionErrorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorInfo& ErrorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = IngestionErrorTypeMapper::GetIngestionErrorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", IngestionErrorTypeMapper::GetNameForIngestionErrorType(m_type));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
