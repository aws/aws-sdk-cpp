﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/DetachObjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetachObjectResult::DetachObjectResult()
{
}

DetachObjectResult::DetachObjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetachObjectResult& DetachObjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DetachedObjectIdentifier"))
  {
    m_detachedObjectIdentifier = jsonValue.GetString("DetachedObjectIdentifier");

  }



  return *this;
}
