﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListLicenseSpecificationsForResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLicenseSpecificationsForResourceResult::ListLicenseSpecificationsForResourceResult()
{
}

ListLicenseSpecificationsForResourceResult::ListLicenseSpecificationsForResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLicenseSpecificationsForResourceResult& ListLicenseSpecificationsForResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseSpecifications"))
  {
    Array<JsonView> licenseSpecificationsJsonList = jsonValue.GetArray("LicenseSpecifications");
    for(unsigned licenseSpecificationsIndex = 0; licenseSpecificationsIndex < licenseSpecificationsJsonList.GetLength(); ++licenseSpecificationsIndex)
    {
      m_licenseSpecifications.push_back(licenseSpecificationsJsonList[licenseSpecificationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
