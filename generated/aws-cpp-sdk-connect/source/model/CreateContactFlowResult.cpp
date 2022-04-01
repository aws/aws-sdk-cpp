/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateContactFlowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateContactFlowResult::CreateContactFlowResult()
{
}

CreateContactFlowResult::CreateContactFlowResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateContactFlowResult& CreateContactFlowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactFlowId"))
  {
    m_contactFlowId = jsonValue.GetString("ContactFlowId");

  }

  if(jsonValue.ValueExists("ContactFlowArn"))
  {
    m_contactFlowArn = jsonValue.GetString("ContactFlowArn");

  }



  return *this;
}
