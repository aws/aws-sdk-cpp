/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DevEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DevEndpoint::DevEndpoint() : 
    m_endpointNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_yarnEndpointAddressHasBeenSet(false),
    m_privateAddressHasBeenSet(false),
    m_zeppelinRemoteSparkInterpreterPort(0),
    m_zeppelinRemoteSparkInterpreterPortHasBeenSet(false),
    m_publicAddressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_workerType(WorkerType::NOT_SET),
    m_workerTypeHasBeenSet(false),
    m_glueVersionHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_extraPythonLibsS3PathHasBeenSet(false),
    m_extraJarsS3PathHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_lastUpdateStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_publicKeysHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
}

DevEndpoint::DevEndpoint(JsonView jsonValue) : 
    m_endpointNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_yarnEndpointAddressHasBeenSet(false),
    m_privateAddressHasBeenSet(false),
    m_zeppelinRemoteSparkInterpreterPort(0),
    m_zeppelinRemoteSparkInterpreterPortHasBeenSet(false),
    m_publicAddressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_workerType(WorkerType::NOT_SET),
    m_workerTypeHasBeenSet(false),
    m_glueVersionHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_extraPythonLibsS3PathHasBeenSet(false),
    m_extraJarsS3PathHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_lastUpdateStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_publicKeysHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
  *this = jsonValue;
}

DevEndpoint& DevEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("YarnEndpointAddress"))
  {
    m_yarnEndpointAddress = jsonValue.GetString("YarnEndpointAddress");

    m_yarnEndpointAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateAddress"))
  {
    m_privateAddress = jsonValue.GetString("PrivateAddress");

    m_privateAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZeppelinRemoteSparkInterpreterPort"))
  {
    m_zeppelinRemoteSparkInterpreterPort = jsonValue.GetInteger("ZeppelinRemoteSparkInterpreterPort");

    m_zeppelinRemoteSparkInterpreterPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicAddress"))
  {
    m_publicAddress = jsonValue.GetString("PublicAddress");

    m_publicAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkerType"))
  {
    m_workerType = WorkerTypeMapper::GetWorkerTypeForName(jsonValue.GetString("WorkerType"));

    m_workerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlueVersion"))
  {
    m_glueVersion = jsonValue.GetString("GlueVersion");

    m_glueVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");

    m_numberOfWorkersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfNodes"))
  {
    m_numberOfNodes = jsonValue.GetInteger("NumberOfNodes");

    m_numberOfNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtraPythonLibsS3Path"))
  {
    m_extraPythonLibsS3Path = jsonValue.GetString("ExtraPythonLibsS3Path");

    m_extraPythonLibsS3PathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtraJarsS3Path"))
  {
    m_extraJarsS3Path = jsonValue.GetString("ExtraJarsS3Path");

    m_extraJarsS3PathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateStatus"))
  {
    m_lastUpdateStatus = jsonValue.GetString("LastUpdateStatus");

    m_lastUpdateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("LastModifiedTimestamp");

    m_lastModifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = jsonValue.GetString("PublicKey");

    m_publicKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicKeys"))
  {
    Aws::Utils::Array<JsonView> publicKeysJsonList = jsonValue.GetArray("PublicKeys");
    for(unsigned publicKeysIndex = 0; publicKeysIndex < publicKeysJsonList.GetLength(); ++publicKeysIndex)
    {
      m_publicKeys.push_back(publicKeysJsonList[publicKeysIndex].AsString());
    }
    m_publicKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityConfiguration"))
  {
    m_securityConfiguration = jsonValue.GetString("SecurityConfiguration");

    m_securityConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arguments"))
  {
    Aws::Map<Aws::String, JsonView> argumentsJsonMap = jsonValue.GetObject("Arguments").GetAllObjects();
    for(auto& argumentsItem : argumentsJsonMap)
    {
      m_arguments[argumentsItem.first] = argumentsItem.second.AsString();
    }
    m_argumentsHasBeenSet = true;
  }

  return *this;
}

JsonValue DevEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_yarnEndpointAddressHasBeenSet)
  {
   payload.WithString("YarnEndpointAddress", m_yarnEndpointAddress);

  }

  if(m_privateAddressHasBeenSet)
  {
   payload.WithString("PrivateAddress", m_privateAddress);

  }

  if(m_zeppelinRemoteSparkInterpreterPortHasBeenSet)
  {
   payload.WithInteger("ZeppelinRemoteSparkInterpreterPort", m_zeppelinRemoteSparkInterpreterPort);

  }

  if(m_publicAddressHasBeenSet)
  {
   payload.WithString("PublicAddress", m_publicAddress);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_workerTypeHasBeenSet)
  {
   payload.WithString("WorkerType", WorkerTypeMapper::GetNameForWorkerType(m_workerType));
  }

  if(m_glueVersionHasBeenSet)
  {
   payload.WithString("GlueVersion", m_glueVersion);

  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_numberOfNodesHasBeenSet)
  {
   payload.WithInteger("NumberOfNodes", m_numberOfNodes);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_extraPythonLibsS3PathHasBeenSet)
  {
   payload.WithString("ExtraPythonLibsS3Path", m_extraPythonLibsS3Path);

  }

  if(m_extraJarsS3PathHasBeenSet)
  {
   payload.WithString("ExtraJarsS3Path", m_extraJarsS3Path);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_lastUpdateStatusHasBeenSet)
  {
   payload.WithString("LastUpdateStatus", m_lastUpdateStatus);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimestampHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimestamp", m_lastModifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_publicKeyHasBeenSet)
  {
   payload.WithString("PublicKey", m_publicKey);

  }

  if(m_publicKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publicKeysJsonList(m_publicKeys.size());
   for(unsigned publicKeysIndex = 0; publicKeysIndex < publicKeysJsonList.GetLength(); ++publicKeysIndex)
   {
     publicKeysJsonList[publicKeysIndex].AsString(m_publicKeys[publicKeysIndex]);
   }
   payload.WithArray("PublicKeys", std::move(publicKeysJsonList));

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  if(m_argumentsHasBeenSet)
  {
   JsonValue argumentsJsonMap;
   for(auto& argumentsItem : m_arguments)
   {
     argumentsJsonMap.WithString(argumentsItem.first, argumentsItem.second);
   }
   payload.WithObject("Arguments", std::move(argumentsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
