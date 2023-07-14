/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/GetCurrentUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCurrentUserResult::GetCurrentUserResult()
{
}

GetCurrentUserResult::GetCurrentUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCurrentUserResult& GetCurrentUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetObject("User");

  }



  return *this;
}
