/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetChangesetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetChangesetResult::GetChangesetResult() : 
    m_changeType(ChangeType::NOT_SET),
    m_createTime(0),
    m_status(IngestionStatus::NOT_SET),
    m_activeUntilTimestamp(0),
    m_activeFromTimestamp(0)
{
}

GetChangesetResult::GetChangesetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_changeType(ChangeType::NOT_SET),
    m_createTime(0),
    m_status(IngestionStatus::NOT_SET),
    m_activeUntilTimestamp(0),
    m_activeFromTimestamp(0)
{
  *this = result;
}

GetChangesetResult& GetChangesetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

  }

  if(jsonValue.ValueExists("changesetArn"))
  {
    m_changesetArn = jsonValue.GetString("changesetArn");

  }

  if(jsonValue.ValueExists("datasetId"))
  {
    m_datasetId = jsonValue.GetString("datasetId");

  }

  if(jsonValue.ValueExists("changeType"))
  {
    m_changeType = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("changeType"));

  }

  if(jsonValue.ValueExists("sourceParams"))
  {
    Aws::Map<Aws::String, JsonView> sourceParamsJsonMap = jsonValue.GetObject("sourceParams").GetAllObjects();
    for(auto& sourceParamsItem : sourceParamsJsonMap)
    {
      m_sourceParams[sourceParamsItem.first] = sourceParamsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("formatParams"))
  {
    Aws::Map<Aws::String, JsonView> formatParamsJsonMap = jsonValue.GetObject("formatParams").GetAllObjects();
    for(auto& formatParamsItem : formatParamsJsonMap)
    {
      m_formatParams[formatParamsItem.first] = formatParamsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = IngestionStatusMapper::GetIngestionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

  }

  if(jsonValue.ValueExists("activeUntilTimestamp"))
  {
    m_activeUntilTimestamp = jsonValue.GetInt64("activeUntilTimestamp");

  }

  if(jsonValue.ValueExists("activeFromTimestamp"))
  {
    m_activeFromTimestamp = jsonValue.GetInt64("activeFromTimestamp");

  }

  if(jsonValue.ValueExists("updatesChangesetId"))
  {
    m_updatesChangesetId = jsonValue.GetString("updatesChangesetId");

  }

  if(jsonValue.ValueExists("updatedByChangesetId"))
  {
    m_updatedByChangesetId = jsonValue.GetString("updatedByChangesetId");

  }



  return *this;
}
