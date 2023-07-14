/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-signaling/model/SendAlexaOfferToMasterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisVideoSignalingChannels::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendAlexaOfferToMasterResult::SendAlexaOfferToMasterResult()
{
}

SendAlexaOfferToMasterResult::SendAlexaOfferToMasterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SendAlexaOfferToMasterResult& SendAlexaOfferToMasterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Answer"))
  {
    m_answer = jsonValue.GetString("Answer");

  }



  return *this;
}
