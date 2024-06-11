/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/ResourceType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Details about the usage of a resource associated with a license
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseConfigurationUsage">AWS
   * API Reference</a></p>
   */
  class LicenseConfigurationUsage
  {
  public:
    AWS_LICENSEMANAGER_API LicenseConfigurationUsage();
    AWS_LICENSEMANAGER_API LicenseConfigurationUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConfigurationUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline LicenseConfigurationUsage& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline LicenseConfigurationUsage& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline LicenseConfigurationUsage& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline LicenseConfigurationUsage& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline LicenseConfigurationUsage& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the resource.</p>
     */
    inline const Aws::String& GetResourceStatus() const{ return m_resourceStatus; }
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }
    inline void SetResourceStatus(const Aws::String& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }
    inline void SetResourceStatus(Aws::String&& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = std::move(value); }
    inline void SetResourceStatus(const char* value) { m_resourceStatusHasBeenSet = true; m_resourceStatus.assign(value); }
    inline LicenseConfigurationUsage& WithResourceStatus(const Aws::String& value) { SetResourceStatus(value); return *this;}
    inline LicenseConfigurationUsage& WithResourceStatus(Aws::String&& value) { SetResourceStatus(std::move(value)); return *this;}
    inline LicenseConfigurationUsage& WithResourceStatus(const char* value) { SetResourceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }
    inline LicenseConfigurationUsage& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}
    inline LicenseConfigurationUsage& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}
    inline LicenseConfigurationUsage& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the license configuration was initially associated with the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTime() const{ return m_associationTime; }
    inline bool AssociationTimeHasBeenSet() const { return m_associationTimeHasBeenSet; }
    inline void SetAssociationTime(const Aws::Utils::DateTime& value) { m_associationTimeHasBeenSet = true; m_associationTime = value; }
    inline void SetAssociationTime(Aws::Utils::DateTime&& value) { m_associationTimeHasBeenSet = true; m_associationTime = std::move(value); }
    inline LicenseConfigurationUsage& WithAssociationTime(const Aws::Utils::DateTime& value) { SetAssociationTime(value); return *this;}
    inline LicenseConfigurationUsage& WithAssociationTime(Aws::Utils::DateTime&& value) { SetAssociationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of licenses consumed by the resource.</p>
     */
    inline long long GetConsumedLicenses() const{ return m_consumedLicenses; }
    inline bool ConsumedLicensesHasBeenSet() const { return m_consumedLicensesHasBeenSet; }
    inline void SetConsumedLicenses(long long value) { m_consumedLicensesHasBeenSet = true; m_consumedLicenses = value; }
    inline LicenseConfigurationUsage& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceStatus;
    bool m_resourceStatusHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::Utils::DateTime m_associationTime;
    bool m_associationTimeHasBeenSet = false;

    long long m_consumedLicenses;
    bool m_consumedLicensesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
