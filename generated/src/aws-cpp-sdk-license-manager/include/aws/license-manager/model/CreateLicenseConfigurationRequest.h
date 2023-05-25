/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseCountingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/Tag.h>
#include <aws/license-manager/model/ProductInformation.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CreateLicenseConfigurationRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLicenseConfiguration"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateLicenseConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Dimension used to track the license inventory.</p>
     */
    inline const LicenseCountingType& GetLicenseCountingType() const{ return m_licenseCountingType; }

    /**
     * <p>Dimension used to track the license inventory.</p>
     */
    inline bool LicenseCountingTypeHasBeenSet() const { return m_licenseCountingTypeHasBeenSet; }

    /**
     * <p>Dimension used to track the license inventory.</p>
     */
    inline void SetLicenseCountingType(const LicenseCountingType& value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = value; }

    /**
     * <p>Dimension used to track the license inventory.</p>
     */
    inline void SetLicenseCountingType(LicenseCountingType&& value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = std::move(value); }

    /**
     * <p>Dimension used to track the license inventory.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseCountingType(const LicenseCountingType& value) { SetLicenseCountingType(value); return *this;}

    /**
     * <p>Dimension used to track the license inventory.</p>
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
     * <p>Indicates whether hard or soft license enforcement is used. Exceeding a hard
     * limit blocks the launch of new instances.</p>
     */
    inline bool GetLicenseCountHardLimit() const{ return m_licenseCountHardLimit; }

    /**
     * <p>Indicates whether hard or soft license enforcement is used. Exceeding a hard
     * limit blocks the launch of new instances.</p>
     */
    inline bool LicenseCountHardLimitHasBeenSet() const { return m_licenseCountHardLimitHasBeenSet; }

    /**
     * <p>Indicates whether hard or soft license enforcement is used. Exceeding a hard
     * limit blocks the launch of new instances.</p>
     */
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimitHasBeenSet = true; m_licenseCountHardLimit = value; }

    /**
     * <p>Indicates whether hard or soft license enforcement is used. Exceeding a hard
     * limit blocks the launch of new instances.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}


    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> |
     * <code>maximumSockets</code> | <code>minimumSockets</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const{ return m_licenseRules; }

    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> |
     * <code>maximumSockets</code> | <code>minimumSockets</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline bool LicenseRulesHasBeenSet() const { return m_licenseRulesHasBeenSet; }

    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> |
     * <code>maximumSockets</code> | <code>minimumSockets</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline void SetLicenseRules(const Aws::Vector<Aws::String>& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = value; }

    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> |
     * <code>maximumSockets</code> | <code>minimumSockets</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline void SetLicenseRules(Aws::Vector<Aws::String>&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = std::move(value); }

    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> |
     * <code>maximumSockets</code> | <code>minimumSockets</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseRules(const Aws::Vector<Aws::String>& value) { SetLicenseRules(value); return *this;}

    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> |
     * <code>maximumSockets</code> | <code>minimumSockets</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline CreateLicenseConfigurationRequest& WithLicenseRules(Aws::Vector<Aws::String>&& value) { SetLicenseRules(std::move(value)); return *this;}

    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> |
     * <code>maximumSockets</code> | <code>minimumSockets</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline CreateLicenseConfigurationRequest& AddLicenseRules(const Aws::String& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }

    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> |
     * <code>maximumSockets</code> | <code>minimumSockets</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline CreateLicenseConfigurationRequest& AddLicenseRules(Aws::String&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(std::move(value)); return *this; }

    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> |
     * <code>maximumSockets</code> | <code>minimumSockets</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline CreateLicenseConfigurationRequest& AddLicenseRules(const char* value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }


    /**
     * <p>Tags to add to the license configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to add to the license configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to add to the license configuration.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to add to the license configuration.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to add to the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to add to the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to add to the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to add to the license configuration.</p>
     */
    inline CreateLicenseConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool GetDisassociateWhenNotFound() const{ return m_disassociateWhenNotFound; }

    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool DisassociateWhenNotFoundHasBeenSet() const { return m_disassociateWhenNotFoundHasBeenSet; }

    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline void SetDisassociateWhenNotFound(bool value) { m_disassociateWhenNotFoundHasBeenSet = true; m_disassociateWhenNotFound = value; }

    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline CreateLicenseConfigurationRequest& WithDisassociateWhenNotFound(bool value) { SetDisassociateWhenNotFound(value); return *this;}


    /**
     * <p>Product information.</p>
     */
    inline const Aws::Vector<ProductInformation>& GetProductInformationList() const{ return m_productInformationList; }

    /**
     * <p>Product information.</p>
     */
    inline bool ProductInformationListHasBeenSet() const { return m_productInformationListHasBeenSet; }

    /**
     * <p>Product information.</p>
     */
    inline void SetProductInformationList(const Aws::Vector<ProductInformation>& value) { m_productInformationListHasBeenSet = true; m_productInformationList = value; }

    /**
     * <p>Product information.</p>
     */
    inline void SetProductInformationList(Aws::Vector<ProductInformation>&& value) { m_productInformationListHasBeenSet = true; m_productInformationList = std::move(value); }

    /**
     * <p>Product information.</p>
     */
    inline CreateLicenseConfigurationRequest& WithProductInformationList(const Aws::Vector<ProductInformation>& value) { SetProductInformationList(value); return *this;}

    /**
     * <p>Product information.</p>
     */
    inline CreateLicenseConfigurationRequest& WithProductInformationList(Aws::Vector<ProductInformation>&& value) { SetProductInformationList(std::move(value)); return *this;}

    /**
     * <p>Product information.</p>
     */
    inline CreateLicenseConfigurationRequest& AddProductInformationList(const ProductInformation& value) { m_productInformationListHasBeenSet = true; m_productInformationList.push_back(value); return *this; }

    /**
     * <p>Product information.</p>
     */
    inline CreateLicenseConfigurationRequest& AddProductInformationList(ProductInformation&& value) { m_productInformationListHasBeenSet = true; m_productInformationList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LicenseCountingType m_licenseCountingType;
    bool m_licenseCountingTypeHasBeenSet = false;

    long long m_licenseCount;
    bool m_licenseCountHasBeenSet = false;

    bool m_licenseCountHardLimit;
    bool m_licenseCountHardLimitHasBeenSet = false;

    Aws::Vector<Aws::String> m_licenseRules;
    bool m_licenseRulesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_disassociateWhenNotFound;
    bool m_disassociateWhenNotFoundHasBeenSet = false;

    Aws::Vector<ProductInformation> m_productInformationList;
    bool m_productInformationListHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
