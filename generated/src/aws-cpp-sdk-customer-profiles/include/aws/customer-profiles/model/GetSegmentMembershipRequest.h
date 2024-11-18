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
    AWS_CUSTOMERPROFILES_API GetSegmentMembershipRequest();

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
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline GetSegmentMembershipRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetSegmentMembershipRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetSegmentMembershipRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Id of the wanted segment. Needs to be a valid, and existing segment
     * Id.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const{ return m_segmentDefinitionName; }
    inline bool SegmentDefinitionNameHasBeenSet() const { return m_segmentDefinitionNameHasBeenSet; }
    inline void SetSegmentDefinitionName(const Aws::String& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = value; }
    inline void SetSegmentDefinitionName(Aws::String&& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = std::move(value); }
    inline void SetSegmentDefinitionName(const char* value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName.assign(value); }
    inline GetSegmentMembershipRequest& WithSegmentDefinitionName(const Aws::String& value) { SetSegmentDefinitionName(value); return *this;}
    inline GetSegmentMembershipRequest& WithSegmentDefinitionName(Aws::String&& value) { SetSegmentDefinitionName(std::move(value)); return *this;}
    inline GetSegmentMembershipRequest& WithSegmentDefinitionName(const char* value) { SetSegmentDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of profile IDs to query for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIds() const{ return m_profileIds; }
    inline bool ProfileIdsHasBeenSet() const { return m_profileIdsHasBeenSet; }
    inline void SetProfileIds(const Aws::Vector<Aws::String>& value) { m_profileIdsHasBeenSet = true; m_profileIds = value; }
    inline void SetProfileIds(Aws::Vector<Aws::String>&& value) { m_profileIdsHasBeenSet = true; m_profileIds = std::move(value); }
    inline GetSegmentMembershipRequest& WithProfileIds(const Aws::Vector<Aws::String>& value) { SetProfileIds(value); return *this;}
    inline GetSegmentMembershipRequest& WithProfileIds(Aws::Vector<Aws::String>&& value) { SetProfileIds(std::move(value)); return *this;}
    inline GetSegmentMembershipRequest& AddProfileIds(const Aws::String& value) { m_profileIdsHasBeenSet = true; m_profileIds.push_back(value); return *this; }
    inline GetSegmentMembershipRequest& AddProfileIds(Aws::String&& value) { m_profileIdsHasBeenSet = true; m_profileIds.push_back(std::move(value)); return *this; }
    inline GetSegmentMembershipRequest& AddProfileIds(const char* value) { m_profileIdsHasBeenSet = true; m_profileIds.push_back(value); return *this; }
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
