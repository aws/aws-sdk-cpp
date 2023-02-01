/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CreateCaseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCaseResult::CreateCaseResult()
{
}

CreateCaseResult::CreateCaseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateCaseResult& CreateCaseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("caseArn"))
  {
    m_caseArn = jsonValue.GetString("caseArn");

  }

  if(jsonValue.ValueExists("caseId"))
  {
    m_caseId = jsonValue.GetString("caseId");

  }



  return *this;
}
