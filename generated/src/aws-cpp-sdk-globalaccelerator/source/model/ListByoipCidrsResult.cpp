﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListByoipCidrsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListByoipCidrsResult::ListByoipCidrsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListByoipCidrsResult& ListByoipCidrsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ByoipCidrs"))
  {
    Aws::Utils::Array<JsonView> byoipCidrsJsonList = jsonValue.GetArray("ByoipCidrs");
    for(unsigned byoipCidrsIndex = 0; byoipCidrsIndex < byoipCidrsJsonList.GetLength(); ++byoipCidrsIndex)
    {
      m_byoipCidrs.push_back(byoipCidrsJsonList[byoipCidrsIndex].AsObject());
    }
    m_byoipCidrsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
