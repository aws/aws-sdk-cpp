﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateLicenseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateLicenseResult::CreateLicenseResult() : 
    m_status(LicenseStatus::NOT_SET)
{
}

CreateLicenseResult::CreateLicenseResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(LicenseStatus::NOT_SET)
{
  *this = result;
}

CreateLicenseResult& CreateLicenseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseArn"))
  {
    m_licenseArn = jsonValue.GetString("LicenseArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = LicenseStatusMapper::GetLicenseStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

  }



  return *this;
}
