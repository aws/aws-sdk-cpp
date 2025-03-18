/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressPointAuthConfiguration.h>
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

IngressPointAuthConfiguration::IngressPointAuthConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IngressPointAuthConfiguration& IngressPointAuthConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IngressPointPasswordConfiguration"))
  {
    m_ingressPointPasswordConfiguration = jsonValue.GetObject("IngressPointPasswordConfiguration");
    m_ingressPointPasswordConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IngressPointAuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ingressPointPasswordConfigurationHasBeenSet)
  {
   payload.WithObject("IngressPointPasswordConfiguration", m_ingressPointPasswordConfiguration.Jsonize());

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
