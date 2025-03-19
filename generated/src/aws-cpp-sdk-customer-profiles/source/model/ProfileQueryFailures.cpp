/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ProfileQueryFailures.h>
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

ProfileQueryFailures::ProfileQueryFailures(JsonView jsonValue)
{
  *this = jsonValue;
}

ProfileQueryFailures& ProfileQueryFailures::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileId"))
  {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetInteger("Status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileQueryFailures::Jsonize() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithInteger("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
