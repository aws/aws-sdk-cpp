/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationConfig.h>
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

ReplicationConfig::ReplicationConfig() : 
    m_replicationConfigIdentifierHasBeenSet(false),
    m_replicationConfigArnHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_replicationType(MigrationTypeValue::NOT_SET),
    m_replicationTypeHasBeenSet(false),
    m_computeConfigHasBeenSet(false),
    m_replicationSettingsHasBeenSet(false),
    m_supplementalSettingsHasBeenSet(false),
    m_tableMappingsHasBeenSet(false),
    m_replicationConfigCreateTimeHasBeenSet(false),
    m_replicationConfigUpdateTimeHasBeenSet(false)
{
}

ReplicationConfig::ReplicationConfig(JsonView jsonValue) : 
    m_replicationConfigIdentifierHasBeenSet(false),
    m_replicationConfigArnHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_replicationType(MigrationTypeValue::NOT_SET),
    m_replicationTypeHasBeenSet(false),
    m_computeConfigHasBeenSet(false),
    m_replicationSettingsHasBeenSet(false),
    m_supplementalSettingsHasBeenSet(false),
    m_tableMappingsHasBeenSet(false),
    m_replicationConfigCreateTimeHasBeenSet(false),
    m_replicationConfigUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationConfig& ReplicationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationConfigIdentifier"))
  {
    m_replicationConfigIdentifier = jsonValue.GetString("ReplicationConfigIdentifier");

    m_replicationConfigIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationConfigArn"))
  {
    m_replicationConfigArn = jsonValue.GetString("ReplicationConfigArn");

    m_replicationConfigArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceEndpointArn"))
  {
    m_sourceEndpointArn = jsonValue.GetString("SourceEndpointArn");

    m_sourceEndpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetEndpointArn"))
  {
    m_targetEndpointArn = jsonValue.GetString("TargetEndpointArn");

    m_targetEndpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationType"))
  {
    m_replicationType = MigrationTypeValueMapper::GetMigrationTypeValueForName(jsonValue.GetString("ReplicationType"));

    m_replicationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputeConfig"))
  {
    m_computeConfig = jsonValue.GetObject("ComputeConfig");

    m_computeConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationSettings"))
  {
    m_replicationSettings = jsonValue.GetString("ReplicationSettings");

    m_replicationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupplementalSettings"))
  {
    m_supplementalSettings = jsonValue.GetString("SupplementalSettings");

    m_supplementalSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableMappings"))
  {
    m_tableMappings = jsonValue.GetString("TableMappings");

    m_tableMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationConfigCreateTime"))
  {
    m_replicationConfigCreateTime = jsonValue.GetDouble("ReplicationConfigCreateTime");

    m_replicationConfigCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationConfigUpdateTime"))
  {
    m_replicationConfigUpdateTime = jsonValue.GetDouble("ReplicationConfigUpdateTime");

    m_replicationConfigUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_replicationConfigIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationConfigIdentifier", m_replicationConfigIdentifier);

  }

  if(m_replicationConfigArnHasBeenSet)
  {
   payload.WithString("ReplicationConfigArn", m_replicationConfigArn);

  }

  if(m_sourceEndpointArnHasBeenSet)
  {
   payload.WithString("SourceEndpointArn", m_sourceEndpointArn);

  }

  if(m_targetEndpointArnHasBeenSet)
  {
   payload.WithString("TargetEndpointArn", m_targetEndpointArn);

  }

  if(m_replicationTypeHasBeenSet)
  {
   payload.WithString("ReplicationType", MigrationTypeValueMapper::GetNameForMigrationTypeValue(m_replicationType));
  }

  if(m_computeConfigHasBeenSet)
  {
   payload.WithObject("ComputeConfig", m_computeConfig.Jsonize());

  }

  if(m_replicationSettingsHasBeenSet)
  {
   payload.WithString("ReplicationSettings", m_replicationSettings);

  }

  if(m_supplementalSettingsHasBeenSet)
  {
   payload.WithString("SupplementalSettings", m_supplementalSettings);

  }

  if(m_tableMappingsHasBeenSet)
  {
   payload.WithString("TableMappings", m_tableMappings);

  }

  if(m_replicationConfigCreateTimeHasBeenSet)
  {
   payload.WithDouble("ReplicationConfigCreateTime", m_replicationConfigCreateTime.SecondsWithMSPrecision());
  }

  if(m_replicationConfigUpdateTimeHasBeenSet)
  {
   payload.WithDouble("ReplicationConfigUpdateTime", m_replicationConfigUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
