/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/StartConversationInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

StartConversationInitialResponse::StartConversationInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

StartConversationInitialResponse& StartConversationInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

StartConversationInitialResponse::StartConversationInitialResponse(const Http::HeaderValueCollection& headers) : StartConversationInitialResponse()
{
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue StartConversationInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
