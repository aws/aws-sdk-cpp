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
 * <p>Specifies that jobs at the maximum priority (100) are always scheduled
 * first.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SchedulingMaxPriorityOverrideAlwaysScheduleFirst">AWS
 * API Reference</a></p>
 */
class SchedulingMaxPriorityOverrideAlwaysScheduleFirst {
 public:
  AWS_DEADLINE_API SchedulingMaxPriorityOverrideAlwaysScheduleFirst() = default;
  AWS_DEADLINE_API SchedulingMaxPriorityOverrideAlwaysScheduleFirst(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API SchedulingMaxPriorityOverrideAlwaysScheduleFirst& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
