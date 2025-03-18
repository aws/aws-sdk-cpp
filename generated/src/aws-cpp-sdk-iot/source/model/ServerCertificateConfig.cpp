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

ServerCertificateConfig::ServerCertificateConfig(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ocspLambdaArn"))
  {
    m_ocspLambdaArn = jsonValue.GetString("ocspLambdaArn");
    m_ocspLambdaArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ocspAuthorizedResponderArn"))
  {
    m_ocspAuthorizedResponderArn = jsonValue.GetString("ocspAuthorizedResponderArn");
    m_ocspAuthorizedResponderArnHasBeenSet = true;
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

  if(m_ocspLambdaArnHasBeenSet)
  {
   payload.WithString("ocspLambdaArn", m_ocspLambdaArn);

  }

  if(m_ocspAuthorizedResponderArnHasBeenSet)
  {
   payload.WithString("ocspAuthorizedResponderArn", m_ocspAuthorizedResponderArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
