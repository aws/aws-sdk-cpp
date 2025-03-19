/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/Duration.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the outlier detection for a virtual node's
   * listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/OutlierDetection">AWS
   * API Reference</a></p>
   */
  class OutlierDetection
  {
  public:
    AWS_APPMESH_API OutlierDetection() = default;
    AWS_APPMESH_API OutlierDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API OutlierDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base amount of time for which a host is ejected.</p>
     */
    inline const Duration& GetBaseEjectionDuration() const { return m_baseEjectionDuration; }
    inline bool BaseEjectionDurationHasBeenSet() const { return m_baseEjectionDurationHasBeenSet; }
    template<typename BaseEjectionDurationT = Duration>
    void SetBaseEjectionDuration(BaseEjectionDurationT&& value) { m_baseEjectionDurationHasBeenSet = true; m_baseEjectionDuration = std::forward<BaseEjectionDurationT>(value); }
    template<typename BaseEjectionDurationT = Duration>
    OutlierDetection& WithBaseEjectionDuration(BaseEjectionDurationT&& value) { SetBaseEjectionDuration(std::forward<BaseEjectionDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time interval between ejection sweep analysis.</p>
     */
    inline const Duration& GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    template<typename IntervalT = Duration>
    void SetInterval(IntervalT&& value) { m_intervalHasBeenSet = true; m_interval = std::forward<IntervalT>(value); }
    template<typename IntervalT = Duration>
    OutlierDetection& WithInterval(IntervalT&& value) { SetInterval(std::forward<IntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum percentage of hosts in load balancing pool for upstream service that
     * can be ejected. Will eject at least one host regardless of the value.</p>
     */
    inline int GetMaxEjectionPercent() const { return m_maxEjectionPercent; }
    inline bool MaxEjectionPercentHasBeenSet() const { return m_maxEjectionPercentHasBeenSet; }
    inline void SetMaxEjectionPercent(int value) { m_maxEjectionPercentHasBeenSet = true; m_maxEjectionPercent = value; }
    inline OutlierDetection& WithMaxEjectionPercent(int value) { SetMaxEjectionPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of consecutive <code>5xx</code> errors required for ejection. </p>
     */
    inline long long GetMaxServerErrors() const { return m_maxServerErrors; }
    inline bool MaxServerErrorsHasBeenSet() const { return m_maxServerErrorsHasBeenSet; }
    inline void SetMaxServerErrors(long long value) { m_maxServerErrorsHasBeenSet = true; m_maxServerErrors = value; }
    inline OutlierDetection& WithMaxServerErrors(long long value) { SetMaxServerErrors(value); return *this;}
    ///@}
  private:

    Duration m_baseEjectionDuration;
    bool m_baseEjectionDurationHasBeenSet = false;

    Duration m_interval;
    bool m_intervalHasBeenSet = false;

    int m_maxEjectionPercent{0};
    bool m_maxEjectionPercentHasBeenSet = false;

    long long m_maxServerErrors{0};
    bool m_maxServerErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
