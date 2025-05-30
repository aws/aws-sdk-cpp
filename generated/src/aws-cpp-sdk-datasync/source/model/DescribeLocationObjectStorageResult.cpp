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
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationObjectStorageResult::DescribeLocationObjectStorageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLocationObjectStorageResult& DescribeLocationObjectStorageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");
    m_locationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");
    m_locationUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessKey"))
  {
    m_accessKey = jsonValue.GetString("AccessKey");
    m_accessKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerPort"))
  {
    m_serverPort = jsonValue.GetInteger("ServerPort");
    m_serverPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerProtocol"))
  {
    m_serverProtocol = ObjectStorageServerProtocolMapper::GetObjectStorageServerProtocolForName(jsonValue.GetString("ServerProtocol"));
    m_serverProtocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentArns"))
  {
    Aws::Utils::Array<JsonView> agentArnsJsonList = jsonValue.GetArray("AgentArns");
    for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
    {
      m_agentArns.push_back(agentArnsJsonList[agentArnsIndex].AsString());
    }
    m_agentArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerCertificate"))
  {
    m_serverCertificate = HashingUtils::Base64Decode(jsonValue.GetString("ServerCertificate"));
    m_serverCertificateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedSecretConfig"))
  {
    m_managedSecretConfig = jsonValue.GetObject("ManagedSecretConfig");
    m_managedSecretConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CmkSecretConfig"))
  {
    m_cmkSecretConfig = jsonValue.GetObject("CmkSecretConfig");
    m_cmkSecretConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomSecretConfig"))
  {
    m_customSecretConfig = jsonValue.GetObject("CustomSecretConfig");
    m_customSecretConfigHasBeenSet = true;
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
