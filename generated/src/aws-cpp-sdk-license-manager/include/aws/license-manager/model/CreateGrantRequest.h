/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/AllowedOperation.h>
#include <aws/license-manager/model/Tag.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CreateGrantRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CreateGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGrant"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateGrantRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant name.</p>
     */
    inline const Aws::String& GetGrantName() const { return m_grantName; }
    inline bool GrantNameHasBeenSet() const { return m_grantNameHasBeenSet; }
    template<typename GrantNameT = Aws::String>
    void SetGrantName(GrantNameT&& value) { m_grantNameHasBeenSet = true; m_grantName = std::forward<GrantNameT>(value); }
    template<typename GrantNameT = Aws::String>
    CreateGrantRequest& WithGrantName(GrantNameT&& value) { SetGrantName(std::forward<GrantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const { return m_licenseArn; }
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
    template<typename LicenseArnT = Aws::String>
    void SetLicenseArn(LicenseArnT&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::forward<LicenseArnT>(value); }
    template<typename LicenseArnT = Aws::String>
    CreateGrantRequest& WithLicenseArn(LicenseArnT&& value) { SetLicenseArn(std::forward<LicenseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grant principals. You can specify one of the following as an Amazon
     * Resource Name (ARN):</p> <ul> <li> <p>An Amazon Web Services account, which
     * includes only the account specified.</p> </li> </ul> <ul> <li> <p>An
     * organizational unit (OU), which includes all accounts in the OU.</p> </li> </ul>
     * <ul> <li> <p>An organization, which will include all accounts across your
     * organization.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const { return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    template<typename PrincipalsT = Aws::Vector<Aws::String>>
    void SetPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals = std::forward<PrincipalsT>(value); }
    template<typename PrincipalsT = Aws::Vector<Aws::String>>
    CreateGrantRequest& WithPrincipals(PrincipalsT&& value) { SetPrincipals(std::forward<PrincipalsT>(value)); return *this;}
    template<typename PrincipalsT = Aws::String>
    CreateGrantRequest& AddPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals.emplace_back(std::forward<PrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Home Region of the grant.</p>
     */
    inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    template<typename HomeRegionT = Aws::String>
    void SetHomeRegion(HomeRegionT&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::forward<HomeRegionT>(value); }
    template<typename HomeRegionT = Aws::String>
    CreateGrantRequest& WithHomeRegion(HomeRegionT&& value) { SetHomeRegion(std::forward<HomeRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline const Aws::Vector<AllowedOperation>& GetAllowedOperations() const { return m_allowedOperations; }
    inline bool AllowedOperationsHasBeenSet() const { return m_allowedOperationsHasBeenSet; }
    template<typename AllowedOperationsT = Aws::Vector<AllowedOperation>>
    void SetAllowedOperations(AllowedOperationsT&& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations = std::forward<AllowedOperationsT>(value); }
    template<typename AllowedOperationsT = Aws::Vector<AllowedOperation>>
    CreateGrantRequest& WithAllowedOperations(AllowedOperationsT&& value) { SetAllowedOperations(std::forward<AllowedOperationsT>(value)); return *this;}
    inline CreateGrantRequest& AddAllowedOperations(AllowedOperation value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags to add to the grant. For more information about tagging support in
     * License Manager, see the <a
     * href="https://docs.aws.amazon.com/license-manager/latest/APIReference/API_TagResource.html">TagResource</a>
     * operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateGrantRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateGrantRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_grantName;
    bool m_grantNameHasBeenSet = false;

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    Aws::Vector<AllowedOperation> m_allowedOperations;
    bool m_allowedOperationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
