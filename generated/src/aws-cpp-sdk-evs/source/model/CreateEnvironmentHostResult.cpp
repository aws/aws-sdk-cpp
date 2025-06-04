/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/CreateEnvironmentHostResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateEnvironmentHostResult::CreateEnvironmentHostResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateEnvironmentHostResult& CreateEnvironmentHostResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("environmentSummary"))
  {
    m_environmentSummary = jsonValue.GetObject("environmentSummary");
    m_environmentSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("host"))
  {
    m_host = jsonValue.GetObject("host");
    m_hostHasBeenSet = true;
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
