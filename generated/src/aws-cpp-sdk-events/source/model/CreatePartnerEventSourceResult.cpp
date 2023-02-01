/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/CreatePartnerEventSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePartnerEventSourceResult::CreatePartnerEventSourceResult()
{
}

CreatePartnerEventSourceResult::CreatePartnerEventSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePartnerEventSourceResult& CreatePartnerEventSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");

  }



  return *this;
}
