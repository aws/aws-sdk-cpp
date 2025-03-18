/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class GetSegmentMembershipRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API GetSegmentMembershipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSegmentMembership"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetSegmentMembershipRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Id of the wanted segment. Needs to be a valid, and existing segment
     * Id.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const { return m_segmentDefinitionName; }
    inline bool SegmentDefinitionNameHasBeenSet() const { return m_segmentDefinitionNameHasBeenSet; }
    template<typename SegmentDefinitionNameT = Aws::String>
    void SetSegmentDefinitionName(SegmentDefinitionNameT&& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = std::forward<SegmentDefinitionNameT>(value); }
    template<typename SegmentDefinitionNameT = Aws::String>
    GetSegmentMembershipRequest& WithSegmentDefinitionName(SegmentDefinitionNameT&& value) { SetSegmentDefinitionName(std::forward<SegmentDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of profile IDs to query for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIds() const { return m_profileIds; }
    inline bool ProfileIdsHasBeenSet() const { return m_profileIdsHasBeenSet; }
    template<typename ProfileIdsT = Aws::Vector<Aws::String>>
    void SetProfileIds(ProfileIdsT&& value) { m_profileIdsHasBeenSet = true; m_profileIds = std::forward<ProfileIdsT>(value); }
    template<typename ProfileIdsT = Aws::Vector<Aws::String>>
    GetSegmentMembershipRequest& WithProfileIds(ProfileIdsT&& value) { SetProfileIds(std::forward<ProfileIdsT>(value)); return *this;}
    template<typename ProfileIdsT = Aws::String>
    GetSegmentMembershipRequest& AddProfileIds(ProfileIdsT&& value) { m_profileIdsHasBeenSet = true; m_profileIds.emplace_back(std::forward<ProfileIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_segmentDefinitionName;
    bool m_segmentDefinitionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_profileIds;
    bool m_profileIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
