/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/Evaluation.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutEvaluationsRequest">AWS
   * API Reference</a></p>
   */
  class PutEvaluationsRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutEvaluationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEvaluations"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The assessments that the Lambda function performs. Each evaluation identifies
     * an Amazon Web Services resource and indicates whether it complies with the
     * Config rule that invokes the Lambda function.</p>
     */
    inline const Aws::Vector<Evaluation>& GetEvaluations() const { return m_evaluations; }
    inline bool EvaluationsHasBeenSet() const { return m_evaluationsHasBeenSet; }
    template<typename EvaluationsT = Aws::Vector<Evaluation>>
    void SetEvaluations(EvaluationsT&& value) { m_evaluationsHasBeenSet = true; m_evaluations = std::forward<EvaluationsT>(value); }
    template<typename EvaluationsT = Aws::Vector<Evaluation>>
    PutEvaluationsRequest& WithEvaluations(EvaluationsT&& value) { SetEvaluations(std::forward<EvaluationsT>(value)); return *this;}
    template<typename EvaluationsT = Evaluation>
    PutEvaluationsRequest& AddEvaluations(EvaluationsT&& value) { m_evaluationsHasBeenSet = true; m_evaluations.emplace_back(std::forward<EvaluationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An encrypted token that associates an evaluation with an Config rule.
     * Identifies the rule and the event that triggered the evaluation.</p>
     */
    inline const Aws::String& GetResultToken() const { return m_resultToken; }
    inline bool ResultTokenHasBeenSet() const { return m_resultTokenHasBeenSet; }
    template<typename ResultTokenT = Aws::String>
    void SetResultToken(ResultTokenT&& value) { m_resultTokenHasBeenSet = true; m_resultToken = std::forward<ResultTokenT>(value); }
    template<typename ResultTokenT = Aws::String>
    PutEvaluationsRequest& WithResultToken(ResultTokenT&& value) { SetResultToken(std::forward<ResultTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to specify a test run for <code>PutEvaluations</code>. You
     * can verify whether your Lambda function will deliver evaluation results to
     * Config. No updates occur to your existing evaluations, and evaluation results
     * are not sent to Config.</p>  <p>When <code>TestMode</code> is
     * <code>true</code>, <code>PutEvaluations</code> doesn't require a valid value for
     * the <code>ResultToken</code> parameter, but the value cannot be null.</p>
     * 
     */
    inline bool GetTestMode() const { return m_testMode; }
    inline bool TestModeHasBeenSet() const { return m_testModeHasBeenSet; }
    inline void SetTestMode(bool value) { m_testModeHasBeenSet = true; m_testMode = value; }
    inline PutEvaluationsRequest& WithTestMode(bool value) { SetTestMode(value); return *this;}
    ///@}
  private:

    Aws::Vector<Evaluation> m_evaluations;
    bool m_evaluationsHasBeenSet = false;

    Aws::String m_resultToken;
    bool m_resultTokenHasBeenSet = false;

    bool m_testMode{false};
    bool m_testModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
