/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVIDENTLY_API EvaluateFeatureRequest : public CloudWatchEvidentlyRequest
  {
  public:
    EvaluateFeatureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvaluateFeature"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>An internal ID that represents a unique user of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>An internal ID that represents a unique user of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>An internal ID that represents a unique user of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>An internal ID that represents a unique user of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>An internal ID that represents a unique user of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>An internal ID that represents a unique user of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline EvaluateFeatureRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>An internal ID that represents a unique user of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline EvaluateFeatureRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>An internal ID that represents a unique user of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline EvaluateFeatureRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline const Aws::String& GetEvaluationContext() const{ return m_evaluationContext; }

    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }

    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline void SetEvaluationContext(const Aws::String& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = value; }

    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline void SetEvaluationContext(Aws::String&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::move(value); }

    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline void SetEvaluationContext(const char* value) { m_evaluationContextHasBeenSet = true; m_evaluationContext.assign(value); }

    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline EvaluateFeatureRequest& WithEvaluationContext(const Aws::String& value) { SetEvaluationContext(value); return *this;}

    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline EvaluateFeatureRequest& WithEvaluationContext(Aws::String&& value) { SetEvaluationContext(std::move(value)); return *this;}

    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline EvaluateFeatureRequest& WithEvaluationContext(const char* value) { SetEvaluationContext(value); return *this;}


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
    inline EvaluateFeatureRequest& WithFeature(const Aws::String& value) { SetFeature(value); return *this;}

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline EvaluateFeatureRequest& WithFeature(Aws::String&& value) { SetFeature(std::move(value)); return *this;}

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline EvaluateFeatureRequest& WithFeature(const char* value) { SetFeature(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains this feature.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains this feature.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains this feature.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains this feature.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains this feature.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains this feature.</p>
     */
    inline EvaluateFeatureRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains this feature.</p>
     */
    inline EvaluateFeatureRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains this feature.</p>
     */
    inline EvaluateFeatureRequest& WithProject(const char* value) { SetProject(value); return *this;}

  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet;

    Aws::String m_evaluationContext;
    bool m_evaluationContextHasBeenSet;

    Aws::String m_feature;
    bool m_featureHasBeenSet;

    Aws::String m_project;
    bool m_projectHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
