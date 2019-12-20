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

#include <aws/pinpoint/model/EmailMessageActivity.h>
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

EmailMessageActivity::EmailMessageActivity() : 
    m_messageConfigHasBeenSet(false),
    m_nextActivityHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateVersionHasBeenSet(false)
{
}

EmailMessageActivity::EmailMessageActivity(JsonView jsonValue) : 
    m_messageConfigHasBeenSet(false),
    m_nextActivityHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateVersionHasBeenSet(false)
{
  *this = jsonValue;
}

EmailMessageActivity& EmailMessageActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageConfig"))
  {
    m_messageConfig = jsonValue.GetObject("MessageConfig");

    m_messageConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextActivity"))
  {
    m_nextActivity = jsonValue.GetString("NextActivity");

    m_nextActivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateVersion"))
  {
    m_templateVersion = jsonValue.GetString("TemplateVersion");

    m_templateVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailMessageActivity::Jsonize() const
{
  JsonValue payload;

  if(m_messageConfigHasBeenSet)
  {
   payload.WithObject("MessageConfig", m_messageConfig.Jsonize());

  }

  if(m_nextActivityHasBeenSet)
  {
   payload.WithString("NextActivity", m_nextActivity);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateVersionHasBeenSet)
  {
   payload.WithString("TemplateVersion", m_templateVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
