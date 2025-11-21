/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Configuration details for an Amazon EBS volume.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/EbsVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class EbsVolumeConfiguration {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API EbsVolumeConfiguration() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API EbsVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API EbsVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The EBS volume type, such as gp2, gp3, io1, io2, st1, or sc1.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  EbsVolumeConfiguration& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the EBS volume in gibibytes (GiB).</p>
   */
  inline int GetSizeInGib() const { return m_sizeInGib; }
  inline bool SizeInGibHasBeenSet() const { return m_sizeInGibHasBeenSet; }
  inline void SetSizeInGib(int value) {
    m_sizeInGibHasBeenSet = true;
    m_sizeInGib = value;
  }
  inline EbsVolumeConfiguration& WithSizeInGib(int value) {
    SetSizeInGib(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of I/O operations per second (IOPS) provisioned for the
   * volume.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline EbsVolumeConfiguration& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throughput in MiB/s provisioned for the volume (applicable to gp3, io1,
   * and io2bx volumes).</p>
   */
  inline int GetThroughput() const { return m_throughput; }
  inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
  inline void SetThroughput(int value) {
    m_throughputHasBeenSet = true;
    m_throughput = value;
  }
  inline EbsVolumeConfiguration& WithThroughput(int value) {
    SetThroughput(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;
  bool m_typeHasBeenSet = false;

  int m_sizeInGib{0};
  bool m_sizeInGibHasBeenSet = false;

  int m_iops{0};
  bool m_iopsHasBeenSet = false;

  int m_throughput{0};
  bool m_throughputHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
