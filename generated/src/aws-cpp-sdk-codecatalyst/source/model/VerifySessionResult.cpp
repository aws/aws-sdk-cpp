/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/VerifySessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

VerifySessionResult::VerifySessionResult()
{
}

VerifySessionResult::VerifySessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

VerifySessionResult& VerifySessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("identity"))
  {
    m_identity = jsonValue.GetString("identity");

  }



  return *this;
}
