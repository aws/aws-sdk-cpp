/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactConfiguration.h>
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

ContactConfiguration::ContactConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactConfiguration& ContactConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactId"))
  {
    m_contactId = jsonValue.GetString("ContactId");
    m_contactIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));
    m_participantRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeRawMessage"))
  {
    m_includeRawMessage = jsonValue.GetBool("IncludeRawMessage");
    m_includeRawMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

  if(m_includeRawMessageHasBeenSet)
  {
   payload.WithBool("IncludeRawMessage", m_includeRawMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
