/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/BotCategory.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace BotCategoryMapper {

static const int advertising_HASH = HashingUtils::HashString("advertising");
static const int archiver_HASH = HashingUtils::HashString("archiver");
static const int content_fetcher_HASH = HashingUtils::HashString("content_fetcher");
static const int email_client_HASH = HashingUtils::HashString("email_client");
static const int http_library_HASH = HashingUtils::HashString("http_library");
static const int link_checker_HASH = HashingUtils::HashString("link_checker");
static const int miscellaneous_HASH = HashingUtils::HashString("miscellaneous");
static const int monitoring_HASH = HashingUtils::HashString("monitoring");
static const int page_preview_HASH = HashingUtils::HashString("page_preview");
static const int scraping_framework_HASH = HashingUtils::HashString("scraping_framework");
static const int search_engine_HASH = HashingUtils::HashString("search_engine");
static const int security_HASH = HashingUtils::HashString("security");
static const int seo_HASH = HashingUtils::HashString("seo");
static const int social_media_HASH = HashingUtils::HashString("social_media");
static const int ai_training_HASH = HashingUtils::HashString("ai_training");
static const int ai_search_HASH = HashingUtils::HashString("ai_search");
static const int ai_assistant_HASH = HashingUtils::HashString("ai_assistant");
static const int ai_content_optimization_HASH = HashingUtils::HashString("ai_content_optimization");

BotCategory GetBotCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == advertising_HASH) {
    return BotCategory::advertising;
  } else if (hashCode == archiver_HASH) {
    return BotCategory::archiver;
  } else if (hashCode == content_fetcher_HASH) {
    return BotCategory::content_fetcher;
  } else if (hashCode == email_client_HASH) {
    return BotCategory::email_client;
  } else if (hashCode == http_library_HASH) {
    return BotCategory::http_library;
  } else if (hashCode == link_checker_HASH) {
    return BotCategory::link_checker;
  } else if (hashCode == miscellaneous_HASH) {
    return BotCategory::miscellaneous;
  } else if (hashCode == monitoring_HASH) {
    return BotCategory::monitoring;
  } else if (hashCode == page_preview_HASH) {
    return BotCategory::page_preview;
  } else if (hashCode == scraping_framework_HASH) {
    return BotCategory::scraping_framework;
  } else if (hashCode == search_engine_HASH) {
    return BotCategory::search_engine;
  } else if (hashCode == security_HASH) {
    return BotCategory::security;
  } else if (hashCode == seo_HASH) {
    return BotCategory::seo;
  } else if (hashCode == social_media_HASH) {
    return BotCategory::social_media;
  } else if (hashCode == ai_training_HASH) {
    return BotCategory::ai_training;
  } else if (hashCode == ai_search_HASH) {
    return BotCategory::ai_search;
  } else if (hashCode == ai_assistant_HASH) {
    return BotCategory::ai_assistant;
  } else if (hashCode == ai_content_optimization_HASH) {
    return BotCategory::ai_content_optimization;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BotCategory>(hashCode);
  }

  return BotCategory::NOT_SET;
}

Aws::String GetNameForBotCategory(BotCategory enumValue) {
  switch (enumValue) {
    case BotCategory::NOT_SET:
      return {};
    case BotCategory::advertising:
      return "advertising";
    case BotCategory::archiver:
      return "archiver";
    case BotCategory::content_fetcher:
      return "content_fetcher";
    case BotCategory::email_client:
      return "email_client";
    case BotCategory::http_library:
      return "http_library";
    case BotCategory::link_checker:
      return "link_checker";
    case BotCategory::miscellaneous:
      return "miscellaneous";
    case BotCategory::monitoring:
      return "monitoring";
    case BotCategory::page_preview:
      return "page_preview";
    case BotCategory::scraping_framework:
      return "scraping_framework";
    case BotCategory::search_engine:
      return "search_engine";
    case BotCategory::security:
      return "security";
    case BotCategory::seo:
      return "seo";
    case BotCategory::social_media:
      return "social_media";
    case BotCategory::ai_training:
      return "ai_training";
    case BotCategory::ai_search:
      return "ai_search";
    case BotCategory::ai_assistant:
      return "ai_assistant";
    case BotCategory::ai_content_optimization:
      return "ai_content_optimization";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BotCategoryMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
