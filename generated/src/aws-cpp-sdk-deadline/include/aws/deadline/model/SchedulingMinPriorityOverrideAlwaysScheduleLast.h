/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>Specifies that jobs at the minimum priority (0) are always scheduled
 * last.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SchedulingMinPriorityOverrideAlwaysScheduleLast">AWS
 * API Reference</a></p>
 */
class SchedulingMinPriorityOverrideAlwaysScheduleLast {
 public:
  AWS_DEADLINE_API SchedulingMinPriorityOverrideAlwaysScheduleLast() = default;
  AWS_DEADLINE_API SchedulingMinPriorityOverrideAlwaysScheduleLast(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API SchedulingMinPriorityOverrideAlwaysScheduleLast& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
