/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/InvokeAssistantInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

InvokeAssistantInitialResponse::InvokeAssistantInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

InvokeAssistantInitialResponse& InvokeAssistantInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeAssistantInitialResponse::InvokeAssistantInitialResponse(const Http::HeaderValueCollection& headers) : InvokeAssistantInitialResponse()
{
  const auto& conversationIdIter = headers.find("x-amz-iotsitewise-assistant-conversation-id");
  if(conversationIdIter != headers.end())
  {
    m_conversationId = conversationIdIter->second;
    m_conversationIdHasBeenSet = true;
  }

}

JsonValue InvokeAssistantInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
