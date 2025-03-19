/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InvalidRequestExceptionReason.h>
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

InvalidRequestExceptionReason::InvalidRequestExceptionReason(JsonView jsonValue)
{
  *this = jsonValue;
}

InvalidRequestExceptionReason& InvalidRequestExceptionReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachedFileInvalidRequestExceptionReason"))
  {
    m_attachedFileInvalidRequestExceptionReason = AttachedFileInvalidRequestExceptionReasonMapper::GetAttachedFileInvalidRequestExceptionReasonForName(jsonValue.GetString("AttachedFileInvalidRequestExceptionReason"));
    m_attachedFileInvalidRequestExceptionReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue InvalidRequestExceptionReason::Jsonize() const
{
  JsonValue payload;

  if(m_attachedFileInvalidRequestExceptionReasonHasBeenSet)
  {
   payload.WithString("AttachedFileInvalidRequestExceptionReason", AttachedFileInvalidRequestExceptionReasonMapper::GetNameForAttachedFileInvalidRequestExceptionReason(m_attachedFileInvalidRequestExceptionReason));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
