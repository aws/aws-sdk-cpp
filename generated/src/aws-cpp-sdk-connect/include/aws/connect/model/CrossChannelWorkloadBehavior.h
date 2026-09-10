/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ChannelWorkloadBehaviorType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Defines the cross-channel and workload type routing behavior that allows an
 * agent working on a contact to be offered a contact from a different channel or
 * workload type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CrossChannelWorkloadBehavior">AWS
 * API Reference</a></p>
 */
class CrossChannelWorkloadBehavior {
 public:
  AWS_CONNECT_API CrossChannelWorkloadBehavior() = default;
  AWS_CONNECT_API CrossChannelWorkloadBehavior(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API CrossChannelWorkloadBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the routing behavior for an agent handling their current channel
   * and workload type.</p>
   */
  inline ChannelWorkloadBehaviorType GetChannelWorkloadBehaviorType() const { return m_channelWorkloadBehaviorType; }
  inline bool ChannelWorkloadBehaviorTypeHasBeenSet() const { return m_channelWorkloadBehaviorTypeHasBeenSet; }
  inline void SetChannelWorkloadBehaviorType(ChannelWorkloadBehaviorType value) {
    m_channelWorkloadBehaviorTypeHasBeenSet = true;
    m_channelWorkloadBehaviorType = value;
  }
  inline CrossChannelWorkloadBehavior& WithChannelWorkloadBehaviorType(ChannelWorkloadBehaviorType value) {
    SetChannelWorkloadBehaviorType(value);
    return *this;
  }
  ///@}
 private:
  ChannelWorkloadBehaviorType m_channelWorkloadBehaviorType{ChannelWorkloadBehaviorType::NOT_SET};
  bool m_channelWorkloadBehaviorTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
