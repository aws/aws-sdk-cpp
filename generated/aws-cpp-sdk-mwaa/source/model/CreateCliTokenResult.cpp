/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/CreateCliTokenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MWAA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCliTokenResult::CreateCliTokenResult()
{
}

CreateCliTokenResult::CreateCliTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateCliTokenResult& CreateCliTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CliToken"))
  {
    m_cliToken = jsonValue.GetString("CliToken");

  }

  if(jsonValue.ValueExists("WebServerHostname"))
  {
    m_webServerHostname = jsonValue.GetString("WebServerHostname");

  }



  return *this;
}
