﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetLicenseManagerReportGeneratorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLicenseManagerReportGeneratorResult::GetLicenseManagerReportGeneratorResult()
{
}

GetLicenseManagerReportGeneratorResult::GetLicenseManagerReportGeneratorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLicenseManagerReportGeneratorResult& GetLicenseManagerReportGeneratorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReportGenerator"))
  {
    m_reportGenerator = jsonValue.GetObject("ReportGenerator");

  }



  return *this;
}
