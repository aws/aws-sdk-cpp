/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistry {
namespace Model {
enum class BotCategory {
  NOT_SET,
  advertising,
  archiver,
  content_fetcher,
  email_client,
  http_library,
  link_checker,
  miscellaneous,
  monitoring,
  page_preview,
  scraping_framework,
  search_engine,
  security,
  seo,
  social_media,
  ai_training,
  ai_search,
  ai_assistant,
  ai_content_optimization
};

namespace BotCategoryMapper {
AWS_AGENTREGISTRY_API BotCategory GetBotCategoryForName(const Aws::String& name);

AWS_AGENTREGISTRY_API Aws::String GetNameForBotCategory(BotCategory value);
}  // namespace BotCategoryMapper
}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
