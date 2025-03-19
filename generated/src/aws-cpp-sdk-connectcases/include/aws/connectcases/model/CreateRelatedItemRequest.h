/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/RelatedItemInputContent.h>
#include <aws/connectcases/model/UserUnion.h>
#include <aws/connectcases/model/RelatedItemType.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class CreateRelatedItemRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API CreateRelatedItemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRelatedItem"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier of the case.</p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    CreateRelatedItemRequest& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of a related item to be created.</p>
     */
    inline const RelatedItemInputContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = RelatedItemInputContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = RelatedItemInputContent>
    CreateRelatedItemRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateRelatedItemRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the creator of the related item.</p>
     */
    inline const UserUnion& GetPerformedBy() const { return m_performedBy; }
    inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
    template<typename PerformedByT = UserUnion>
    void SetPerformedBy(PerformedByT&& value) { m_performedByHasBeenSet = true; m_performedBy = std::forward<PerformedByT>(value); }
    template<typename PerformedByT = UserUnion>
    CreateRelatedItemRequest& WithPerformedBy(PerformedByT&& value) { SetPerformedBy(std::forward<PerformedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a related item.</p>
     */
    inline RelatedItemType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RelatedItemType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateRelatedItemRequest& WithType(RelatedItemType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    RelatedItemInputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    UserUnion m_performedBy;
    bool m_performedByHasBeenSet = false;

    RelatedItemType m_type{RelatedItemType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
