/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ListScramSecretsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListScramSecretsResult::ListScramSecretsResult()
{
}

ListScramSecretsResult::ListScramSecretsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListScramSecretsResult& ListScramSecretsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("secretArnList"))
  {
    Aws::Utils::Array<JsonView> secretArnListJsonList = jsonValue.GetArray("secretArnList");
    for(unsigned secretArnListIndex = 0; secretArnListIndex < secretArnListJsonList.GetLength(); ++secretArnListIndex)
    {
      m_secretArnList.push_back(secretArnListJsonList[secretArnListIndex].AsString());
    }
  }



  return *this;
}
