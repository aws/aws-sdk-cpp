﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/OptOutSpeakerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

OptOutSpeakerResult::OptOutSpeakerResult()
{
}

OptOutSpeakerResult::OptOutSpeakerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

OptOutSpeakerResult& OptOutSpeakerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Speaker"))
  {
    m_speaker = jsonValue.GetObject("Speaker");

  }



  return *this;
}
