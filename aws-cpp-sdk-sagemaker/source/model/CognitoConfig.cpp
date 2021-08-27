/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CognitoConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

CognitoConfig::CognitoConfig() : 
    m_userPoolHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
}

CognitoConfig::CognitoConfig(JsonView jsonValue) : 
    m_userPoolHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoConfig& CognitoConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserPool"))
  {
    m_userPool = jsonValue.GetString("UserPool");

    m_userPoolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CognitoConfig::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolHasBeenSet)
  {
   payload.WithString("UserPool", m_userPool);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
