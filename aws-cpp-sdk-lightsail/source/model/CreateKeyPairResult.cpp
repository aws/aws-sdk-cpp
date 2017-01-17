﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/lightsail/model/CreateKeyPairResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateKeyPairResult::CreateKeyPairResult()
{
}

CreateKeyPairResult::CreateKeyPairResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateKeyPairResult& CreateKeyPairResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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
