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
    AWS_CLOUDWATCHEVIDENTLY_API EvaluateFeatureResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API EvaluateFeatureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API EvaluateFeatureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If this user was assigned to a launch or experiment, this field lists the
     * launch or experiment name.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    EvaluateFeatureResult& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
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
    inline const Aws::String& GetReason() const { return m_reason; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    EvaluateFeatureResult& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value assigned to this variation to differentiate it from the other
     * variations of this feature.</p>
     */
    inline const VariableValue& GetValue() const { return m_value; }
    template<typename ValueT = VariableValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = VariableValue>
    EvaluateFeatureResult& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variation that was served to the user session.</p>
     */
    inline const Aws::String& GetVariation() const { return m_variation; }
    template<typename VariationT = Aws::String>
    void SetVariation(VariationT&& value) { m_variationHasBeenSet = true; m_variation = std::forward<VariationT>(value); }
    template<typename VariationT = Aws::String>
    EvaluateFeatureResult& WithVariation(VariationT&& value) { SetVariation(std::forward<VariationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EvaluateFeatureResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    VariableValue m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_variation;
    bool m_variationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
