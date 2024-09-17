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
    AWS_CUSTOMERPROFILES_API MergeProfilesRequest();

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
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline MergeProfilesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline MergeProfilesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline MergeProfilesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the profile to be taken.</p>
     */
    inline const Aws::String& GetMainProfileId() const{ return m_mainProfileId; }
    inline bool MainProfileIdHasBeenSet() const { return m_mainProfileIdHasBeenSet; }
    inline void SetMainProfileId(const Aws::String& value) { m_mainProfileIdHasBeenSet = true; m_mainProfileId = value; }
    inline void SetMainProfileId(Aws::String&& value) { m_mainProfileIdHasBeenSet = true; m_mainProfileId = std::move(value); }
    inline void SetMainProfileId(const char* value) { m_mainProfileIdHasBeenSet = true; m_mainProfileId.assign(value); }
    inline MergeProfilesRequest& WithMainProfileId(const Aws::String& value) { SetMainProfileId(value); return *this;}
    inline MergeProfilesRequest& WithMainProfileId(Aws::String&& value) { SetMainProfileId(std::move(value)); return *this;}
    inline MergeProfilesRequest& WithMainProfileId(const char* value) { SetMainProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the profile to be merged into MainProfileId.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIdsToBeMerged() const{ return m_profileIdsToBeMerged; }
    inline bool ProfileIdsToBeMergedHasBeenSet() const { return m_profileIdsToBeMergedHasBeenSet; }
    inline void SetProfileIdsToBeMerged(const Aws::Vector<Aws::String>& value) { m_profileIdsToBeMergedHasBeenSet = true; m_profileIdsToBeMerged = value; }
    inline void SetProfileIdsToBeMerged(Aws::Vector<Aws::String>&& value) { m_profileIdsToBeMergedHasBeenSet = true; m_profileIdsToBeMerged = std::move(value); }
    inline MergeProfilesRequest& WithProfileIdsToBeMerged(const Aws::Vector<Aws::String>& value) { SetProfileIdsToBeMerged(value); return *this;}
    inline MergeProfilesRequest& WithProfileIdsToBeMerged(Aws::Vector<Aws::String>&& value) { SetProfileIdsToBeMerged(std::move(value)); return *this;}
    inline MergeProfilesRequest& AddProfileIdsToBeMerged(const Aws::String& value) { m_profileIdsToBeMergedHasBeenSet = true; m_profileIdsToBeMerged.push_back(value); return *this; }
    inline MergeProfilesRequest& AddProfileIdsToBeMerged(Aws::String&& value) { m_profileIdsToBeMergedHasBeenSet = true; m_profileIdsToBeMerged.push_back(std::move(value)); return *this; }
    inline MergeProfilesRequest& AddProfileIdsToBeMerged(const char* value) { m_profileIdsToBeMergedHasBeenSet = true; m_profileIdsToBeMerged.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers of the fields in the profile that has the information you
     * want to apply to the merge. For example, say you want to merge EmailAddress from
     * Profile1 into MainProfile. This would be the identifier of the EmailAddress
     * field in Profile1. </p>
     */
    inline const FieldSourceProfileIds& GetFieldSourceProfileIds() const{ return m_fieldSourceProfileIds; }
    inline bool FieldSourceProfileIdsHasBeenSet() const { return m_fieldSourceProfileIdsHasBeenSet; }
    inline void SetFieldSourceProfileIds(const FieldSourceProfileIds& value) { m_fieldSourceProfileIdsHasBeenSet = true; m_fieldSourceProfileIds = value; }
    inline void SetFieldSourceProfileIds(FieldSourceProfileIds&& value) { m_fieldSourceProfileIdsHasBeenSet = true; m_fieldSourceProfileIds = std::move(value); }
    inline MergeProfilesRequest& WithFieldSourceProfileIds(const FieldSourceProfileIds& value) { SetFieldSourceProfileIds(value); return *this;}
    inline MergeProfilesRequest& WithFieldSourceProfileIds(FieldSourceProfileIds&& value) { SetFieldSourceProfileIds(std::move(value)); return *this;}
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
