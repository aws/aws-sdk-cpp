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

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class UpdateCaseRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API UpdateCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCase"; }

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
    inline UpdateCaseRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline UpdateCaseRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline UpdateCaseRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}


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
    inline UpdateCaseRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline UpdateCaseRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline UpdateCaseRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>An array of objects with <code>fieldId</code> (matching
     * ListFields/DescribeField) and value union data, structured identical to
     * <code>CreateCase</code>.</p>
     */
    inline const Aws::Vector<FieldValue>& GetFields() const{ return m_fields; }

    /**
     * <p>An array of objects with <code>fieldId</code> (matching
     * ListFields/DescribeField) and value union data, structured identical to
     * <code>CreateCase</code>.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>An array of objects with <code>fieldId</code> (matching
     * ListFields/DescribeField) and value union data, structured identical to
     * <code>CreateCase</code>.</p>
     */
    inline void SetFields(const Aws::Vector<FieldValue>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>An array of objects with <code>fieldId</code> (matching
     * ListFields/DescribeField) and value union data, structured identical to
     * <code>CreateCase</code>.</p>
     */
    inline void SetFields(Aws::Vector<FieldValue>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>An array of objects with <code>fieldId</code> (matching
     * ListFields/DescribeField) and value union data, structured identical to
     * <code>CreateCase</code>.</p>
     */
    inline UpdateCaseRequest& WithFields(const Aws::Vector<FieldValue>& value) { SetFields(value); return *this;}

    /**
     * <p>An array of objects with <code>fieldId</code> (matching
     * ListFields/DescribeField) and value union data, structured identical to
     * <code>CreateCase</code>.</p>
     */
    inline UpdateCaseRequest& WithFields(Aws::Vector<FieldValue>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>An array of objects with <code>fieldId</code> (matching
     * ListFields/DescribeField) and value union data, structured identical to
     * <code>CreateCase</code>.</p>
     */
    inline UpdateCaseRequest& AddFields(const FieldValue& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>An array of objects with <code>fieldId</code> (matching
     * ListFields/DescribeField) and value union data, structured identical to
     * <code>CreateCase</code>.</p>
     */
    inline UpdateCaseRequest& AddFields(FieldValue&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<FieldValue> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
