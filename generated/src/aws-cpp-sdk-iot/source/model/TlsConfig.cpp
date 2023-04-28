/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TlsConfig.h>
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

TlsConfig::TlsConfig() : 
    m_securityPolicyHasBeenSet(false)
{
}

TlsConfig::TlsConfig(JsonView jsonValue) : 
    m_securityPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

TlsConfig& TlsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("securityPolicy"))
  {
    m_securityPolicy = jsonValue.GetString("securityPolicy");

    m_securityPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue TlsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_securityPolicyHasBeenSet)
  {
   payload.WithString("securityPolicy", m_securityPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
