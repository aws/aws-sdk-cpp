/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CreateQueueResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateQueueResult::CreateQueueResult()
{
}

CreateQueueResult::CreateQueueResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateQueueResult& CreateQueueResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("queue"))
  {
    m_queue = jsonValue.GetObject("queue");

  }



  return *this;
}
