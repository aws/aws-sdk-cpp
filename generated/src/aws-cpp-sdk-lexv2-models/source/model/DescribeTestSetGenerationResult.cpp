/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeTestSetGenerationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTestSetGenerationResult::DescribeTestSetGenerationResult() : 
    m_testSetGenerationStatus(TestSetGenerationStatus::NOT_SET)
{
}

DescribeTestSetGenerationResult::DescribeTestSetGenerationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_testSetGenerationStatus(TestSetGenerationStatus::NOT_SET)
{
  *this = result;
}

DescribeTestSetGenerationResult& DescribeTestSetGenerationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testSetGenerationId"))
  {
    m_testSetGenerationId = jsonValue.GetString("testSetGenerationId");

  }

  if(jsonValue.ValueExists("testSetGenerationStatus"))
  {
    m_testSetGenerationStatus = TestSetGenerationStatusMapper::GetTestSetGenerationStatusForName(jsonValue.GetString("testSetGenerationStatus"));

  }

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("testSetId"))
  {
    m_testSetId = jsonValue.GetString("testSetId");

  }

  if(jsonValue.ValueExists("testSetName"))
  {
    m_testSetName = jsonValue.GetString("testSetName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("storageLocation"))
  {
    m_storageLocation = jsonValue.GetObject("storageLocation");

  }

  if(jsonValue.ValueExists("generationDataSource"))
  {
    m_generationDataSource = jsonValue.GetObject("generationDataSource");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
