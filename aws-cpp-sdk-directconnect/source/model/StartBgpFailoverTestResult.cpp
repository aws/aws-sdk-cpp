/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/StartBgpFailoverTestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartBgpFailoverTestResult::StartBgpFailoverTestResult()
{
}

StartBgpFailoverTestResult::StartBgpFailoverTestResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartBgpFailoverTestResult& StartBgpFailoverTestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("virtualInterfaceTest"))
  {
    m_virtualInterfaceTest = jsonValue.GetObject("virtualInterfaceTest");

  }



  return *this;
}
