﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CreateCustomRoutingAcceleratorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCustomRoutingAcceleratorResult::CreateCustomRoutingAcceleratorResult()
{
}

CreateCustomRoutingAcceleratorResult::CreateCustomRoutingAcceleratorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateCustomRoutingAcceleratorResult& CreateCustomRoutingAcceleratorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Accelerator"))
  {
    m_accelerator = jsonValue.GetObject("Accelerator");

  }



  return *this;
}
