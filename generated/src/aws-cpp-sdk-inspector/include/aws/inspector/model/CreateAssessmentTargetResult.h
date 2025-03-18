/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateAssessmentTargetResult
  {
  public:
    AWS_INSPECTOR_API CreateAssessmentTargetResult() = default;
    AWS_INSPECTOR_API CreateAssessmentTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API CreateAssessmentTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const { return m_assessmentTargetArn; }
    template<typename AssessmentTargetArnT = Aws::String>
    void SetAssessmentTargetArn(AssessmentTargetArnT&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::forward<AssessmentTargetArnT>(value); }
    template<typename AssessmentTargetArnT = Aws::String>
    CreateAssessmentTargetResult& WithAssessmentTargetArn(AssessmentTargetArnT&& value) { SetAssessmentTargetArn(std::forward<AssessmentTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAssessmentTargetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTargetArn;
    bool m_assessmentTargetArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
