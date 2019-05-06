/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LICENSEMANAGER_API UpdateLicenseSpecificationsForResourceRequest : public LicenseManagerRequest
  {
  public:
    UpdateLicenseSpecificationsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLicenseSpecificationsForResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN for an AWS server resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>ARN for an AWS server resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>ARN for an AWS server resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>ARN for an AWS server resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>ARN for an AWS server resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>ARN for an AWS server resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>ARN for an AWS server resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>ARN for an AWS server resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>License configuration ARNs to be added to a resource.</p>
     */
    inline const Aws::Vector<LicenseSpecification>& GetAddLicenseSpecifications() const{ return m_addLicenseSpecifications; }

    /**
     * <p>License configuration ARNs to be added to a resource.</p>
     */
    inline bool AddLicenseSpecificationsHasBeenSet() const { return m_addLicenseSpecificationsHasBeenSet; }

    /**
     * <p>License configuration ARNs to be added to a resource.</p>
     */
    inline void SetAddLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications = value; }

    /**
     * <p>License configuration ARNs to be added to a resource.</p>
     */
    inline void SetAddLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications = std::move(value); }

    /**
     * <p>License configuration ARNs to be added to a resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithAddLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { SetAddLicenseSpecifications(value); return *this;}

    /**
     * <p>License configuration ARNs to be added to a resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithAddLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { SetAddLicenseSpecifications(std::move(value)); return *this;}

    /**
     * <p>License configuration ARNs to be added to a resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& AddAddLicenseSpecifications(const LicenseSpecification& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications.push_back(value); return *this; }

    /**
     * <p>License configuration ARNs to be added to a resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& AddAddLicenseSpecifications(LicenseSpecification&& value) { m_addLicenseSpecificationsHasBeenSet = true; m_addLicenseSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>License configuration ARNs to be removed from a resource.</p>
     */
    inline const Aws::Vector<LicenseSpecification>& GetRemoveLicenseSpecifications() const{ return m_removeLicenseSpecifications; }

    /**
     * <p>License configuration ARNs to be removed from a resource.</p>
     */
    inline bool RemoveLicenseSpecificationsHasBeenSet() const { return m_removeLicenseSpecificationsHasBeenSet; }

    /**
     * <p>License configuration ARNs to be removed from a resource.</p>
     */
    inline void SetRemoveLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications = value; }

    /**
     * <p>License configuration ARNs to be removed from a resource.</p>
     */
    inline void SetRemoveLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications = std::move(value); }

    /**
     * <p>License configuration ARNs to be removed from a resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithRemoveLicenseSpecifications(const Aws::Vector<LicenseSpecification>& value) { SetRemoveLicenseSpecifications(value); return *this;}

    /**
     * <p>License configuration ARNs to be removed from a resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& WithRemoveLicenseSpecifications(Aws::Vector<LicenseSpecification>&& value) { SetRemoveLicenseSpecifications(std::move(value)); return *this;}

    /**
     * <p>License configuration ARNs to be removed from a resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& AddRemoveLicenseSpecifications(const LicenseSpecification& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications.push_back(value); return *this; }

    /**
     * <p>License configuration ARNs to be removed from a resource.</p>
     */
    inline UpdateLicenseSpecificationsForResourceRequest& AddRemoveLicenseSpecifications(LicenseSpecification&& value) { m_removeLicenseSpecificationsHasBeenSet = true; m_removeLicenseSpecifications.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<LicenseSpecification> m_addLicenseSpecifications;
    bool m_addLicenseSpecificationsHasBeenSet;

    Aws::Vector<LicenseSpecification> m_removeLicenseSpecifications;
    bool m_removeLicenseSpecificationsHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
