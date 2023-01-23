/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

Settings::Settings() : 
    m_mfaTypesHasBeenSet(false),
    m_smsMessageHasBeenSet(false)
{
}

Settings::Settings(JsonView jsonValue) : 
    m_mfaTypesHasBeenSet(false),
    m_smsMessageHasBeenSet(false)
{
  *this = jsonValue;
}

Settings& Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mfaTypes"))
  {
    Aws::Utils::Array<JsonView> mfaTypesJsonList = jsonValue.GetArray("mfaTypes");
    for(unsigned mfaTypesIndex = 0; mfaTypesIndex < mfaTypesJsonList.GetLength(); ++mfaTypesIndex)
    {
      m_mfaTypes.push_back(MfaTypesElementMapper::GetMfaTypesElementForName(mfaTypesJsonList[mfaTypesIndex].AsString()));
    }
    m_mfaTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("smsMessage"))
  {
    m_smsMessage = jsonValue.GetString("smsMessage");

    m_smsMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue Settings::Jsonize() const
{
  JsonValue payload;

  if(m_mfaTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mfaTypesJsonList(m_mfaTypes.size());
   for(unsigned mfaTypesIndex = 0; mfaTypesIndex < mfaTypesJsonList.GetLength(); ++mfaTypesIndex)
   {
     mfaTypesJsonList[mfaTypesIndex].AsString(MfaTypesElementMapper::GetNameForMfaTypesElement(m_mfaTypes[mfaTypesIndex]));
   }
   payload.WithArray("mfaTypes", std::move(mfaTypesJsonList));

  }

  if(m_smsMessageHasBeenSet)
  {
   payload.WithString("smsMessage", m_smsMessage);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
