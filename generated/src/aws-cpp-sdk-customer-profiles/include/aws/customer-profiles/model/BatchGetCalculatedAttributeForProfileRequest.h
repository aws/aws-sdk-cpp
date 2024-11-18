/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ConditionOverrides.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class BatchGetCalculatedAttributeForProfileRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCalculatedAttributeForProfile"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline const Aws::String& GetCalculatedAttributeName() const{ return m_calculatedAttributeName; }
    inline bool CalculatedAttributeNameHasBeenSet() const { return m_calculatedAttributeNameHasBeenSet; }
    inline void SetCalculatedAttributeName(const Aws::String& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = value; }
    inline void SetCalculatedAttributeName(Aws::String&& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = std::move(value); }
    inline void SetCalculatedAttributeName(const char* value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName.assign(value); }
    inline BatchGetCalculatedAttributeForProfileRequest& WithCalculatedAttributeName(const Aws::String& value) { SetCalculatedAttributeName(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileRequest& WithCalculatedAttributeName(Aws::String&& value) { SetCalculatedAttributeName(std::move(value)); return *this;}
    inline BatchGetCalculatedAttributeForProfileRequest& WithCalculatedAttributeName(const char* value) { SetCalculatedAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline BatchGetCalculatedAttributeForProfileRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline BatchGetCalculatedAttributeForProfileRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of unique identifiers for customer profiles to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIds() const{ return m_profileIds; }
    inline bool ProfileIdsHasBeenSet() const { return m_profileIdsHasBeenSet; }
    inline void SetProfileIds(const Aws::Vector<Aws::String>& value) { m_profileIdsHasBeenSet = true; m_profileIds = value; }
    inline void SetProfileIds(Aws::Vector<Aws::String>&& value) { m_profileIdsHasBeenSet = true; m_profileIds = std::move(value); }
    inline BatchGetCalculatedAttributeForProfileRequest& WithProfileIds(const Aws::Vector<Aws::String>& value) { SetProfileIds(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileRequest& WithProfileIds(Aws::Vector<Aws::String>&& value) { SetProfileIds(std::move(value)); return *this;}
    inline BatchGetCalculatedAttributeForProfileRequest& AddProfileIds(const Aws::String& value) { m_profileIdsHasBeenSet = true; m_profileIds.push_back(value); return *this; }
    inline BatchGetCalculatedAttributeForProfileRequest& AddProfileIds(Aws::String&& value) { m_profileIdsHasBeenSet = true; m_profileIds.push_back(std::move(value)); return *this; }
    inline BatchGetCalculatedAttributeForProfileRequest& AddProfileIds(const char* value) { m_profileIdsHasBeenSet = true; m_profileIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Overrides the condition block within the original calculated attribute
     * definition.</p>
     */
    inline const ConditionOverrides& GetConditionOverrides() const{ return m_conditionOverrides; }
    inline bool ConditionOverridesHasBeenSet() const { return m_conditionOverridesHasBeenSet; }
    inline void SetConditionOverrides(const ConditionOverrides& value) { m_conditionOverridesHasBeenSet = true; m_conditionOverrides = value; }
    inline void SetConditionOverrides(ConditionOverrides&& value) { m_conditionOverridesHasBeenSet = true; m_conditionOverrides = std::move(value); }
    inline BatchGetCalculatedAttributeForProfileRequest& WithConditionOverrides(const ConditionOverrides& value) { SetConditionOverrides(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileRequest& WithConditionOverrides(ConditionOverrides&& value) { SetConditionOverrides(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculatedAttributeName;
    bool m_calculatedAttributeNameHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_profileIds;
    bool m_profileIdsHasBeenSet = false;

    ConditionOverrides m_conditionOverrides;
    bool m_conditionOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
