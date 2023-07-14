/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorProvisioningConfig.h>
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

ConnectorProvisioningConfig::ConnectorProvisioningConfig() : 
    m_lambdaHasBeenSet(false)
{
}

ConnectorProvisioningConfig::ConnectorProvisioningConfig(JsonView jsonValue) : 
    m_lambdaHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorProvisioningConfig& ConnectorProvisioningConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetObject("lambda");

    m_lambdaHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorProvisioningConfig::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("lambda", m_lambda.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
