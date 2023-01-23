/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/BootstrapActionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

BootstrapActionConfig::BootstrapActionConfig() : 
    m_nameHasBeenSet(false),
    m_scriptBootstrapActionHasBeenSet(false)
{
}

BootstrapActionConfig::BootstrapActionConfig(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_scriptBootstrapActionHasBeenSet(false)
{
  *this = jsonValue;
}

BootstrapActionConfig& BootstrapActionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScriptBootstrapAction"))
  {
    m_scriptBootstrapAction = jsonValue.GetObject("ScriptBootstrapAction");

    m_scriptBootstrapActionHasBeenSet = true;
  }

  return *this;
}

JsonValue BootstrapActionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scriptBootstrapActionHasBeenSet)
  {
   payload.WithObject("ScriptBootstrapAction", m_scriptBootstrapAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
