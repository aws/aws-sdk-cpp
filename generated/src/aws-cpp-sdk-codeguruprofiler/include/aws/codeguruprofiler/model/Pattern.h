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
    AWS_CODEGURUPROFILER_API Pattern() = default;
    AWS_CODEGURUPROFILER_API Pattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Pattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of the different counters used to determine if there is a match. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCountersToAggregate() const { return m_countersToAggregate; }
    inline bool CountersToAggregateHasBeenSet() const { return m_countersToAggregateHasBeenSet; }
    template<typename CountersToAggregateT = Aws::Vector<Aws::String>>
    void SetCountersToAggregate(CountersToAggregateT&& value) { m_countersToAggregateHasBeenSet = true; m_countersToAggregate = std::forward<CountersToAggregateT>(value); }
    template<typename CountersToAggregateT = Aws::Vector<Aws::String>>
    Pattern& WithCountersToAggregate(CountersToAggregateT&& value) { SetCountersToAggregate(std::forward<CountersToAggregateT>(value)); return *this;}
    template<typename CountersToAggregateT = Aws::String>
    Pattern& AddCountersToAggregate(CountersToAggregateT&& value) { m_countersToAggregateHasBeenSet = true; m_countersToAggregate.emplace_back(std::forward<CountersToAggregateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the recommendation. This explains a potential inefficiency
     * in a profiled application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Pattern& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The universally unique identifier (UUID) of this pattern.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Pattern& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for this pattern.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Pattern& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that contains the steps recommended to address the potential
     * inefficiency. </p>
     */
    inline const Aws::String& GetResolutionSteps() const { return m_resolutionSteps; }
    inline bool ResolutionStepsHasBeenSet() const { return m_resolutionStepsHasBeenSet; }
    template<typename ResolutionStepsT = Aws::String>
    void SetResolutionSteps(ResolutionStepsT&& value) { m_resolutionStepsHasBeenSet = true; m_resolutionSteps = std::forward<ResolutionStepsT>(value); }
    template<typename ResolutionStepsT = Aws::String>
    Pattern& WithResolutionSteps(ResolutionStepsT&& value) { SetResolutionSteps(std::forward<ResolutionStepsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of frame names that were searched during the analysis that generated a
     * recommendation.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetTargetFrames() const { return m_targetFrames; }
    inline bool TargetFramesHasBeenSet() const { return m_targetFramesHasBeenSet; }
    template<typename TargetFramesT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetTargetFrames(TargetFramesT&& value) { m_targetFramesHasBeenSet = true; m_targetFrames = std::forward<TargetFramesT>(value); }
    template<typename TargetFramesT = Aws::Vector<Aws::Vector<Aws::String>>>
    Pattern& WithTargetFrames(TargetFramesT&& value) { SetTargetFrames(std::forward<TargetFramesT>(value)); return *this;}
    template<typename TargetFramesT = Aws::Vector<Aws::String>>
    Pattern& AddTargetFrames(TargetFramesT&& value) { m_targetFramesHasBeenSet = true; m_targetFrames.emplace_back(std::forward<TargetFramesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The percentage of time an application spends in one method that triggers a
     * recommendation. The percentage of time is the same as the percentage of the
     * total gathered sample counts during analysis. </p>
     */
    inline double GetThresholdPercent() const { return m_thresholdPercent; }
    inline bool ThresholdPercentHasBeenSet() const { return m_thresholdPercentHasBeenSet; }
    inline void SetThresholdPercent(double value) { m_thresholdPercentHasBeenSet = true; m_thresholdPercent = value; }
    inline Pattern& WithThresholdPercent(double value) { SetThresholdPercent(value); return *this;}
    ///@}
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

    double m_thresholdPercent{0.0};
    bool m_thresholdPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
