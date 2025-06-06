﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListIncomingTypedLinksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIncomingTypedLinksResult::ListIncomingTypedLinksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIncomingTypedLinksResult& ListIncomingTypedLinksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LinkSpecifiers"))
  {
    Aws::Utils::Array<JsonView> linkSpecifiersJsonList = jsonValue.GetArray("LinkSpecifiers");
    for(unsigned linkSpecifiersIndex = 0; linkSpecifiersIndex < linkSpecifiersJsonList.GetLength(); ++linkSpecifiersIndex)
    {
      m_linkSpecifiers.push_back(linkSpecifiersJsonList[linkSpecifiersIndex].AsObject());
    }
    m_linkSpecifiersHasBeenSet = true;
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
