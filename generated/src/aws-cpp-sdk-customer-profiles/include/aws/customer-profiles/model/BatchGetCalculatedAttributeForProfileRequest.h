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
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileRequest() = default;

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
    inline const Aws::String& GetCalculatedAttributeName() const { return m_calculatedAttributeName; }
    inline bool CalculatedAttributeNameHasBeenSet() const { return m_calculatedAttributeNameHasBeenSet; }
    template<typename CalculatedAttributeNameT = Aws::String>
    void SetCalculatedAttributeName(CalculatedAttributeNameT&& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = std::forward<CalculatedAttributeNameT>(value); }
    template<typename CalculatedAttributeNameT = Aws::String>
    BatchGetCalculatedAttributeForProfileRequest& WithCalculatedAttributeName(CalculatedAttributeNameT&& value) { SetCalculatedAttributeName(std::forward<CalculatedAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    BatchGetCalculatedAttributeForProfileRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of unique identifiers for customer profiles to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIds() const { return m_profileIds; }
    inline bool ProfileIdsHasBeenSet() const { return m_profileIdsHasBeenSet; }
    template<typename ProfileIdsT = Aws::Vector<Aws::String>>
    void SetProfileIds(ProfileIdsT&& value) { m_profileIdsHasBeenSet = true; m_profileIds = std::forward<ProfileIdsT>(value); }
    template<typename ProfileIdsT = Aws::Vector<Aws::String>>
    BatchGetCalculatedAttributeForProfileRequest& WithProfileIds(ProfileIdsT&& value) { SetProfileIds(std::forward<ProfileIdsT>(value)); return *this;}
    template<typename ProfileIdsT = Aws::String>
    BatchGetCalculatedAttributeForProfileRequest& AddProfileIds(ProfileIdsT&& value) { m_profileIdsHasBeenSet = true; m_profileIds.emplace_back(std::forward<ProfileIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Overrides the condition block within the original calculated attribute
     * definition.</p>
     */
    inline const ConditionOverrides& GetConditionOverrides() const { return m_conditionOverrides; }
    inline bool ConditionOverridesHasBeenSet() const { return m_conditionOverridesHasBeenSet; }
    template<typename ConditionOverridesT = ConditionOverrides>
    void SetConditionOverrides(ConditionOverridesT&& value) { m_conditionOverridesHasBeenSet = true; m_conditionOverrides = std::forward<ConditionOverridesT>(value); }
    template<typename ConditionOverridesT = ConditionOverrides>
    BatchGetCalculatedAttributeForProfileRequest& WithConditionOverrides(ConditionOverridesT&& value) { SetConditionOverrides(std::forward<ConditionOverridesT>(value)); return *this;}
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
