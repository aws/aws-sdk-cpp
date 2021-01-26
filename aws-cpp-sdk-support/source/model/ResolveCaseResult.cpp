/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/ResolveCaseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResolveCaseResult::ResolveCaseResult()
{
}

ResolveCaseResult::ResolveCaseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResolveCaseResult& ResolveCaseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("initialCaseStatus"))
  {
    m_initialCaseStatus = jsonValue.GetString("initialCaseStatus");

  }

  if(jsonValue.ValueExists("finalCaseStatus"))
  {
    m_finalCaseStatus = jsonValue.GetString("finalCaseStatus");

  }



  return *this;
}
