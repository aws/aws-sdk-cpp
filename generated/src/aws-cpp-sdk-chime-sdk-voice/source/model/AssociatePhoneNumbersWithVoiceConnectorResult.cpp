/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/AssociatePhoneNumbersWithVoiceConnectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociatePhoneNumbersWithVoiceConnectorResult::AssociatePhoneNumbersWithVoiceConnectorResult()
{
}

AssociatePhoneNumbersWithVoiceConnectorResult::AssociatePhoneNumbersWithVoiceConnectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociatePhoneNumbersWithVoiceConnectorResult& AssociatePhoneNumbersWithVoiceConnectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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



  return *this;
}
