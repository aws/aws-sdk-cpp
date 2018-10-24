/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/alexaforbusiness/model/ConferenceProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

ConferenceProvider::ConferenceProvider() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ConferenceProviderType::NOT_SET),
    m_typeHasBeenSet(false),
    m_iPDialInHasBeenSet(false),
    m_pSTNDialInHasBeenSet(false),
    m_meetingSettingHasBeenSet(false)
{
}

ConferenceProvider::ConferenceProvider(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ConferenceProviderType::NOT_SET),
    m_typeHasBeenSet(false),
    m_iPDialInHasBeenSet(false),
    m_pSTNDialInHasBeenSet(false),
    m_meetingSettingHasBeenSet(false)
{
  *this = jsonValue;
}

ConferenceProvider& ConferenceProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ConferenceProviderTypeMapper::GetConferenceProviderTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPDialIn"))
  {
    m_iPDialIn = jsonValue.GetObject("IPDialIn");

    m_iPDialInHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PSTNDialIn"))
  {
    m_pSTNDialIn = jsonValue.GetObject("PSTNDialIn");

    m_pSTNDialInHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeetingSetting"))
  {
    m_meetingSetting = jsonValue.GetObject("MeetingSetting");

    m_meetingSettingHasBeenSet = true;
  }

  return *this;
}

JsonValue ConferenceProvider::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ConferenceProviderTypeMapper::GetNameForConferenceProviderType(m_type));
  }

  if(m_iPDialInHasBeenSet)
  {
   payload.WithObject("IPDialIn", m_iPDialIn.Jsonize());

  }

  if(m_pSTNDialInHasBeenSet)
  {
   payload.WithObject("PSTNDialIn", m_pSTNDialIn.Jsonize());

  }

  if(m_meetingSettingHasBeenSet)
  {
   payload.WithObject("MeetingSetting", m_meetingSetting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
