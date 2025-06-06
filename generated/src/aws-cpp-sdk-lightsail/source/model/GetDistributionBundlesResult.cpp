﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetDistributionBundlesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDistributionBundlesResult::GetDistributionBundlesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDistributionBundlesResult& GetDistributionBundlesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bundles"))
  {
    Aws::Utils::Array<JsonView> bundlesJsonList = jsonValue.GetArray("bundles");
    for(unsigned bundlesIndex = 0; bundlesIndex < bundlesJsonList.GetLength(); ++bundlesIndex)
    {
      m_bundles.push_back(bundlesJsonList[bundlesIndex].AsObject());
    }
    m_bundlesHasBeenSet = true;
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
