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

#include <aws/guardduty/model/GetDetectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDetectorResult::GetDetectorResult() : 
    m_findingPublishingFrequency(FindingPublishingFrequency::NOT_SET),
    m_status(DetectorStatus::NOT_SET)
{
}

GetDetectorResult::GetDetectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_findingPublishingFrequency(FindingPublishingFrequency::NOT_SET),
    m_status(DetectorStatus::NOT_SET)
{
  *this = result;
}

GetDetectorResult& GetDetectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("findingPublishingFrequency"))
  {
    m_findingPublishingFrequency = FindingPublishingFrequencyMapper::GetFindingPublishingFrequencyForName(jsonValue.GetString("findingPublishingFrequency"));

  }

  if(jsonValue.ValueExists("serviceRole"))
  {
    m_serviceRole = jsonValue.GetString("serviceRole");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DetectorStatusMapper::GetDetectorStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
