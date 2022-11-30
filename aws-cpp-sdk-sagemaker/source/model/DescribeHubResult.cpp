/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeHubResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHubResult::DescribeHubResult() : 
    m_hubStatus(HubStatus::NOT_SET)
{
}

DescribeHubResult::DescribeHubResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hubStatus(HubStatus::NOT_SET)
{
  *this = result;
}

DescribeHubResult& DescribeHubResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HubName"))
  {
    m_hubName = jsonValue.GetString("HubName");

  }

  if(jsonValue.ValueExists("HubArn"))
  {
    m_hubArn = jsonValue.GetString("HubArn");

  }

  if(jsonValue.ValueExists("HubDisplayName"))
  {
    m_hubDisplayName = jsonValue.GetString("HubDisplayName");

  }

  if(jsonValue.ValueExists("HubDescription"))
  {
    m_hubDescription = jsonValue.GetString("HubDescription");

  }

  if(jsonValue.ValueExists("HubSearchKeywords"))
  {
    Aws::Utils::Array<JsonView> hubSearchKeywordsJsonList = jsonValue.GetArray("HubSearchKeywords");
    for(unsigned hubSearchKeywordsIndex = 0; hubSearchKeywordsIndex < hubSearchKeywordsJsonList.GetLength(); ++hubSearchKeywordsIndex)
    {
      m_hubSearchKeywords.push_back(hubSearchKeywordsJsonList[hubSearchKeywordsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("S3StorageConfig"))
  {
    m_s3StorageConfig = jsonValue.GetObject("S3StorageConfig");

  }

  if(jsonValue.ValueExists("HubStatus"))
  {
    m_hubStatus = HubStatusMapper::GetHubStatusForName(jsonValue.GetString("HubStatus"));

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }



  return *this;
}
