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

#include <aws/shield/model/EmergencyContact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

EmergencyContact::EmergencyContact() : 
    m_emailAddressHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_contactNotesHasBeenSet(false)
{
}

EmergencyContact::EmergencyContact(JsonView jsonValue) : 
    m_emailAddressHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_contactNotesHasBeenSet(false)
{
  *this = jsonValue;
}

EmergencyContact& EmergencyContact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactNotes"))
  {
    m_contactNotes = jsonValue.GetString("ContactNotes");

    m_contactNotesHasBeenSet = true;
  }

  return *this;
}

JsonValue EmergencyContact::Jsonize() const
{
  JsonValue payload;

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_contactNotesHasBeenSet)
  {
   payload.WithString("ContactNotes", m_contactNotes);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
