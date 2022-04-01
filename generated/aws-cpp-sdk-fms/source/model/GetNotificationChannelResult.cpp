/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetNotificationChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNotificationChannelResult::GetNotificationChannelResult()
{
}

GetNotificationChannelResult::GetNotificationChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetNotificationChannelResult& GetNotificationChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

  }

  if(jsonValue.ValueExists("SnsRoleName"))
  {
    m_snsRoleName = jsonValue.GetString("SnsRoleName");

  }



  return *this;
}
