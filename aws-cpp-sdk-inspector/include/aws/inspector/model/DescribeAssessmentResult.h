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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/Assessment.h>

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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API DescribeAssessmentResult
  {
  public:
    DescribeAssessmentResult();
    DescribeAssessmentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAssessmentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the assessment.</p>
     */
    inline const Assessment& GetAssessment() const{ return m_assessment; }

    /**
     * <p>Information about the assessment.</p>
     */
    inline void SetAssessment(const Assessment& value) { m_assessment = value; }

    /**
     * <p>Information about the assessment.</p>
     */
    inline void SetAssessment(Assessment&& value) { m_assessment = value; }

    /**
     * <p>Information about the assessment.</p>
     */
    inline DescribeAssessmentResult& WithAssessment(const Assessment& value) { SetAssessment(value); return *this;}

    /**
     * <p>Information about the assessment.</p>
     */
    inline DescribeAssessmentResult& WithAssessment(Assessment&& value) { SetAssessment(value); return *this;}

  private:
    Assessment m_assessment;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
