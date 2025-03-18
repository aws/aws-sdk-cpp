/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/UpdateReplicationConfigurationTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateReplicationConfigurationTemplateResult::UpdateReplicationConfigurationTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateReplicationConfigurationTemplateResult& UpdateReplicationConfigurationTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associateDefaultSecurityGroup"))
  {
    m_associateDefaultSecurityGroup = jsonValue.GetBool("associateDefaultSecurityGroup");
    m_associateDefaultSecurityGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoReplicateNewDisks"))
  {
    m_autoReplicateNewDisks = jsonValue.GetBool("autoReplicateNewDisks");
    m_autoReplicateNewDisksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bandwidthThrottling"))
  {
    m_bandwidthThrottling = jsonValue.GetInt64("bandwidthThrottling");
    m_bandwidthThrottlingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createPublicIP"))
  {
    m_createPublicIP = jsonValue.GetBool("createPublicIP");
    m_createPublicIPHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataPlaneRouting"))
  {
    m_dataPlaneRouting = ReplicationConfigurationDataPlaneRoutingMapper::GetReplicationConfigurationDataPlaneRoutingForName(jsonValue.GetString("dataPlaneRouting"));
    m_dataPlaneRoutingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultLargeStagingDiskType"))
  {
    m_defaultLargeStagingDiskType = ReplicationConfigurationDefaultLargeStagingDiskTypeMapper::GetReplicationConfigurationDefaultLargeStagingDiskTypeForName(jsonValue.GetString("defaultLargeStagingDiskType"));
    m_defaultLargeStagingDiskTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ebsEncryption"))
  {
    m_ebsEncryption = ReplicationConfigurationEbsEncryptionMapper::GetReplicationConfigurationEbsEncryptionForName(jsonValue.GetString("ebsEncryption"));
    m_ebsEncryptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ebsEncryptionKeyArn"))
  {
    m_ebsEncryptionKeyArn = jsonValue.GetString("ebsEncryptionKeyArn");
    m_ebsEncryptionKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pitPolicy"))
  {
    Aws::Utils::Array<JsonView> pitPolicyJsonList = jsonValue.GetArray("pitPolicy");
    for(unsigned pitPolicyIndex = 0; pitPolicyIndex < pitPolicyJsonList.GetLength(); ++pitPolicyIndex)
    {
      m_pitPolicy.push_back(pitPolicyJsonList[pitPolicyIndex].AsObject());
    }
    m_pitPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationConfigurationTemplateID"))
  {
    m_replicationConfigurationTemplateID = jsonValue.GetString("replicationConfigurationTemplateID");
    m_replicationConfigurationTemplateIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationServerInstanceType"))
  {
    m_replicationServerInstanceType = jsonValue.GetString("replicationServerInstanceType");
    m_replicationServerInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationServersSecurityGroupsIDs"))
  {
    Aws::Utils::Array<JsonView> replicationServersSecurityGroupsIDsJsonList = jsonValue.GetArray("replicationServersSecurityGroupsIDs");
    for(unsigned replicationServersSecurityGroupsIDsIndex = 0; replicationServersSecurityGroupsIDsIndex < replicationServersSecurityGroupsIDsJsonList.GetLength(); ++replicationServersSecurityGroupsIDsIndex)
    {
      m_replicationServersSecurityGroupsIDs.push_back(replicationServersSecurityGroupsIDsJsonList[replicationServersSecurityGroupsIDsIndex].AsString());
    }
    m_replicationServersSecurityGroupsIDsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stagingAreaSubnetId"))
  {
    m_stagingAreaSubnetId = jsonValue.GetString("stagingAreaSubnetId");
    m_stagingAreaSubnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stagingAreaTags"))
  {
    Aws::Map<Aws::String, JsonView> stagingAreaTagsJsonMap = jsonValue.GetObject("stagingAreaTags").GetAllObjects();
    for(auto& stagingAreaTagsItem : stagingAreaTagsJsonMap)
    {
      m_stagingAreaTags[stagingAreaTagsItem.first] = stagingAreaTagsItem.second.AsString();
    }
    m_stagingAreaTagsHasBeenSet = true;
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
  if(jsonValue.ValueExists("useDedicatedReplicationServer"))
  {
    m_useDedicatedReplicationServer = jsonValue.GetBool("useDedicatedReplicationServer");
    m_useDedicatedReplicationServerHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
