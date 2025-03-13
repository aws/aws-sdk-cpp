/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AuthenticationConfigurationPatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AuthenticationConfigurationPatch::AuthenticationConfigurationPatch(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthenticationConfigurationPatch& AuthenticationConfigurationPatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("basicAuthenticationCredentials"))
  {
    m_basicAuthenticationCredentials = jsonValue.GetObject("basicAuthenticationCredentials");
    m_basicAuthenticationCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthenticationConfigurationPatch::Jsonize() const
{
  JsonValue payload;

  if(m_basicAuthenticationCredentialsHasBeenSet)
  {
   payload.WithObject("basicAuthenticationCredentials", m_basicAuthenticationCredentials.Jsonize());

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
