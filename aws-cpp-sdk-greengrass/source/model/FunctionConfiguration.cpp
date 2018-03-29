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

#include <aws/greengrass/model/FunctionConfiguration.h>
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

FunctionConfiguration::FunctionConfiguration() : 
    m_encodingType(EncodingType::NOT_SET),
    m_encodingTypeHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_execArgsHasBeenSet(false),
    m_executableHasBeenSet(false),
    m_memorySize(0),
    m_memorySizeHasBeenSet(false),
    m_pinned(false),
    m_pinnedHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
}

FunctionConfiguration::FunctionConfiguration(const JsonValue& jsonValue) : 
    m_encodingType(EncodingType::NOT_SET),
    m_encodingTypeHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_execArgsHasBeenSet(false),
    m_executableHasBeenSet(false),
    m_memorySize(0),
    m_memorySizeHasBeenSet(false),
    m_pinned(false),
    m_pinnedHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionConfiguration& FunctionConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EncodingType"))
  {
    m_encodingType = EncodingTypeMapper::GetEncodingTypeForName(jsonValue.GetString("EncodingType"));

    m_encodingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    m_environment = jsonValue.GetObject("Environment");

    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecArgs"))
  {
    m_execArgs = jsonValue.GetString("ExecArgs");

    m_execArgsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Executable"))
  {
    m_executable = jsonValue.GetString("Executable");

    m_executableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemorySize"))
  {
    m_memorySize = jsonValue.GetInteger("MemorySize");

    m_memorySizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pinned"))
  {
    m_pinned = jsonValue.GetBool("Pinned");

    m_pinnedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

    m_timeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_encodingTypeHasBeenSet)
  {
   payload.WithString("EncodingType", EncodingTypeMapper::GetNameForEncodingType(m_encodingType));
  }

  if(m_environmentHasBeenSet)
  {
   payload.WithObject("Environment", m_environment.Jsonize());

  }

  if(m_execArgsHasBeenSet)
  {
   payload.WithString("ExecArgs", m_execArgs);

  }

  if(m_executableHasBeenSet)
  {
   payload.WithString("Executable", m_executable);

  }

  if(m_memorySizeHasBeenSet)
  {
   payload.WithInteger("MemorySize", m_memorySize);

  }

  if(m_pinnedHasBeenSet)
  {
   payload.WithBool("Pinned", m_pinned);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
