/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/LambdaConnectorProvisioningConfig.h>
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

LambdaConnectorProvisioningConfig::LambdaConnectorProvisioningConfig() : 
    m_lambdaArnHasBeenSet(false)
{
}

LambdaConnectorProvisioningConfig::LambdaConnectorProvisioningConfig(JsonView jsonValue) : 
    m_lambdaArnHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaConnectorProvisioningConfig& LambdaConnectorProvisioningConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("lambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaConnectorProvisioningConfig::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("lambdaArn", m_lambdaArn);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
