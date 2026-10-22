/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>The type for a periodically emitted event to keep the connection
 * alive.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/HeartbeatEvent">AWS
 * API Reference</a></p>
 */
class HeartbeatEvent {
 public:
  AWS_HEALTHLAKE_API HeartbeatEvent() = default;
  AWS_HEALTHLAKE_API HeartbeatEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API HeartbeatEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
