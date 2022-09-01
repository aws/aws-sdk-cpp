/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/GetControlOperationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetControlOperationResult::GetControlOperationResult()
{
}

GetControlOperationResult::GetControlOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetControlOperationResult& GetControlOperationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("controlOperation"))
  {
    m_controlOperation = jsonValue.GetObject("controlOperation");

  }



  return *this;
}
