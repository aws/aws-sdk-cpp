/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> A set of rules used to make a recommendation during an analysis.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/Pattern">AWS
   * API Reference</a></p>
   */
  class Pattern
  {
  public:
    AWS_CODEGURUPROFILER_API Pattern();
    AWS_CODEGURUPROFILER_API Pattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Pattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCountersToAggregate() const{ return m_countersToAggregate; }

    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline bool CountersToAggregateHasBeenSet() const { return m_countersToAggregateHasBeenSet; }

    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline void SetCountersToAggregate(const Aws::Vector<Aws::String>& value) { m_countersToAggregateHasBeenSet = true; m_countersToAggregate = value; }

    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline void SetCountersToAggregate(Aws::Vector<Aws::String>&& value) { m_countersToAggregateHasBeenSet = true; m_countersToAggregate = std::move(value); }

    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline Pattern& WithCountersToAggregate(const Aws::Vector<Aws::String>& value) { SetCountersToAggregate(value); return *this;}

    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline Pattern& WithCountersToAggregate(Aws::Vector<Aws::String>&& value) { SetCountersToAggregate(std::move(value)); return *this;}

    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline Pattern& AddCountersToAggregate(const Aws::String& value) { m_countersToAggregateHasBeenSet = true; m_countersToAggregate.push_back(value); return *this; }

    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline Pattern& AddCountersToAggregate(Aws::String&& value) { m_countersToAggregateHasBeenSet = true; m_countersToAggregate.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline Pattern& AddCountersToAggregate(const char* value) { m_countersToAggregateHasBeenSet = true; m_countersToAggregate.push_back(value); return *this; }


    /**
     * <p>The description of the recommendation. This explains a potential inefficiency
     * in a profiled application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the recommendation. This explains a potential inefficiency
     * in a profiled application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the recommendation. This explains a potential inefficiency
     * in a profiled application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the recommendation. This explains a potential inefficiency
     * in a profiled application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the recommendation. This explains a potential inefficiency
     * in a profiled application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the recommendation. This explains a potential inefficiency
     * in a profiled application.</p>
     */
    inline Pattern& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the recommendation. This explains a potential inefficiency
     * in a profiled application.</p>
     */
    inline Pattern& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the recommendation. This explains a potential inefficiency
     * in a profiled application.</p>
     */
    inline Pattern& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The universally unique identifier (UUID) of this pattern.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The universally unique identifier (UUID) of this pattern.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The universally unique identifier (UUID) of this pattern.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The universally unique identifier (UUID) of this pattern.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The universally unique identifier (UUID) of this pattern.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The universally unique identifier (UUID) of this pattern.</p>
     */
    inline Pattern& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The universally unique identifier (UUID) of this pattern.</p>
     */
    inline Pattern& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The universally unique identifier (UUID) of this pattern.</p>
     */
    inline Pattern& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name for this pattern.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for this pattern.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for this pattern.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for this pattern.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for this pattern.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for this pattern.</p>
     */
    inline Pattern& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for this pattern.</p>
     */
    inline Pattern& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for this pattern.</p>
     */
    inline Pattern& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> A string that contains the steps recommended to address the potential
     * inefficiency. </p>
     */
    inline const Aws::String& GetResolutionSteps() const{ return m_resolutionSteps; }

    /**
     * <p> A string that contains the steps recommended to address the potential
     * inefficiency. </p>
     */
    inline bool ResolutionStepsHasBeenSet() const { return m_resolutionStepsHasBeenSet; }

    /**
     * <p> A string that contains the steps recommended to address the potential
     * inefficiency. </p>
     */
    inline void SetResolutionSteps(const Aws::String& value) { m_resolutionStepsHasBeenSet = true; m_resolutionSteps = value; }

    /**
     * <p> A string that contains the steps recommended to address the potential
     * inefficiency. </p>
     */
    inline void SetResolutionSteps(Aws::String&& value) { m_resolutionStepsHasBeenSet = true; m_resolutionSteps = std::move(value); }

    /**
     * <p> A string that contains the steps recommended to address the potential
     * inefficiency. </p>
     */
    inline void SetResolutionSteps(const char* value) { m_resolutionStepsHasBeenSet = true; m_resolutionSteps.assign(value); }

    /**
     * <p> A string that contains the steps recommended to address the potential
     * inefficiency. </p>
     */
    inline Pattern& WithResolutionSteps(const Aws::String& value) { SetResolutionSteps(value); return *this;}

    /**
     * <p> A string that contains the steps recommended to address the potential
     * inefficiency. </p>
     */
    inline Pattern& WithResolutionSteps(Aws::String&& value) { SetResolutionSteps(std::move(value)); return *this;}

    /**
     * <p> A string that contains the steps recommended to address the potential
     * inefficiency. </p>
     */
    inline Pattern& WithResolutionSteps(const char* value) { SetResolutionSteps(value); return *this;}


    /**
     * <p>A list of frame names that were searched during the analysis that generated a
     * recommendation.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetTargetFrames() const{ return m_targetFrames; }

    /**
     * <p>A list of frame names that were searched during the analysis that generated a
     * recommendation.</p>
     */
    inline bool TargetFramesHasBeenSet() const { return m_targetFramesHasBeenSet; }

    /**
     * <p>A list of frame names that were searched during the analysis that generated a
     * recommendation.</p>
     */
    inline void SetTargetFrames(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_targetFramesHasBeenSet = true; m_targetFrames = value; }

    /**
     * <p>A list of frame names that were searched during the analysis that generated a
     * recommendation.</p>
     */
    inline void SetTargetFrames(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_targetFramesHasBeenSet = true; m_targetFrames = std::move(value); }

    /**
     * <p>A list of frame names that were searched during the analysis that generated a
     * recommendation.</p>
     */
    inline Pattern& WithTargetFrames(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetTargetFrames(value); return *this;}

    /**
     * <p>A list of frame names that were searched during the analysis that generated a
     * recommendation.</p>
     */
    inline Pattern& WithTargetFrames(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetTargetFrames(std::move(value)); return *this;}

    /**
     * <p>A list of frame names that were searched during the analysis that generated a
     * recommendation.</p>
     */
    inline Pattern& AddTargetFrames(const Aws::Vector<Aws::String>& value) { m_targetFramesHasBeenSet = true; m_targetFrames.push_back(value); return *this; }

    /**
     * <p>A list of frame names that were searched during the analysis that generated a
     * recommendation.</p>
     */
    inline Pattern& AddTargetFrames(Aws::Vector<Aws::String>&& value) { m_targetFramesHasBeenSet = true; m_targetFrames.push_back(std::move(value)); return *this; }


    /**
     * <p> The percentage of time an application spends in one method that triggers a
     * recommendation. The percentage of time is the same as the percentage of the
     * total gathered sample counts during analysis. </p>
     */
    inline double GetThresholdPercent() const{ return m_thresholdPercent; }

    /**
     * <p> The percentage of time an application spends in one method that triggers a
     * recommendation. The percentage of time is the same as the percentage of the
     * total gathered sample counts during analysis. </p>
     */
    inline bool ThresholdPercentHasBeenSet() const { return m_thresholdPercentHasBeenSet; }

    /**
     * <p> The percentage of time an application spends in one method that triggers a
     * recommendation. The percentage of time is the same as the percentage of the
     * total gathered sample counts during analysis. </p>
     */
    inline void SetThresholdPercent(double value) { m_thresholdPercentHasBeenSet = true; m_thresholdPercent = value; }

    /**
     * <p> The percentage of time an application spends in one method that triggers a
     * recommendation. The percentage of time is the same as the percentage of the
     * total gathered sample counts during analysis. </p>
     */
    inline Pattern& WithThresholdPercent(double value) { SetThresholdPercent(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_countersToAggregate;
    bool m_countersToAggregateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resolutionSteps;
    bool m_resolutionStepsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_targetFrames;
    bool m_targetFramesHasBeenSet = false;

    double m_thresholdPercent;
    bool m_thresholdPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
