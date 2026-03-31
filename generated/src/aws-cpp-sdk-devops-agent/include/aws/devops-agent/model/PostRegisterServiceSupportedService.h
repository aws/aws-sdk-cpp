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
enum class PostRegisterServiceSupportedService {
  NOT_SET,
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
  azureidentity
};

namespace PostRegisterServiceSupportedServiceMapper {
AWS_DEVOPSAGENT_API PostRegisterServiceSupportedService GetPostRegisterServiceSupportedServiceForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForPostRegisterServiceSupportedService(PostRegisterServiceSupportedService value);
}  // namespace PostRegisterServiceSupportedServiceMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
