/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ListWebhooksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWebhooksResult::ListWebhooksResult()
{
}

ListWebhooksResult::ListWebhooksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWebhooksResult& ListWebhooksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("webhooks"))
  {
    Aws::Utils::Array<JsonView> webhooksJsonList = jsonValue.GetArray("webhooks");
    for(unsigned webhooksIndex = 0; webhooksIndex < webhooksJsonList.GetLength(); ++webhooksIndex)
    {
      m_webhooks.push_back(webhooksJsonList[webhooksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
