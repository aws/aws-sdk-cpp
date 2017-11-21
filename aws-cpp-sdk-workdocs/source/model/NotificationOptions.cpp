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

#include <aws/workdocs/model/NotificationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

NotificationOptions::NotificationOptions() : 
    m_sendEmail(false),
    m_sendEmailHasBeenSet(false),
    m_emailMessageHasBeenSet(false)
{
}

NotificationOptions::NotificationOptions(const JsonValue& jsonValue) : 
    m_sendEmail(false),
    m_sendEmailHasBeenSet(false),
    m_emailMessageHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationOptions& NotificationOptions::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SendEmail"))
  {
    m_sendEmail = jsonValue.GetBool("SendEmail");

    m_sendEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailMessage"))
  {
    m_emailMessage = jsonValue.GetString("EmailMessage");

    m_emailMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_sendEmailHasBeenSet)
  {
   payload.WithBool("SendEmail", m_sendEmail);

  }

  if(m_emailMessageHasBeenSet)
  {
   payload.WithString("EmailMessage", m_emailMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
