﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateSecurityProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSecurityProfileResult::CreateSecurityProfileResult()
{
}

CreateSecurityProfileResult::CreateSecurityProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSecurityProfileResult& CreateSecurityProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SecurityProfileId"))
  {
    m_securityProfileId = jsonValue.GetString("SecurityProfileId");

  }

  if(jsonValue.ValueExists("SecurityProfileArn"))
  {
    m_securityProfileArn = jsonValue.GetString("SecurityProfileArn");

  }



  return *this;
}
