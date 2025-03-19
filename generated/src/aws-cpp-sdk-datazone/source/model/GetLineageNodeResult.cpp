/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetLineageNodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLineageNodeResult::GetLineageNodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLineageNodeResult& GetLineageNodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("downstreamNodes"))
  {
    Aws::Utils::Array<JsonView> downstreamNodesJsonList = jsonValue.GetArray("downstreamNodes");
    for(unsigned downstreamNodesIndex = 0; downstreamNodesIndex < downstreamNodesJsonList.GetLength(); ++downstreamNodesIndex)
    {
      m_downstreamNodes.push_back(downstreamNodesJsonList[downstreamNodesIndex].AsObject());
    }
    m_downstreamNodesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventTimestamp"))
  {
    m_eventTimestamp = jsonValue.GetDouble("eventTimestamp");
    m_eventTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("formsOutput"))
  {
    Aws::Utils::Array<JsonView> formsOutputJsonList = jsonValue.GetArray("formsOutput");
    for(unsigned formsOutputIndex = 0; formsOutputIndex < formsOutputJsonList.GetLength(); ++formsOutputIndex)
    {
      m_formsOutput.push_back(formsOutputJsonList[formsOutputIndex].AsObject());
    }
    m_formsOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceIdentifier"))
  {
    m_sourceIdentifier = jsonValue.GetString("sourceIdentifier");
    m_sourceIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeName"))
  {
    m_typeName = jsonValue.GetString("typeName");
    m_typeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeRevision"))
  {
    m_typeRevision = jsonValue.GetString("typeRevision");
    m_typeRevisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upstreamNodes"))
  {
    Aws::Utils::Array<JsonView> upstreamNodesJsonList = jsonValue.GetArray("upstreamNodes");
    for(unsigned upstreamNodesIndex = 0; upstreamNodesIndex < upstreamNodesJsonList.GetLength(); ++upstreamNodesIndex)
    {
      m_upstreamNodes.push_back(upstreamNodesJsonList[upstreamNodesIndex].AsObject());
    }
    m_upstreamNodesHasBeenSet = true;
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
