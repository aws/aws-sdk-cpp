/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetComplianceDetailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetComplianceDetailResult::GetComplianceDetailResult()
{
}

GetComplianceDetailResult::GetComplianceDetailResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetComplianceDetailResult& GetComplianceDetailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PolicyComplianceDetail"))
  {
    m_policyComplianceDetail = jsonValue.GetObject("PolicyComplianceDetail");

  }



  return *this;
}
