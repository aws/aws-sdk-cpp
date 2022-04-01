/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/GetConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectionResult::GetConnectionResult()
{
}

GetConnectionResult::GetConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConnectionResult& GetConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Connection"))
  {
    m_connection = jsonValue.GetObject("Connection");

  }



  return *this;
}
