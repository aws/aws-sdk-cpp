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
    AWS_INSPECTOR_API ListAssessmentRunsResult() = default;
    AWS_INSPECTOR_API ListAssessmentRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API ListAssessmentRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of ARNs that specifies the assessment runs that are returned by the
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentRunArns() const { return m_assessmentRunArns; }
    template<typename AssessmentRunArnsT = Aws::Vector<Aws::String>>
    void SetAssessmentRunArns(AssessmentRunArnsT&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns = std::forward<AssessmentRunArnsT>(value); }
    template<typename AssessmentRunArnsT = Aws::Vector<Aws::String>>
    ListAssessmentRunsResult& WithAssessmentRunArns(AssessmentRunArnsT&& value) { SetAssessmentRunArns(std::forward<AssessmentRunArnsT>(value)); return *this;}
    template<typename AssessmentRunArnsT = Aws::String>
    ListAssessmentRunsResult& AddAssessmentRunArns(AssessmentRunArnsT&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns.emplace_back(std::forward<AssessmentRunArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssessmentRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssessmentRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_assessmentRunArns;
    bool m_assessmentRunArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
