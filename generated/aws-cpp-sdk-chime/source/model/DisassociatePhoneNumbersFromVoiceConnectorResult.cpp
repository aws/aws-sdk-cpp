﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DisassociatePhoneNumbersFromVoiceConnectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociatePhoneNumbersFromVoiceConnectorResult::DisassociatePhoneNumbersFromVoiceConnectorResult()
{
}

DisassociatePhoneNumbersFromVoiceConnectorResult::DisassociatePhoneNumbersFromVoiceConnectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociatePhoneNumbersFromVoiceConnectorResult& DisassociatePhoneNumbersFromVoiceConnectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PhoneNumberErrors"))
  {
    Array<JsonView> phoneNumberErrorsJsonList = jsonValue.GetArray("PhoneNumberErrors");
    for(unsigned phoneNumberErrorsIndex = 0; phoneNumberErrorsIndex < phoneNumberErrorsJsonList.GetLength(); ++phoneNumberErrorsIndex)
    {
      m_phoneNumberErrors.push_back(phoneNumberErrorsJsonList[phoneNumberErrorsIndex].AsObject());
    }
  }



  return *this;
}
