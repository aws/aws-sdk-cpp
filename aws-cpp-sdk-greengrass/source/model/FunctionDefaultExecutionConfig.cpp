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

#include <aws/greengrass/model/FunctionDefaultExecutionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

FunctionDefaultExecutionConfig::FunctionDefaultExecutionConfig() : 
    m_isolationMode(FunctionIsolationMode::NOT_SET),
    m_isolationModeHasBeenSet(false),
    m_runAsHasBeenSet(false)
{
}

FunctionDefaultExecutionConfig::FunctionDefaultExecutionConfig(JsonView jsonValue) : 
    m_isolationMode(FunctionIsolationMode::NOT_SET),
    m_isolationModeHasBeenSet(false),
    m_runAsHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionDefaultExecutionConfig& FunctionDefaultExecutionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsolationMode"))
  {
    m_isolationMode = FunctionIsolationModeMapper::GetFunctionIsolationModeForName(jsonValue.GetString("IsolationMode"));

    m_isolationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunAs"))
  {
    m_runAs = jsonValue.GetObject("RunAs");

    m_runAsHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionDefaultExecutionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_isolationModeHasBeenSet)
  {
   payload.WithString("IsolationMode", FunctionIsolationModeMapper::GetNameForFunctionIsolationMode(m_isolationMode));
  }

  if(m_runAsHasBeenSet)
  {
   payload.WithObject("RunAs", m_runAs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
