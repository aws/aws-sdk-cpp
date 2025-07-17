/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressPointPasswordConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

IngressPointPasswordConfiguration::IngressPointPasswordConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IngressPointPasswordConfiguration& IngressPointPasswordConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SmtpPasswordVersion"))
  {
    m_smtpPasswordVersion = jsonValue.GetString("SmtpPasswordVersion");
    m_smtpPasswordVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreviousSmtpPasswordVersion"))
  {
    m_previousSmtpPasswordVersion = jsonValue.GetString("PreviousSmtpPasswordVersion");
    m_previousSmtpPasswordVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreviousSmtpPasswordExpiryTimestamp"))
  {
    m_previousSmtpPasswordExpiryTimestamp = jsonValue.GetDouble("PreviousSmtpPasswordExpiryTimestamp");
    m_previousSmtpPasswordExpiryTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue IngressPointPasswordConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_smtpPasswordVersionHasBeenSet)
  {
   payload.WithString("SmtpPasswordVersion", m_smtpPasswordVersion);

  }

  if(m_previousSmtpPasswordVersionHasBeenSet)
  {
   payload.WithString("PreviousSmtpPasswordVersion", m_previousSmtpPasswordVersion);

  }

  if(m_previousSmtpPasswordExpiryTimestampHasBeenSet)
  {
   payload.WithDouble("PreviousSmtpPasswordExpiryTimestamp", m_previousSmtpPasswordExpiryTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
