/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/RejectedEntityInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

RejectedEntityInfo::RejectedEntityInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

RejectedEntityInfo& RejectedEntityInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorType"))
  {
    m_errorType = EntityRejectionErrorTypeMapper::GetEntityRejectionErrorTypeForName(jsonValue.GetString("errorType"));
    m_errorTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue RejectedEntityInfo::Jsonize() const
{
  JsonValue payload;

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("errorType", EntityRejectionErrorTypeMapper::GetNameForEntityRejectionErrorType(m_errorType));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
