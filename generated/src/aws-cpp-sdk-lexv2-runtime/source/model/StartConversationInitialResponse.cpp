/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/StartConversationInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

StartConversationInitialResponse::StartConversationInitialResponse()
{
}

StartConversationInitialResponse::StartConversationInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

StartConversationInitialResponse& StartConversationInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue StartConversationInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
