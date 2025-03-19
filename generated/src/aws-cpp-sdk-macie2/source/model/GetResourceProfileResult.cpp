/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetResourceProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceProfileResult::GetResourceProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceProfileResult& GetResourceProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("profileUpdatedAt"))
  {
    m_profileUpdatedAt = jsonValue.GetString("profileUpdatedAt");
    m_profileUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sensitivityScore"))
  {
    m_sensitivityScore = jsonValue.GetInteger("sensitivityScore");
    m_sensitivityScoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sensitivityScoreOverridden"))
  {
    m_sensitivityScoreOverridden = jsonValue.GetBool("sensitivityScoreOverridden");
    m_sensitivityScoreOverriddenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statistics"))
  {
    m_statistics = jsonValue.GetObject("statistics");
    m_statisticsHasBeenSet = true;
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
