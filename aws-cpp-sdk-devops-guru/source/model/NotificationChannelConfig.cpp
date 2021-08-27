/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/NotificationChannelConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

NotificationChannelConfig::NotificationChannelConfig() : 
    m_snsHasBeenSet(false)
{
}

NotificationChannelConfig::NotificationChannelConfig(JsonView jsonValue) : 
    m_snsHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationChannelConfig& NotificationChannelConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sns"))
  {
    m_sns = jsonValue.GetObject("Sns");

    m_snsHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationChannelConfig::Jsonize() const
{
  JsonValue payload;

  if(m_snsHasBeenSet)
  {
   payload.WithObject("Sns", m_sns.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
