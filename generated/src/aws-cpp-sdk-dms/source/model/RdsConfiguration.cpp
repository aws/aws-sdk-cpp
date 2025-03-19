/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/RdsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

RdsConfiguration::RdsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RdsConfiguration& RdsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineEdition"))
  {
    m_engineEdition = jsonValue.GetString("EngineEdition");
    m_engineEditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceVcpu"))
  {
    m_instanceVcpu = jsonValue.GetDouble("InstanceVcpu");
    m_instanceVcpuHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceMemory"))
  {
    m_instanceMemory = jsonValue.GetDouble("InstanceMemory");
    m_instanceMemoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = jsonValue.GetString("StorageType");
    m_storageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StorageSize"))
  {
    m_storageSize = jsonValue.GetInteger("StorageSize");
    m_storageSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StorageIops"))
  {
    m_storageIops = jsonValue.GetInteger("StorageIops");
    m_storageIopsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentOption"))
  {
    m_deploymentOption = jsonValue.GetString("DeploymentOption");
    m_deploymentOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");
    m_engineVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_engineEditionHasBeenSet)
  {
   payload.WithString("EngineEdition", m_engineEdition);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_instanceVcpuHasBeenSet)
  {
   payload.WithDouble("InstanceVcpu", m_instanceVcpu);

  }

  if(m_instanceMemoryHasBeenSet)
  {
   payload.WithDouble("InstanceMemory", m_instanceMemory);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", m_storageType);

  }

  if(m_storageSizeHasBeenSet)
  {
   payload.WithInteger("StorageSize", m_storageSize);

  }

  if(m_storageIopsHasBeenSet)
  {
   payload.WithInteger("StorageIops", m_storageIops);

  }

  if(m_deploymentOptionHasBeenSet)
  {
   payload.WithString("DeploymentOption", m_deploymentOption);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
