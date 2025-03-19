/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/DirectoryUnavailableException.h>
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

DirectoryUnavailableException::DirectoryUnavailableException(JsonView jsonValue)
{
  *this = jsonValue;
}

DirectoryUnavailableException& DirectoryUnavailableException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = DirectoryUnavailableReasonMapper::GetDirectoryUnavailableReasonForName(jsonValue.GetString("Reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectoryUnavailableException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", DirectoryUnavailableReasonMapper::GetNameForDirectoryUnavailableReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
