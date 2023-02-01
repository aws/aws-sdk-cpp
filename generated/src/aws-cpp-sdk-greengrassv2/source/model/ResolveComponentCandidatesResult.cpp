/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ResolveComponentCandidatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResolveComponentCandidatesResult::ResolveComponentCandidatesResult()
{
}

ResolveComponentCandidatesResult::ResolveComponentCandidatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResolveComponentCandidatesResult& ResolveComponentCandidatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resolvedComponentVersions"))
  {
    Aws::Utils::Array<JsonView> resolvedComponentVersionsJsonList = jsonValue.GetArray("resolvedComponentVersions");
    for(unsigned resolvedComponentVersionsIndex = 0; resolvedComponentVersionsIndex < resolvedComponentVersionsJsonList.GetLength(); ++resolvedComponentVersionsIndex)
    {
      m_resolvedComponentVersions.push_back(resolvedComponentVersionsJsonList[resolvedComponentVersionsIndex].AsObject());
    }
  }



  return *this;
}
