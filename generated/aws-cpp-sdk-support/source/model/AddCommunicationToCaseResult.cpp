/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/AddCommunicationToCaseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddCommunicationToCaseResult::AddCommunicationToCaseResult() : 
    m_result(false)
{
}

AddCommunicationToCaseResult::AddCommunicationToCaseResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_result(false)
{
  *this = result;
}

AddCommunicationToCaseResult& AddCommunicationToCaseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetBool("result");

  }



  return *this;
}
