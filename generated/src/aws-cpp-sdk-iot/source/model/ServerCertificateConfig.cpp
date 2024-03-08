/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ServerCertificateConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ServerCertificateConfig::ServerCertificateConfig() : 
    m_enableOCSPCheck(false),
    m_enableOCSPCheckHasBeenSet(false)
{
}

ServerCertificateConfig::ServerCertificateConfig(JsonView jsonValue) : 
    m_enableOCSPCheck(false),
    m_enableOCSPCheckHasBeenSet(false)
{
  *this = jsonValue;
}

ServerCertificateConfig& ServerCertificateConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enableOCSPCheck"))
  {
    m_enableOCSPCheck = jsonValue.GetBool("enableOCSPCheck");

    m_enableOCSPCheckHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerCertificateConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableOCSPCheckHasBeenSet)
  {
   payload.WithBool("enableOCSPCheck", m_enableOCSPCheck);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
