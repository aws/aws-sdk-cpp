﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CreateDeviceProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDeviceProfileResult::CreateDeviceProfileResult()
{
}

CreateDeviceProfileResult::CreateDeviceProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDeviceProfileResult& CreateDeviceProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }



  return *this;
}
