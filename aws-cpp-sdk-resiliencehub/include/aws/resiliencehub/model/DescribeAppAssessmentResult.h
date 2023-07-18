/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/AppAssessment.h>
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
namespace ResilienceHub
{
namespace Model
{
  class AWS_RESILIENCEHUB_API DescribeAppAssessmentResult
  {
  public:
    DescribeAppAssessmentResult();
    DescribeAppAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAppAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The assessment for an AWS Resilience Hub application, returned as an object.
     * This object includes Amazon Resource Names (ARNs), compliance information,
     * compliance status, cost, messages, resiliency scores, and more.</p>
     */
    inline const AppAssessment& GetAssessment() const{ return m_assessment; }

    /**
     * <p>The assessment for an AWS Resilience Hub application, returned as an object.
     * This object includes Amazon Resource Names (ARNs), compliance information,
     * compliance status, cost, messages, resiliency scores, and more.</p>
     */
    inline void SetAssessment(const AppAssessment& value) { m_assessment = value; }

    /**
     * <p>The assessment for an AWS Resilience Hub application, returned as an object.
     * This object includes Amazon Resource Names (ARNs), compliance information,
     * compliance status, cost, messages, resiliency scores, and more.</p>
     */
    inline void SetAssessment(AppAssessment&& value) { m_assessment = std::move(value); }

    /**
     * <p>The assessment for an AWS Resilience Hub application, returned as an object.
     * This object includes Amazon Resource Names (ARNs), compliance information,
     * compliance status, cost, messages, resiliency scores, and more.</p>
     */
    inline DescribeAppAssessmentResult& WithAssessment(const AppAssessment& value) { SetAssessment(value); return *this;}

    /**
     * <p>The assessment for an AWS Resilience Hub application, returned as an object.
     * This object includes Amazon Resource Names (ARNs), compliance information,
     * compliance status, cost, messages, resiliency scores, and more.</p>
     */
    inline DescribeAppAssessmentResult& WithAssessment(AppAssessment&& value) { SetAssessment(std::move(value)); return *this;}

  private:

    AppAssessment m_assessment;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
