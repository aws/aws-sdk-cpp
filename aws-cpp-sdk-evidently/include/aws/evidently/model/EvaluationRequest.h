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
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationRequest();
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An internal ID that represents a unique user session of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>An internal ID that represents a unique user session of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>An internal ID that represents a unique user session of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>An internal ID that represents a unique user session of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>An internal ID that represents a unique user session of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>An internal ID that represents a unique user session of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline EvaluationRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>An internal ID that represents a unique user session of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline EvaluationRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>An internal ID that represents a unique user session of the application. This
     * <code>entityID</code> is checked against any override rules assigned for this
     * feature.</p>
     */
    inline EvaluationRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


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
    inline EvaluationRequest& WithEvaluationContext(const Aws::String& value) { SetEvaluationContext(value); return *this;}

    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline EvaluationRequest& WithEvaluationContext(Aws::String&& value) { SetEvaluationContext(std::move(value)); return *this;}

    /**
     * <p>A JSON block of attributes that you can optionally pass in. This JSON block
     * is included in the evaluation events sent to Evidently from the user session.
     * </p>
     */
    inline EvaluationRequest& WithEvaluationContext(const char* value) { SetEvaluationContext(value); return *this;}


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
    inline EvaluationRequest& WithFeature(const Aws::String& value) { SetFeature(value); return *this;}

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline EvaluationRequest& WithFeature(Aws::String&& value) { SetFeature(std::move(value)); return *this;}

    /**
     * <p>The name of the feature being evaluated.</p>
     */
    inline EvaluationRequest& WithFeature(const char* value) { SetFeature(value); return *this;}

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
