/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressPointConfiguration.h>
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

IngressPointConfiguration::IngressPointConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IngressPointConfiguration& IngressPointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SmtpPassword"))
  {
    m_smtpPassword = jsonValue.GetString("SmtpPassword");
    m_smtpPasswordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IngressPointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_smtpPasswordHasBeenSet)
  {
   payload.WithString("SmtpPassword", m_smtpPassword);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
