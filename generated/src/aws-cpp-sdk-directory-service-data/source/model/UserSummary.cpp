/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/UserSummary.h>
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

UserSummary::UserSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

UserSummary& UserSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GivenName"))
  {
    m_givenName = jsonValue.GetString("GivenName");
    m_givenNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SAMAccountName"))
  {
    m_sAMAccountName = jsonValue.GetString("SAMAccountName");
    m_sAMAccountNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SID"))
  {
    m_sID = jsonValue.GetString("SID");
    m_sIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Surname"))
  {
    m_surname = jsonValue.GetString("Surname");
    m_surnameHasBeenSet = true;
  }
  return *this;
}

JsonValue UserSummary::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_givenNameHasBeenSet)
  {
   payload.WithString("GivenName", m_givenName);

  }

  if(m_sAMAccountNameHasBeenSet)
  {
   payload.WithString("SAMAccountName", m_sAMAccountName);

  }

  if(m_sIDHasBeenSet)
  {
   payload.WithString("SID", m_sID);

  }

  if(m_surnameHasBeenSet)
  {
   payload.WithString("Surname", m_surname);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
