/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ClientCertificateConfig.h>
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

ClientCertificateConfig::ClientCertificateConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ClientCertificateConfig& ClientCertificateConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientCertificateCallbackArn"))
  {
    m_clientCertificateCallbackArn = jsonValue.GetString("clientCertificateCallbackArn");
    m_clientCertificateCallbackArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientCertificateConfig::Jsonize() const
{
  JsonValue payload;

  if(m_clientCertificateCallbackArnHasBeenSet)
  {
   payload.WithString("clientCertificateCallbackArn", m_clientCertificateCallbackArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
