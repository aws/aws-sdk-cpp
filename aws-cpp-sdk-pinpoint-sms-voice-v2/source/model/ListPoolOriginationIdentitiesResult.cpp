/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ListPoolOriginationIdentitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPoolOriginationIdentitiesResult::ListPoolOriginationIdentitiesResult()
{
}

ListPoolOriginationIdentitiesResult::ListPoolOriginationIdentitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPoolOriginationIdentitiesResult& ListPoolOriginationIdentitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PoolArn"))
  {
    m_poolArn = jsonValue.GetString("PoolArn");

  }

  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");

  }

  if(jsonValue.ValueExists("OriginationIdentities"))
  {
    Aws::Utils::Array<JsonView> originationIdentitiesJsonList = jsonValue.GetArray("OriginationIdentities");
    for(unsigned originationIdentitiesIndex = 0; originationIdentitiesIndex < originationIdentitiesJsonList.GetLength(); ++originationIdentitiesIndex)
    {
      m_originationIdentities.push_back(originationIdentitiesJsonList[originationIdentitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
