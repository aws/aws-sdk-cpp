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
    AWS_LICENSEMANAGER_API LicenseConfigurationAssociation();
    AWS_LICENSEMANAGER_API LicenseConfigurationAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConfigurationAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline LicenseConfigurationAssociation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline LicenseConfigurationAssociation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline LicenseConfigurationAssociation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of server resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline LicenseConfigurationAssociation& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline LicenseConfigurationAssociation& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services account that owns the resource consuming
     * licenses.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }
    inline LicenseConfigurationAssociation& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}
    inline LicenseConfigurationAssociation& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}
    inline LicenseConfigurationAssociation& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the license configuration was associated with the resource.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTime() const{ return m_associationTime; }
    inline bool AssociationTimeHasBeenSet() const { return m_associationTimeHasBeenSet; }
    inline void SetAssociationTime(const Aws::Utils::DateTime& value) { m_associationTimeHasBeenSet = true; m_associationTime = value; }
    inline void SetAssociationTime(Aws::Utils::DateTime&& value) { m_associationTimeHasBeenSet = true; m_associationTime = std::move(value); }
    inline LicenseConfigurationAssociation& WithAssociationTime(const Aws::Utils::DateTime& value) { SetAssociationTime(value); return *this;}
    inline LicenseConfigurationAssociation& WithAssociationTime(Aws::Utils::DateTime&& value) { SetAssociationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline const Aws::String& GetAmiAssociationScope() const{ return m_amiAssociationScope; }
    inline bool AmiAssociationScopeHasBeenSet() const { return m_amiAssociationScopeHasBeenSet; }
    inline void SetAmiAssociationScope(const Aws::String& value) { m_amiAssociationScopeHasBeenSet = true; m_amiAssociationScope = value; }
    inline void SetAmiAssociationScope(Aws::String&& value) { m_amiAssociationScopeHasBeenSet = true; m_amiAssociationScope = std::move(value); }
    inline void SetAmiAssociationScope(const char* value) { m_amiAssociationScopeHasBeenSet = true; m_amiAssociationScope.assign(value); }
    inline LicenseConfigurationAssociation& WithAmiAssociationScope(const Aws::String& value) { SetAmiAssociationScope(value); return *this;}
    inline LicenseConfigurationAssociation& WithAmiAssociationScope(Aws::String&& value) { SetAmiAssociationScope(std::move(value)); return *this;}
    inline LicenseConfigurationAssociation& WithAmiAssociationScope(const char* value) { SetAmiAssociationScope(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::Utils::DateTime m_associationTime;
    bool m_associationTimeHasBeenSet = false;

    Aws::String m_amiAssociationScope;
    bool m_amiAssociationScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
