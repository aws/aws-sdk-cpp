/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/UserUnion.h>
#include <aws/connectcases/model/FieldValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class CreateCaseRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API CreateCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCase"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateCaseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateCaseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateCaseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline CreateCaseRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CreateCaseRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CreateCaseRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects with field ID (matching ListFields/DescribeField) and
     * value union data.</p>
     */
    inline const Aws::Vector<FieldValue>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<FieldValue>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<FieldValue>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline CreateCaseRequest& WithFields(const Aws::Vector<FieldValue>& value) { SetFields(value); return *this;}
    inline CreateCaseRequest& WithFields(Aws::Vector<FieldValue>&& value) { SetFields(std::move(value)); return *this;}
    inline CreateCaseRequest& AddFields(const FieldValue& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline CreateCaseRequest& AddFields(FieldValue&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const UserUnion& GetPerformedBy() const{ return m_performedBy; }
    inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
    inline void SetPerformedBy(const UserUnion& value) { m_performedByHasBeenSet = true; m_performedBy = value; }
    inline void SetPerformedBy(UserUnion&& value) { m_performedByHasBeenSet = true; m_performedBy = std::move(value); }
    inline CreateCaseRequest& WithPerformedBy(const UserUnion& value) { SetPerformedBy(value); return *this;}
    inline CreateCaseRequest& WithPerformedBy(UserUnion&& value) { SetPerformedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier of a template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline CreateCaseRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline CreateCaseRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline CreateCaseRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<FieldValue> m_fields;
    bool m_fieldsHasBeenSet = false;

    UserUnion m_performedBy;
    bool m_performedByHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
