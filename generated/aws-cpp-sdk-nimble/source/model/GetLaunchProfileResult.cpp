﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/GetLaunchProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLaunchProfileResult::GetLaunchProfileResult()
{
}

GetLaunchProfileResult::GetLaunchProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLaunchProfileResult& GetLaunchProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("launchProfile"))
  {
    m_launchProfile = jsonValue.GetObject("launchProfile");

  }



  return *this;
}
