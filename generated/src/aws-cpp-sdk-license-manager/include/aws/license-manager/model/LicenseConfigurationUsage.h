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
    AWS_LICENSEMANAGER_API LicenseConfigurationUsage() = default;
    AWS_LICENSEMANAGER_API LicenseConfigurationUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConfigurationUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    LicenseConfigurationUsage& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of resource.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline LicenseConfigurationUsage& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the resource.</p>
     */
    inline const Aws::String& GetResourceStatus() const { return m_resourceStatus; }
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }
    template<typename ResourceStatusT = Aws::String>
    void SetResourceStatus(ResourceStatusT&& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = std::forward<ResourceStatusT>(value); }
    template<typename ResourceStatusT = Aws::String>
    LicenseConfigurationUsage& WithResourceStatus(ResourceStatusT&& value) { SetResourceStatus(std::forward<ResourceStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    template<typename ResourceOwnerIdT = Aws::String>
    void SetResourceOwnerId(ResourceOwnerIdT&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value); }
    template<typename ResourceOwnerIdT = Aws::String>
    LicenseConfigurationUsage& WithResourceOwnerId(ResourceOwnerIdT&& value) { SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the license configuration was initially associated with the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTime() const { return m_associationTime; }
    inline bool AssociationTimeHasBeenSet() const { return m_associationTimeHasBeenSet; }
    template<typename AssociationTimeT = Aws::Utils::DateTime>
    void SetAssociationTime(AssociationTimeT&& value) { m_associationTimeHasBeenSet = true; m_associationTime = std::forward<AssociationTimeT>(value); }
    template<typename AssociationTimeT = Aws::Utils::DateTime>
    LicenseConfigurationUsage& WithAssociationTime(AssociationTimeT&& value) { SetAssociationTime(std::forward<AssociationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of licenses consumed by the resource.</p>
     */
    inline long long GetConsumedLicenses() const { return m_consumedLicenses; }
    inline bool ConsumedLicensesHasBeenSet() const { return m_consumedLicensesHasBeenSet; }
    inline void SetConsumedLicenses(long long value) { m_consumedLicensesHasBeenSet = true; m_consumedLicenses = value; }
    inline LicenseConfigurationUsage& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceStatus;
    bool m_resourceStatusHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::Utils::DateTime m_associationTime{};
    bool m_associationTimeHasBeenSet = false;

    long long m_consumedLicenses{0};
    bool m_consumedLicensesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
