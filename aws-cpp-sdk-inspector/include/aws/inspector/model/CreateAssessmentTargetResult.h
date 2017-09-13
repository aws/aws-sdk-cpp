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
  class AWS_INSPECTOR_API CreateAssessmentTargetResult
  {
  public:
    CreateAssessmentTargetResult();
    CreateAssessmentTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAssessmentTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const{ return m_assessmentTargetArn; }

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline void SetAssessmentTargetArn(const Aws::String& value) { m_assessmentTargetArn = value; }

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline void SetAssessmentTargetArn(Aws::String&& value) { m_assessmentTargetArn = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline void SetAssessmentTargetArn(const char* value) { m_assessmentTargetArn.assign(value); }

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline CreateAssessmentTargetResult& WithAssessmentTargetArn(const Aws::String& value) { SetAssessmentTargetArn(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline CreateAssessmentTargetResult& WithAssessmentTargetArn(Aws::String&& value) { SetAssessmentTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline CreateAssessmentTargetResult& WithAssessmentTargetArn(const char* value) { SetAssessmentTargetArn(value); return *this;}

  private:

    Aws::String m_assessmentTargetArn;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
