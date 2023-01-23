/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListLicenseConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLicenseConfigurationsResult::ListLicenseConfigurationsResult()
{
}

ListLicenseConfigurationsResult::ListLicenseConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLicenseConfigurationsResult& ListLicenseConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConfigurations"))
  {
    Aws::Utils::Array<JsonView> licenseConfigurationsJsonList = jsonValue.GetArray("LicenseConfigurations");
    for(unsigned licenseConfigurationsIndex = 0; licenseConfigurationsIndex < licenseConfigurationsJsonList.GetLength(); ++licenseConfigurationsIndex)
    {
      m_licenseConfigurations.push_back(licenseConfigurationsJsonList[licenseConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
