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
  class AWS_INSPECTOR_API StartAssessmentRunResult
  {
  public:
    StartAssessmentRunResult();
    StartAssessmentRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartAssessmentRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArn = value; }

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArn = std::move(value); }

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArn.assign(value); }

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline StartAssessmentRunResult& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline StartAssessmentRunResult& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline StartAssessmentRunResult& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}

  private:

    Aws::String m_assessmentRunArn;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
