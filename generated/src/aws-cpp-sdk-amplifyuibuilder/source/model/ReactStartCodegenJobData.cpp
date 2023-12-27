/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ReactStartCodegenJobData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ReactStartCodegenJobData::ReactStartCodegenJobData() : 
    m_module(JSModule::NOT_SET),
    m_moduleHasBeenSet(false),
    m_target(JSTarget::NOT_SET),
    m_targetHasBeenSet(false),
    m_script(JSScript::NOT_SET),
    m_scriptHasBeenSet(false),
    m_renderTypeDeclarations(false),
    m_renderTypeDeclarationsHasBeenSet(false),
    m_inlineSourceMap(false),
    m_inlineSourceMapHasBeenSet(false),
    m_apiConfigurationHasBeenSet(false),
    m_dependenciesHasBeenSet(false)
{
}

ReactStartCodegenJobData::ReactStartCodegenJobData(JsonView jsonValue) : 
    m_module(JSModule::NOT_SET),
    m_moduleHasBeenSet(false),
    m_target(JSTarget::NOT_SET),
    m_targetHasBeenSet(false),
    m_script(JSScript::NOT_SET),
    m_scriptHasBeenSet(false),
    m_renderTypeDeclarations(false),
    m_renderTypeDeclarationsHasBeenSet(false),
    m_inlineSourceMap(false),
    m_inlineSourceMapHasBeenSet(false),
    m_apiConfigurationHasBeenSet(false),
    m_dependenciesHasBeenSet(false)
{
  *this = jsonValue;
}

ReactStartCodegenJobData& ReactStartCodegenJobData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("module"))
  {
    m_module = JSModuleMapper::GetJSModuleForName(jsonValue.GetString("module"));

    m_moduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = JSTargetMapper::GetJSTargetForName(jsonValue.GetString("target"));

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("script"))
  {
    m_script = JSScriptMapper::GetJSScriptForName(jsonValue.GetString("script"));

    m_scriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renderTypeDeclarations"))
  {
    m_renderTypeDeclarations = jsonValue.GetBool("renderTypeDeclarations");

    m_renderTypeDeclarationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inlineSourceMap"))
  {
    m_inlineSourceMap = jsonValue.GetBool("inlineSourceMap");

    m_inlineSourceMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiConfiguration"))
  {
    m_apiConfiguration = jsonValue.GetObject("apiConfiguration");

    m_apiConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dependencies"))
  {
    Aws::Map<Aws::String, JsonView> dependenciesJsonMap = jsonValue.GetObject("dependencies").GetAllObjects();
    for(auto& dependenciesItem : dependenciesJsonMap)
    {
      m_dependencies[dependenciesItem.first] = dependenciesItem.second.AsString();
    }
    m_dependenciesHasBeenSet = true;
  }

  return *this;
}

JsonValue ReactStartCodegenJobData::Jsonize() const
{
  JsonValue payload;

  if(m_moduleHasBeenSet)
  {
   payload.WithString("module", JSModuleMapper::GetNameForJSModule(m_module));
  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", JSTargetMapper::GetNameForJSTarget(m_target));
  }

  if(m_scriptHasBeenSet)
  {
   payload.WithString("script", JSScriptMapper::GetNameForJSScript(m_script));
  }

  if(m_renderTypeDeclarationsHasBeenSet)
  {
   payload.WithBool("renderTypeDeclarations", m_renderTypeDeclarations);

  }

  if(m_inlineSourceMapHasBeenSet)
  {
   payload.WithBool("inlineSourceMap", m_inlineSourceMap);

  }

  if(m_apiConfigurationHasBeenSet)
  {
   payload.WithObject("apiConfiguration", m_apiConfiguration.Jsonize());

  }

  if(m_dependenciesHasBeenSet)
  {
   JsonValue dependenciesJsonMap;
   for(auto& dependenciesItem : m_dependencies)
   {
     dependenciesJsonMap.WithString(dependenciesItem.first, dependenciesItem.second);
   }
   payload.WithObject("dependencies", std::move(dependenciesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
