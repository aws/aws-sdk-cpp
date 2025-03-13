/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/AccessDeniedException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{

AccessDeniedException::AccessDeniedException(JsonView jsonValue)
{
  *this = jsonValue;
}

AccessDeniedException& AccessDeniedException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = AccessDeniedReasonMapper::GetAccessDeniedReasonForName(jsonValue.GetString("Reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessDeniedException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", AccessDeniedReasonMapper::GetNameForAccessDeniedReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
