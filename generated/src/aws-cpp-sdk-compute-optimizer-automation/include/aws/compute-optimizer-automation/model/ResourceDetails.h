/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/EbsVolume.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Detailed configuration information for a specific Amazon Web Services
 * resource, with type-specific details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ResourceDetails">AWS
 * API Reference</a></p>
 */
class ResourceDetails {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ResourceDetails() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Detailed configuration information specific to EBS volumes, including volume
   * type, size, IOPS, and throughput settings.</p>
   */
  inline const EbsVolume& GetEbsVolume() const { return m_ebsVolume; }
  inline bool EbsVolumeHasBeenSet() const { return m_ebsVolumeHasBeenSet; }
  template <typename EbsVolumeT = EbsVolume>
  void SetEbsVolume(EbsVolumeT&& value) {
    m_ebsVolumeHasBeenSet = true;
    m_ebsVolume = std::forward<EbsVolumeT>(value);
  }
  template <typename EbsVolumeT = EbsVolume>
  ResourceDetails& WithEbsVolume(EbsVolumeT&& value) {
    SetEbsVolume(std::forward<EbsVolumeT>(value));
    return *this;
  }
  ///@}
 private:
  EbsVolume m_ebsVolume;
  bool m_ebsVolumeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
