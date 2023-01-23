/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListAssessmentRunsResult
  {
  public:
    AWS_INSPECTOR_API ListAssessmentRunsResult();
    AWS_INSPECTOR_API ListAssessmentRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API ListAssessmentRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of ARNs that specifies the assessment runs that are returned by the
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentRunArns() const{ return m_assessmentRunArns; }

    /**
     * <p>A list of ARNs that specifies the assessment runs that are returned by the
     * action.</p>
     */
    inline void SetAssessmentRunArns(const Aws::Vector<Aws::String>& value) { m_assessmentRunArns = value; }

    /**
     * <p>A list of ARNs that specifies the assessment runs that are returned by the
     * action.</p>
     */
    inline void SetAssessmentRunArns(Aws::Vector<Aws::String>&& value) { m_assessmentRunArns = std::move(value); }

    /**
     * <p>A list of ARNs that specifies the assessment runs that are returned by the
     * action.</p>
     */
    inline ListAssessmentRunsResult& WithAssessmentRunArns(const Aws::Vector<Aws::String>& value) { SetAssessmentRunArns(value); return *this;}

    /**
     * <p>A list of ARNs that specifies the assessment runs that are returned by the
     * action.</p>
     */
    inline ListAssessmentRunsResult& WithAssessmentRunArns(Aws::Vector<Aws::String>&& value) { SetAssessmentRunArns(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs that specifies the assessment runs that are returned by the
     * action.</p>
     */
    inline ListAssessmentRunsResult& AddAssessmentRunArns(const Aws::String& value) { m_assessmentRunArns.push_back(value); return *this; }

    /**
     * <p>A list of ARNs that specifies the assessment runs that are returned by the
     * action.</p>
     */
    inline ListAssessmentRunsResult& AddAssessmentRunArns(Aws::String&& value) { m_assessmentRunArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ARNs that specifies the assessment runs that are returned by the
     * action.</p>
     */
    inline ListAssessmentRunsResult& AddAssessmentRunArns(const char* value) { m_assessmentRunArns.push_back(value); return *this; }


    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline ListAssessmentRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline ListAssessmentRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline ListAssessmentRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_assessmentRunArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
