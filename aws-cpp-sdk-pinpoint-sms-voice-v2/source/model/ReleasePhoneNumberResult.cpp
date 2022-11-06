/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ReleasePhoneNumberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ReleasePhoneNumberResult::ReleasePhoneNumberResult() : 
    m_status(NumberStatus::NOT_SET),
    m_messageType(MessageType::NOT_SET),
    m_numberType(NumberType::NOT_SET),
    m_twoWayEnabled(false),
    m_selfManagedOptOutsEnabled(false)
{
}

ReleasePhoneNumberResult::ReleasePhoneNumberResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(NumberStatus::NOT_SET),
    m_messageType(MessageType::NOT_SET),
    m_numberType(NumberType::NOT_SET),
    m_twoWayEnabled(false),
    m_selfManagedOptOutsEnabled(false)
{
  *this = result;
}

ReleasePhoneNumberResult& ReleasePhoneNumberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PhoneNumberArn"))
  {
    m_phoneNumberArn = jsonValue.GetString("PhoneNumberArn");

  }

  if(jsonValue.ValueExists("PhoneNumberId"))
  {
    m_phoneNumberId = jsonValue.GetString("PhoneNumberId");

  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = NumberStatusMapper::GetNumberStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");

  }

  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

  }

  if(jsonValue.ValueExists("NumberCapabilities"))
  {
    Aws::Utils::Array<JsonView> numberCapabilitiesJsonList = jsonValue.GetArray("NumberCapabilities");
    for(unsigned numberCapabilitiesIndex = 0; numberCapabilitiesIndex < numberCapabilitiesJsonList.GetLength(); ++numberCapabilitiesIndex)
    {
      m_numberCapabilities.push_back(NumberCapabilityMapper::GetNumberCapabilityForName(numberCapabilitiesJsonList[numberCapabilitiesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("NumberType"))
  {
    m_numberType = NumberTypeMapper::GetNumberTypeForName(jsonValue.GetString("NumberType"));

  }

  if(jsonValue.ValueExists("MonthlyLeasingPrice"))
  {
    m_monthlyLeasingPrice = jsonValue.GetString("MonthlyLeasingPrice");

  }

  if(jsonValue.ValueExists("TwoWayEnabled"))
  {
    m_twoWayEnabled = jsonValue.GetBool("TwoWayEnabled");

  }

  if(jsonValue.ValueExists("TwoWayChannelArn"))
  {
    m_twoWayChannelArn = jsonValue.GetString("TwoWayChannelArn");

  }

  if(jsonValue.ValueExists("SelfManagedOptOutsEnabled"))
  {
    m_selfManagedOptOutsEnabled = jsonValue.GetBool("SelfManagedOptOutsEnabled");

  }

  if(jsonValue.ValueExists("OptOutListName"))
  {
    m_optOutListName = jsonValue.GetString("OptOutListName");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }



  return *this;
}
