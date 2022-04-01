/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/CopyPackageVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CopyPackageVersionsResult::CopyPackageVersionsResult()
{
}

CopyPackageVersionsResult::CopyPackageVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CopyPackageVersionsResult& CopyPackageVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("successfulVersions"))
  {
    Aws::Map<Aws::String, JsonView> successfulVersionsJsonMap = jsonValue.GetObject("successfulVersions").GetAllObjects();
    for(auto& successfulVersionsItem : successfulVersionsJsonMap)
    {
      m_successfulVersions[successfulVersionsItem.first] = successfulVersionsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("failedVersions"))
  {
    Aws::Map<Aws::String, JsonView> failedVersionsJsonMap = jsonValue.GetObject("failedVersions").GetAllObjects();
    for(auto& failedVersionsItem : failedVersionsJsonMap)
    {
      m_failedVersions[failedVersionsItem.first] = failedVersionsItem.second.AsObject();
    }
  }



  return *this;
}
