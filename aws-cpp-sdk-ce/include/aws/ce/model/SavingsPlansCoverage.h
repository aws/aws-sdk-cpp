/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ce/model/SavingsPlansCoverageData.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The amount of Savings Plans eligible usage that's covered by Savings Plans.
   * All calculations consider the On-Demand equivalent of your Savings Plans
   * usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansCoverage">AWS
   * API Reference</a></p>
   */
  class SavingsPlansCoverage
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansCoverage();
    AWS_COSTEXPLORER_API SavingsPlansCoverage(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansCoverage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline SavingsPlansCoverage& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline SavingsPlansCoverage& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline SavingsPlansCoverage& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline SavingsPlansCoverage& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline SavingsPlansCoverage& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline SavingsPlansCoverage& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline SavingsPlansCoverage& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline SavingsPlansCoverage& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline SavingsPlansCoverage& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The amount of Savings Plans eligible usage that the Savings Plans
     * covered.</p>
     */
    inline const SavingsPlansCoverageData& GetCoverage() const{ return m_coverage; }

    /**
     * <p>The amount of Savings Plans eligible usage that the Savings Plans
     * covered.</p>
     */
    inline bool CoverageHasBeenSet() const { return m_coverageHasBeenSet; }

    /**
     * <p>The amount of Savings Plans eligible usage that the Savings Plans
     * covered.</p>
     */
    inline void SetCoverage(const SavingsPlansCoverageData& value) { m_coverageHasBeenSet = true; m_coverage = value; }

    /**
     * <p>The amount of Savings Plans eligible usage that the Savings Plans
     * covered.</p>
     */
    inline void SetCoverage(SavingsPlansCoverageData&& value) { m_coverageHasBeenSet = true; m_coverage = std::move(value); }

    /**
     * <p>The amount of Savings Plans eligible usage that the Savings Plans
     * covered.</p>
     */
    inline SavingsPlansCoverage& WithCoverage(const SavingsPlansCoverageData& value) { SetCoverage(value); return *this;}

    /**
     * <p>The amount of Savings Plans eligible usage that the Savings Plans
     * covered.</p>
     */
    inline SavingsPlansCoverage& WithCoverage(SavingsPlansCoverageData&& value) { SetCoverage(std::move(value)); return *this;}


    
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    
    inline SavingsPlansCoverage& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    
    inline SavingsPlansCoverage& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    SavingsPlansCoverageData m_coverage;
    bool m_coverageHasBeenSet = false;

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
