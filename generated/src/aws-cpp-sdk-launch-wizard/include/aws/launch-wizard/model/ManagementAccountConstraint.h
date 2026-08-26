/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LaunchWizard {
namespace Model {

/**
 * <p>The deployment must be initiated from the AWS Organizations management
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/ManagementAccountConstraint">AWS
 * API Reference</a></p>
 */
class ManagementAccountConstraint {
 public:
  AWS_LAUNCHWIZARD_API ManagementAccountConstraint() = default;
  AWS_LAUNCHWIZARD_API ManagementAccountConstraint(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API ManagementAccountConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
