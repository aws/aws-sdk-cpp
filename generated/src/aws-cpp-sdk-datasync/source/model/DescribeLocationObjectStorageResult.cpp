/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeLocationObjectStorageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationObjectStorageResult::DescribeLocationObjectStorageResult() : 
    m_serverPort(0),
    m_serverProtocol(ObjectStorageServerProtocol::NOT_SET)
{
}

DescribeLocationObjectStorageResult::DescribeLocationObjectStorageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_serverPort(0),
    m_serverProtocol(ObjectStorageServerProtocol::NOT_SET)
{
  *this = result;
}

DescribeLocationObjectStorageResult& DescribeLocationObjectStorageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

  }

  if(jsonValue.ValueExists("AccessKey"))
  {
    m_accessKey = jsonValue.GetString("AccessKey");

  }

  if(jsonValue.ValueExists("ServerPort"))
  {
    m_serverPort = jsonValue.GetInteger("ServerPort");

  }

  if(jsonValue.ValueExists("ServerProtocol"))
  {
    m_serverProtocol = ObjectStorageServerProtocolMapper::GetObjectStorageServerProtocolForName(jsonValue.GetString("ServerProtocol"));

  }

  if(jsonValue.ValueExists("AgentArns"))
  {
    Aws::Utils::Array<JsonView> agentArnsJsonList = jsonValue.GetArray("AgentArns");
    for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
    {
      m_agentArns.push_back(agentArnsJsonList[agentArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("ServerCertificate"))
  {
    m_serverCertificate = HashingUtils::Base64Decode(jsonValue.GetString("ServerCertificate"));
  }



  return *this;
}
