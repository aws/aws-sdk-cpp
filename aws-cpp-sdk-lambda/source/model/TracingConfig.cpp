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

#include <aws/lambda/model/TracingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

TracingConfig::TracingConfig() : 
    m_mode(TracingMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

TracingConfig::TracingConfig(const JsonValue& jsonValue) : 
    m_mode(TracingMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

TracingConfig& TracingConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = TracingModeMapper::GetTracingModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue TracingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", TracingModeMapper::GetNameForTracingMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws