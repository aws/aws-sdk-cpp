/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetViolationDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetViolationDetailsResult::GetViolationDetailsResult()
{
}

GetViolationDetailsResult::GetViolationDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetViolationDetailsResult& GetViolationDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ViolationDetail"))
  {
    m_violationDetail = jsonValue.GetObject("ViolationDetail");

  }



  return *this;
}
