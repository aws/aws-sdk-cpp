/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetDatasetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatasetResult::GetDatasetResult() : 
    m_kind(DatasetKind::NOT_SET),
    m_createTime(0),
    m_lastModifiedTime(0),
    m_status(DatasetStatus::NOT_SET)
{
}

GetDatasetResult::GetDatasetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_kind(DatasetKind::NOT_SET),
    m_createTime(0),
    m_lastModifiedTime(0),
    m_status(DatasetStatus::NOT_SET)
{
  *this = result;
}

GetDatasetResult& GetDatasetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("datasetId"))
  {
    m_datasetId = jsonValue.GetString("datasetId");

  }

  if(jsonValue.ValueExists("datasetArn"))
  {
    m_datasetArn = jsonValue.GetString("datasetArn");

  }

  if(jsonValue.ValueExists("datasetTitle"))
  {
    m_datasetTitle = jsonValue.GetString("datasetTitle");

  }

  if(jsonValue.ValueExists("kind"))
  {
    m_kind = DatasetKindMapper::GetDatasetKindForName(jsonValue.GetString("kind"));

  }

  if(jsonValue.ValueExists("datasetDescription"))
  {
    m_datasetDescription = jsonValue.GetString("datasetDescription");

  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");

  }

  if(jsonValue.ValueExists("schemaDefinition"))
  {
    m_schemaDefinition = jsonValue.GetObject("schemaDefinition");

  }

  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
