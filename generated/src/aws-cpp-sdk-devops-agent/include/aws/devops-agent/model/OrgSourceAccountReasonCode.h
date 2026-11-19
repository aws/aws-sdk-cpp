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
enum class OrgSourceAccountReasonCode {
  NOT_SET,
  accountSuspended,
  accountNotInScope,
  managementAccountNotSupported,
  stackInstanceInoperable,
  accessDenied,
  deploymentFailed,
  secondaryAccountLimitExceeded
};

namespace OrgSourceAccountReasonCodeMapper {
AWS_DEVOPSAGENT_API OrgSourceAccountReasonCode GetOrgSourceAccountReasonCodeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForOrgSourceAccountReasonCode(OrgSourceAccountReasonCode value);
}  // namespace OrgSourceAccountReasonCodeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
