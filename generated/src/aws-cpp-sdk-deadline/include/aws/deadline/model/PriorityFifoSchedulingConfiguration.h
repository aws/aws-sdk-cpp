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
 * <p>Configuration for priority first-in, first-out (FIFO) scheduling. Workers are
 * assigned to the highest-priority job first. When multiple jobs share the same
 * priority, the job submitted earliest receives workers first.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/PriorityFifoSchedulingConfiguration">AWS
 * API Reference</a></p>
 */
class PriorityFifoSchedulingConfiguration {
 public:
  AWS_DEADLINE_API PriorityFifoSchedulingConfiguration() = default;
  AWS_DEADLINE_API PriorityFifoSchedulingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API PriorityFifoSchedulingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
