/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/LicenseSpecification.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class UpdateLicenseSpecificationsForResourceRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API UpdateLicenseSpecificationsForResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLicenseSpecificationsForResource"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UpdateLicenseSpecificationsForResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARNs of the license configurations to add.</p>
     */
    inline const Aws::Vector<LicenseSpecification>& GetAddLicenseSpecifications() const { return m_addLicenseSpecifications; }
    inline bool AddLicenseSpecificationsHasBeenSet() const { return m_addLicenseSpecificationsHasBeenSet; }
    template<typename AddLicenseSpecificationsT = Aws::Vector<LicenseSpecification>>
    void SetAddLicenseSpecifications(AddLicenseSpecificationsT&& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications = std::forward<AddLicenseSpecificationsT>(value); }
    template<typename AddLicenseSpecificationsT = Aws::Vector<LicenseSpecification>>
    UpdateLicenseSpecificationsForResourceRequest& WithAddLicenseSpecifications(AddLicenseSpecificationsT&& value) { SetAddLicenseSpecifications(std::forward<AddLicenseSpecificationsT>(value)); return *this;}
    template<typename AddLicenseSpecificationsT = LicenseSpecification>
    UpdateLicenseSpecificationsForResourceRequest& AddAddLicenseSpecifications(AddLicenseSpecificationsT&& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications.emplace_back(std::forward<AddLicenseSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>ARNs of the license configurations to remove.</p>
     */
    inline const Aws::Vector<LicenseSpecification>& GetRemoveLicenseSpecifications() const { return m_removeLicenseSpecifications; }
    inline bool RemoveLicenseSpecificationsHasBeenSet() const { return m_removeLicenseSpecificationsHasBeenSet; }
    template<typename RemoveLicenseSpecificationsT = Aws::Vector<LicenseSpecification>>
    void SetRemoveLicenseSpecifications(RemoveLicenseSpecificationsT&& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications = std::forward<RemoveLicenseSpecificationsT>(value); }
    template<typename RemoveLicenseSpecificationsT = Aws::Vector<LicenseSpecification>>
    UpdateLicenseSpecificationsForResourceRequest& WithRemoveLicenseSpecifications(RemoveLicenseSpecificationsT&& value) { SetRemoveLicenseSpecifications(std::forward<RemoveLicenseSpecificationsT>(value)); return *this;}
    template<typename RemoveLicenseSpecificationsT = LicenseSpecification>
    UpdateLicenseSpecificationsForResourceRequest& AddRemoveLicenseSpecifications(RemoveLicenseSpecificationsT&& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications.emplace_back(std::forward<RemoveLicenseSpecificationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<LicenseSpecification> m_addLicenseSpecifications;
    bool m_addLicenseSpecificationsHasBeenSet = false;

    Aws::Vector<LicenseSpecification> m_removeLicenseSpecifications;
    bool m_removeLicenseSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
