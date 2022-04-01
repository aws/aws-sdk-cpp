/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/GetRateBasedStatementManagedKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRateBasedStatementManagedKeysResult::GetRateBasedStatementManagedKeysResult()
{
}

GetRateBasedStatementManagedKeysResult::GetRateBasedStatementManagedKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRateBasedStatementManagedKeysResult& GetRateBasedStatementManagedKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ManagedKeysIPV4"))
  {
    m_managedKeysIPV4 = jsonValue.GetObject("ManagedKeysIPV4");

  }

  if(jsonValue.ValueExists("ManagedKeysIPV6"))
  {
    m_managedKeysIPV6 = jsonValue.GetObject("ManagedKeysIPV6");

  }



  return *this;
}
