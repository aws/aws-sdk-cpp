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

GetConfiguredAudienceModelResult::GetConfiguredAudienceModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConfiguredAudienceModelResult& GetConfiguredAudienceModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredAudienceModelArn"))
  {
    m_configuredAudienceModelArn = jsonValue.GetString("configuredAudienceModelArn");
    m_configuredAudienceModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audienceModelArn"))
  {
    m_audienceModelArn = jsonValue.GetString("audienceModelArn");
    m_audienceModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("outputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ConfiguredAudienceModelStatusMapper::GetConfiguredAudienceModelStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sharedAudienceMetrics"))
  {
    Aws::Utils::Array<JsonView> sharedAudienceMetricsJsonList = jsonValue.GetArray("sharedAudienceMetrics");
    for(unsigned sharedAudienceMetricsIndex = 0; sharedAudienceMetricsIndex < sharedAudienceMetricsJsonList.GetLength(); ++sharedAudienceMetricsIndex)
    {
      m_sharedAudienceMetrics.push_back(SharedAudienceMetricsMapper::GetSharedAudienceMetricsForName(sharedAudienceMetricsJsonList[sharedAudienceMetricsIndex].AsString()));
    }
    m_sharedAudienceMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minMatchingSeedSize"))
  {
    m_minMatchingSeedSize = jsonValue.GetInteger("minMatchingSeedSize");
    m_minMatchingSeedSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audienceSizeConfig"))
  {
    m_audienceSizeConfig = jsonValue.GetObject("audienceSizeConfig");
    m_audienceSizeConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("childResourceTagOnCreatePolicy"))
  {
    m_childResourceTagOnCreatePolicy = TagOnCreatePolicyMapper::GetTagOnCreatePolicyForName(jsonValue.GetString("childResourceTagOnCreatePolicy"));
    m_childResourceTagOnCreatePolicyHasBeenSet = true;
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
