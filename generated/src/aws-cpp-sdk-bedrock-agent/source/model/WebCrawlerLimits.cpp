/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/WebCrawlerLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

WebCrawlerLimits::WebCrawlerLimits() : 
    m_maxPages(0),
    m_maxPagesHasBeenSet(false),
    m_rateLimit(0),
    m_rateLimitHasBeenSet(false)
{
}

WebCrawlerLimits::WebCrawlerLimits(JsonView jsonValue)
  : WebCrawlerLimits()
{
  *this = jsonValue;
}

WebCrawlerLimits& WebCrawlerLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxPages"))
  {
    m_maxPages = jsonValue.GetInteger("maxPages");

    m_maxPagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateLimit"))
  {
    m_rateLimit = jsonValue.GetInteger("rateLimit");

    m_rateLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue WebCrawlerLimits::Jsonize() const
{
  JsonValue payload;

  if(m_maxPagesHasBeenSet)
  {
   payload.WithInteger("maxPages", m_maxPages);

  }

  if(m_rateLimitHasBeenSet)
  {
   payload.WithInteger("rateLimit", m_rateLimit);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
