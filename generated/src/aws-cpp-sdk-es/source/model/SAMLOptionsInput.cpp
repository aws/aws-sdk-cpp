/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/SAMLOptionsInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

SAMLOptionsInput::SAMLOptionsInput() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_idpHasBeenSet(false),
    m_masterUserNameHasBeenSet(false),
    m_masterBackendRoleHasBeenSet(false),
    m_subjectKeyHasBeenSet(false),
    m_rolesKeyHasBeenSet(false),
    m_sessionTimeoutMinutes(0),
    m_sessionTimeoutMinutesHasBeenSet(false)
{
}

SAMLOptionsInput::SAMLOptionsInput(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_idpHasBeenSet(false),
    m_masterUserNameHasBeenSet(false),
    m_masterBackendRoleHasBeenSet(false),
    m_subjectKeyHasBeenSet(false),
    m_rolesKeyHasBeenSet(false),
    m_sessionTimeoutMinutes(0),
    m_sessionTimeoutMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

SAMLOptionsInput& SAMLOptionsInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Idp"))
  {
    m_idp = jsonValue.GetObject("Idp");

    m_idpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUserName"))
  {
    m_masterUserName = jsonValue.GetString("MasterUserName");

    m_masterUserNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterBackendRole"))
  {
    m_masterBackendRole = jsonValue.GetString("MasterBackendRole");

    m_masterBackendRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubjectKey"))
  {
    m_subjectKey = jsonValue.GetString("SubjectKey");

    m_subjectKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RolesKey"))
  {
    m_rolesKey = jsonValue.GetString("RolesKey");

    m_rolesKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionTimeoutMinutes"))
  {
    m_sessionTimeoutMinutes = jsonValue.GetInteger("SessionTimeoutMinutes");

    m_sessionTimeoutMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue SAMLOptionsInput::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_idpHasBeenSet)
  {
   payload.WithObject("Idp", m_idp.Jsonize());

  }

  if(m_masterUserNameHasBeenSet)
  {
   payload.WithString("MasterUserName", m_masterUserName);

  }

  if(m_masterBackendRoleHasBeenSet)
  {
   payload.WithString("MasterBackendRole", m_masterBackendRole);

  }

  if(m_subjectKeyHasBeenSet)
  {
   payload.WithString("SubjectKey", m_subjectKey);

  }

  if(m_rolesKeyHasBeenSet)
  {
   payload.WithString("RolesKey", m_rolesKey);

  }

  if(m_sessionTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("SessionTimeoutMinutes", m_sessionTimeoutMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
