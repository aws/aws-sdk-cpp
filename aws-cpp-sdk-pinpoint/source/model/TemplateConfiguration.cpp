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

#include <aws/pinpoint/model/TemplateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

TemplateConfiguration::TemplateConfiguration() : 
    m_emailTemplateHasBeenSet(false),
    m_pushTemplateHasBeenSet(false),
    m_sMSTemplateHasBeenSet(false),
    m_voiceTemplateHasBeenSet(false)
{
}

TemplateConfiguration::TemplateConfiguration(JsonView jsonValue) : 
    m_emailTemplateHasBeenSet(false),
    m_pushTemplateHasBeenSet(false),
    m_sMSTemplateHasBeenSet(false),
    m_voiceTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateConfiguration& TemplateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmailTemplate"))
  {
    m_emailTemplate = jsonValue.GetObject("EmailTemplate");

    m_emailTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PushTemplate"))
  {
    m_pushTemplate = jsonValue.GetObject("PushTemplate");

    m_pushTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SMSTemplate"))
  {
    m_sMSTemplate = jsonValue.GetObject("SMSTemplate");

    m_sMSTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceTemplate"))
  {
    m_voiceTemplate = jsonValue.GetObject("VoiceTemplate");

    m_voiceTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_emailTemplateHasBeenSet)
  {
   payload.WithObject("EmailTemplate", m_emailTemplate.Jsonize());

  }

  if(m_pushTemplateHasBeenSet)
  {
   payload.WithObject("PushTemplate", m_pushTemplate.Jsonize());

  }

  if(m_sMSTemplateHasBeenSet)
  {
   payload.WithObject("SMSTemplate", m_sMSTemplate.Jsonize());

  }

  if(m_voiceTemplateHasBeenSet)
  {
   payload.WithObject("VoiceTemplate", m_voiceTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
