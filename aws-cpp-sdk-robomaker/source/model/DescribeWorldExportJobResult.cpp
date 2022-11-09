/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DescribeWorldExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWorldExportJobResult::DescribeWorldExportJobResult() : 
    m_status(WorldExportJobStatus::NOT_SET),
    m_failureCode(WorldExportJobErrorCode::NOT_SET)
{
}

DescribeWorldExportJobResult::DescribeWorldExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(WorldExportJobStatus::NOT_SET),
    m_failureCode(WorldExportJobErrorCode::NOT_SET)
{
  *this = result;
}

DescribeWorldExportJobResult& DescribeWorldExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorldExportJobStatusMapper::GetWorldExportJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = WorldExportJobErrorCodeMapper::GetWorldExportJobErrorCodeForName(jsonValue.GetString("failureCode"));

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

  }

  if(jsonValue.ValueExists("worlds"))
  {
    Aws::Utils::Array<JsonView> worldsJsonList = jsonValue.GetArray("worlds");
    for(unsigned worldsIndex = 0; worldsIndex < worldsJsonList.GetLength(); ++worldsIndex)
    {
      m_worlds.push_back(worldsJsonList[worldsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("outputLocation");

  }

  if(jsonValue.ValueExists("iamRole"))
  {
    m_iamRole = jsonValue.GetString("iamRole");

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
