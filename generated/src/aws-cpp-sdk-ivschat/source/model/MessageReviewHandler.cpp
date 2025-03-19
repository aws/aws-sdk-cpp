/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/MessageReviewHandler.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivschat
{
namespace Model
{

MessageReviewHandler::MessageReviewHandler(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageReviewHandler& MessageReviewHandler::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fallbackResult"))
  {
    m_fallbackResult = FallbackResultMapper::GetFallbackResultForName(jsonValue.GetString("fallbackResult"));
    m_fallbackResultHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageReviewHandler::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_fallbackResultHasBeenSet)
  {
   payload.WithString("fallbackResult", FallbackResultMapper::GetNameForFallbackResult(m_fallbackResult));
  }

  return payload;
}

} // namespace Model
} // namespace ivschat
} // namespace Aws
