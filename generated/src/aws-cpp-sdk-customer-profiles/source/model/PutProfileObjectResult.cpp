﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/PutProfileObjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutProfileObjectResult::PutProfileObjectResult()
{
}

PutProfileObjectResult::PutProfileObjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutProfileObjectResult& PutProfileObjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProfileObjectUniqueKey"))
  {
    m_profileObjectUniqueKey = jsonValue.GetString("ProfileObjectUniqueKey");

  }



  return *this;
}
