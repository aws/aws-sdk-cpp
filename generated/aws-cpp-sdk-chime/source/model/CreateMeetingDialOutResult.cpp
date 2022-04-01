/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateMeetingDialOutResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateMeetingDialOutResult::CreateMeetingDialOutResult()
{
}

CreateMeetingDialOutResult::CreateMeetingDialOutResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateMeetingDialOutResult& CreateMeetingDialOutResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransactionId"))
  {
    m_transactionId = jsonValue.GetString("TransactionId");

  }



  return *this;
}
