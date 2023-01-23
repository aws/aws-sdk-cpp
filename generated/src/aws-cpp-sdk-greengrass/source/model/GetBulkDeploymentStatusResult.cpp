/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GetBulkDeploymentStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBulkDeploymentStatusResult::GetBulkDeploymentStatusResult() : 
    m_bulkDeploymentStatus(BulkDeploymentStatus::NOT_SET)
{
}

GetBulkDeploymentStatusResult::GetBulkDeploymentStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_bulkDeploymentStatus(BulkDeploymentStatus::NOT_SET)
{
  *this = result;
}

GetBulkDeploymentStatusResult& GetBulkDeploymentStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BulkDeploymentMetrics"))
  {
    m_bulkDeploymentMetrics = jsonValue.GetObject("BulkDeploymentMetrics");

  }

  if(jsonValue.ValueExists("BulkDeploymentStatus"))
  {
    m_bulkDeploymentStatus = BulkDeploymentStatusMapper::GetBulkDeploymentStatusForName(jsonValue.GetString("BulkDeploymentStatus"));

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

  }

  if(jsonValue.ValueExists("ErrorDetails"))
  {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("ErrorDetails");
    for(unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex)
    {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

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
