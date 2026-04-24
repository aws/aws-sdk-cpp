/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/FairshareCapacityUsage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>The capacity utilization for a specific share in a fairshare scheduling job
 * queue, including the share identifier and its current usage.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/FairshareCapacityUtilization">AWS
 * API Reference</a></p>
 */
class FairshareCapacityUtilization {
 public:
  AWS_BATCH_API FairshareCapacityUtilization() = default;
  AWS_BATCH_API FairshareCapacityUtilization(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API FairshareCapacityUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The share identifier for the fairshare scheduling job queue.</p>
   */
  inline const Aws::String& GetShareIdentifier() const { return m_shareIdentifier; }
  inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }
  template <typename ShareIdentifierT = Aws::String>
  void SetShareIdentifier(ShareIdentifierT&& value) {
    m_shareIdentifierHasBeenSet = true;
    m_shareIdentifier = std::forward<ShareIdentifierT>(value);
  }
  template <typename ShareIdentifierT = Aws::String>
  FairshareCapacityUtilization& WithShareIdentifier(ShareIdentifierT&& value) {
    SetShareIdentifier(std::forward<ShareIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity usage information for this share, including the unit of measure
   * and quantity being used. This is <code>VCPU</code> for Amazon EC2 and
   * <code>cpu</code> for Amazon EKS.</p>
   */
  inline const Aws::Vector<FairshareCapacityUsage>& GetCapacityUsage() const { return m_capacityUsage; }
  inline bool CapacityUsageHasBeenSet() const { return m_capacityUsageHasBeenSet; }
  template <typename CapacityUsageT = Aws::Vector<FairshareCapacityUsage>>
  void SetCapacityUsage(CapacityUsageT&& value) {
    m_capacityUsageHasBeenSet = true;
    m_capacityUsage = std::forward<CapacityUsageT>(value);
  }
  template <typename CapacityUsageT = Aws::Vector<FairshareCapacityUsage>>
  FairshareCapacityUtilization& WithCapacityUsage(CapacityUsageT&& value) {
    SetCapacityUsage(std::forward<CapacityUsageT>(value));
    return *this;
  }
  template <typename CapacityUsageT = FairshareCapacityUsage>
  FairshareCapacityUtilization& AddCapacityUsage(CapacityUsageT&& value) {
    m_capacityUsageHasBeenSet = true;
    m_capacityUsage.emplace_back(std::forward<CapacityUsageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_shareIdentifier;

  Aws::Vector<FairshareCapacityUsage> m_capacityUsage;
  bool m_shareIdentifierHasBeenSet = false;
  bool m_capacityUsageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
