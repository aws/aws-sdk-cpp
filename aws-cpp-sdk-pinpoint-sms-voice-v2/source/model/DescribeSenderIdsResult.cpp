/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeSenderIdsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSenderIdsResult::DescribeSenderIdsResult()
{
}

DescribeSenderIdsResult::DescribeSenderIdsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSenderIdsResult& DescribeSenderIdsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SenderIds"))
  {
    Aws::Utils::Array<JsonView> senderIdsJsonList = jsonValue.GetArray("SenderIds");
    for(unsigned senderIdsIndex = 0; senderIdsIndex < senderIdsJsonList.GetLength(); ++senderIdsIndex)
    {
      m_senderIds.push_back(senderIdsJsonList[senderIdsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
