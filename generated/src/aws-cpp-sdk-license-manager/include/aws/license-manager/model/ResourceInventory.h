/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/ResourceType.h>
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
   * <p>Details about a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ResourceInventory">AWS
   * API Reference</a></p>
   */
  class ResourceInventory
  {
  public:
    AWS_LICENSEMANAGER_API ResourceInventory();
    AWS_LICENSEMANAGER_API ResourceInventory(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ResourceInventory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ResourceInventory& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ResourceInventory& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ResourceInventory& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ResourceInventory& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline ResourceInventory& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ResourceInventory& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ResourceInventory& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ResourceInventory& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Platform of the resource.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline ResourceInventory& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline ResourceInventory& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline ResourceInventory& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Platform version of the resource in the inventory.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline ResourceInventory& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline ResourceInventory& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline ResourceInventory& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwningAccountId() const{ return m_resourceOwningAccountId; }
    inline bool ResourceOwningAccountIdHasBeenSet() const { return m_resourceOwningAccountIdHasBeenSet; }
    inline void SetResourceOwningAccountId(const Aws::String& value) { m_resourceOwningAccountIdHasBeenSet = true; m_resourceOwningAccountId = value; }
    inline void SetResourceOwningAccountId(Aws::String&& value) { m_resourceOwningAccountIdHasBeenSet = true; m_resourceOwningAccountId = std::move(value); }
    inline void SetResourceOwningAccountId(const char* value) { m_resourceOwningAccountIdHasBeenSet = true; m_resourceOwningAccountId.assign(value); }
    inline ResourceInventory& WithResourceOwningAccountId(const Aws::String& value) { SetResourceOwningAccountId(value); return *this;}
    inline ResourceInventory& WithResourceOwningAccountId(Aws::String&& value) { SetResourceOwningAccountId(std::move(value)); return *this;}
    inline ResourceInventory& WithResourceOwningAccountId(const char* value) { SetResourceOwningAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_resourceOwningAccountId;
    bool m_resourceOwningAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
