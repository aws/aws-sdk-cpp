/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CollaborationAnalysisTemplate.h>
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
namespace CleanRooms
{
namespace Model
{
  class GetCollaborationAnalysisTemplateResult
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationAnalysisTemplateResult() = default;
    AWS_CLEANROOMS_API GetCollaborationAnalysisTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetCollaborationAnalysisTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The analysis template within a collaboration.</p>
     */
    inline const CollaborationAnalysisTemplate& GetCollaborationAnalysisTemplate() const { return m_collaborationAnalysisTemplate; }
    template<typename CollaborationAnalysisTemplateT = CollaborationAnalysisTemplate>
    void SetCollaborationAnalysisTemplate(CollaborationAnalysisTemplateT&& value) { m_collaborationAnalysisTemplateHasBeenSet = true; m_collaborationAnalysisTemplate = std::forward<CollaborationAnalysisTemplateT>(value); }
    template<typename CollaborationAnalysisTemplateT = CollaborationAnalysisTemplate>
    GetCollaborationAnalysisTemplateResult& WithCollaborationAnalysisTemplate(CollaborationAnalysisTemplateT&& value) { SetCollaborationAnalysisTemplate(std::forward<CollaborationAnalysisTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCollaborationAnalysisTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CollaborationAnalysisTemplate m_collaborationAnalysisTemplate;
    bool m_collaborationAnalysisTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
