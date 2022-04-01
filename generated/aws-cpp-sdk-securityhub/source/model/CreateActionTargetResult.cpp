/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CreateActionTargetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateActionTargetResult::CreateActionTargetResult()
{
}

CreateActionTargetResult::CreateActionTargetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateActionTargetResult& CreateActionTargetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ActionTargetArn"))
  {
    m_actionTargetArn = jsonValue.GetString("ActionTargetArn");

  }



  return *this;
}
