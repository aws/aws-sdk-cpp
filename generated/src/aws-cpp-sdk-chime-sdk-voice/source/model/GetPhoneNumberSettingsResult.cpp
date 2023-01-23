/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/GetPhoneNumberSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPhoneNumberSettingsResult::GetPhoneNumberSettingsResult()
{
}

GetPhoneNumberSettingsResult::GetPhoneNumberSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPhoneNumberSettingsResult& GetPhoneNumberSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CallingName"))
  {
    m_callingName = jsonValue.GetString("CallingName");

  }

  if(jsonValue.ValueExists("CallingNameUpdatedTimestamp"))
  {
    m_callingNameUpdatedTimestamp = jsonValue.GetString("CallingNameUpdatedTimestamp");

  }



  return *this;
}
