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
    AWS_LIGHTSAIL_API CostEstimate();
    AWS_LIGHTSAIL_API CostEstimate(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CostEstimate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The types of usage that are included in the estimate, such as costs, usage,
     * or data transfer.</p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }

    /**
     * <p>The types of usage that are included in the estimate, such as costs, usage,
     * or data transfer.</p>
     */
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }

    /**
     * <p>The types of usage that are included in the estimate, such as costs, usage,
     * or data transfer.</p>
     */
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }

    /**
     * <p>The types of usage that are included in the estimate, such as costs, usage,
     * or data transfer.</p>
     */
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }

    /**
     * <p>The types of usage that are included in the estimate, such as costs, usage,
     * or data transfer.</p>
     */
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }

    /**
     * <p>The types of usage that are included in the estimate, such as costs, usage,
     * or data transfer.</p>
     */
    inline CostEstimate& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}

    /**
     * <p>The types of usage that are included in the estimate, such as costs, usage,
     * or data transfer.</p>
     */
    inline CostEstimate& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}

    /**
     * <p>The types of usage that are included in the estimate, such as costs, usage,
     * or data transfer.</p>
     */
    inline CostEstimate& WithUsageType(const char* value) { SetUsageType(value); return *this;}


    /**
     * <p>The cost estimate result that's associated with a time period.</p>
     */
    inline const Aws::Vector<EstimateByTime>& GetResultsByTime() const{ return m_resultsByTime; }

    /**
     * <p>The cost estimate result that's associated with a time period.</p>
     */
    inline bool ResultsByTimeHasBeenSet() const { return m_resultsByTimeHasBeenSet; }

    /**
     * <p>The cost estimate result that's associated with a time period.</p>
     */
    inline void SetResultsByTime(const Aws::Vector<EstimateByTime>& value) { m_resultsByTimeHasBeenSet = true; m_resultsByTime = value; }

    /**
     * <p>The cost estimate result that's associated with a time period.</p>
     */
    inline void SetResultsByTime(Aws::Vector<EstimateByTime>&& value) { m_resultsByTimeHasBeenSet = true; m_resultsByTime = std::move(value); }

    /**
     * <p>The cost estimate result that's associated with a time period.</p>
     */
    inline CostEstimate& WithResultsByTime(const Aws::Vector<EstimateByTime>& value) { SetResultsByTime(value); return *this;}

    /**
     * <p>The cost estimate result that's associated with a time period.</p>
     */
    inline CostEstimate& WithResultsByTime(Aws::Vector<EstimateByTime>&& value) { SetResultsByTime(std::move(value)); return *this;}

    /**
     * <p>The cost estimate result that's associated with a time period.</p>
     */
    inline CostEstimate& AddResultsByTime(const EstimateByTime& value) { m_resultsByTimeHasBeenSet = true; m_resultsByTime.push_back(value); return *this; }

    /**
     * <p>The cost estimate result that's associated with a time period.</p>
     */
    inline CostEstimate& AddResultsByTime(EstimateByTime&& value) { m_resultsByTimeHasBeenSet = true; m_resultsByTime.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::Vector<EstimateByTime> m_resultsByTime;
    bool m_resultsByTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
