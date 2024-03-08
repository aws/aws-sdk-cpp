/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetConfiguredAudienceModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfiguredAudienceModelResult::GetConfiguredAudienceModelResult() : 
    m_childResourceTagOnCreatePolicy(TagOnCreatePolicy::NOT_SET),
    m_minMatchingSeedSize(0),
    m_status(ConfiguredAudienceModelStatus::NOT_SET)
{
}

GetConfiguredAudienceModelResult::GetConfiguredAudienceModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_childResourceTagOnCreatePolicy(TagOnCreatePolicy::NOT_SET),
    m_minMatchingSeedSize(0),
    m_status(ConfiguredAudienceModelStatus::NOT_SET)
{
  *this = result;
}

GetConfiguredAudienceModelResult& GetConfiguredAudienceModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("audienceModelArn"))
  {
    m_audienceModelArn = jsonValue.GetString("audienceModelArn");

  }

  if(jsonValue.ValueExists("audienceSizeConfig"))
  {
    m_audienceSizeConfig = jsonValue.GetObject("audienceSizeConfig");

  }

  if(jsonValue.ValueExists("childResourceTagOnCreatePolicy"))
  {
    m_childResourceTagOnCreatePolicy = TagOnCreatePolicyMapper::GetTagOnCreatePolicyForName(jsonValue.GetString("childResourceTagOnCreatePolicy"));

  }

  if(jsonValue.ValueExists("configuredAudienceModelArn"))
  {
    m_configuredAudienceModelArn = jsonValue.GetString("configuredAudienceModelArn");

  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("minMatchingSeedSize"))
  {
    m_minMatchingSeedSize = jsonValue.GetInteger("minMatchingSeedSize");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("outputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("outputConfig");

  }

  if(jsonValue.ValueExists("sharedAudienceMetrics"))
  {
    Aws::Utils::Array<JsonView> sharedAudienceMetricsJsonList = jsonValue.GetArray("sharedAudienceMetrics");
    for(unsigned sharedAudienceMetricsIndex = 0; sharedAudienceMetricsIndex < sharedAudienceMetricsJsonList.GetLength(); ++sharedAudienceMetricsIndex)
    {
      m_sharedAudienceMetrics.push_back(SharedAudienceMetricsMapper::GetSharedAudienceMetricsForName(sharedAudienceMetricsJsonList[sharedAudienceMetricsIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ConfiguredAudienceModelStatusMapper::GetConfiguredAudienceModelStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
