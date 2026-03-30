/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class Service {
  NOT_SET,
  github,
  slack,
  azure,
  azuredevops,
  msteams,
  dynatrace,
  servicenow,
  pagerduty,
  gitlab,
  eventChannel,
  mcpservernewrelic,
  mcpservergrafana,
  mcpserverdatadog,
  mcpserver,
  mcpserversplunk,
  azureidentity,
  mcpserversigv4
};

namespace ServiceMapper {
AWS_DEVOPSAGENT_API Service GetServiceForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForService(Service value);
}  // namespace ServiceMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
