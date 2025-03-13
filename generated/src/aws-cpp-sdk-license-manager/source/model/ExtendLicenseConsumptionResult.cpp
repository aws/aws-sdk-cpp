/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ExtendLicenseConsumptionResult.h>
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

ExtendLicenseConsumptionResult::ExtendLicenseConsumptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExtendLicenseConsumptionResult& ExtendLicenseConsumptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConsumptionToken"))
  {
    m_licenseConsumptionToken = jsonValue.GetString("LicenseConsumptionToken");
    m_licenseConsumptionTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Expiration"))
  {
    m_expiration = jsonValue.GetString("Expiration");
    m_expirationHasBeenSet = true;
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
