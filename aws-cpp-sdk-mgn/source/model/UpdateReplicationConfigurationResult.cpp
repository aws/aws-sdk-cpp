/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateReplicationConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateReplicationConfigurationResult::UpdateReplicationConfigurationResult() : 
    m_associateDefaultSecurityGroup(false),
    m_bandwidthThrottling(0),
    m_createPublicIP(false),
    m_dataPlaneRouting(ReplicationConfigurationDataPlaneRouting::NOT_SET),
    m_defaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType::NOT_SET),
    m_ebsEncryption(ReplicationConfigurationEbsEncryption::NOT_SET),
    m_useDedicatedReplicationServer(false)
{
}

UpdateReplicationConfigurationResult::UpdateReplicationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_associateDefaultSecurityGroup(false),
    m_bandwidthThrottling(0),
    m_createPublicIP(false),
    m_dataPlaneRouting(ReplicationConfigurationDataPlaneRouting::NOT_SET),
    m_defaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType::NOT_SET),
    m_ebsEncryption(ReplicationConfigurationEbsEncryption::NOT_SET),
    m_useDedicatedReplicationServer(false)
{
  *this = result;
}

UpdateReplicationConfigurationResult& UpdateReplicationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("associateDefaultSecurityGroup"))
  {
    m_associateDefaultSecurityGroup = jsonValue.GetBool("associateDefaultSecurityGroup");

  }

  if(jsonValue.ValueExists("bandwidthThrottling"))
  {
    m_bandwidthThrottling = jsonValue.GetInt64("bandwidthThrottling");

  }

  if(jsonValue.ValueExists("createPublicIP"))
  {
    m_createPublicIP = jsonValue.GetBool("createPublicIP");

  }

  if(jsonValue.ValueExists("dataPlaneRouting"))
  {
    m_dataPlaneRouting = ReplicationConfigurationDataPlaneRoutingMapper::GetReplicationConfigurationDataPlaneRoutingForName(jsonValue.GetString("dataPlaneRouting"));

  }

  if(jsonValue.ValueExists("defaultLargeStagingDiskType"))
  {
    m_defaultLargeStagingDiskType = ReplicationConfigurationDefaultLargeStagingDiskTypeMapper::GetReplicationConfigurationDefaultLargeStagingDiskTypeForName(jsonValue.GetString("defaultLargeStagingDiskType"));

  }

  if(jsonValue.ValueExists("ebsEncryption"))
  {
    m_ebsEncryption = ReplicationConfigurationEbsEncryptionMapper::GetReplicationConfigurationEbsEncryptionForName(jsonValue.GetString("ebsEncryption"));

  }

  if(jsonValue.ValueExists("ebsEncryptionKeyArn"))
  {
    m_ebsEncryptionKeyArn = jsonValue.GetString("ebsEncryptionKeyArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("replicatedDisks"))
  {
    Aws::Utils::Array<JsonView> replicatedDisksJsonList = jsonValue.GetArray("replicatedDisks");
    for(unsigned replicatedDisksIndex = 0; replicatedDisksIndex < replicatedDisksJsonList.GetLength(); ++replicatedDisksIndex)
    {
      m_replicatedDisks.push_back(replicatedDisksJsonList[replicatedDisksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("replicationServerInstanceType"))
  {
    m_replicationServerInstanceType = jsonValue.GetString("replicationServerInstanceType");

  }

  if(jsonValue.ValueExists("replicationServersSecurityGroupsIDs"))
  {
    Aws::Utils::Array<JsonView> replicationServersSecurityGroupsIDsJsonList = jsonValue.GetArray("replicationServersSecurityGroupsIDs");
    for(unsigned replicationServersSecurityGroupsIDsIndex = 0; replicationServersSecurityGroupsIDsIndex < replicationServersSecurityGroupsIDsJsonList.GetLength(); ++replicationServersSecurityGroupsIDsIndex)
    {
      m_replicationServersSecurityGroupsIDs.push_back(replicationServersSecurityGroupsIDsJsonList[replicationServersSecurityGroupsIDsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

  }

  if(jsonValue.ValueExists("stagingAreaSubnetId"))
  {
    m_stagingAreaSubnetId = jsonValue.GetString("stagingAreaSubnetId");

  }

  if(jsonValue.ValueExists("stagingAreaTags"))
  {
    Aws::Map<Aws::String, JsonView> stagingAreaTagsJsonMap = jsonValue.GetObject("stagingAreaTags").GetAllObjects();
    for(auto& stagingAreaTagsItem : stagingAreaTagsJsonMap)
    {
      m_stagingAreaTags[stagingAreaTagsItem.first] = stagingAreaTagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("useDedicatedReplicationServer"))
  {
    m_useDedicatedReplicationServer = jsonValue.GetBool("useDedicatedReplicationServer");

  }



  return *this;
}
