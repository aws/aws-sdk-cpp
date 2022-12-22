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
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationResult();
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline EvaluationResult& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline EvaluationResult& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline EvaluationResult& WithDetails(const char* value) { SetDetails(value); return *this;}


    /**
     * <p>An internal ID that represents a unique user session of the application.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>An internal ID that represents a unique user session of the application.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>An internal ID that represents a unique user session of the application.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>An internal ID that represents a unique user session of the application.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>An internal ID that represents a unique user session of the application.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>An internal ID that represents a unique user session of the application.</p>
     */
    inline EvaluationResult& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>An internal ID that represents a unique user session of the application.</p>
     */
    inline EvaluationResult& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>An internal ID that represents a unique user session of the application.</p>
     */
    inline EvaluationResult& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline const Aws::String& GetFeature() const{ return m_feature; }

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline void SetFeature(const Aws::String& value) { m_featureHasBeenSet = true; m_feature = value; }

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline void SetFeature(Aws::String&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline void SetFeature(const char* value) { m_featureHasBeenSet = true; m_feature.assign(value); }

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline EvaluationResult& WithFeature(const Aws::String& value) { SetFeature(value); return *this;}

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline EvaluationResult& WithFeature(Aws::String&& value) { SetFeature(std::move(value)); return *this;}

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline EvaluationResult& WithFeature(const char* value) { SetFeature(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline EvaluationResult& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline EvaluationResult& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline EvaluationResult& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; or <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; or <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; or <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; or <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; or <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; or <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment.</p>
     */
    inline EvaluationResult& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; or <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment.</p>
     */
    inline EvaluationResult& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; or <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment.</p>
     */
    inline EvaluationResult& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The value assigned to this variation to differentiate it from the other
     * variations of this feature.</p>
     */
    inline const VariableValue& GetValue() const{ return m_value; }

    /**
     * <p>The value assigned to this variation to differentiate it from the other
     * variations of this feature.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value assigned to this variation to differentiate it from the other
     * variations of this feature.</p>
     */
    inline void SetValue(const VariableValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value assigned to this variation to differentiate it from the other
     * variations of this feature.</p>
     */
    inline void SetValue(VariableValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value assigned to this variation to differentiate it from the other
     * variations of this feature.</p>
     */
    inline EvaluationResult& WithValue(const VariableValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value assigned to this variation to differentiate it from the other
     * variations of this feature.</p>
     */
    inline EvaluationResult& WithValue(VariableValue&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline const Aws::String& GetVariation() const{ return m_variation; }

    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline bool VariationHasBeenSet() const { return m_variationHasBeenSet; }

    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline void SetVariation(const Aws::String& value) { m_variationHasBeenSet = true; m_variation = value; }

    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline void SetVariation(Aws::String&& value) { m_variationHasBeenSet = true; m_variation = std::move(value); }

    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline void SetVariation(const char* value) { m_variationHasBeenSet = true; m_variation.assign(value); }

    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline EvaluationResult& WithVariation(const Aws::String& value) { SetVariation(value); return *this;}

    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline EvaluationResult& WithVariation(Aws::String&& value) { SetVariation(std::move(value)); return *this;}

    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline EvaluationResult& WithVariation(const char* value) { SetVariation(value); return *this;}

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
