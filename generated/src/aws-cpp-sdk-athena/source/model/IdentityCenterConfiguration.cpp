/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/IdentityCenterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

IdentityCenterConfiguration::IdentityCenterConfiguration() : 
    m_enableIdentityCenter(false),
    m_enableIdentityCenterHasBeenSet(false),
    m_identityCenterInstanceArnHasBeenSet(false)
{
}

IdentityCenterConfiguration::IdentityCenterConfiguration(JsonView jsonValue) : 
    m_enableIdentityCenter(false),
    m_enableIdentityCenterHasBeenSet(false),
    m_identityCenterInstanceArnHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityCenterConfiguration& IdentityCenterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableIdentityCenter"))
  {
    m_enableIdentityCenter = jsonValue.GetBool("EnableIdentityCenter");

    m_enableIdentityCenterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityCenterInstanceArn"))
  {
    m_identityCenterInstanceArn = jsonValue.GetString("IdentityCenterInstanceArn");

    m_identityCenterInstanceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityCenterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableIdentityCenterHasBeenSet)
  {
   payload.WithBool("EnableIdentityCenter", m_enableIdentityCenter);

  }

  if(m_identityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("IdentityCenterInstanceArn", m_identityCenterInstanceArn);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
