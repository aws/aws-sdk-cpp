﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/RejectGrantResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RejectGrantResult::RejectGrantResult() : 
    m_status(GrantStatus::NOT_SET)
{
}

RejectGrantResult::RejectGrantResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(GrantStatus::NOT_SET)
{
  *this = result;
}

RejectGrantResult& RejectGrantResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GrantArn"))
  {
    m_grantArn = jsonValue.GetString("GrantArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = GrantStatusMapper::GetGrantStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

  }



  return *this;
}
