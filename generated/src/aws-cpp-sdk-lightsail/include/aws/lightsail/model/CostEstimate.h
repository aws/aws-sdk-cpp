/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/EstimateByTime.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the estimated cost for resources in your Lightsail for Research
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CostEstimate">AWS
   * API Reference</a></p>
   */
  class CostEstimate
  {
  public:
    AWS_LIGHTSAIL_API CostEstimate() = default;
    AWS_LIGHTSAIL_API CostEstimate(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CostEstimate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The types of usage that are included in the estimate, such as costs, usage,
     * or data transfer.</p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    CostEstimate& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost estimate result that's associated with a time period.</p>
     */
    inline const Aws::Vector<EstimateByTime>& GetResultsByTime() const { return m_resultsByTime; }
    inline bool ResultsByTimeHasBeenSet() const { return m_resultsByTimeHasBeenSet; }
    template<typename ResultsByTimeT = Aws::Vector<EstimateByTime>>
    void SetResultsByTime(ResultsByTimeT&& value) { m_resultsByTimeHasBeenSet = true; m_resultsByTime = std::forward<ResultsByTimeT>(value); }
    template<typename ResultsByTimeT = Aws::Vector<EstimateByTime>>
    CostEstimate& WithResultsByTime(ResultsByTimeT&& value) { SetResultsByTime(std::forward<ResultsByTimeT>(value)); return *this;}
    template<typename ResultsByTimeT = EstimateByTime>
    CostEstimate& AddResultsByTime(ResultsByTimeT&& value) { m_resultsByTimeHasBeenSet = true; m_resultsByTime.emplace_back(std::forward<ResultsByTimeT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::Vector<EstimateByTime> m_resultsByTime;
    bool m_resultsByTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
