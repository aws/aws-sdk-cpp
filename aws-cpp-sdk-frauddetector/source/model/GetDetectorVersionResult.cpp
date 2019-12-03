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

#include <aws/frauddetector/model/GetDetectorVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDetectorVersionResult::GetDetectorVersionResult() : 
    m_status(DetectorVersionStatus::NOT_SET)
{
}

GetDetectorVersionResult::GetDetectorVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DetectorVersionStatus::NOT_SET)
{
  *this = result;
}

GetDetectorVersionResult& GetDetectorVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

  }

  if(jsonValue.ValueExists("detectorVersionId"))
  {
    m_detectorVersionId = jsonValue.GetString("detectorVersionId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("externalModelEndpoints"))
  {
    Array<JsonView> externalModelEndpointsJsonList = jsonValue.GetArray("externalModelEndpoints");
    for(unsigned externalModelEndpointsIndex = 0; externalModelEndpointsIndex < externalModelEndpointsJsonList.GetLength(); ++externalModelEndpointsIndex)
    {
      m_externalModelEndpoints.push_back(externalModelEndpointsJsonList[externalModelEndpointsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("modelVersions"))
  {
    Array<JsonView> modelVersionsJsonList = jsonValue.GetArray("modelVersions");
    for(unsigned modelVersionsIndex = 0; modelVersionsIndex < modelVersionsJsonList.GetLength(); ++modelVersionsIndex)
    {
      m_modelVersions.push_back(modelVersionsJsonList[modelVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("rules"))
  {
    Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DetectorVersionStatusMapper::GetDetectorVersionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");

  }



  return *this;
}
