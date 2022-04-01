/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/GetCanaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCanaryResult::GetCanaryResult()
{
}

GetCanaryResult::GetCanaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCanaryResult& GetCanaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Canary"))
  {
    m_canary = jsonValue.GetObject("Canary");

  }



  return *this;
}
