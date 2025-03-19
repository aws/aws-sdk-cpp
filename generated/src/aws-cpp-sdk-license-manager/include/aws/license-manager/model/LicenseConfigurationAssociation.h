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
   * <p>Describes an association with a license configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseConfigurationAssociation">AWS
   * API Reference</a></p>
   */
  class LicenseConfigurationAssociation
  {
  public:
    AWS_LICENSEMANAGER_API LicenseConfigurationAssociation() = default;
    AWS_LICENSEMANAGER_API LicenseConfigurationAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConfigurationAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    LicenseConfigurationAssociation& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of server resource.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline LicenseConfigurationAssociation& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services account that owns the resource consuming
     * licenses.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    template<typename ResourceOwnerIdT = Aws::String>
    void SetResourceOwnerId(ResourceOwnerIdT&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value); }
    template<typename ResourceOwnerIdT = Aws::String>
    LicenseConfigurationAssociation& WithResourceOwnerId(ResourceOwnerIdT&& value) { SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the license configuration was associated with the resource.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTime() const { return m_associationTime; }
    inline bool AssociationTimeHasBeenSet() const { return m_associationTimeHasBeenSet; }
    template<typename AssociationTimeT = Aws::Utils::DateTime>
    void SetAssociationTime(AssociationTimeT&& value) { m_associationTimeHasBeenSet = true; m_associationTime = std::forward<AssociationTimeT>(value); }
    template<typename AssociationTimeT = Aws::Utils::DateTime>
    LicenseConfigurationAssociation& WithAssociationTime(AssociationTimeT&& value) { SetAssociationTime(std::forward<AssociationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline const Aws::String& GetAmiAssociationScope() const { return m_amiAssociationScope; }
    inline bool AmiAssociationScopeHasBeenSet() const { return m_amiAssociationScopeHasBeenSet; }
    template<typename AmiAssociationScopeT = Aws::String>
    void SetAmiAssociationScope(AmiAssociationScopeT&& value) { m_amiAssociationScopeHasBeenSet = true; m_amiAssociationScope = std::forward<AmiAssociationScopeT>(value); }
    template<typename AmiAssociationScopeT = Aws::String>
    LicenseConfigurationAssociation& WithAmiAssociationScope(AmiAssociationScopeT&& value) { SetAmiAssociationScope(std::forward<AmiAssociationScopeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::Utils::DateTime m_associationTime{};
    bool m_associationTimeHasBeenSet = false;

    Aws::String m_amiAssociationScope;
    bool m_amiAssociationScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
