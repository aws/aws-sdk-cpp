/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeLocationHdfsResult.h>
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

DescribeLocationHdfsResult::DescribeLocationHdfsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLocationHdfsResult& DescribeLocationHdfsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("NameNodes"))
  {
    Aws::Utils::Array<JsonView> nameNodesJsonList = jsonValue.GetArray("NameNodes");
    for(unsigned nameNodesIndex = 0; nameNodesIndex < nameNodesJsonList.GetLength(); ++nameNodesIndex)
    {
      m_nameNodes.push_back(nameNodesJsonList[nameNodesIndex].AsObject());
    }
    m_nameNodesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockSize"))
  {
    m_blockSize = jsonValue.GetInteger("BlockSize");
    m_blockSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationFactor"))
  {
    m_replicationFactor = jsonValue.GetInteger("ReplicationFactor");
    m_replicationFactorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyProviderUri"))
  {
    m_kmsKeyProviderUri = jsonValue.GetString("KmsKeyProviderUri");
    m_kmsKeyProviderUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QopConfiguration"))
  {
    m_qopConfiguration = jsonValue.GetObject("QopConfiguration");
    m_qopConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = HdfsAuthenticationTypeMapper::GetHdfsAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SimpleUser"))
  {
    m_simpleUser = jsonValue.GetString("SimpleUser");
    m_simpleUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KerberosPrincipal"))
  {
    m_kerberosPrincipal = jsonValue.GetString("KerberosPrincipal");
    m_kerberosPrincipalHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
