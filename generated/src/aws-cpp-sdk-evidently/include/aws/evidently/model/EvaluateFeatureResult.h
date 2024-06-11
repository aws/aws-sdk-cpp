﻿/**
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvidently
{
namespace Model
{
  class EvaluateFeatureResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API EvaluateFeatureResult();
    AWS_CLOUDWATCHEVIDENTLY_API EvaluateFeatureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API EvaluateFeatureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline void SetDetails(const Aws::String& value) { m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_details.assign(value); }
    inline EvaluateFeatureResult& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline EvaluateFeatureResult& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline EvaluateFeatureResult& WithDetails(const char* value) { SetDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason that the user session was assigned this variation.
     * Possible values include <code>DEFAULT</code>, meaning the user was served the
     * default variation; <code>LAUNCH_RULE_MATCH</code>, if the user session was
     * enrolled in a launch; <code>EXPERIMENT_RULE_MATCH</code>, if the user session
     * was enrolled in an experiment; or <code>ENTITY_OVERRIDES_MATCH</code>, if the
     * user's <code>entityId</code> matches an override rule.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline void SetReason(const Aws::String& value) { m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reason.assign(value); }
    inline EvaluateFeatureResult& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline EvaluateFeatureResult& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline EvaluateFeatureResult& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value assigned to this variation to differentiate it from the other
     * variations of this feature.</p>
     */
    inline const VariableValue& GetValue() const{ return m_value; }
    inline void SetValue(const VariableValue& value) { m_value = value; }
    inline void SetValue(VariableValue&& value) { m_value = std::move(value); }
    inline EvaluateFeatureResult& WithValue(const VariableValue& value) { SetValue(value); return *this;}
    inline EvaluateFeatureResult& WithValue(VariableValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline const Aws::String& GetVariation() const{ return m_variation; }
    inline void SetVariation(const Aws::String& value) { m_variation = value; }
    inline void SetVariation(Aws::String&& value) { m_variation = std::move(value); }
    inline void SetVariation(const char* value) { m_variation.assign(value); }
    inline EvaluateFeatureResult& WithVariation(const Aws::String& value) { SetVariation(value); return *this;}
    inline EvaluateFeatureResult& WithVariation(Aws::String&& value) { SetVariation(std::move(value)); return *this;}
    inline EvaluateFeatureResult& WithVariation(const char* value) { SetVariation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline EvaluateFeatureResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline EvaluateFeatureResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline EvaluateFeatureResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_details;

    Aws::String m_reason;

    VariableValue m_value;

    Aws::String m_variation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
