/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/GetJobUnlockCodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetJobUnlockCodeResult::GetJobUnlockCodeResult()
{
}

GetJobUnlockCodeResult::GetJobUnlockCodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetJobUnlockCodeResult& GetJobUnlockCodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UnlockCode"))
  {
    m_unlockCode = jsonValue.GetString("UnlockCode");

  }



  return *this;
}
