/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/CreateGraphResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateGraphResult::CreateGraphResult()
{
}

CreateGraphResult::CreateGraphResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateGraphResult& CreateGraphResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GraphArn"))
  {
    m_graphArn = jsonValue.GetString("GraphArn");

  }



  return *this;
}
