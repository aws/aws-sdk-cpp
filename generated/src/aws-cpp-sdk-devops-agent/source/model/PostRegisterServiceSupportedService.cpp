/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/PostRegisterServiceSupportedService.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace PostRegisterServiceSupportedServiceMapper {

static const int dynatrace_HASH = HashingUtils::HashString("dynatrace");
static const int servicenow_HASH = HashingUtils::HashString("servicenow");
static const int pagerduty_HASH = HashingUtils::HashString("pagerduty");
static const int gitlab_HASH = HashingUtils::HashString("gitlab");
static const int eventChannel_HASH = HashingUtils::HashString("eventChannel");
static const int mcpservernewrelic_HASH = HashingUtils::HashString("mcpservernewrelic");
static const int mcpservergrafana_HASH = HashingUtils::HashString("mcpservergrafana");
static const int mcpserverdatadog_HASH = HashingUtils::HashString("mcpserverdatadog");
static const int mcpserver_HASH = HashingUtils::HashString("mcpserver");
static const int mcpserversplunk_HASH = HashingUtils::HashString("mcpserversplunk");
static const int azureidentity_HASH = HashingUtils::HashString("azureidentity");

PostRegisterServiceSupportedService GetPostRegisterServiceSupportedServiceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == dynatrace_HASH) {
    return PostRegisterServiceSupportedService::dynatrace;
  } else if (hashCode == servicenow_HASH) {
    return PostRegisterServiceSupportedService::servicenow;
  } else if (hashCode == pagerduty_HASH) {
    return PostRegisterServiceSupportedService::pagerduty;
  } else if (hashCode == gitlab_HASH) {
    return PostRegisterServiceSupportedService::gitlab;
  } else if (hashCode == eventChannel_HASH) {
    return PostRegisterServiceSupportedService::eventChannel;
  } else if (hashCode == mcpservernewrelic_HASH) {
    return PostRegisterServiceSupportedService::mcpservernewrelic;
  } else if (hashCode == mcpservergrafana_HASH) {
    return PostRegisterServiceSupportedService::mcpservergrafana;
  } else if (hashCode == mcpserverdatadog_HASH) {
    return PostRegisterServiceSupportedService::mcpserverdatadog;
  } else if (hashCode == mcpserver_HASH) {
    return PostRegisterServiceSupportedService::mcpserver;
  } else if (hashCode == mcpserversplunk_HASH) {
    return PostRegisterServiceSupportedService::mcpserversplunk;
  } else if (hashCode == azureidentity_HASH) {
    return PostRegisterServiceSupportedService::azureidentity;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PostRegisterServiceSupportedService>(hashCode);
  }

  return PostRegisterServiceSupportedService::NOT_SET;
}

Aws::String GetNameForPostRegisterServiceSupportedService(PostRegisterServiceSupportedService enumValue) {
  switch (enumValue) {
    case PostRegisterServiceSupportedService::NOT_SET:
      return {};
    case PostRegisterServiceSupportedService::dynatrace:
      return "dynatrace";
    case PostRegisterServiceSupportedService::servicenow:
      return "servicenow";
    case PostRegisterServiceSupportedService::pagerduty:
      return "pagerduty";
    case PostRegisterServiceSupportedService::gitlab:
      return "gitlab";
    case PostRegisterServiceSupportedService::eventChannel:
      return "eventChannel";
    case PostRegisterServiceSupportedService::mcpservernewrelic:
      return "mcpservernewrelic";
    case PostRegisterServiceSupportedService::mcpservergrafana:
      return "mcpservergrafana";
    case PostRegisterServiceSupportedService::mcpserverdatadog:
      return "mcpserverdatadog";
    case PostRegisterServiceSupportedService::mcpserver:
      return "mcpserver";
    case PostRegisterServiceSupportedService::mcpserversplunk:
      return "mcpserversplunk";
    case PostRegisterServiceSupportedService::azureidentity:
      return "azureidentity";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PostRegisterServiceSupportedServiceMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
