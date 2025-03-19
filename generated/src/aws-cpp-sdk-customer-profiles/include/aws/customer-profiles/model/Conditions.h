/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/Range.h>
#include <aws/customer-profiles/model/Threshold.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The conditions including range, object count, and threshold for the
   * calculated attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Conditions">AWS
   * API Reference</a></p>
   */
  class Conditions
  {
  public:
    AWS_CUSTOMERPROFILES_API Conditions() = default;
    AWS_CUSTOMERPROFILES_API Conditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Conditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The relative time period over which data is included in the aggregation.</p>
     */
    inline const Range& GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    template<typename RangeT = Range>
    void SetRange(RangeT&& value) { m_rangeHasBeenSet = true; m_range = std::forward<RangeT>(value); }
    template<typename RangeT = Range>
    Conditions& WithRange(RangeT&& value) { SetRange(std::forward<RangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of profile objects used for the calculated attribute.</p>
     */
    inline int GetObjectCount() const { return m_objectCount; }
    inline bool ObjectCountHasBeenSet() const { return m_objectCountHasBeenSet; }
    inline void SetObjectCount(int value) { m_objectCountHasBeenSet = true; m_objectCount = value; }
    inline Conditions& WithObjectCount(int value) { SetObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline const Threshold& GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    template<typename ThresholdT = Threshold>
    void SetThreshold(ThresholdT&& value) { m_thresholdHasBeenSet = true; m_threshold = std::forward<ThresholdT>(value); }
    template<typename ThresholdT = Threshold>
    Conditions& WithThreshold(ThresholdT&& value) { SetThreshold(std::forward<ThresholdT>(value)); return *this;}
    ///@}
  private:

    Range m_range;
    bool m_rangeHasBeenSet = false;

    int m_objectCount{0};
    bool m_objectCountHasBeenSet = false;

    Threshold m_threshold;
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
