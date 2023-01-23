/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetDataViewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataViewResult::GetDataViewResult() : 
    m_autoUpdate(false),
    m_asOfTimestamp(0),
    m_lastModifiedTime(0),
    m_createTime(0),
    m_status(DataViewStatus::NOT_SET)
{
}

GetDataViewResult::GetDataViewResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoUpdate(false),
    m_asOfTimestamp(0),
    m_lastModifiedTime(0),
    m_createTime(0),
    m_status(DataViewStatus::NOT_SET)
{
  *this = result;
}

GetDataViewResult& GetDataViewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("autoUpdate"))
  {
    m_autoUpdate = jsonValue.GetBool("autoUpdate");

  }

  if(jsonValue.ValueExists("partitionColumns"))
  {
    Aws::Utils::Array<JsonView> partitionColumnsJsonList = jsonValue.GetArray("partitionColumns");
    for(unsigned partitionColumnsIndex = 0; partitionColumnsIndex < partitionColumnsJsonList.GetLength(); ++partitionColumnsIndex)
    {
      m_partitionColumns.push_back(partitionColumnsJsonList[partitionColumnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("datasetId"))
  {
    m_datasetId = jsonValue.GetString("datasetId");

  }

  if(jsonValue.ValueExists("asOfTimestamp"))
  {
    m_asOfTimestamp = jsonValue.GetInt64("asOfTimestamp");

  }

  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");

  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");

  }

  if(jsonValue.ValueExists("sortColumns"))
  {
    Aws::Utils::Array<JsonView> sortColumnsJsonList = jsonValue.GetArray("sortColumns");
    for(unsigned sortColumnsIndex = 0; sortColumnsIndex < sortColumnsJsonList.GetLength(); ++sortColumnsIndex)
    {
      m_sortColumns.push_back(sortColumnsJsonList[sortColumnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("dataViewId"))
  {
    m_dataViewId = jsonValue.GetString("dataViewId");

  }

  if(jsonValue.ValueExists("dataViewArn"))
  {
    m_dataViewArn = jsonValue.GetString("dataViewArn");

  }

  if(jsonValue.ValueExists("destinationTypeParams"))
  {
    m_destinationTypeParams = jsonValue.GetObject("destinationTypeParams");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataViewStatusMapper::GetDataViewStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
