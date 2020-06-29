/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteWorkteamResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteWorkteamResult::DeleteWorkteamResult() : 
    m_success(false)
{
}

DeleteWorkteamResult::DeleteWorkteamResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_success(false)
{
  *this = result;
}

DeleteWorkteamResult& DeleteWorkteamResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Success"))
  {
    m_success = jsonValue.GetBool("Success");

  }



  return *this;
}
