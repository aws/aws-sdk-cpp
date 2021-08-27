/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SendAnnouncementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendAnnouncementResult::SendAnnouncementResult()
{
}

SendAnnouncementResult::SendAnnouncementResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SendAnnouncementResult& SendAnnouncementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnnouncementArn"))
  {
    m_announcementArn = jsonValue.GetString("AnnouncementArn");

  }



  return *this;
}
