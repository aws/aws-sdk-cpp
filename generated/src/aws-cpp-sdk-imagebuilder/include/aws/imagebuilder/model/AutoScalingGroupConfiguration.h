/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>Identifies the Amazon EC2 Auto Scaling group that Image Builder takes the
 * build instance from, and how long Image Builder waits when the group has no
 * instance available.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/AutoScalingGroupConfiguration">AWS
 * API Reference</a></p>
 */
class AutoScalingGroupConfiguration {
 public:
  AWS_IMAGEBUILDER_API AutoScalingGroupConfiguration() = default;
  AWS_IMAGEBUILDER_API AutoScalingGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API AutoScalingGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Auto Scaling group, in the same account and Amazon Web
   * Services Region as the infrastructure configuration. To specify a group, you
   * must have permissions to describe it.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AutoScalingGroupConfiguration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds that Image Builder waits for an instance to become
   * available in the group before the build fails. If you set this value to 0 or
   * omit it, the build fails as soon as the group has no instance available.</p>
   */
  inline int GetCapacityWaitTimeoutSeconds() const { return m_capacityWaitTimeoutSeconds; }
  inline bool CapacityWaitTimeoutSecondsHasBeenSet() const { return m_capacityWaitTimeoutSecondsHasBeenSet; }
  inline void SetCapacityWaitTimeoutSeconds(int value) {
    m_capacityWaitTimeoutSecondsHasBeenSet = true;
    m_capacityWaitTimeoutSeconds = value;
  }
  inline AutoScalingGroupConfiguration& WithCapacityWaitTimeoutSeconds(int value) {
    SetCapacityWaitTimeoutSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  int m_capacityWaitTimeoutSeconds{0};
  bool m_nameHasBeenSet = false;
  bool m_capacityWaitTimeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
