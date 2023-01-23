/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_timeoutHasBeenSet(false),
    m_functionRuntimeOverrideHasBeenSet(false)
{
}

FunctionConfiguration::FunctionConfiguration(JsonView jsonValue) : 
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
    m_timeoutHasBeenSet(false),
    m_functionRuntimeOverrideHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionConfiguration& FunctionConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("FunctionRuntimeOverride"))
  {
    m_functionRuntimeOverride = jsonValue.GetString("FunctionRuntimeOverride");

    m_functionRuntimeOverrideHasBeenSet = true;
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

  if(m_functionRuntimeOverrideHasBeenSet)
  {
   payload.WithString("FunctionRuntimeOverride", m_functionRuntimeOverride);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
