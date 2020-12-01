/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/EmailSettings.h>
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

EmailSettings::EmailSettings() : 
    m_emailMessageHasBeenSet(false),
    m_emailSubjectHasBeenSet(false)
{
}

EmailSettings::EmailSettings(JsonView jsonValue) : 
    m_emailMessageHasBeenSet(false),
    m_emailSubjectHasBeenSet(false)
{
  *this = jsonValue;
}

EmailSettings& EmailSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("emailMessage"))
  {
    m_emailMessage = jsonValue.GetString("emailMessage");

    m_emailMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("emailSubject"))
  {
    m_emailSubject = jsonValue.GetString("emailSubject");

    m_emailSubjectHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailSettings::Jsonize() const
{
  JsonValue payload;

  if(m_emailMessageHasBeenSet)
  {
   payload.WithString("emailMessage", m_emailMessage);

  }

  if(m_emailSubjectHasBeenSet)
  {
   payload.WithString("emailSubject", m_emailSubject);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
