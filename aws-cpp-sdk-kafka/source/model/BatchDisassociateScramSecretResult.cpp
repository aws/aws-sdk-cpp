/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/BatchDisassociateScramSecretResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDisassociateScramSecretResult::BatchDisassociateScramSecretResult()
{
}

BatchDisassociateScramSecretResult::BatchDisassociateScramSecretResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDisassociateScramSecretResult& BatchDisassociateScramSecretResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

  }

  if(jsonValue.ValueExists("unprocessedScramSecrets"))
  {
    Aws::Utils::Array<JsonView> unprocessedScramSecretsJsonList = jsonValue.GetArray("unprocessedScramSecrets");
    for(unsigned unprocessedScramSecretsIndex = 0; unprocessedScramSecretsIndex < unprocessedScramSecretsJsonList.GetLength(); ++unprocessedScramSecretsIndex)
    {
      m_unprocessedScramSecrets.push_back(unprocessedScramSecretsJsonList[unprocessedScramSecretsIndex].AsObject());
    }
  }



  return *this;
}
