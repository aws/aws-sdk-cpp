/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ConnectorConfigResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

ConnectorConfigResponse::ConnectorConfigResponse() : 
    m_activationIdHasBeenSet(false),
    m_activationCodeHasBeenSet(false),
    m_activationExpiryHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

ConnectorConfigResponse::ConnectorConfigResponse(JsonView jsonValue) : 
    m_activationIdHasBeenSet(false),
    m_activationCodeHasBeenSet(false),
    m_activationExpiryHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorConfigResponse& ConnectorConfigResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activationId"))
  {
    m_activationId = jsonValue.GetString("activationId");

    m_activationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activationCode"))
  {
    m_activationCode = jsonValue.GetString("activationCode");

    m_activationCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activationExpiry"))
  {
    m_activationExpiry = jsonValue.GetDouble("activationExpiry");

    m_activationExpiryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetString("provider");

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_activationIdHasBeenSet)
  {
   payload.WithString("activationId", m_activationId);

  }

  if(m_activationCodeHasBeenSet)
  {
   payload.WithString("activationCode", m_activationCode);

  }

  if(m_activationExpiryHasBeenSet)
  {
   payload.WithDouble("activationExpiry", m_activationExpiry.SecondsWithMSPrecision());
  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", m_provider);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
