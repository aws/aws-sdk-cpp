/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetPatchBaselineForPatchGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPatchBaselineForPatchGroupResult::GetPatchBaselineForPatchGroupResult() : 
    m_operatingSystem(OperatingSystem::NOT_SET)
{
}

GetPatchBaselineForPatchGroupResult::GetPatchBaselineForPatchGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_operatingSystem(OperatingSystem::NOT_SET)
{
  *this = result;
}

GetPatchBaselineForPatchGroupResult& GetPatchBaselineForPatchGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BaselineId"))
  {
    m_baselineId = jsonValue.GetString("BaselineId");

  }

  if(jsonValue.ValueExists("PatchGroup"))
  {
    m_patchGroup = jsonValue.GetString("PatchGroup");

  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = OperatingSystemMapper::GetOperatingSystemForName(jsonValue.GetString("OperatingSystem"));

  }



  return *this;
}
