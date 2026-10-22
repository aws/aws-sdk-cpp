/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/AutoScalingGroupConfiguration.h>

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
 * <p>Settings for building on an instance that is already running, instead of an
 * instance that Image Builder launches for the build.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ParentInstanceConfiguration">AWS
 * API Reference</a></p>
 */
class ParentInstanceConfiguration {
 public:
  AWS_IMAGEBUILDER_API ParentInstanceConfiguration() = default;
  AWS_IMAGEBUILDER_API ParentInstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API ParentInstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon EC2 Auto Scaling group that Image Builder takes the build instance
   * from. This is required when you specify <code>parentInstance</code>.</p>
   */
  inline const AutoScalingGroupConfiguration& GetAutoScalingGroup() const { return m_autoScalingGroup; }
  inline bool AutoScalingGroupHasBeenSet() const { return m_autoScalingGroupHasBeenSet; }
  template <typename AutoScalingGroupT = AutoScalingGroupConfiguration>
  void SetAutoScalingGroup(AutoScalingGroupT&& value) {
    m_autoScalingGroupHasBeenSet = true;
    m_autoScalingGroup = std::forward<AutoScalingGroupT>(value);
  }
  template <typename AutoScalingGroupT = AutoScalingGroupConfiguration>
  ParentInstanceConfiguration& WithAutoScalingGroup(AutoScalingGroupT&& value) {
    SetAutoScalingGroup(std::forward<AutoScalingGroupT>(value));
    return *this;
  }
  ///@}
 private:
  AutoScalingGroupConfiguration m_autoScalingGroup;
  bool m_autoScalingGroupHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
