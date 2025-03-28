﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/PayloadPart.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

PayloadPart::PayloadPart(JsonView jsonValue)
{
  *this = jsonValue;
}

PayloadPart& PayloadPart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bytes"))
  {
    m_bytes = HashingUtils::Base64Decode(jsonValue.GetString("bytes"));
    m_bytesHasBeenSet = true;
  }
  return *this;
}

JsonValue PayloadPart::Jsonize() const
{
  JsonValue payload;

  if(m_bytesHasBeenSet)
  {
   payload.WithString("bytes", HashingUtils::Base64Encode(m_bytes));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
