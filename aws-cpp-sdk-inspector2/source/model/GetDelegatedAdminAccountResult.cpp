/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/GetDelegatedAdminAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDelegatedAdminAccountResult::GetDelegatedAdminAccountResult()
{
}

GetDelegatedAdminAccountResult::GetDelegatedAdminAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDelegatedAdminAccountResult& GetDelegatedAdminAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("delegatedAdmin"))
  {
    m_delegatedAdmin = jsonValue.GetObject("delegatedAdmin");

  }



  return *this;
}
