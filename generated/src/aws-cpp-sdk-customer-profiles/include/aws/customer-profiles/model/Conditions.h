﻿/**
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
    AWS_CUSTOMERPROFILES_API Conditions();
    AWS_CUSTOMERPROFILES_API Conditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Conditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The relative time period over which data is included in the aggregation.</p>
     */
    inline const Range& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const Range& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(Range&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline Conditions& WithRange(const Range& value) { SetRange(value); return *this;}
    inline Conditions& WithRange(Range&& value) { SetRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of profile objects used for the calculated attribute.</p>
     */
    inline int GetObjectCount() const{ return m_objectCount; }
    inline bool ObjectCountHasBeenSet() const { return m_objectCountHasBeenSet; }
    inline void SetObjectCount(int value) { m_objectCountHasBeenSet = true; m_objectCount = value; }
    inline Conditions& WithObjectCount(int value) { SetObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline const Threshold& GetThreshold() const{ return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(const Threshold& value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline void SetThreshold(Threshold&& value) { m_thresholdHasBeenSet = true; m_threshold = std::move(value); }
    inline Conditions& WithThreshold(const Threshold& value) { SetThreshold(value); return *this;}
    inline Conditions& WithThreshold(Threshold&& value) { SetThreshold(std::move(value)); return *this;}
    ///@}
  private:

    Range m_range;
    bool m_rangeHasBeenSet = false;

    int m_objectCount;
    bool m_objectCountHasBeenSet = false;

    Threshold m_threshold;
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
