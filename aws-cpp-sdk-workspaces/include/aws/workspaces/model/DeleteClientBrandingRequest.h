/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ClientDeviceType.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DeleteClientBrandingRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DeleteClientBrandingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClientBranding"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The directory identifier of the WorkSpace for which you want to delete client
     * branding.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to delete client
     * branding.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to delete client
     * branding.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to delete client
     * branding.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to delete client
     * branding.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to delete client
     * branding.</p>
     */
    inline DeleteClientBrandingRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The directory identifier of the WorkSpace for which you want to delete client
     * branding.</p>
     */
    inline DeleteClientBrandingRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The directory identifier of the WorkSpace for which you want to delete client
     * branding.</p>
     */
    inline DeleteClientBrandingRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The device type for which you want to delete client branding.</p>
     */
    inline const Aws::Vector<ClientDeviceType>& GetPlatforms() const{ return m_platforms; }

    /**
     * <p>The device type for which you want to delete client branding.</p>
     */
    inline bool PlatformsHasBeenSet() const { return m_platformsHasBeenSet; }

    /**
     * <p>The device type for which you want to delete client branding.</p>
     */
    inline void SetPlatforms(const Aws::Vector<ClientDeviceType>& value) { m_platformsHasBeenSet = true; m_platforms = value; }

    /**
     * <p>The device type for which you want to delete client branding.</p>
     */
    inline void SetPlatforms(Aws::Vector<ClientDeviceType>&& value) { m_platformsHasBeenSet = true; m_platforms = std::move(value); }

    /**
     * <p>The device type for which you want to delete client branding.</p>
     */
    inline DeleteClientBrandingRequest& WithPlatforms(const Aws::Vector<ClientDeviceType>& value) { SetPlatforms(value); return *this;}

    /**
     * <p>The device type for which you want to delete client branding.</p>
     */
    inline DeleteClientBrandingRequest& WithPlatforms(Aws::Vector<ClientDeviceType>&& value) { SetPlatforms(std::move(value)); return *this;}

    /**
     * <p>The device type for which you want to delete client branding.</p>
     */
    inline DeleteClientBrandingRequest& AddPlatforms(const ClientDeviceType& value) { m_platformsHasBeenSet = true; m_platforms.push_back(value); return *this; }

    /**
     * <p>The device type for which you want to delete client branding.</p>
     */
    inline DeleteClientBrandingRequest& AddPlatforms(ClientDeviceType&& value) { m_platformsHasBeenSet = true; m_platforms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<ClientDeviceType> m_platforms;
    bool m_platformsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
