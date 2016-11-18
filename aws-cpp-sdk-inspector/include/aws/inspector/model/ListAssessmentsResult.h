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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_INSPECTOR_API ListAssessmentsResult
  {
  public:
    ListAssessmentsResult();
    ListAssessmentsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAssessmentsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of ARNs specifying the assessments returned by the action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentArnList() const{ return m_assessmentArnList; }

    /**
     * <p>A list of ARNs specifying the assessments returned by the action.</p>
     */
    inline void SetAssessmentArnList(const Aws::Vector<Aws::String>& value) { m_assessmentArnList = value; }

    /**
     * <p>A list of ARNs specifying the assessments returned by the action.</p>
     */
    inline void SetAssessmentArnList(Aws::Vector<Aws::String>&& value) { m_assessmentArnList = value; }

    /**
     * <p>A list of ARNs specifying the assessments returned by the action.</p>
     */
    inline ListAssessmentsResult& WithAssessmentArnList(const Aws::Vector<Aws::String>& value) { SetAssessmentArnList(value); return *this;}

    /**
     * <p>A list of ARNs specifying the assessments returned by the action.</p>
     */
    inline ListAssessmentsResult& WithAssessmentArnList(Aws::Vector<Aws::String>&& value) { SetAssessmentArnList(value); return *this;}

    /**
     * <p>A list of ARNs specifying the assessments returned by the action.</p>
     */
    inline ListAssessmentsResult& AddAssessmentArnList(const Aws::String& value) { m_assessmentArnList.push_back(value); return *this; }

    /**
     * <p>A list of ARNs specifying the assessments returned by the action.</p>
     */
    inline ListAssessmentsResult& AddAssessmentArnList(Aws::String&& value) { m_assessmentArnList.push_back(value); return *this; }

    /**
     * <p>A list of ARNs specifying the assessments returned by the action.</p>
     */
    inline ListAssessmentsResult& AddAssessmentArnList(const char* value) { m_assessmentArnList.push_back(value); return *this; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline ListAssessmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline ListAssessmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline ListAssessmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_assessmentArnList;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
