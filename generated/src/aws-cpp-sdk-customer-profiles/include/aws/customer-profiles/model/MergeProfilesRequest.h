/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/FieldSourceProfileIds.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class MergeProfilesRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API MergeProfilesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MergeProfiles"; }

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
    MergeProfilesRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the profile to be taken.</p>
     */
    inline const Aws::String& GetMainProfileId() const { return m_mainProfileId; }
    inline bool MainProfileIdHasBeenSet() const { return m_mainProfileIdHasBeenSet; }
    template<typename MainProfileIdT = Aws::String>
    void SetMainProfileId(MainProfileIdT&& value) { m_mainProfileIdHasBeenSet = true; m_mainProfileId = std::forward<MainProfileIdT>(value); }
    template<typename MainProfileIdT = Aws::String>
    MergeProfilesRequest& WithMainProfileId(MainProfileIdT&& value) { SetMainProfileId(std::forward<MainProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the profile to be merged into MainProfileId.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIdsToBeMerged() const { return m_profileIdsToBeMerged; }
    inline bool ProfileIdsToBeMergedHasBeenSet() const { return m_profileIdsToBeMergedHasBeenSet; }
    template<typename ProfileIdsToBeMergedT = Aws::Vector<Aws::String>>
    void SetProfileIdsToBeMerged(ProfileIdsToBeMergedT&& value) { m_profileIdsToBeMergedHasBeenSet = true; m_profileIdsToBeMerged = std::forward<ProfileIdsToBeMergedT>(value); }
    template<typename ProfileIdsToBeMergedT = Aws::Vector<Aws::String>>
    MergeProfilesRequest& WithProfileIdsToBeMerged(ProfileIdsToBeMergedT&& value) { SetProfileIdsToBeMerged(std::forward<ProfileIdsToBeMergedT>(value)); return *this;}
    template<typename ProfileIdsToBeMergedT = Aws::String>
    MergeProfilesRequest& AddProfileIdsToBeMerged(ProfileIdsToBeMergedT&& value) { m_profileIdsToBeMergedHasBeenSet = true; m_profileIdsToBeMerged.emplace_back(std::forward<ProfileIdsToBeMergedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers of the fields in the profile that has the information you
     * want to apply to the merge. For example, say you want to merge EmailAddress from
     * Profile1 into MainProfile. This would be the identifier of the EmailAddress
     * field in Profile1. </p>
     */
    inline const FieldSourceProfileIds& GetFieldSourceProfileIds() const { return m_fieldSourceProfileIds; }
    inline bool FieldSourceProfileIdsHasBeenSet() const { return m_fieldSourceProfileIdsHasBeenSet; }
    template<typename FieldSourceProfileIdsT = FieldSourceProfileIds>
    void SetFieldSourceProfileIds(FieldSourceProfileIdsT&& value) { m_fieldSourceProfileIdsHasBeenSet = true; m_fieldSourceProfileIds = std::forward<FieldSourceProfileIdsT>(value); }
    template<typename FieldSourceProfileIdsT = FieldSourceProfileIds>
    MergeProfilesRequest& WithFieldSourceProfileIds(FieldSourceProfileIdsT&& value) { SetFieldSourceProfileIds(std::forward<FieldSourceProfileIdsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_mainProfileId;
    bool m_mainProfileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_profileIdsToBeMerged;
    bool m_profileIdsToBeMergedHasBeenSet = false;

    FieldSourceProfileIds m_fieldSourceProfileIds;
    bool m_fieldSourceProfileIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
