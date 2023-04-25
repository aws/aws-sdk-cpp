/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeStorageSystemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStorageSystemResult::DescribeStorageSystemResult() : 
    m_systemType(DiscoverySystemType::NOT_SET),
    m_connectivityStatus(StorageSystemConnectivityStatus::NOT_SET)
{
}

DescribeStorageSystemResult::DescribeStorageSystemResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_systemType(DiscoverySystemType::NOT_SET),
    m_connectivityStatus(StorageSystemConnectivityStatus::NOT_SET)
{
  *this = result;
}

DescribeStorageSystemResult& DescribeStorageSystemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StorageSystemArn"))
  {
    m_storageSystemArn = jsonValue.GetString("StorageSystemArn");

  }

  if(jsonValue.ValueExists("ServerConfiguration"))
  {
    m_serverConfiguration = jsonValue.GetObject("ServerConfiguration");

  }

  if(jsonValue.ValueExists("SystemType"))
  {
    m_systemType = DiscoverySystemTypeMapper::GetDiscoverySystemTypeForName(jsonValue.GetString("SystemType"));

  }

  if(jsonValue.ValueExists("AgentArns"))
  {
    Aws::Utils::Array<JsonView> agentArnsJsonList = jsonValue.GetArray("AgentArns");
    for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
    {
      m_agentArns.push_back(agentArnsJsonList[agentArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }

  if(jsonValue.ValueExists("ConnectivityStatus"))
  {
    m_connectivityStatus = StorageSystemConnectivityStatusMapper::GetStorageSystemConnectivityStatusForName(jsonValue.GetString("ConnectivityStatus"));

  }

  if(jsonValue.ValueExists("CloudWatchLogGroupArn"))
  {
    m_cloudWatchLogGroupArn = jsonValue.GetString("CloudWatchLogGroupArn");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("SecretsManagerArn"))
  {
    m_secretsManagerArn = jsonValue.GetString("SecretsManagerArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
