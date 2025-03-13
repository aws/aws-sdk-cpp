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
  class CreateAssessmentTemplateResult
  {
  public:
    AWS_INSPECTOR_API CreateAssessmentTemplateResult() = default;
    AWS_INSPECTOR_API CreateAssessmentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API CreateAssessmentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN that specifies the assessment template that is created.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const { return m_assessmentTemplateArn; }
    template<typename AssessmentTemplateArnT = Aws::String>
    void SetAssessmentTemplateArn(AssessmentTemplateArnT&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::forward<AssessmentTemplateArnT>(value); }
    template<typename AssessmentTemplateArnT = Aws::String>
    CreateAssessmentTemplateResult& WithAssessmentTemplateArn(AssessmentTemplateArnT&& value) { SetAssessmentTemplateArn(std::forward<AssessmentTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAssessmentTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
