/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/GetLifecyclePolicyPreviewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLifecyclePolicyPreviewResult::GetLifecyclePolicyPreviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLifecyclePolicyPreviewResult& GetLifecyclePolicyPreviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");
    m_registryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");
    m_repositoryNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecyclePolicyText"))
  {
    m_lifecyclePolicyText = jsonValue.GetString("lifecyclePolicyText");
    m_lifecyclePolicyTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = LifecyclePolicyPreviewStatusMapper::GetLifecyclePolicyPreviewStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("previewResults"))
  {
    Aws::Utils::Array<JsonView> previewResultsJsonList = jsonValue.GetArray("previewResults");
    for(unsigned previewResultsIndex = 0; previewResultsIndex < previewResultsJsonList.GetLength(); ++previewResultsIndex)
    {
      m_previewResults.push_back(previewResultsJsonList[previewResultsIndex].AsObject());
    }
    m_previewResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetObject("summary");
    m_summaryHasBeenSet = true;
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
