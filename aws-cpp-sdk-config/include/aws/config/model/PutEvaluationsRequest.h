/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API PutEvaluationsRequest : public ConfigServiceRequest
  {
  public:
    PutEvaluationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEvaluations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The assessments that the AWS Lambda function performs. Each evaluation
     * identifies an AWS resource and indicates whether it complies with the AWS Config
     * rule that invokes the AWS Lambda function.</p>
     */
    inline const Aws::Vector<Evaluation>& GetEvaluations() const{ return m_evaluations; }

    /**
     * <p>The assessments that the AWS Lambda function performs. Each evaluation
     * identifies an AWS resource and indicates whether it complies with the AWS Config
     * rule that invokes the AWS Lambda function.</p>
     */
    inline bool EvaluationsHasBeenSet() const { return m_evaluationsHasBeenSet; }

    /**
     * <p>The assessments that the AWS Lambda function performs. Each evaluation
     * identifies an AWS resource and indicates whether it complies with the AWS Config
     * rule that invokes the AWS Lambda function.</p>
     */
    inline void SetEvaluations(const Aws::Vector<Evaluation>& value) { m_evaluationsHasBeenSet = true; m_evaluations = value; }

    /**
     * <p>The assessments that the AWS Lambda function performs. Each evaluation
     * identifies an AWS resource and indicates whether it complies with the AWS Config
     * rule that invokes the AWS Lambda function.</p>
     */
    inline void SetEvaluations(Aws::Vector<Evaluation>&& value) { m_evaluationsHasBeenSet = true; m_evaluations = std::move(value); }

    /**
     * <p>The assessments that the AWS Lambda function performs. Each evaluation
     * identifies an AWS resource and indicates whether it complies with the AWS Config
     * rule that invokes the AWS Lambda function.</p>
     */
    inline PutEvaluationsRequest& WithEvaluations(const Aws::Vector<Evaluation>& value) { SetEvaluations(value); return *this;}

    /**
     * <p>The assessments that the AWS Lambda function performs. Each evaluation
     * identifies an AWS resource and indicates whether it complies with the AWS Config
     * rule that invokes the AWS Lambda function.</p>
     */
    inline PutEvaluationsRequest& WithEvaluations(Aws::Vector<Evaluation>&& value) { SetEvaluations(std::move(value)); return *this;}

    /**
     * <p>The assessments that the AWS Lambda function performs. Each evaluation
     * identifies an AWS resource and indicates whether it complies with the AWS Config
     * rule that invokes the AWS Lambda function.</p>
     */
    inline PutEvaluationsRequest& AddEvaluations(const Evaluation& value) { m_evaluationsHasBeenSet = true; m_evaluations.push_back(value); return *this; }

    /**
     * <p>The assessments that the AWS Lambda function performs. Each evaluation
     * identifies an AWS resource and indicates whether it complies with the AWS Config
     * rule that invokes the AWS Lambda function.</p>
     */
    inline PutEvaluationsRequest& AddEvaluations(Evaluation&& value) { m_evaluationsHasBeenSet = true; m_evaluations.push_back(std::move(value)); return *this; }


    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation.</p>
     */
    inline const Aws::String& GetResultToken() const{ return m_resultToken; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation.</p>
     */
    inline bool ResultTokenHasBeenSet() const { return m_resultTokenHasBeenSet; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation.</p>
     */
    inline void SetResultToken(const Aws::String& value) { m_resultTokenHasBeenSet = true; m_resultToken = value; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation.</p>
     */
    inline void SetResultToken(Aws::String&& value) { m_resultTokenHasBeenSet = true; m_resultToken = std::move(value); }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation.</p>
     */
    inline void SetResultToken(const char* value) { m_resultTokenHasBeenSet = true; m_resultToken.assign(value); }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation.</p>
     */
    inline PutEvaluationsRequest& WithResultToken(const Aws::String& value) { SetResultToken(value); return *this;}

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation.</p>
     */
    inline PutEvaluationsRequest& WithResultToken(Aws::String&& value) { SetResultToken(std::move(value)); return *this;}

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation.</p>
     */
    inline PutEvaluationsRequest& WithResultToken(const char* value) { SetResultToken(value); return *this;}


    /**
     * <p>Use this parameter to specify a test run for <code>PutEvaluations</code>. You
     * can verify whether your AWS Lambda function will deliver evaluation results to
     * AWS Config. No updates occur to your existing evaluations, and evaluation
     * results are not sent to AWS Config.</p> <note> <p>When <code>TestMode</code> is
     * <code>true</code>, <code>PutEvaluations</code> doesn't require a valid value for
     * the <code>ResultToken</code> parameter, but the value cannot be null.</p>
     * </note>
     */
    inline bool GetTestMode() const{ return m_testMode; }

    /**
     * <p>Use this parameter to specify a test run for <code>PutEvaluations</code>. You
     * can verify whether your AWS Lambda function will deliver evaluation results to
     * AWS Config. No updates occur to your existing evaluations, and evaluation
     * results are not sent to AWS Config.</p> <note> <p>When <code>TestMode</code> is
     * <code>true</code>, <code>PutEvaluations</code> doesn't require a valid value for
     * the <code>ResultToken</code> parameter, but the value cannot be null.</p>
     * </note>
     */
    inline bool TestModeHasBeenSet() const { return m_testModeHasBeenSet; }

    /**
     * <p>Use this parameter to specify a test run for <code>PutEvaluations</code>. You
     * can verify whether your AWS Lambda function will deliver evaluation results to
     * AWS Config. No updates occur to your existing evaluations, and evaluation
     * results are not sent to AWS Config.</p> <note> <p>When <code>TestMode</code> is
     * <code>true</code>, <code>PutEvaluations</code> doesn't require a valid value for
     * the <code>ResultToken</code> parameter, but the value cannot be null.</p>
     * </note>
     */
    inline void SetTestMode(bool value) { m_testModeHasBeenSet = true; m_testMode = value; }

    /**
     * <p>Use this parameter to specify a test run for <code>PutEvaluations</code>. You
     * can verify whether your AWS Lambda function will deliver evaluation results to
     * AWS Config. No updates occur to your existing evaluations, and evaluation
     * results are not sent to AWS Config.</p> <note> <p>When <code>TestMode</code> is
     * <code>true</code>, <code>PutEvaluations</code> doesn't require a valid value for
     * the <code>ResultToken</code> parameter, but the value cannot be null.</p>
     * </note>
     */
    inline PutEvaluationsRequest& WithTestMode(bool value) { SetTestMode(value); return *this;}

  private:

    Aws::Vector<Evaluation> m_evaluations;
    bool m_evaluationsHasBeenSet;

    Aws::String m_resultToken;
    bool m_resultTokenHasBeenSet;

    bool m_testMode;
    bool m_testModeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
