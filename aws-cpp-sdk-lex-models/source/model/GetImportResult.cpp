/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lex-models/model/GetImportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImportResult::GetImportResult() : 
    m_resourceType(ResourceType::NOT_SET),
    m_mergeStrategy(MergeStrategy::NOT_SET),
    m_importStatus(ImportStatus::NOT_SET)
{
}

GetImportResult::GetImportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_resourceType(ResourceType::NOT_SET),
    m_mergeStrategy(MergeStrategy::NOT_SET),
    m_importStatus(ImportStatus::NOT_SET)
{
  *this = result;
}

GetImportResult& GetImportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

  }

  if(jsonValue.ValueExists("mergeStrategy"))
  {
    m_mergeStrategy = MergeStrategyMapper::GetMergeStrategyForName(jsonValue.GetString("mergeStrategy"));

  }

  if(jsonValue.ValueExists("importId"))
  {
    m_importId = jsonValue.GetString("importId");

  }

  if(jsonValue.ValueExists("importStatus"))
  {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("importStatus"));

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    Array<JsonValue> failureReasonJsonList = jsonValue.GetArray("failureReason");
    for(unsigned failureReasonIndex = 0; failureReasonIndex < failureReasonJsonList.GetLength(); ++failureReasonIndex)
    {
      m_failureReason.push_back(failureReasonJsonList[failureReasonIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }



  return *this;
}
