/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetCardinalityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCardinalityResult::GetCardinalityResult() : 
    m_cardinality(0)
{
}

GetCardinalityResult::GetCardinalityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_cardinality(0)
{
  *this = result;
}

GetCardinalityResult& GetCardinalityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cardinality"))
  {
    m_cardinality = jsonValue.GetInteger("cardinality");

  }



  return *this;
}
