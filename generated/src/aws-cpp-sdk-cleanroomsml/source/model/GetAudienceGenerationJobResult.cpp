/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetAudienceGenerationJobResult.h>
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

GetAudienceGenerationJobResult::GetAudienceGenerationJobResult() : 
    m_includeSeedInOutput(false),
    m_status(AudienceGenerationJobStatus::NOT_SET)
{
}

GetAudienceGenerationJobResult::GetAudienceGenerationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_includeSeedInOutput(false),
    m_status(AudienceGenerationJobStatus::NOT_SET)
{
  *this = result;
}

GetAudienceGenerationJobResult& GetAudienceGenerationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("audienceGenerationJobArn"))
  {
    m_audienceGenerationJobArn = jsonValue.GetString("audienceGenerationJobArn");

  }

  if(jsonValue.ValueExists("collaborationId"))
  {
    m_collaborationId = jsonValue.GetString("collaborationId");

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

  if(jsonValue.ValueExists("includeSeedInOutput"))
  {
    m_includeSeedInOutput = jsonValue.GetBool("includeSeedInOutput");

  }

  if(jsonValue.ValueExists("metrics"))
  {
    m_metrics = jsonValue.GetObject("metrics");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("seedAudience"))
  {
    m_seedAudience = jsonValue.GetObject("seedAudience");

  }

  if(jsonValue.ValueExists("startedBy"))
  {
    m_startedBy = jsonValue.GetString("startedBy");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AudienceGenerationJobStatusMapper::GetAudienceGenerationJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");

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
