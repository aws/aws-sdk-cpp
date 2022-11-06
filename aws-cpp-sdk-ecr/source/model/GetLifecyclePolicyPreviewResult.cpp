/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/GetLifecyclePolicyPreviewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLifecyclePolicyPreviewResult::GetLifecyclePolicyPreviewResult() : 
    m_status(LifecyclePolicyPreviewStatus::NOT_SET)
{
}

GetLifecyclePolicyPreviewResult::GetLifecyclePolicyPreviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(LifecyclePolicyPreviewStatus::NOT_SET)
{
  *this = result;
}

GetLifecyclePolicyPreviewResult& GetLifecyclePolicyPreviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

  }

  if(jsonValue.ValueExists("lifecyclePolicyText"))
  {
    m_lifecyclePolicyText = jsonValue.GetString("lifecyclePolicyText");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = LifecyclePolicyPreviewStatusMapper::GetLifecyclePolicyPreviewStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("previewResults"))
  {
    Aws::Utils::Array<JsonView> previewResultsJsonList = jsonValue.GetArray("previewResults");
    for(unsigned previewResultsIndex = 0; previewResultsIndex < previewResultsJsonList.GetLength(); ++previewResultsIndex)
    {
      m_previewResults.push_back(previewResultsJsonList[previewResultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetObject("summary");

  }



  return *this;
}
