/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ClaimedPhoneNumberSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ClaimedPhoneNumberSummary::ClaimedPhoneNumberSummary() : 
    m_phoneNumberIdHasBeenSet(false),
    m_phoneNumberArnHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumberCountryCode(PhoneNumberCountryCode::NOT_SET),
    m_phoneNumberCountryCodeHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false),
    m_phoneNumberDescriptionHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_phoneNumberStatusHasBeenSet(false),
    m_sourcePhoneNumberArnHasBeenSet(false)
{
}

ClaimedPhoneNumberSummary::ClaimedPhoneNumberSummary(JsonView jsonValue) : 
    m_phoneNumberIdHasBeenSet(false),
    m_phoneNumberArnHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumberCountryCode(PhoneNumberCountryCode::NOT_SET),
    m_phoneNumberCountryCodeHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false),
    m_phoneNumberDescriptionHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_phoneNumberStatusHasBeenSet(false),
    m_sourcePhoneNumberArnHasBeenSet(false)
{
  *this = jsonValue;
}

ClaimedPhoneNumberSummary& ClaimedPhoneNumberSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneNumberId"))
  {
    m_phoneNumberId = jsonValue.GetString("PhoneNumberId");

    m_phoneNumberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberArn"))
  {
    m_phoneNumberArn = jsonValue.GetString("PhoneNumberArn");

    m_phoneNumberArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberCountryCode"))
  {
    m_phoneNumberCountryCode = PhoneNumberCountryCodeMapper::GetPhoneNumberCountryCodeForName(jsonValue.GetString("PhoneNumberCountryCode"));

    m_phoneNumberCountryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberType"))
  {
    m_phoneNumberType = PhoneNumberTypeMapper::GetPhoneNumberTypeForName(jsonValue.GetString("PhoneNumberType"));

    m_phoneNumberTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberDescription"))
  {
    m_phoneNumberDescription = jsonValue.GetString("PhoneNumberDescription");

    m_phoneNumberDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetArn"))
  {
    m_targetArn = jsonValue.GetString("TargetArn");

    m_targetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberStatus"))
  {
    m_phoneNumberStatus = jsonValue.GetObject("PhoneNumberStatus");

    m_phoneNumberStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePhoneNumberArn"))
  {
    m_sourcePhoneNumberArn = jsonValue.GetString("SourcePhoneNumberArn");

    m_sourcePhoneNumberArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ClaimedPhoneNumberSummary::Jsonize() const
{
  JsonValue payload;

  if(m_phoneNumberIdHasBeenSet)
  {
   payload.WithString("PhoneNumberId", m_phoneNumberId);

  }

  if(m_phoneNumberArnHasBeenSet)
  {
   payload.WithString("PhoneNumberArn", m_phoneNumberArn);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_phoneNumberCountryCodeHasBeenSet)
  {
   payload.WithString("PhoneNumberCountryCode", PhoneNumberCountryCodeMapper::GetNameForPhoneNumberCountryCode(m_phoneNumberCountryCode));
  }

  if(m_phoneNumberTypeHasBeenSet)
  {
   payload.WithString("PhoneNumberType", PhoneNumberTypeMapper::GetNameForPhoneNumberType(m_phoneNumberType));
  }

  if(m_phoneNumberDescriptionHasBeenSet)
  {
   payload.WithString("PhoneNumberDescription", m_phoneNumberDescription);

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_phoneNumberStatusHasBeenSet)
  {
   payload.WithObject("PhoneNumberStatus", m_phoneNumberStatus.Jsonize());

  }

  if(m_sourcePhoneNumberArnHasBeenSet)
  {
   payload.WithString("SourcePhoneNumberArn", m_sourcePhoneNumberArn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
