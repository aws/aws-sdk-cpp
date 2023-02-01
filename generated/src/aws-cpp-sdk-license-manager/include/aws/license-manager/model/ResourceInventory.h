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


    /**
     * <p>ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>ID of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>ID of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>ID of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>ID of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>ID of the resource.</p>
     */
    inline ResourceInventory& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>ID of the resource.</p>
     */
    inline ResourceInventory& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>ID of the resource.</p>
     */
    inline ResourceInventory& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Type of resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Type of resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Type of resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Type of resource.</p>
     */
    inline ResourceInventory& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of resource.</p>
     */
    inline ResourceInventory& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline ResourceInventory& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline ResourceInventory& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline ResourceInventory& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Platform of the resource.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>Platform of the resource.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>Platform of the resource.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>Platform of the resource.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>Platform of the resource.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>Platform of the resource.</p>
     */
    inline ResourceInventory& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>Platform of the resource.</p>
     */
    inline ResourceInventory& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>Platform of the resource.</p>
     */
    inline ResourceInventory& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>Platform version of the resource in the inventory.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>Platform version of the resource in the inventory.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>Platform version of the resource in the inventory.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>Platform version of the resource in the inventory.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>Platform version of the resource in the inventory.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>Platform version of the resource in the inventory.</p>
     */
    inline ResourceInventory& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>Platform version of the resource in the inventory.</p>
     */
    inline ResourceInventory& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>Platform version of the resource in the inventory.</p>
     */
    inline ResourceInventory& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwningAccountId() const{ return m_resourceOwningAccountId; }

    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline bool ResourceOwningAccountIdHasBeenSet() const { return m_resourceOwningAccountIdHasBeenSet; }

    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline void SetResourceOwningAccountId(const Aws::String& value) { m_resourceOwningAccountIdHasBeenSet = true; m_resourceOwningAccountId = value; }

    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline void SetResourceOwningAccountId(Aws::String&& value) { m_resourceOwningAccountIdHasBeenSet = true; m_resourceOwningAccountId = std::move(value); }

    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline void SetResourceOwningAccountId(const char* value) { m_resourceOwningAccountIdHasBeenSet = true; m_resourceOwningAccountId.assign(value); }

    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline ResourceInventory& WithResourceOwningAccountId(const Aws::String& value) { SetResourceOwningAccountId(value); return *this;}

    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline ResourceInventory& WithResourceOwningAccountId(Aws::String&& value) { SetResourceOwningAccountId(std::move(value)); return *this;}

    /**
     * <p>ID of the account that owns the resource.</p>
     */
    inline ResourceInventory& WithResourceOwningAccountId(const char* value) { SetResourceOwningAccountId(value); return *this;}

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
