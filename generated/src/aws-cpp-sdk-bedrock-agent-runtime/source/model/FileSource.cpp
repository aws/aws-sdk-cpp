﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FileSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

FileSource::FileSource(JsonView jsonValue)
{
  *this = jsonValue;
}

FileSource& FileSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("byteContent"))
  {
    m_byteContent = jsonValue.GetObject("byteContent");
    m_byteContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");
    m_s3LocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = FileSourceTypeMapper::GetFileSourceTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue FileSource::Jsonize() const
{
  JsonValue payload;

  if(m_byteContentHasBeenSet)
  {
   payload.WithObject("byteContent", m_byteContent.Jsonize());

  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", FileSourceTypeMapper::GetNameForFileSourceType(m_sourceType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
