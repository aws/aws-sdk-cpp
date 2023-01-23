/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/GetWebhookResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWebhookResult::GetWebhookResult()
{
}

GetWebhookResult::GetWebhookResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWebhookResult& GetWebhookResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("webhook"))
  {
    m_webhook = jsonValue.GetObject("webhook");

  }



  return *this;
}
