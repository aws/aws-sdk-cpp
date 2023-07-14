/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateKeyPairResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateKeyPairResult::CreateKeyPairResult()
{
}

CreateKeyPairResult::CreateKeyPairResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateKeyPairResult& CreateKeyPairResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keyPair"))
  {
    m_keyPair = jsonValue.GetObject("keyPair");

  }

  if(jsonValue.ValueExists("publicKeyBase64"))
  {
    m_publicKeyBase64 = jsonValue.GetString("publicKeyBase64");

  }

  if(jsonValue.ValueExists("privateKeyBase64"))
  {
    m_privateKeyBase64 = jsonValue.GetString("privateKeyBase64");

  }

  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetObject("operation");

  }



  return *this;
}
