/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/CollaborationAnalysisTemplate.h>
#include <aws/cleanrooms/model/BatchGetCollaborationAnalysisTemplateError.h>
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
namespace CleanRooms
{
namespace Model
{
  class BatchGetCollaborationAnalysisTemplateResult
  {
  public:
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateResult() = default;
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retrieved list of analysis templates within a collaboration.</p>
     */
    inline const Aws::Vector<CollaborationAnalysisTemplate>& GetCollaborationAnalysisTemplates() const { return m_collaborationAnalysisTemplates; }
    template<typename CollaborationAnalysisTemplatesT = Aws::Vector<CollaborationAnalysisTemplate>>
    void SetCollaborationAnalysisTemplates(CollaborationAnalysisTemplatesT&& value) { m_collaborationAnalysisTemplatesHasBeenSet = true; m_collaborationAnalysisTemplates = std::forward<CollaborationAnalysisTemplatesT>(value); }
    template<typename CollaborationAnalysisTemplatesT = Aws::Vector<CollaborationAnalysisTemplate>>
    BatchGetCollaborationAnalysisTemplateResult& WithCollaborationAnalysisTemplates(CollaborationAnalysisTemplatesT&& value) { SetCollaborationAnalysisTemplates(std::forward<CollaborationAnalysisTemplatesT>(value)); return *this;}
    template<typename CollaborationAnalysisTemplatesT = CollaborationAnalysisTemplate>
    BatchGetCollaborationAnalysisTemplateResult& AddCollaborationAnalysisTemplates(CollaborationAnalysisTemplatesT&& value) { m_collaborationAnalysisTemplatesHasBeenSet = true; m_collaborationAnalysisTemplates.emplace_back(std::forward<CollaborationAnalysisTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error reasons for collaboration analysis templates that could not be
     * retrieved. One error is returned for every collaboration analysis template that
     * could not be retrieved.</p>
     */
    inline const Aws::Vector<BatchGetCollaborationAnalysisTemplateError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetCollaborationAnalysisTemplateError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetCollaborationAnalysisTemplateError>>
    BatchGetCollaborationAnalysisTemplateResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetCollaborationAnalysisTemplateError>
    BatchGetCollaborationAnalysisTemplateResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCollaborationAnalysisTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CollaborationAnalysisTemplate> m_collaborationAnalysisTemplates;
    bool m_collaborationAnalysisTemplatesHasBeenSet = false;

    Aws::Vector<BatchGetCollaborationAnalysisTemplateError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
