/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codeartifact/model/UpdatePackageVersionsStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePackageVersionsStatusResult::UpdatePackageVersionsStatusResult()
{
}

UpdatePackageVersionsStatusResult::UpdatePackageVersionsStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdatePackageVersionsStatusResult& UpdatePackageVersionsStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
