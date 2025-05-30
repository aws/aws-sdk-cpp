﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListFailuresForLicenseConfigurationOperationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFailuresForLicenseConfigurationOperationsResult::ListFailuresForLicenseConfigurationOperationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFailuresForLicenseConfigurationOperationsResult& ListFailuresForLicenseConfigurationOperationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseOperationFailureList"))
  {
    Aws::Utils::Array<JsonView> licenseOperationFailureListJsonList = jsonValue.GetArray("LicenseOperationFailureList");
    for(unsigned licenseOperationFailureListIndex = 0; licenseOperationFailureListIndex < licenseOperationFailureListJsonList.GetLength(); ++licenseOperationFailureListIndex)
    {
      m_licenseOperationFailureList.push_back(licenseOperationFailureListJsonList[licenseOperationFailureListIndex].AsObject());
    }
    m_licenseOperationFailureListHasBeenSet = true;
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
