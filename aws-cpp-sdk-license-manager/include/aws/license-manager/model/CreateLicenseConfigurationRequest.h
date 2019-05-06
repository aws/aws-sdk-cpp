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
#include <aws/license-manager/model/LicenseCountingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_LICENSEMANAGER_API CreateLicenseConfigurationRequest : public LicenseManagerRequest
  {
  public:
    CreateLicenseConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLicenseConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the license configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the license configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the license configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the license configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Human-friendly description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-friendly description of the license configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Human-friendly description of the license configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-friendly description of the license configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Human-friendly description of the license configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-friendly description of the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-friendly description of the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Human-friendly description of the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Dimension to use to track the license inventory.</p>
     */
    inline const LicenseCountingType& GetLicenseCountingType() const{ return m_licenseCountingType; }

    /**
     * <p>Dimension to use to track the license inventory.</p>
     */
    inline bool LicenseCountingTypeHasBeenSet() const { return m_licenseCountingTypeHasBeenSet; }

    /**
     * <p>Dimension to use to track the license inventory.</p>
     */
    inline void SetLicenseCountingType(const LicenseCountingType& value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = value; }

    /**
     * <p>Dimension to use to track the license inventory.</p>
     */
    inline void SetLicenseCountingType(LicenseCountingType&& value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = std::move(value); }

    /**
     * <p>Dimension to use to track the license inventory.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseCountingType(const LicenseCountingType& value) { SetLicenseCountingType(value); return *this;}

    /**
     * <p>Dimension to use to track the license inventory.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseCountingType(LicenseCountingType&& value) { SetLicenseCountingType(std::move(value)); return *this;}


    /**
     * <p>Number of licenses managed by the license configuration.</p>
     */
    inline long long GetLicenseCount() const{ return m_licenseCount; }

    /**
     * <p>Number of licenses managed by the license configuration.</p>
     */
    inline bool LicenseCountHasBeenSet() const { return m_licenseCountHasBeenSet; }

    /**
     * <p>Number of licenses managed by the license configuration.</p>
     */
    inline void SetLicenseCount(long long value) { m_licenseCountHasBeenSet = true; m_licenseCount = value; }

    /**
     * <p>Number of licenses managed by the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}


    /**
     * <p>Flag indicating whether hard or soft license enforcement is used. Exceeding a
     * hard limit results in the blocked deployment of new instances.</p>
     */
    inline bool GetLicenseCountHardLimit() const{ return m_licenseCountHardLimit; }

    /**
     * <p>Flag indicating whether hard or soft license enforcement is used. Exceeding a
     * hard limit results in the blocked deployment of new instances.</p>
     */
    inline bool LicenseCountHardLimitHasBeenSet() const { return m_licenseCountHardLimitHasBeenSet; }

    /**
     * <p>Flag indicating whether hard or soft license enforcement is used. Exceeding a
     * hard limit results in the blocked deployment of new instances.</p>
     */
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimitHasBeenSet = true; m_licenseCountHardLimit = value; }

    /**
     * <p>Flag indicating whether hard or soft license enforcement is used. Exceeding a
     * hard limit results in the blocked deployment of new instances.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}


    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const{ return m_licenseRules; }

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline bool LicenseRulesHasBeenSet() const { return m_licenseRulesHasBeenSet; }

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline void SetLicenseRules(const Aws::Vector<Aws::String>& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = value; }

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline void SetLicenseRules(Aws::Vector<Aws::String>&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = std::move(value); }

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseRules(const Aws::Vector<Aws::String>& value) { SetLicenseRules(value); return *this;}

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseRules(Aws::Vector<Aws::String>&& value) { SetLicenseRules(std::move(value)); return *this;}

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline CreateLicenseConfigurationRequest& AddLicenseRules(const Aws::String& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline CreateLicenseConfigurationRequest& AddLicenseRules(Aws::String&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(std::move(value)); return *this; }

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline CreateLicenseConfigurationRequest& AddLicenseRules(const char* value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }


    /**
     * <p>The tags to apply to the resources during launch. You can only tag instances
     * and volumes on launch. The specified tags are applied to all instances or
     * volumes that are created during launch. To tag a resource after it has been
     * created, see CreateTags .</p> <p/>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the resources during launch. You can only tag instances
     * and volumes on launch. The specified tags are applied to all instances or
     * volumes that are created during launch. To tag a resource after it has been
     * created, see CreateTags .</p> <p/>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the resources during launch. You can only tag instances
     * and volumes on launch. The specified tags are applied to all instances or
     * volumes that are created during launch. To tag a resource after it has been
     * created, see CreateTags .</p> <p/>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the resources during launch. You can only tag instances
     * and volumes on launch. The specified tags are applied to all instances or
     * volumes that are created during launch. To tag a resource after it has been
     * created, see CreateTags .</p> <p/>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the resources during launch. You can only tag instances
     * and volumes on launch. The specified tags are applied to all instances or
     * volumes that are created during launch. To tag a resource after it has been
     * created, see CreateTags .</p> <p/>
     */
    inline CreateLicenseConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the resources during launch. You can only tag instances
     * and volumes on launch. The specified tags are applied to all instances or
     * volumes that are created during launch. To tag a resource after it has been
     * created, see CreateTags .</p> <p/>
     */
    inline CreateLicenseConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resources during launch. You can only tag instances
     * and volumes on launch. The specified tags are applied to all instances or
     * volumes that are created during launch. To tag a resource after it has been
     * created, see CreateTags .</p> <p/>
     */
    inline CreateLicenseConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resources during launch. You can only tag instances
     * and volumes on launch. The specified tags are applied to all instances or
     * volumes that are created during launch. To tag a resource after it has been
     * created, see CreateTags .</p> <p/>
     */
    inline CreateLicenseConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    LicenseCountingType m_licenseCountingType;
    bool m_licenseCountingTypeHasBeenSet;

    long long m_licenseCount;
    bool m_licenseCountHasBeenSet;

    bool m_licenseCountHardLimit;
    bool m_licenseCountHardLimitHasBeenSet;

    Aws::Vector<Aws::String> m_licenseRules;
    bool m_licenseRulesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
