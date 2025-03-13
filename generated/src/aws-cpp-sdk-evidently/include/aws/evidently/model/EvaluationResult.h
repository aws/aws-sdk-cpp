/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/VariableValue.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure displays the results of one feature evaluation assignment to
   * one user session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/EvaluationResult">AWS
   * API Reference</a></p>
   */
  class EvaluationResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    EvaluationResult& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal ID that represents a unique user session of the application.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    EvaluationResult& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline const Aws::String& GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    template<typename FeatureT = Aws::String>
    void SetFeature(FeatureT&& value) { m_featureHasBeenSet = true; m_feature = std::forward<FeatureT>(value); }
    template<typename FeatureT = Aws::String>
    EvaluationResult& WithFeature(FeatureT&& value) { SetFeature(std::forward<FeatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    EvaluationResult& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; or <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    EvaluationResult& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value assigned to this variation to differentiate it from the other
     * variations of this feature.</p>
     */
    inline const VariableValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = VariableValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = VariableValue>
    EvaluationResult& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline const Aws::String& GetVariation() const { return m_variation; }
    inline bool VariationHasBeenSet() const { return m_variationHasBeenSet; }
    template<typename VariationT = Aws::String>
    void SetVariation(VariationT&& value) { m_variationHasBeenSet = true; m_variation = std::forward<VariationT>(value); }
    template<typename VariationT = Aws::String>
    EvaluationResult& WithVariation(VariationT&& value) { SetVariation(std::forward<VariationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_feature;
    bool m_featureHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    VariableValue m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_variation;
    bool m_variationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
