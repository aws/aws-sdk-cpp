/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/TlsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

TlsConfig::TlsConfig() : 
    m_insecureSkipVerification(false),
    m_insecureSkipVerificationHasBeenSet(false)
{
}

TlsConfig::TlsConfig(JsonView jsonValue) : 
    m_insecureSkipVerification(false),
    m_insecureSkipVerificationHasBeenSet(false)
{
  *this = jsonValue;
}

TlsConfig& TlsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("insecureSkipVerification"))
  {
    m_insecureSkipVerification = jsonValue.GetBool("insecureSkipVerification");

    m_insecureSkipVerificationHasBeenSet = true;
  }

  return *this;
}

JsonValue TlsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_insecureSkipVerificationHasBeenSet)
  {
   payload.WithBool("insecureSkipVerification", m_insecureSkipVerification);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
