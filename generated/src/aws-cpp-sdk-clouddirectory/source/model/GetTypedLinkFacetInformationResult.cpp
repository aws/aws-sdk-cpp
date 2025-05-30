﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/GetTypedLinkFacetInformationResult.h>
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

GetTypedLinkFacetInformationResult::GetTypedLinkFacetInformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTypedLinkFacetInformationResult& GetTypedLinkFacetInformationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityAttributeOrder"))
  {
    Aws::Utils::Array<JsonView> identityAttributeOrderJsonList = jsonValue.GetArray("IdentityAttributeOrder");
    for(unsigned identityAttributeOrderIndex = 0; identityAttributeOrderIndex < identityAttributeOrderJsonList.GetLength(); ++identityAttributeOrderIndex)
    {
      m_identityAttributeOrder.push_back(identityAttributeOrderJsonList[identityAttributeOrderIndex].AsString());
    }
    m_identityAttributeOrderHasBeenSet = true;
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
