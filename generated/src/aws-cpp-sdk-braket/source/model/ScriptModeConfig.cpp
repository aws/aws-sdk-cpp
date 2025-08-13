/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/ScriptModeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

ScriptModeConfig::ScriptModeConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ScriptModeConfig& ScriptModeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryPoint"))
  {
    m_entryPoint = jsonValue.GetString("entryPoint");
    m_entryPointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compressionType"))
  {
    m_compressionType = CompressionTypeMapper::GetCompressionTypeForName(jsonValue.GetString("compressionType"));
    m_compressionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScriptModeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_entryPointHasBeenSet)
  {
   payload.WithString("entryPoint", m_entryPoint);

  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("compressionType", CompressionTypeMapper::GetNameForCompressionType(m_compressionType));
  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
