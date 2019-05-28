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

#include <aws/groundstation/model/DescribeContactResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeContactResult::DescribeContactResult() : 
    m_contactStatus(ContactStatus::NOT_SET)
{
}

DescribeContactResult::DescribeContactResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_contactStatus(ContactStatus::NOT_SET)
{
  *this = result;
}

DescribeContactResult& DescribeContactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contactId"))
  {
    m_contactId = jsonValue.GetString("contactId");

  }

  if(jsonValue.ValueExists("contactStatus"))
  {
    m_contactStatus = ContactStatusMapper::GetContactStatusForName(jsonValue.GetString("contactStatus"));

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }

  if(jsonValue.ValueExists("groundStation"))
  {
    m_groundStation = jsonValue.GetString("groundStation");

  }

  if(jsonValue.ValueExists("maximumElevation"))
  {
    m_maximumElevation = jsonValue.GetObject("maximumElevation");

  }

  if(jsonValue.ValueExists("missionProfileArn"))
  {
    m_missionProfileArn = jsonValue.GetString("missionProfileArn");

  }

  if(jsonValue.ValueExists("postPassEndTime"))
  {
    m_postPassEndTime = jsonValue.GetDouble("postPassEndTime");

  }

  if(jsonValue.ValueExists("prePassStartTime"))
  {
    m_prePassStartTime = jsonValue.GetDouble("prePassStartTime");

  }

  if(jsonValue.ValueExists("satelliteArn"))
  {
    m_satelliteArn = jsonValue.GetString("satelliteArn");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

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
