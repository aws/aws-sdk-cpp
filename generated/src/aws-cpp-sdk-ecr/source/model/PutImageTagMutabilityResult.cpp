/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/PutImageTagMutabilityResult.h>
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

PutImageTagMutabilityResult::PutImageTagMutabilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutImageTagMutabilityResult& PutImageTagMutabilityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("imageTagMutability"))
  {
    m_imageTagMutability = ImageTagMutabilityMapper::GetImageTagMutabilityForName(jsonValue.GetString("imageTagMutability"));
    m_imageTagMutabilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageTagMutabilityExclusionFilters"))
  {
    Aws::Utils::Array<JsonView> imageTagMutabilityExclusionFiltersJsonList = jsonValue.GetArray("imageTagMutabilityExclusionFilters");
    for(unsigned imageTagMutabilityExclusionFiltersIndex = 0; imageTagMutabilityExclusionFiltersIndex < imageTagMutabilityExclusionFiltersJsonList.GetLength(); ++imageTagMutabilityExclusionFiltersIndex)
    {
      m_imageTagMutabilityExclusionFilters.push_back(imageTagMutabilityExclusionFiltersJsonList[imageTagMutabilityExclusionFiltersIndex].AsObject());
    }
    m_imageTagMutabilityExclusionFiltersHasBeenSet = true;
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
