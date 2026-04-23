/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/robomaker/model/RenderingEngine.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

RenderingEngine::RenderingEngine() : 
    m_name(RenderingEngineType::NOT_SET),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

RenderingEngine::RenderingEngine(JsonView jsonValue) : 
    m_name(RenderingEngineType::NOT_SET),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

RenderingEngine& RenderingEngine::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = RenderingEngineTypeMapper::GetRenderingEngineTypeForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue RenderingEngine::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", RenderingEngineTypeMapper::GetNameForRenderingEngineType(m_name));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
