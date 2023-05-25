/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/RelatedItemInputContent.h>
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
    AWS_CONNECTCASES_API CreateRelatedItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRelatedItem"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier of the case.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline CreateRelatedItemRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline CreateRelatedItemRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline CreateRelatedItemRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}


    /**
     * <p>The content of a related item to be created.</p>
     */
    inline const RelatedItemInputContent& GetContent() const{ return m_content; }

    /**
     * <p>The content of a related item to be created.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of a related item to be created.</p>
     */
    inline void SetContent(const RelatedItemInputContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of a related item to be created.</p>
     */
    inline void SetContent(RelatedItemInputContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of a related item to be created.</p>
     */
    inline CreateRelatedItemRequest& WithContent(const RelatedItemInputContent& value) { SetContent(value); return *this;}

    /**
     * <p>The content of a related item to be created.</p>
     */
    inline CreateRelatedItemRequest& WithContent(RelatedItemInputContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline CreateRelatedItemRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline CreateRelatedItemRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline CreateRelatedItemRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The type of a related item.</p>
     */
    inline const RelatedItemType& GetType() const{ return m_type; }

    /**
     * <p>The type of a related item.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of a related item.</p>
     */
    inline void SetType(const RelatedItemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of a related item.</p>
     */
    inline void SetType(RelatedItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of a related item.</p>
     */
    inline CreateRelatedItemRequest& WithType(const RelatedItemType& value) { SetType(value); return *this;}

    /**
     * <p>The type of a related item.</p>
     */
    inline CreateRelatedItemRequest& WithType(RelatedItemType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    RelatedItemInputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    RelatedItemType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
