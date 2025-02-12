/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class DeleteCaseRuleRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API DeleteCaseRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCaseRule"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique identifier of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleId() const{ return m_caseRuleId; }
    inline bool CaseRuleIdHasBeenSet() const { return m_caseRuleIdHasBeenSet; }
    inline void SetCaseRuleId(const Aws::String& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = value; }
    inline void SetCaseRuleId(Aws::String&& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = std::move(value); }
    inline void SetCaseRuleId(const char* value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId.assign(value); }
    inline DeleteCaseRuleRequest& WithCaseRuleId(const Aws::String& value) { SetCaseRuleId(value); return *this;}
    inline DeleteCaseRuleRequest& WithCaseRuleId(Aws::String&& value) { SetCaseRuleId(std::move(value)); return *this;}
    inline DeleteCaseRuleRequest& WithCaseRuleId(const char* value) { SetCaseRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a Cases domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline DeleteCaseRuleRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DeleteCaseRuleRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DeleteCaseRuleRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}
  private:

    Aws::String m_caseRuleId;
    bool m_caseRuleIdHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
