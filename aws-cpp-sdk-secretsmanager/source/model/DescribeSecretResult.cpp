/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/DescribeSecretResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSecretResult::DescribeSecretResult() : 
    m_rotationEnabled(false)
{
}

DescribeSecretResult::DescribeSecretResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_rotationEnabled(false)
{
  *this = result;
}

DescribeSecretResult& DescribeSecretResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

  }

  if(jsonValue.ValueExists("RotationEnabled"))
  {
    m_rotationEnabled = jsonValue.GetBool("RotationEnabled");

  }

  if(jsonValue.ValueExists("RotationLambdaARN"))
  {
    m_rotationLambdaARN = jsonValue.GetString("RotationLambdaARN");

  }

  if(jsonValue.ValueExists("RotationRules"))
  {
    m_rotationRules = jsonValue.GetObject("RotationRules");

  }

  if(jsonValue.ValueExists("LastRotatedDate"))
  {
    m_lastRotatedDate = jsonValue.GetDouble("LastRotatedDate");

  }

  if(jsonValue.ValueExists("LastChangedDate"))
  {
    m_lastChangedDate = jsonValue.GetDouble("LastChangedDate");

  }

  if(jsonValue.ValueExists("LastAccessedDate"))
  {
    m_lastAccessedDate = jsonValue.GetDouble("LastAccessedDate");

  }

  if(jsonValue.ValueExists("DeletedDate"))
  {
    m_deletedDate = jsonValue.GetDouble("DeletedDate");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("VersionIdsToStages"))
  {
    Aws::Map<Aws::String, JsonView> versionIdsToStagesJsonMap = jsonValue.GetObject("VersionIdsToStages").GetAllObjects();
    for(auto& versionIdsToStagesItem : versionIdsToStagesJsonMap)
    {
      Aws::Utils::Array<JsonView> secretVersionStagesTypeJsonList = versionIdsToStagesItem.second.AsArray();
      Aws::Vector<Aws::String> secretVersionStagesTypeList;
      secretVersionStagesTypeList.reserve((size_t)secretVersionStagesTypeJsonList.GetLength());
      for(unsigned secretVersionStagesTypeIndex = 0; secretVersionStagesTypeIndex < secretVersionStagesTypeJsonList.GetLength(); ++secretVersionStagesTypeIndex)
      {
        secretVersionStagesTypeList.push_back(secretVersionStagesTypeJsonList[secretVersionStagesTypeIndex].AsString());
      }
      m_versionIdsToStages[versionIdsToStagesItem.first] = std::move(secretVersionStagesTypeList);
    }
  }

  if(jsonValue.ValueExists("OwningService"))
  {
    m_owningService = jsonValue.GetString("OwningService");

  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

  }

  if(jsonValue.ValueExists("PrimaryRegion"))
  {
    m_primaryRegion = jsonValue.GetString("PrimaryRegion");

  }

  if(jsonValue.ValueExists("ReplicationStatus"))
  {
    Aws::Utils::Array<JsonView> replicationStatusJsonList = jsonValue.GetArray("ReplicationStatus");
    for(unsigned replicationStatusIndex = 0; replicationStatusIndex < replicationStatusJsonList.GetLength(); ++replicationStatusIndex)
    {
      m_replicationStatus.push_back(replicationStatusJsonList[replicationStatusIndex].AsObject());
    }
  }



  return *this;
}
