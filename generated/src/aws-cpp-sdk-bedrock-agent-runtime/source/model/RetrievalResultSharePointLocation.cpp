﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultSharePointLocation.h>
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

RetrievalResultSharePointLocation::RetrievalResultSharePointLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrievalResultSharePointLocation& RetrievalResultSharePointLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalResultSharePointLocation::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
