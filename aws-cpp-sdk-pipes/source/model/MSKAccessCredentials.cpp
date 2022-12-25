/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/MSKAccessCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

MSKAccessCredentials::MSKAccessCredentials() : 
    m_clientCertificateTlsAuthHasBeenSet(false),
    m_saslScram512AuthHasBeenSet(false)
{
}

MSKAccessCredentials::MSKAccessCredentials(JsonView jsonValue) : 
    m_clientCertificateTlsAuthHasBeenSet(false),
    m_saslScram512AuthHasBeenSet(false)
{
  *this = jsonValue;
}

MSKAccessCredentials& MSKAccessCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientCertificateTlsAuth"))
  {
    m_clientCertificateTlsAuth = jsonValue.GetString("ClientCertificateTlsAuth");

    m_clientCertificateTlsAuthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SaslScram512Auth"))
  {
    m_saslScram512Auth = jsonValue.GetString("SaslScram512Auth");

    m_saslScram512AuthHasBeenSet = true;
  }

  return *this;
}

JsonValue MSKAccessCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_clientCertificateTlsAuthHasBeenSet)
  {
   payload.WithString("ClientCertificateTlsAuth", m_clientCertificateTlsAuth);

  }

  if(m_saslScram512AuthHasBeenSet)
  {
   payload.WithString("SaslScram512Auth", m_saslScram512Auth);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
