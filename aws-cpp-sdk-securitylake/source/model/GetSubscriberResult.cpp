/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetSubscriberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSubscriberResult::GetSubscriberResult()
{
}

GetSubscriberResult::GetSubscriberResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSubscriberResult& GetSubscriberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("subscriber"))
  {
    m_subscriber = jsonValue.GetObject("subscriber");

  }



  return *this;
}
