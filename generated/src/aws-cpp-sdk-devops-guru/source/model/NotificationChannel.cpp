/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/NotificationChannel.h>
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

NotificationChannel::NotificationChannel() : 
    m_idHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

NotificationChannel::NotificationChannel(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_configHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationChannel& NotificationChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Config"))
  {
    m_config = jsonValue.GetObject("Config");

    m_configHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationChannel::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_configHasBeenSet)
  {
   payload.WithObject("Config", m_config.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
