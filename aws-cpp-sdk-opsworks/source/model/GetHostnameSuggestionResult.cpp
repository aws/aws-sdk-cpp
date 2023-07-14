/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/GetHostnameSuggestionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetHostnameSuggestionResult::GetHostnameSuggestionResult()
{
}

GetHostnameSuggestionResult::GetHostnameSuggestionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetHostnameSuggestionResult& GetHostnameSuggestionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LayerId"))
  {
    m_layerId = jsonValue.GetString("LayerId");

  }

  if(jsonValue.ValueExists("Hostname"))
  {
    m_hostname = jsonValue.GetString("Hostname");

  }



  return *this;
}
