/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

RecoveryInstance::RecoveryInstance() : 
    m_arnHasBeenSet(false),
    m_dataReplicationInfoHasBeenSet(false),
    m_ec2InstanceIDHasBeenSet(false),
    m_ec2InstanceState(EC2InstanceState::NOT_SET),
    m_ec2InstanceStateHasBeenSet(false),
    m_failbackHasBeenSet(false),
    m_isDrill(false),
    m_isDrillHasBeenSet(false),
    m_jobIDHasBeenSet(false),
    m_originEnvironment(OriginEnvironment::NOT_SET),
    m_originEnvironmentHasBeenSet(false),
    m_pointInTimeSnapshotDateTimeHasBeenSet(false),
    m_recoveryInstanceIDHasBeenSet(false),
    m_recoveryInstancePropertiesHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

RecoveryInstance::RecoveryInstance(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_dataReplicationInfoHasBeenSet(false),
    m_ec2InstanceIDHasBeenSet(false),
    m_ec2InstanceState(EC2InstanceState::NOT_SET),
    m_ec2InstanceStateHasBeenSet(false),
    m_failbackHasBeenSet(false),
    m_isDrill(false),
    m_isDrillHasBeenSet(false),
    m_jobIDHasBeenSet(false),
    m_originEnvironment(OriginEnvironment::NOT_SET),
    m_originEnvironmentHasBeenSet(false),
    m_pointInTimeSnapshotDateTimeHasBeenSet(false),
    m_recoveryInstanceIDHasBeenSet(false),
    m_recoveryInstancePropertiesHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryInstance& RecoveryInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataReplicationInfo"))
  {
    m_dataReplicationInfo = jsonValue.GetObject("dataReplicationInfo");

    m_dataReplicationInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceID"))
  {
    m_ec2InstanceID = jsonValue.GetString("ec2InstanceID");

    m_ec2InstanceIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceState"))
  {
    m_ec2InstanceState = EC2InstanceStateMapper::GetEC2InstanceStateForName(jsonValue.GetString("ec2InstanceState"));

    m_ec2InstanceStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failback"))
  {
    m_failback = jsonValue.GetObject("failback");

    m_failbackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDrill"))
  {
    m_isDrill = jsonValue.GetBool("isDrill");

    m_isDrillHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobID"))
  {
    m_jobID = jsonValue.GetString("jobID");

    m_jobIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originEnvironment"))
  {
    m_originEnvironment = OriginEnvironmentMapper::GetOriginEnvironmentForName(jsonValue.GetString("originEnvironment"));

    m_originEnvironmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pointInTimeSnapshotDateTime"))
  {
    m_pointInTimeSnapshotDateTime = jsonValue.GetString("pointInTimeSnapshotDateTime");

    m_pointInTimeSnapshotDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recoveryInstanceID"))
  {
    m_recoveryInstanceID = jsonValue.GetString("recoveryInstanceID");

    m_recoveryInstanceIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recoveryInstanceProperties"))
  {
    m_recoveryInstanceProperties = jsonValue.GetObject("recoveryInstanceProperties");

    m_recoveryInstancePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

    m_sourceServerIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryInstance::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_dataReplicationInfoHasBeenSet)
  {
   payload.WithObject("dataReplicationInfo", m_dataReplicationInfo.Jsonize());

  }

  if(m_ec2InstanceIDHasBeenSet)
  {
   payload.WithString("ec2InstanceID", m_ec2InstanceID);

  }

  if(m_ec2InstanceStateHasBeenSet)
  {
   payload.WithString("ec2InstanceState", EC2InstanceStateMapper::GetNameForEC2InstanceState(m_ec2InstanceState));
  }

  if(m_failbackHasBeenSet)
  {
   payload.WithObject("failback", m_failback.Jsonize());

  }

  if(m_isDrillHasBeenSet)
  {
   payload.WithBool("isDrill", m_isDrill);

  }

  if(m_jobIDHasBeenSet)
  {
   payload.WithString("jobID", m_jobID);

  }

  if(m_originEnvironmentHasBeenSet)
  {
   payload.WithString("originEnvironment", OriginEnvironmentMapper::GetNameForOriginEnvironment(m_originEnvironment));
  }

  if(m_pointInTimeSnapshotDateTimeHasBeenSet)
  {
   payload.WithString("pointInTimeSnapshotDateTime", m_pointInTimeSnapshotDateTime);

  }

  if(m_recoveryInstanceIDHasBeenSet)
  {
   payload.WithString("recoveryInstanceID", m_recoveryInstanceID);

  }

  if(m_recoveryInstancePropertiesHasBeenSet)
  {
   payload.WithObject("recoveryInstanceProperties", m_recoveryInstanceProperties.Jsonize());

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
