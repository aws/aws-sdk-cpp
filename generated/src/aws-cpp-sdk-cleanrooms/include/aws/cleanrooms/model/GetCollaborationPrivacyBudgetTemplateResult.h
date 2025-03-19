/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CollaborationPrivacyBudgetTemplate.h>
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
  class GetCollaborationPrivacyBudgetTemplateResult
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationPrivacyBudgetTemplateResult() = default;
    AWS_CLEANROOMS_API GetCollaborationPrivacyBudgetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetCollaborationPrivacyBudgetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline const CollaborationPrivacyBudgetTemplate& GetCollaborationPrivacyBudgetTemplate() const { return m_collaborationPrivacyBudgetTemplate; }
    template<typename CollaborationPrivacyBudgetTemplateT = CollaborationPrivacyBudgetTemplate>
    void SetCollaborationPrivacyBudgetTemplate(CollaborationPrivacyBudgetTemplateT&& value) { m_collaborationPrivacyBudgetTemplateHasBeenSet = true; m_collaborationPrivacyBudgetTemplate = std::forward<CollaborationPrivacyBudgetTemplateT>(value); }
    template<typename CollaborationPrivacyBudgetTemplateT = CollaborationPrivacyBudgetTemplate>
    GetCollaborationPrivacyBudgetTemplateResult& WithCollaborationPrivacyBudgetTemplate(CollaborationPrivacyBudgetTemplateT&& value) { SetCollaborationPrivacyBudgetTemplate(std::forward<CollaborationPrivacyBudgetTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCollaborationPrivacyBudgetTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CollaborationPrivacyBudgetTemplate m_collaborationPrivacyBudgetTemplate;
    bool m_collaborationPrivacyBudgetTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
