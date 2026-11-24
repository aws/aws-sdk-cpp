/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionFilterName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>A filter used to narrow down recommended action results based on specific
 * criteria. If a filter has more than one value, a recommended action matches the
 * filter when it matches any of the values. If you specify more than one filter, a
 * recommended action must match all of the filters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/RecommendedActionFilter">AWS
 * API Reference</a></p>
 */
class RecommendedActionFilter {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionFilter() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionFilter& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the filter field to apply.</p>
   */
  inline RecommendedActionFilterName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(RecommendedActionFilterName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline RecommendedActionFilter& WithName(RecommendedActionFilterName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of values to filter by for the specified filter name. Wildcards
   * aren't supported. An asterisk (<code>*</code>) or a question mark
   * (<code>?</code>) in a value matches only that literal character. How a value is
   * matched depends on the filter name:</p> <dl> <dt>ResourceType,
   * RecommendedActionType, ResourceId, and AccountId</dt> <dd> <p>The value that you
   * specify must exactly match the corresponding field of the recommended action,
   * including case. For example, specify <code>EbsVolume</code>, not
   * <code>ebsvolume</code>.</p> </dd> <dt>CurrentResourceDetailsEbsVolumeType</dt>
   * <dd> <p>Matches when the value appears anywhere in the current resource details
   * of the recommended action, which include the volume type, size, IOPS, and
   * throughput. Matching is case sensitive, and a partial value also matches. For
   * example, <code>gp</code> matches both <code>gp2</code> and <code>gp3</code>
   * volumes, and <code>100</code> matches any volume whose size, IOPS, or throughput
   * contains 100. To filter by volume type, specify the complete volume type, such
   * as <code>gp3</code> or <code>io2</code>.</p> </dd> <dt>ResourceTagsKey and
   * ResourceTagsValue</dt> <dd> <p>Matches when the value appears anywhere in the
   * tags of the resource. Both filter names search every tag key and tag value.
   * Matching is case sensitive, and a partial value also matches. For example, a
   * <code>ResourceTagsKey</code> value of <code>test</code> matches a resource that
   * has a tag value of <code>test</code>.</p> </dd> <dt>LookBackPeriodInDays</dt>
   * <dd> <p>Matches when the lookback period of the recommended action equals the
   * value. Specify a number of days, such as <code>14</code>.</p> </dd>
   * <dt>RestartNeeded</dt> <dd> <p>Matches recommended actions based on whether
   * implementing them requires a resource restart. Specify <code>true</code> or
   * <code>false</code>.</p> </dd> </dl>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  RecommendedActionFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  RecommendedActionFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  RecommendedActionFilterName m_name{RecommendedActionFilterName::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
