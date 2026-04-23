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
   * <p>Describes a server resource that is associated with a license
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseConfigurationAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_LICENSEMANAGER_API LicenseConfigurationAssociation
  {
  public:
    LicenseConfigurationAssociation();
    LicenseConfigurationAssociation(Aws::Utils::Json::JsonView jsonValue);
    LicenseConfigurationAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the resource associated with the license configuration.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>ARN of the resource associated with the license configuration.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>ARN of the resource associated with the license configuration.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>ARN of the resource associated with the license configuration.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>ARN of the resource associated with the license configuration.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>ARN of the resource associated with the license configuration.</p>
     */
    inline LicenseConfigurationAssociation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>ARN of the resource associated with the license configuration.</p>
     */
    inline LicenseConfigurationAssociation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the resource associated with the license configuration.</p>
     */
    inline LicenseConfigurationAssociation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Type of server resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Type of server resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Type of server resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of server resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Type of server resource.</p>
     */
    inline LicenseConfigurationAssociation& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of server resource.</p>
     */
    inline LicenseConfigurationAssociation& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>ID of the AWS account that owns the resource consuming licenses.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }

    /**
     * <p>ID of the AWS account that owns the resource consuming licenses.</p>
     */
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }

    /**
     * <p>ID of the AWS account that owns the resource consuming licenses.</p>
     */
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }

    /**
     * <p>ID of the AWS account that owns the resource consuming licenses.</p>
     */
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }

    /**
     * <p>ID of the AWS account that owns the resource consuming licenses.</p>
     */
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }

    /**
     * <p>ID of the AWS account that owns the resource consuming licenses.</p>
     */
    inline LicenseConfigurationAssociation& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}

    /**
     * <p>ID of the AWS account that owns the resource consuming licenses.</p>
     */
    inline LicenseConfigurationAssociation& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}

    /**
     * <p>ID of the AWS account that owns the resource consuming licenses.</p>
     */
    inline LicenseConfigurationAssociation& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}


    /**
     * <p>Time when the license configuration was associated with the resource.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTime() const{ return m_associationTime; }

    /**
     * <p>Time when the license configuration was associated with the resource.</p>
     */
    inline bool AssociationTimeHasBeenSet() const { return m_associationTimeHasBeenSet; }

    /**
     * <p>Time when the license configuration was associated with the resource.</p>
     */
    inline void SetAssociationTime(const Aws::Utils::DateTime& value) { m_associationTimeHasBeenSet = true; m_associationTime = value; }

    /**
     * <p>Time when the license configuration was associated with the resource.</p>
     */
    inline void SetAssociationTime(Aws::Utils::DateTime&& value) { m_associationTimeHasBeenSet = true; m_associationTime = std::move(value); }

    /**
     * <p>Time when the license configuration was associated with the resource.</p>
     */
    inline LicenseConfigurationAssociation& WithAssociationTime(const Aws::Utils::DateTime& value) { SetAssociationTime(value); return *this;}

    /**
     * <p>Time when the license configuration was associated with the resource.</p>
     */
    inline LicenseConfigurationAssociation& WithAssociationTime(Aws::Utils::DateTime&& value) { SetAssociationTime(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet;

    Aws::Utils::DateTime m_associationTime;
    bool m_associationTimeHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
