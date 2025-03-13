/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure assigns a feature variation to one user session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/EvaluationRequest">AWS
   * API Reference</a></p>
   */
  class EvaluationRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationRequest() = default;
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An internal ID that represents a unique user session of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    EvaluationRequest& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
    template<typename EvaluationContextT = Aws::String>
    void SetEvaluationContext(EvaluationContextT&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::forward<EvaluationContextT>(value); }
    template<typename EvaluationContextT = Aws::String>
    EvaluationRequest& WithEvaluationContext(EvaluationContextT&& value) { SetEvaluationContext(std::forward<EvaluationContextT>(value)); return *this;}
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
    EvaluationRequest& WithFeature(FeatureT&& value) { SetFeature(std::forward<FeatureT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_evaluationContext;
    bool m_evaluationContextHasBeenSet = false;

    Aws::String m_feature;
    bool m_featureHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
