/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/TestEventPatternResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestEventPatternResult::TestEventPatternResult() : 
    m_result(false)
{
}

TestEventPatternResult::TestEventPatternResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_result(false)
{
  *this = result;
}

TestEventPatternResult& TestEventPatternResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetBool("Result");

  }



  return *this;
}
