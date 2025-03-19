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
  class EvaluateFeatureRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API EvaluateFeatureRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvaluateFeature"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An internal ID that represents a unique user of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    EvaluateFeatureRequest& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object of attributes that you can optionally pass in as part of the
     * evaluation event sent to Evidently from the user session. Evidently can use this
     * value to match user sessions with defined audience segments. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Use
     * segments to focus your audience</a>.</p> <p>If you include this parameter, the
     * value must be a JSON object. A JSON array is not supported.</p>
     */
    inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
    template<typename EvaluationContextT = Aws::String>
    void SetEvaluationContext(EvaluationContextT&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::forward<EvaluationContextT>(value); }
    template<typename EvaluationContextT = Aws::String>
    EvaluateFeatureRequest& WithEvaluationContext(EvaluationContextT&& value) { SetEvaluationContext(std::forward<EvaluationContextT>(value)); return *this;}
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
    EvaluateFeatureRequest& WithFeature(FeatureT&& value) { SetFeature(std::forward<FeatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains this feature.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    EvaluateFeatureRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_evaluationContext;
    bool m_evaluationContextHasBeenSet = false;

    Aws::String m_feature;
    bool m_featureHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
