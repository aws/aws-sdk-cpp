/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/AssertionAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

AssertionAttributes::AssertionAttributes() : 
    m_emailHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_loginHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_orgHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

AssertionAttributes::AssertionAttributes(JsonView jsonValue) : 
    m_emailHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_loginHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_orgHasBeenSet(false),
    m_roleHasBeenSet(false)
{
  *this = jsonValue;
}

AssertionAttributes& AssertionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groups"))
  {
    m_groups = jsonValue.GetString("groups");

    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("login"))
  {
    m_login = jsonValue.GetString("login");

    m_loginHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("org"))
  {
    m_org = jsonValue.GetString("org");

    m_orgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("role"))
  {
    m_role = jsonValue.GetString("role");

    m_roleHasBeenSet = true;
  }

  return *this;
}

JsonValue AssertionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_groupsHasBeenSet)
  {
   payload.WithString("groups", m_groups);

  }

  if(m_loginHasBeenSet)
  {
   payload.WithString("login", m_login);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_orgHasBeenSet)
  {
   payload.WithString("org", m_org);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", m_role);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
