/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListLicenseConversionTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLicenseConversionTasksResult::ListLicenseConversionTasksResult()
{
}

ListLicenseConversionTasksResult::ListLicenseConversionTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLicenseConversionTasksResult& ListLicenseConversionTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConversionTasks"))
  {
    Aws::Utils::Array<JsonView> licenseConversionTasksJsonList = jsonValue.GetArray("LicenseConversionTasks");
    for(unsigned licenseConversionTasksIndex = 0; licenseConversionTasksIndex < licenseConversionTasksJsonList.GetLength(); ++licenseConversionTasksIndex)
    {
      m_licenseConversionTasks.push_back(licenseConversionTasksJsonList[licenseConversionTasksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
