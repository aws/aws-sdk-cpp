/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SAPODataConnectorProfileCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SAPODataConnectorProfileCredentials::SAPODataConnectorProfileCredentials(JsonView jsonValue)
{
  *this = jsonValue;
}

SAPODataConnectorProfileCredentials& SAPODataConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("basicAuthCredentials"))
  {
    m_basicAuthCredentials = jsonValue.GetObject("basicAuthCredentials");
    m_basicAuthCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oAuthCredentials"))
  {
    m_oAuthCredentials = jsonValue.GetObject("oAuthCredentials");
    m_oAuthCredentialsHasBeenSet = true;
  }
  return *this;
}

JsonValue SAPODataConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_basicAuthCredentialsHasBeenSet)
  {
   payload.WithObject("basicAuthCredentials", m_basicAuthCredentials.Jsonize());

  }

  if(m_oAuthCredentialsHasBeenSet)
  {
   payload.WithObject("oAuthCredentials", m_oAuthCredentials.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
