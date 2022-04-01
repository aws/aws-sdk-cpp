/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CreateEnvironmentAccountConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateEnvironmentAccountConnectionResult::CreateEnvironmentAccountConnectionResult()
{
}

CreateEnvironmentAccountConnectionResult::CreateEnvironmentAccountConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateEnvironmentAccountConnectionResult& CreateEnvironmentAccountConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("environmentAccountConnection"))
  {
    m_environmentAccountConnection = jsonValue.GetObject("environmentAccountConnection");

  }



  return *this;
}
