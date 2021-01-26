/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/UpdateServiceIntegrationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

UpdateServiceIntegrationConfig::UpdateServiceIntegrationConfig() : 
    m_opsCenterHasBeenSet(false)
{
}

UpdateServiceIntegrationConfig::UpdateServiceIntegrationConfig(JsonView jsonValue) : 
    m_opsCenterHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateServiceIntegrationConfig& UpdateServiceIntegrationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpsCenter"))
  {
    m_opsCenter = jsonValue.GetObject("OpsCenter");

    m_opsCenterHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateServiceIntegrationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_opsCenterHasBeenSet)
  {
   payload.WithObject("OpsCenter", m_opsCenter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
