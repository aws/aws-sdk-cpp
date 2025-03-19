/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The CIS date filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisDateFilter">AWS
   * API Reference</a></p>
   */
  class CisDateFilter
  {
  public:
    AWS_INSPECTOR2_API CisDateFilter() = default;
    AWS_INSPECTOR2_API CisDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIS date filter's earliest scan start time.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestScanStartTime() const { return m_earliestScanStartTime; }
    inline bool EarliestScanStartTimeHasBeenSet() const { return m_earliestScanStartTimeHasBeenSet; }
    template<typename EarliestScanStartTimeT = Aws::Utils::DateTime>
    void SetEarliestScanStartTime(EarliestScanStartTimeT&& value) { m_earliestScanStartTimeHasBeenSet = true; m_earliestScanStartTime = std::forward<EarliestScanStartTimeT>(value); }
    template<typename EarliestScanStartTimeT = Aws::Utils::DateTime>
    CisDateFilter& WithEarliestScanStartTime(EarliestScanStartTimeT&& value) { SetEarliestScanStartTime(std::forward<EarliestScanStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS date filter's latest scan start time.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestScanStartTime() const { return m_latestScanStartTime; }
    inline bool LatestScanStartTimeHasBeenSet() const { return m_latestScanStartTimeHasBeenSet; }
    template<typename LatestScanStartTimeT = Aws::Utils::DateTime>
    void SetLatestScanStartTime(LatestScanStartTimeT&& value) { m_latestScanStartTimeHasBeenSet = true; m_latestScanStartTime = std::forward<LatestScanStartTimeT>(value); }
    template<typename LatestScanStartTimeT = Aws::Utils::DateTime>
    CisDateFilter& WithLatestScanStartTime(LatestScanStartTimeT&& value) { SetLatestScanStartTime(std::forward<LatestScanStartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_earliestScanStartTime{};
    bool m_earliestScanStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestScanStartTime{};
    bool m_latestScanStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
