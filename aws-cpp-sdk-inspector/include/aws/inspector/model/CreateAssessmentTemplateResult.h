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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API CreateAssessmentTemplateResult
  {
  public:
    CreateAssessmentTemplateResult();
    CreateAssessmentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAssessmentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that specifies the assessment template that is created.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const{ return m_assessmentTemplateArn; }

    /**
     * <p>The ARN that specifies the assessment template that is created.</p>
     */
    inline void SetAssessmentTemplateArn(const Aws::String& value) { m_assessmentTemplateArn = value; }

    /**
     * <p>The ARN that specifies the assessment template that is created.</p>
     */
    inline void SetAssessmentTemplateArn(Aws::String&& value) { m_assessmentTemplateArn = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment template that is created.</p>
     */
    inline void SetAssessmentTemplateArn(const char* value) { m_assessmentTemplateArn.assign(value); }

    /**
     * <p>The ARN that specifies the assessment template that is created.</p>
     */
    inline CreateAssessmentTemplateResult& WithAssessmentTemplateArn(const Aws::String& value) { SetAssessmentTemplateArn(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment template that is created.</p>
     */
    inline CreateAssessmentTemplateResult& WithAssessmentTemplateArn(Aws::String&& value) { SetAssessmentTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment template that is created.</p>
     */
    inline CreateAssessmentTemplateResult& WithAssessmentTemplateArn(const char* value) { SetAssessmentTemplateArn(value); return *this;}

  private:

    Aws::String m_assessmentTemplateArn;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
