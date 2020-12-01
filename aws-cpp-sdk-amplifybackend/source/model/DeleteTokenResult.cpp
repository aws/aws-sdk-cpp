/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/DeleteTokenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteTokenResult::DeleteTokenResult() : 
    m_isSuccess(false)
{
}

DeleteTokenResult::DeleteTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isSuccess(false)
{
  *this = result;
}

DeleteTokenResult& DeleteTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("isSuccess"))
  {
    m_isSuccess = jsonValue.GetBool("isSuccess");

  }



  return *this;
}
