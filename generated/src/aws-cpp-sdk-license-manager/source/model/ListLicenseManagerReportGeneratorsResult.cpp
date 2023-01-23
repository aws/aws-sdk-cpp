/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListLicenseManagerReportGeneratorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLicenseManagerReportGeneratorsResult::ListLicenseManagerReportGeneratorsResult()
{
}

ListLicenseManagerReportGeneratorsResult::ListLicenseManagerReportGeneratorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLicenseManagerReportGeneratorsResult& ListLicenseManagerReportGeneratorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReportGenerators"))
  {
    Aws::Utils::Array<JsonView> reportGeneratorsJsonList = jsonValue.GetArray("ReportGenerators");
    for(unsigned reportGeneratorsIndex = 0; reportGeneratorsIndex < reportGeneratorsJsonList.GetLength(); ++reportGeneratorsIndex)
    {
      m_reportGenerators.push_back(reportGeneratorsJsonList[reportGeneratorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
