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
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class AWS_INSPECTOR_API CreateAssessmentResult
  {
  public:
    CreateAssessmentResult();
    CreateAssessmentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAssessmentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ARN specifying the assessment that is created.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The ARN specifying the assessment that is created.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArn = value; }

    /**
     * <p>The ARN specifying the assessment that is created.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArn = value; }

    /**
     * <p>The ARN specifying the assessment that is created.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArn.assign(value); }

    /**
     * <p>The ARN specifying the assessment that is created.</p>
     */
    inline CreateAssessmentResult& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN specifying the assessment that is created.</p>
     */
    inline CreateAssessmentResult& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN specifying the assessment that is created.</p>
     */
    inline CreateAssessmentResult& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}

  private:
    Aws::String m_assessmentArn;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
