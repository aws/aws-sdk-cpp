/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QuickConnectConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

QuickConnectConfig::QuickConnectConfig() : 
    m_quickConnectType(QuickConnectType::NOT_SET),
    m_quickConnectTypeHasBeenSet(false),
    m_userConfigHasBeenSet(false),
    m_queueConfigHasBeenSet(false),
    m_phoneConfigHasBeenSet(false)
{
}

QuickConnectConfig::QuickConnectConfig(JsonView jsonValue) : 
    m_quickConnectType(QuickConnectType::NOT_SET),
    m_quickConnectTypeHasBeenSet(false),
    m_userConfigHasBeenSet(false),
    m_queueConfigHasBeenSet(false),
    m_phoneConfigHasBeenSet(false)
{
  *this = jsonValue;
}

QuickConnectConfig& QuickConnectConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuickConnectType"))
  {
    m_quickConnectType = QuickConnectTypeMapper::GetQuickConnectTypeForName(jsonValue.GetString("QuickConnectType"));

    m_quickConnectTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserConfig"))
  {
    m_userConfig = jsonValue.GetObject("UserConfig");

    m_userConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueConfig"))
  {
    m_queueConfig = jsonValue.GetObject("QueueConfig");

    m_queueConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneConfig"))
  {
    m_phoneConfig = jsonValue.GetObject("PhoneConfig");

    m_phoneConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue QuickConnectConfig::Jsonize() const
{
  JsonValue payload;

  if(m_quickConnectTypeHasBeenSet)
  {
   payload.WithString("QuickConnectType", QuickConnectTypeMapper::GetNameForQuickConnectType(m_quickConnectType));
  }

  if(m_userConfigHasBeenSet)
  {
   payload.WithObject("UserConfig", m_userConfig.Jsonize());

  }

  if(m_queueConfigHasBeenSet)
  {
   payload.WithObject("QueueConfig", m_queueConfig.Jsonize());

  }

  if(m_phoneConfigHasBeenSet)
  {
   payload.WithObject("PhoneConfig", m_phoneConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
