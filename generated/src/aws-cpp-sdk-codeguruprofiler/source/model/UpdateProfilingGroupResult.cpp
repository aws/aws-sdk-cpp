/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/UpdateProfilingGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateProfilingGroupResult::UpdateProfilingGroupResult()
{
}

UpdateProfilingGroupResult::UpdateProfilingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateProfilingGroupResult& UpdateProfilingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  m_profilingGroup = jsonValue;


  return *this;
}
