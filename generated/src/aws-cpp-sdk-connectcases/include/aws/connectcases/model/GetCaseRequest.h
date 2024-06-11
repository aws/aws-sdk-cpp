﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/FieldIdentifier.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class GetCaseRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API GetCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCase"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier of the case.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline GetCaseRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline GetCaseRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline GetCaseRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}
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
    inline GetCaseRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetCaseRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetCaseRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of unique field identifiers. </p>
     */
    inline const Aws::Vector<FieldIdentifier>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<FieldIdentifier>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<FieldIdentifier>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline GetCaseRequest& WithFields(const Aws::Vector<FieldIdentifier>& value) { SetFields(value); return *this;}
    inline GetCaseRequest& WithFields(Aws::Vector<FieldIdentifier>&& value) { SetFields(std::move(value)); return *this;}
    inline GetCaseRequest& AddFields(const FieldIdentifier& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline GetCaseRequest& AddFields(FieldIdentifier&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetCaseRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCaseRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCaseRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<FieldIdentifier> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
