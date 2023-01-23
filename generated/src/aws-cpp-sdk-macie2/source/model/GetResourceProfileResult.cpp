/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetResourceProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceProfileResult::GetResourceProfileResult() : 
    m_sensitivityScore(0),
    m_sensitivityScoreOverridden(false)
{
}

GetResourceProfileResult::GetResourceProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_sensitivityScore(0),
    m_sensitivityScoreOverridden(false)
{
  *this = result;
}

GetResourceProfileResult& GetResourceProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("profileUpdatedAt"))
  {
    m_profileUpdatedAt = jsonValue.GetString("profileUpdatedAt");

  }

  if(jsonValue.ValueExists("sensitivityScore"))
  {
    m_sensitivityScore = jsonValue.GetInteger("sensitivityScore");

  }

  if(jsonValue.ValueExists("sensitivityScoreOverridden"))
  {
    m_sensitivityScoreOverridden = jsonValue.GetBool("sensitivityScoreOverridden");

  }

  if(jsonValue.ValueExists("statistics"))
  {
    m_statistics = jsonValue.GetObject("statistics");

  }



  return *this;
}
