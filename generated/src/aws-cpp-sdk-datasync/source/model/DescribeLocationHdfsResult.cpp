/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeLocationHdfsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationHdfsResult::DescribeLocationHdfsResult() : 
    m_blockSize(0),
    m_replicationFactor(0),
    m_authenticationType(HdfsAuthenticationType::NOT_SET)
{
}

DescribeLocationHdfsResult::DescribeLocationHdfsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_blockSize(0),
    m_replicationFactor(0),
    m_authenticationType(HdfsAuthenticationType::NOT_SET)
{
  *this = result;
}

DescribeLocationHdfsResult& DescribeLocationHdfsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("NameNodes"))
  {
    Aws::Utils::Array<JsonView> nameNodesJsonList = jsonValue.GetArray("NameNodes");
    for(unsigned nameNodesIndex = 0; nameNodesIndex < nameNodesJsonList.GetLength(); ++nameNodesIndex)
    {
      m_nameNodes.push_back(nameNodesJsonList[nameNodesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("BlockSize"))
  {
    m_blockSize = jsonValue.GetInteger("BlockSize");

  }

  if(jsonValue.ValueExists("ReplicationFactor"))
  {
    m_replicationFactor = jsonValue.GetInteger("ReplicationFactor");

  }

  if(jsonValue.ValueExists("KmsKeyProviderUri"))
  {
    m_kmsKeyProviderUri = jsonValue.GetString("KmsKeyProviderUri");

  }

  if(jsonValue.ValueExists("QopConfiguration"))
  {
    m_qopConfiguration = jsonValue.GetObject("QopConfiguration");

  }

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = HdfsAuthenticationTypeMapper::GetHdfsAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));

  }

  if(jsonValue.ValueExists("SimpleUser"))
  {
    m_simpleUser = jsonValue.GetString("SimpleUser");

  }

  if(jsonValue.ValueExists("KerberosPrincipal"))
  {
    m_kerberosPrincipal = jsonValue.GetString("KerberosPrincipal");

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



  return *this;
}
