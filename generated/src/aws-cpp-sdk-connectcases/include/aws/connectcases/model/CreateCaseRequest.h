/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline CreateCaseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline CreateCaseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline CreateCaseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline CreateCaseRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline CreateCaseRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline CreateCaseRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>An array of objects with field ID (matching ListFields/DescribeField) and
     * value union data.</p>
     */
    inline const Aws::Vector<FieldValue>& GetFields() const{ return m_fields; }

    /**
     * <p>An array of objects with field ID (matching ListFields/DescribeField) and
     * value union data.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>An array of objects with field ID (matching ListFields/DescribeField) and
     * value union data.</p>
     */
    inline void SetFields(const Aws::Vector<FieldValue>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>An array of objects with field ID (matching ListFields/DescribeField) and
     * value union data.</p>
     */
    inline void SetFields(Aws::Vector<FieldValue>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>An array of objects with field ID (matching ListFields/DescribeField) and
     * value union data.</p>
     */
    inline CreateCaseRequest& WithFields(const Aws::Vector<FieldValue>& value) { SetFields(value); return *this;}

    /**
     * <p>An array of objects with field ID (matching ListFields/DescribeField) and
     * value union data.</p>
     */
    inline CreateCaseRequest& WithFields(Aws::Vector<FieldValue>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>An array of objects with field ID (matching ListFields/DescribeField) and
     * value union data.</p>
     */
    inline CreateCaseRequest& AddFields(const FieldValue& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>An array of objects with field ID (matching ListFields/DescribeField) and
     * value union data.</p>
     */
    inline CreateCaseRequest& AddFields(FieldValue&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier of a template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline CreateCaseRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline CreateCaseRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline CreateCaseRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<FieldValue> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
