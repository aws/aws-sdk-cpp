/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GetChangeTokenStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetChangeTokenStatusResult::GetChangeTokenStatusResult() : 
    m_changeTokenStatus(ChangeTokenStatus::NOT_SET)
{
}

GetChangeTokenStatusResult::GetChangeTokenStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_changeTokenStatus(ChangeTokenStatus::NOT_SET)
{
  *this = result;
}

GetChangeTokenStatusResult& GetChangeTokenStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChangeTokenStatus"))
  {
    m_changeTokenStatus = ChangeTokenStatusMapper::GetChangeTokenStatusForName(jsonValue.GetString("ChangeTokenStatus"));

  }



  return *this;
}
