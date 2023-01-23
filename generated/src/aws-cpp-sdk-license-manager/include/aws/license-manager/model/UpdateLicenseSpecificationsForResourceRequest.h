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
    AWS_LICENSEMANAGER_API UpdateLicenseSpecificationsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLicenseSpecificationsForResource"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>ARNs of the license configurations to add.</p>
     */
    inline const Aws::Vector<LicenseSpecification>& GetAddLicenseSpecifications() const{ return m_addLicenseSpecifications; }

    /**
     * <p>ARNs of the license configurations to add.</p>
     */
    inline bool AddLicenseSpecificationsHasBeenSet() const { return m_addLicenseSpecificationsHasBeenSet; }

    /**
     * <p>ARNs of the license configurations to add.</p>
     */
    inline void SetAddLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications = value; }

    /**
     * <p>ARNs of the license configurations to add.</p>
     */
    inline void SetAddLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications = std::move(value); }

    /**
     * <p>ARNs of the license configurations to add.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithAddLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { SetAddLicenseSpecifications(value); return *this;}

    /**
     * <p>ARNs of the license configurations to add.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithAddLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { SetAddLicenseSpecifications(std::move(value)); return *this;}

    /**
     * <p>ARNs of the license configurations to add.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& AddAddLicenseSpecifications(const LicenseSpecification& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications.push_back(value); return *this; }

    /**
     * <p>ARNs of the license configurations to add.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& AddAddLicenseSpecifications(LicenseSpecification&& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>ARNs of the license configurations to remove.</p>
     */
    inline const Aws::Vector<LicenseSpecification>& GetRemoveLicenseSpecifications() const{ return m_removeLicenseSpecifications; }

    /**
     * <p>ARNs of the license configurations to remove.</p>
     */
    inline bool RemoveLicenseSpecificationsHasBeenSet() const { return m_removeLicenseSpecificationsHasBeenSet; }

    /**
     * <p>ARNs of the license configurations to remove.</p>
     */
    inline void SetRemoveLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications = value; }

    /**
     * <p>ARNs of the license configurations to remove.</p>
     */
    inline void SetRemoveLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications = std::move(value); }

    /**
     * <p>ARNs of the license configurations to remove.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithRemoveLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { SetRemoveLicenseSpecifications(value); return *this;}

    /**
     * <p>ARNs of the license configurations to remove.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithRemoveLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { SetRemoveLicenseSpecifications(std::move(value)); return *this;}

    /**
     * <p>ARNs of the license configurations to remove.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& AddRemoveLicenseSpecifications(const LicenseSpecification& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications.push_back(value); return *this; }

    /**
     * <p>ARNs of the license configurations to remove.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& AddRemoveLicenseSpecifications(LicenseSpecification&& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications.push_back(std::move(value)); return *this; }

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
