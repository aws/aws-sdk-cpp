/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ContainerImagePullDateRescanDuration.h>
#include <aws/inspector2/model/ContainerImageRescanDuration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The container image scanning settings for a connector, including how long
 * pushed and pulled images continue to be rescanned for
 * vulnerabilities.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ConnectorContainerImageScanConfiguration">AWS
 * API Reference</a></p>
 */
class ConnectorContainerImageScanConfiguration {
 public:
  AWS_INSPECTOR2_API ConnectorContainerImageScanConfiguration() = default;
  AWS_INSPECTOR2_API ConnectorContainerImageScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ConnectorContainerImageScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The amount of time after a container image is pushed to a repository during
   * which Amazon Inspector continues to rescan the image for vulnerabilities. Valid
   * values are <code>LIFETIME</code>, <code>DAYS_3</code>, <code>DAYS_7</code>,
   * <code>DAYS_14</code>, <code>DAYS_30</code>, <code>DAYS_60</code>,
   * <code>DAYS_90</code>, and <code>DAYS_180</code>.</p>
   */
  inline ContainerImageRescanDuration GetPushDuration() const { return m_pushDuration; }
  inline bool PushDurationHasBeenSet() const { return m_pushDurationHasBeenSet; }
  inline void SetPushDuration(ContainerImageRescanDuration value) {
    m_pushDurationHasBeenSet = true;
    m_pushDuration = value;
  }
  inline ConnectorContainerImageScanConfiguration& WithPushDuration(ContainerImageRescanDuration value) {
    SetPushDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time after a container image is last pulled from a repository
   * during which Amazon Inspector continues to rescan the image for vulnerabilities.
   * Valid values are <code>DAYS_3</code>, <code>DAYS_7</code>, <code>DAYS_14</code>,
   * <code>DAYS_30</code>, <code>DAYS_60</code>, <code>DAYS_90</code>, and
   * <code>DAYS_180</code>.</p>
   */
  inline ContainerImagePullDateRescanDuration GetPullDuration() const { return m_pullDuration; }
  inline bool PullDurationHasBeenSet() const { return m_pullDurationHasBeenSet; }
  inline void SetPullDuration(ContainerImagePullDateRescanDuration value) {
    m_pullDurationHasBeenSet = true;
    m_pullDuration = value;
  }
  inline ConnectorContainerImageScanConfiguration& WithPullDuration(ContainerImagePullDateRescanDuration value) {
    SetPullDuration(value);
    return *this;
  }
  ///@}
 private:
  ContainerImageRescanDuration m_pushDuration{ContainerImageRescanDuration::NOT_SET};

  ContainerImagePullDateRescanDuration m_pullDuration{ContainerImagePullDateRescanDuration::NOT_SET};
  bool m_pushDurationHasBeenSet = false;
  bool m_pullDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
