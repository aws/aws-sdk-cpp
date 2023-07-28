/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeLocationAzureBlobResult.h>
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

DescribeLocationAzureBlobResult::DescribeLocationAzureBlobResult() : 
    m_authenticationType(AzureBlobAuthenticationType::NOT_SET),
    m_blobType(AzureBlobType::NOT_SET),
    m_accessTier(AzureAccessTier::NOT_SET)
{
}

DescribeLocationAzureBlobResult::DescribeLocationAzureBlobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_authenticationType(AzureBlobAuthenticationType::NOT_SET),
    m_blobType(AzureBlobType::NOT_SET),
    m_accessTier(AzureAccessTier::NOT_SET)
{
  *this = result;
}

DescribeLocationAzureBlobResult& DescribeLocationAzureBlobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AzureBlobAuthenticationTypeMapper::GetAzureBlobAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));

  }

  if(jsonValue.ValueExists("BlobType"))
  {
    m_blobType = AzureBlobTypeMapper::GetAzureBlobTypeForName(jsonValue.GetString("BlobType"));

  }

  if(jsonValue.ValueExists("AccessTier"))
  {
    m_accessTier = AzureAccessTierMapper::GetAzureAccessTierForName(jsonValue.GetString("AccessTier"));

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


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
