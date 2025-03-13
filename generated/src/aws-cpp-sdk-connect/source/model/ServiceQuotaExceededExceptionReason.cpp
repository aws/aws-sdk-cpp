/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ServiceQuotaExceededExceptionReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ServiceQuotaExceededExceptionReason::ServiceQuotaExceededExceptionReason(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceQuotaExceededExceptionReason& ServiceQuotaExceededExceptionReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachedFileServiceQuotaExceededExceptionReason"))
  {
    m_attachedFileServiceQuotaExceededExceptionReason = AttachedFileServiceQuotaExceededExceptionReasonMapper::GetAttachedFileServiceQuotaExceededExceptionReasonForName(jsonValue.GetString("AttachedFileServiceQuotaExceededExceptionReason"));
    m_attachedFileServiceQuotaExceededExceptionReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceQuotaExceededExceptionReason::Jsonize() const
{
  JsonValue payload;

  if(m_attachedFileServiceQuotaExceededExceptionReasonHasBeenSet)
  {
   payload.WithString("AttachedFileServiceQuotaExceededExceptionReason", AttachedFileServiceQuotaExceededExceptionReasonMapper::GetNameForAttachedFileServiceQuotaExceededExceptionReason(m_attachedFileServiceQuotaExceededExceptionReason));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
