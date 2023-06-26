﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/DisassociatePhoneNumbersFromVoiceConnectorGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociatePhoneNumbersFromVoiceConnectorGroupResult::DisassociatePhoneNumbersFromVoiceConnectorGroupResult()
{
}

DisassociatePhoneNumbersFromVoiceConnectorGroupResult::DisassociatePhoneNumbersFromVoiceConnectorGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociatePhoneNumbersFromVoiceConnectorGroupResult& DisassociatePhoneNumbersFromVoiceConnectorGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PhoneNumberErrors"))
  {
    Aws::Utils::Array<JsonView> phoneNumberErrorsJsonList = jsonValue.GetArray("PhoneNumberErrors");
    for(unsigned phoneNumberErrorsIndex = 0; phoneNumberErrorsIndex < phoneNumberErrorsJsonList.GetLength(); ++phoneNumberErrorsIndex)
    {
      m_phoneNumberErrors.push_back(phoneNumberErrorsJsonList[phoneNumberErrorsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
