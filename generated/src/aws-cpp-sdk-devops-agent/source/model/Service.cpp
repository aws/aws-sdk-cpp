/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/Service.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace ServiceMapper {

static const int github_HASH = HashingUtils::HashString("github");
static const int slack_HASH = HashingUtils::HashString("slack");
static const int azure_HASH = HashingUtils::HashString("azure");
static const int azuredevops_HASH = HashingUtils::HashString("azuredevops");
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

Service GetServiceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == github_HASH) {
    return Service::github;
  } else if (hashCode == slack_HASH) {
    return Service::slack;
  } else if (hashCode == azure_HASH) {
    return Service::azure;
  } else if (hashCode == azuredevops_HASH) {
    return Service::azuredevops;
  } else if (hashCode == dynatrace_HASH) {
    return Service::dynatrace;
  } else if (hashCode == servicenow_HASH) {
    return Service::servicenow;
  } else if (hashCode == pagerduty_HASH) {
    return Service::pagerduty;
  } else if (hashCode == gitlab_HASH) {
    return Service::gitlab;
  } else if (hashCode == eventChannel_HASH) {
    return Service::eventChannel;
  } else if (hashCode == mcpservernewrelic_HASH) {
    return Service::mcpservernewrelic;
  } else if (hashCode == mcpservergrafana_HASH) {
    return Service::mcpservergrafana;
  } else if (hashCode == mcpserverdatadog_HASH) {
    return Service::mcpserverdatadog;
  } else if (hashCode == mcpserver_HASH) {
    return Service::mcpserver;
  } else if (hashCode == mcpserversplunk_HASH) {
    return Service::mcpserversplunk;
  } else if (hashCode == azureidentity_HASH) {
    return Service::azureidentity;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Service>(hashCode);
  }

  return Service::NOT_SET;
}

Aws::String GetNameForService(Service enumValue) {
  switch (enumValue) {
    case Service::NOT_SET:
      return {};
    case Service::github:
      return "github";
    case Service::slack:
      return "slack";
    case Service::azure:
      return "azure";
    case Service::azuredevops:
      return "azuredevops";
    case Service::dynatrace:
      return "dynatrace";
    case Service::servicenow:
      return "servicenow";
    case Service::pagerduty:
      return "pagerduty";
    case Service::gitlab:
      return "gitlab";
    case Service::eventChannel:
      return "eventChannel";
    case Service::mcpservernewrelic:
      return "mcpservernewrelic";
    case Service::mcpservergrafana:
      return "mcpservergrafana";
    case Service::mcpserverdatadog:
      return "mcpserverdatadog";
    case Service::mcpserver:
      return "mcpserver";
    case Service::mcpserversplunk:
      return "mcpserversplunk";
    case Service::azureidentity:
      return "azureidentity";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
