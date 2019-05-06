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
#include <aws/license-manager/model/LicenseConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class AWS_LICENSEMANAGER_API UpdateLicenseConfigurationRequest : public LicenseManagerRequest
  {
  public:
    UpdateLicenseConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLicenseConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN for a license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }

    /**
     * <p>ARN for a license configuration.</p>
     */
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }

    /**
     * <p>ARN for a license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = value; }

    /**
     * <p>ARN for a license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::move(value); }

    /**
     * <p>ARN for a license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn.assign(value); }

    /**
     * <p>ARN for a license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}

    /**
     * <p>ARN for a license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>ARN for a license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}


    /**
     * <p>New status of the license configuration (<code>ACTIVE</code> or
     * <code>INACTIVE</code>).</p>
     */
    inline const LicenseConfigurationStatus& GetLicenseConfigurationStatus() const{ return m_licenseConfigurationStatus; }

    /**
     * <p>New status of the license configuration (<code>ACTIVE</code> or
     * <code>INACTIVE</code>).</p>
     */
    inline bool LicenseConfigurationStatusHasBeenSet() const { return m_licenseConfigurationStatusHasBeenSet; }

    /**
     * <p>New status of the license configuration (<code>ACTIVE</code> or
     * <code>INACTIVE</code>).</p>
     */
    inline void SetLicenseConfigurationStatus(const LicenseConfigurationStatus& value) { m_licenseConfigurationStatusHasBeenSet = true; m_licenseConfigurationStatus = value; }

    /**
     * <p>New status of the license configuration (<code>ACTIVE</code> or
     * <code>INACTIVE</code>).</p>
     */
    inline void SetLicenseConfigurationStatus(LicenseConfigurationStatus&& value) { m_licenseConfigurationStatusHasBeenSet = true; m_licenseConfigurationStatus = std::move(value); }

    /**
     * <p>New status of the license configuration (<code>ACTIVE</code> or
     * <code>INACTIVE</code>).</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationStatus(const LicenseConfigurationStatus& value) { SetLicenseConfigurationStatus(value); return *this;}

    /**
     * <p>New status of the license configuration (<code>ACTIVE</code> or
     * <code>INACTIVE</code>).</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationStatus(LicenseConfigurationStatus&& value) { SetLicenseConfigurationStatus(std::move(value)); return *this;}


    /**
     * <p>List of flexible text strings designating license rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const{ return m_licenseRules; }

    /**
     * <p>List of flexible text strings designating license rules.</p>
     */
    inline bool LicenseRulesHasBeenSet() const { return m_licenseRulesHasBeenSet; }

    /**
     * <p>List of flexible text strings designating license rules.</p>
     */
    inline void SetLicenseRules(const Aws::Vector<Aws::String>& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = value; }

    /**
     * <p>List of flexible text strings designating license rules.</p>
     */
    inline void SetLicenseRules(Aws::Vector<Aws::String>&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = std::move(value); }

    /**
     * <p>List of flexible text strings designating license rules.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseRules(const Aws::Vector<Aws::String>& value) { SetLicenseRules(value); return *this;}

    /**
     * <p>List of flexible text strings designating license rules.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseRules(Aws::Vector<Aws::String>&& value) { SetLicenseRules(std::move(value)); return *this;}

    /**
     * <p>List of flexible text strings designating license rules.</p>
     */
    inline UpdateLicenseConfigurationRequest& AddLicenseRules(const Aws::String& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }

    /**
     * <p>List of flexible text strings designating license rules.</p>
     */
    inline UpdateLicenseConfigurationRequest& AddLicenseRules(Aws::String&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(std::move(value)); return *this; }

    /**
     * <p>List of flexible text strings designating license rules.</p>
     */
    inline UpdateLicenseConfigurationRequest& AddLicenseRules(const char* value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }


    /**
     * <p>New number of licenses managed by the license configuration.</p>
     */
    inline long long GetLicenseCount() const{ return m_licenseCount; }

    /**
     * <p>New number of licenses managed by the license configuration.</p>
     */
    inline bool LicenseCountHasBeenSet() const { return m_licenseCountHasBeenSet; }

    /**
     * <p>New number of licenses managed by the license configuration.</p>
     */
    inline void SetLicenseCount(long long value) { m_licenseCountHasBeenSet = true; m_licenseCount = value; }

    /**
     * <p>New number of licenses managed by the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}


    /**
     * <p>Sets the number of available licenses as a hard limit.</p>
     */
    inline bool GetLicenseCountHardLimit() const{ return m_licenseCountHardLimit; }

    /**
     * <p>Sets the number of available licenses as a hard limit.</p>
     */
    inline bool LicenseCountHardLimitHasBeenSet() const { return m_licenseCountHardLimitHasBeenSet; }

    /**
     * <p>Sets the number of available licenses as a hard limit.</p>
     */
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimitHasBeenSet = true; m_licenseCountHardLimit = value; }

    /**
     * <p>Sets the number of available licenses as a hard limit.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}


    /**
     * <p>New name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>New name of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>New name of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>New human-friendly description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>New human-friendly description of the license configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>New human-friendly description of the license configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>New human-friendly description of the license configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>New human-friendly description of the license configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>New human-friendly description of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>New human-friendly description of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>New human-friendly description of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet;

    LicenseConfigurationStatus m_licenseConfigurationStatus;
    bool m_licenseConfigurationStatusHasBeenSet;

    Aws::Vector<Aws::String> m_licenseRules;
    bool m_licenseRulesHasBeenSet;

    long long m_licenseCount;
    bool m_licenseCountHasBeenSet;

    bool m_licenseCountHardLimit;
    bool m_licenseCountHardLimitHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
