/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

BootstrapActionConfig::BootstrapActionConfig(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_scriptBootstrapActionHasBeenSet(false)
{
  *this = jsonValue;
}

BootstrapActionConfig& BootstrapActionConfig::operator =(const JsonValue& jsonValue)
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