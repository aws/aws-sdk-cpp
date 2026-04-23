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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseCountingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/ConsumedLicenseSummary.h>
#include <aws/license-manager/model/ManagedResourceSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>A license configuration is an abstraction of a customer license agreement
   * that can be consumed and enforced by License Manager. Components include
   * specifications for the license type (licensing by instance, socket, CPU, or
   * VCPU), tenancy (shared tenancy, Amazon EC2 Dedicated Instance, Amazon EC2
   * Dedicated Host, or any of these), host affinity (how long a VM must be
   * associated with a host), the number of licenses purchased and
   * used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LICENSEMANAGER_API LicenseConfiguration
  {
  public:
    LicenseConfiguration();
    LicenseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LicenseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique ID of the <code>LicenseConfiguration</code> object.</p>
     */
    inline const Aws::String& GetLicenseConfigurationId() const{ return m_licenseConfigurationId; }

    /**
     * <p>Unique ID of the <code>LicenseConfiguration</code> object.</p>
     */
    inline bool LicenseConfigurationIdHasBeenSet() const { return m_licenseConfigurationIdHasBeenSet; }

    /**
     * <p>Unique ID of the <code>LicenseConfiguration</code> object.</p>
     */
    inline void SetLicenseConfigurationId(const Aws::String& value) { m_licenseConfigurationIdHasBeenSet = true; m_licenseConfigurationId = value; }

    /**
     * <p>Unique ID of the <code>LicenseConfiguration</code> object.</p>
     */
    inline void SetLicenseConfigurationId(Aws::String&& value) { m_licenseConfigurationIdHasBeenSet = true; m_licenseConfigurationId = std::move(value); }

    /**
     * <p>Unique ID of the <code>LicenseConfiguration</code> object.</p>
     */
    inline void SetLicenseConfigurationId(const char* value) { m_licenseConfigurationIdHasBeenSet = true; m_licenseConfigurationId.assign(value); }

    /**
     * <p>Unique ID of the <code>LicenseConfiguration</code> object.</p>
     */
    inline LicenseConfiguration& WithLicenseConfigurationId(const Aws::String& value) { SetLicenseConfigurationId(value); return *this;}

    /**
     * <p>Unique ID of the <code>LicenseConfiguration</code> object.</p>
     */
    inline LicenseConfiguration& WithLicenseConfigurationId(Aws::String&& value) { SetLicenseConfigurationId(std::move(value)); return *this;}

    /**
     * <p>Unique ID of the <code>LicenseConfiguration</code> object.</p>
     */
    inline LicenseConfiguration& WithLicenseConfigurationId(const char* value) { SetLicenseConfigurationId(value); return *this;}


    /**
     * <p>ARN of the <code>LicenseConfiguration</code> object.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }

    /**
     * <p>ARN of the <code>LicenseConfiguration</code> object.</p>
     */
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }

    /**
     * <p>ARN of the <code>LicenseConfiguration</code> object.</p>
     */
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = value; }

    /**
     * <p>ARN of the <code>LicenseConfiguration</code> object.</p>
     */
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::move(value); }

    /**
     * <p>ARN of the <code>LicenseConfiguration</code> object.</p>
     */
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn.assign(value); }

    /**
     * <p>ARN of the <code>LicenseConfiguration</code> object.</p>
     */
    inline LicenseConfiguration& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}

    /**
     * <p>ARN of the <code>LicenseConfiguration</code> object.</p>
     */
    inline LicenseConfiguration& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the <code>LicenseConfiguration</code> object.</p>
     */
    inline LicenseConfiguration& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}


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
    inline LicenseConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the license configuration.</p>
     */
    inline LicenseConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the license configuration.</p>
     */
    inline LicenseConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the license configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the license configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the license configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the license configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the license configuration.</p>
     */
    inline LicenseConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the license configuration.</p>
     */
    inline LicenseConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the license configuration.</p>
     */
    inline LicenseConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Dimension to use to track license inventory.</p>
     */
    inline const LicenseCountingType& GetLicenseCountingType() const{ return m_licenseCountingType; }

    /**
     * <p>Dimension to use to track license inventory.</p>
     */
    inline bool LicenseCountingTypeHasBeenSet() const { return m_licenseCountingTypeHasBeenSet; }

    /**
     * <p>Dimension to use to track license inventory.</p>
     */
    inline void SetLicenseCountingType(const LicenseCountingType& value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = value; }

    /**
     * <p>Dimension to use to track license inventory.</p>
     */
    inline void SetLicenseCountingType(LicenseCountingType&& value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = std::move(value); }

    /**
     * <p>Dimension to use to track license inventory.</p>
     */
    inline LicenseConfiguration& WithLicenseCountingType(const LicenseCountingType& value) { SetLicenseCountingType(value); return *this;}

    /**
     * <p>Dimension to use to track license inventory.</p>
     */
    inline LicenseConfiguration& WithLicenseCountingType(LicenseCountingType&& value) { SetLicenseCountingType(std::move(value)); return *this;}


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
    inline LicenseConfiguration& WithLicenseRules(const Aws::Vector<Aws::String>& value) { SetLicenseRules(value); return *this;}

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline LicenseConfiguration& WithLicenseRules(Aws::Vector<Aws::String>&& value) { SetLicenseRules(std::move(value)); return *this;}

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline LicenseConfiguration& AddLicenseRules(const Aws::String& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline LicenseConfiguration& AddLicenseRules(Aws::String&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(std::move(value)); return *this; }

    /**
     * <p>Array of configured License Manager rules.</p>
     */
    inline LicenseConfiguration& AddLicenseRules(const char* value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }


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
    inline LicenseConfiguration& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}


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
    inline LicenseConfiguration& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}


    /**
     * <p>Number of licenses consumed. </p>
     */
    inline long long GetConsumedLicenses() const{ return m_consumedLicenses; }

    /**
     * <p>Number of licenses consumed. </p>
     */
    inline bool ConsumedLicensesHasBeenSet() const { return m_consumedLicensesHasBeenSet; }

    /**
     * <p>Number of licenses consumed. </p>
     */
    inline void SetConsumedLicenses(long long value) { m_consumedLicensesHasBeenSet = true; m_consumedLicenses = value; }

    /**
     * <p>Number of licenses consumed. </p>
     */
    inline LicenseConfiguration& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}


    /**
     * <p>Status of the license configuration.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the license configuration.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the license configuration.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the license configuration.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the license configuration.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Status of the license configuration.</p>
     */
    inline LicenseConfiguration& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the license configuration.</p>
     */
    inline LicenseConfiguration& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Status of the license configuration.</p>
     */
    inline LicenseConfiguration& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline LicenseConfiguration& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline LicenseConfiguration& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline LicenseConfiguration& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>List of summaries for licenses consumed by various resources.</p>
     */
    inline const Aws::Vector<ConsumedLicenseSummary>& GetConsumedLicenseSummaryList() const{ return m_consumedLicenseSummaryList; }

    /**
     * <p>List of summaries for licenses consumed by various resources.</p>
     */
    inline bool ConsumedLicenseSummaryListHasBeenSet() const { return m_consumedLicenseSummaryListHasBeenSet; }

    /**
     * <p>List of summaries for licenses consumed by various resources.</p>
     */
    inline void SetConsumedLicenseSummaryList(const Aws::Vector<ConsumedLicenseSummary>& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList = value; }

    /**
     * <p>List of summaries for licenses consumed by various resources.</p>
     */
    inline void SetConsumedLicenseSummaryList(Aws::Vector<ConsumedLicenseSummary>&& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList = std::move(value); }

    /**
     * <p>List of summaries for licenses consumed by various resources.</p>
     */
    inline LicenseConfiguration& WithConsumedLicenseSummaryList(const Aws::Vector<ConsumedLicenseSummary>& value) { SetConsumedLicenseSummaryList(value); return *this;}

    /**
     * <p>List of summaries for licenses consumed by various resources.</p>
     */
    inline LicenseConfiguration& WithConsumedLicenseSummaryList(Aws::Vector<ConsumedLicenseSummary>&& value) { SetConsumedLicenseSummaryList(std::move(value)); return *this;}

    /**
     * <p>List of summaries for licenses consumed by various resources.</p>
     */
    inline LicenseConfiguration& AddConsumedLicenseSummaryList(const ConsumedLicenseSummary& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList.push_back(value); return *this; }

    /**
     * <p>List of summaries for licenses consumed by various resources.</p>
     */
    inline LicenseConfiguration& AddConsumedLicenseSummaryList(ConsumedLicenseSummary&& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>List of summaries for managed resources.</p>
     */
    inline const Aws::Vector<ManagedResourceSummary>& GetManagedResourceSummaryList() const{ return m_managedResourceSummaryList; }

    /**
     * <p>List of summaries for managed resources.</p>
     */
    inline bool ManagedResourceSummaryListHasBeenSet() const { return m_managedResourceSummaryListHasBeenSet; }

    /**
     * <p>List of summaries for managed resources.</p>
     */
    inline void SetManagedResourceSummaryList(const Aws::Vector<ManagedResourceSummary>& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList = value; }

    /**
     * <p>List of summaries for managed resources.</p>
     */
    inline void SetManagedResourceSummaryList(Aws::Vector<ManagedResourceSummary>&& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList = std::move(value); }

    /**
     * <p>List of summaries for managed resources.</p>
     */
    inline LicenseConfiguration& WithManagedResourceSummaryList(const Aws::Vector<ManagedResourceSummary>& value) { SetManagedResourceSummaryList(value); return *this;}

    /**
     * <p>List of summaries for managed resources.</p>
     */
    inline LicenseConfiguration& WithManagedResourceSummaryList(Aws::Vector<ManagedResourceSummary>&& value) { SetManagedResourceSummaryList(std::move(value)); return *this;}

    /**
     * <p>List of summaries for managed resources.</p>
     */
    inline LicenseConfiguration& AddManagedResourceSummaryList(const ManagedResourceSummary& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList.push_back(value); return *this; }

    /**
     * <p>List of summaries for managed resources.</p>
     */
    inline LicenseConfiguration& AddManagedResourceSummaryList(ManagedResourceSummary&& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_licenseConfigurationId;
    bool m_licenseConfigurationIdHasBeenSet;

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    LicenseCountingType m_licenseCountingType;
    bool m_licenseCountingTypeHasBeenSet;

    Aws::Vector<Aws::String> m_licenseRules;
    bool m_licenseRulesHasBeenSet;

    long long m_licenseCount;
    bool m_licenseCountHasBeenSet;

    bool m_licenseCountHardLimit;
    bool m_licenseCountHardLimitHasBeenSet;

    long long m_consumedLicenses;
    bool m_consumedLicensesHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet;

    Aws::Vector<ConsumedLicenseSummary> m_consumedLicenseSummaryList;
    bool m_consumedLicenseSummaryListHasBeenSet;

    Aws::Vector<ManagedResourceSummary> m_managedResourceSummaryList;
    bool m_managedResourceSummaryListHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
