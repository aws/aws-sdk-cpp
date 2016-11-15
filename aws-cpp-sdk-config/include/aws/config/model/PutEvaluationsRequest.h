/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_CONFIGSERVICE_API PutEvaluationsRequest : public ConfigServiceRequest
  {
  public:
    PutEvaluationsRequest();
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
    inline void SetEvaluations(const Aws::Vector<Evaluation>& value) { m_evaluationsHasBeenSet = true; m_evaluations = value; }

    /**
     * <p>The assessments that the AWS Lambda function performs. Each evaluation
     * identifies an AWS resource and indicates whether it complies with the AWS Config
     * rule that invokes the AWS Lambda function.</p>
     */
    inline void SetEvaluations(Aws::Vector<Evaluation>&& value) { m_evaluationsHasBeenSet = true; m_evaluations = value; }

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
    inline PutEvaluationsRequest& WithEvaluations(Aws::Vector<Evaluation>&& value) { SetEvaluations(value); return *this;}

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
    inline PutEvaluationsRequest& AddEvaluations(Evaluation&& value) { m_evaluationsHasBeenSet = true; m_evaluations.push_back(value); return *this; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation</p>
     */
    inline const Aws::String& GetResultToken() const{ return m_resultToken; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation</p>
     */
    inline void SetResultToken(const Aws::String& value) { m_resultTokenHasBeenSet = true; m_resultToken = value; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation</p>
     */
    inline void SetResultToken(Aws::String&& value) { m_resultTokenHasBeenSet = true; m_resultToken = value; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation</p>
     */
    inline void SetResultToken(const char* value) { m_resultTokenHasBeenSet = true; m_resultToken.assign(value); }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation</p>
     */
    inline PutEvaluationsRequest& WithResultToken(const Aws::String& value) { SetResultToken(value); return *this;}

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation</p>
     */
    inline PutEvaluationsRequest& WithResultToken(Aws::String&& value) { SetResultToken(value); return *this;}

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule.
     * Identifies the rule and the event that triggered the evaluation</p>
     */
    inline PutEvaluationsRequest& WithResultToken(const char* value) { SetResultToken(value); return *this;}

  private:
    Aws::Vector<Evaluation> m_evaluations;
    bool m_evaluationsHasBeenSet;
    Aws::String m_resultToken;
    bool m_resultTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
