/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceBucketAccess.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class SetResourceAccessForBucketRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API SetResourceAccessForBucketRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetResourceAccessForBucket"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Lightsail instance for which to set bucket access. The
     * instance must be in a running or stopped state.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the Lightsail instance for which to set bucket access. The
     * instance must be in a running or stopped state.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the Lightsail instance for which to set bucket access. The
     * instance must be in a running or stopped state.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the Lightsail instance for which to set bucket access. The
     * instance must be in a running or stopped state.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the Lightsail instance for which to set bucket access. The
     * instance must be in a running or stopped state.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the Lightsail instance for which to set bucket access. The
     * instance must be in a running or stopped state.</p>
     */
    inline SetResourceAccessForBucketRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the Lightsail instance for which to set bucket access. The
     * instance must be in a running or stopped state.</p>
     */
    inline SetResourceAccessForBucketRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lightsail instance for which to set bucket access. The
     * instance must be in a running or stopped state.</p>
     */
    inline SetResourceAccessForBucketRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The name of the bucket for which to set access to another Lightsail
     * resource.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the bucket for which to set access to another Lightsail
     * resource.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the bucket for which to set access to another Lightsail
     * resource.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the bucket for which to set access to another Lightsail
     * resource.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the bucket for which to set access to another Lightsail
     * resource.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the bucket for which to set access to another Lightsail
     * resource.</p>
     */
    inline SetResourceAccessForBucketRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the bucket for which to set access to another Lightsail
     * resource.</p>
     */
    inline SetResourceAccessForBucketRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket for which to set access to another Lightsail
     * resource.</p>
     */
    inline SetResourceAccessForBucketRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The access setting.</p> <p>The following access settings are available:</p>
     * <ul> <li> <p> <code>allow</code> - Allows access to the bucket and its
     * objects.</p> </li> <li> <p> <code>deny</code> - Denies access to the bucket and
     * its objects. Use this setting to remove access for a resource previously set to
     * <code>allow</code>.</p> </li> </ul>
     */
    inline const ResourceBucketAccess& GetAccess() const{ return m_access; }

    /**
     * <p>The access setting.</p> <p>The following access settings are available:</p>
     * <ul> <li> <p> <code>allow</code> - Allows access to the bucket and its
     * objects.</p> </li> <li> <p> <code>deny</code> - Denies access to the bucket and
     * its objects. Use this setting to remove access for a resource previously set to
     * <code>allow</code>.</p> </li> </ul>
     */
    inline bool AccessHasBeenSet() const { return m_accessHasBeenSet; }

    /**
     * <p>The access setting.</p> <p>The following access settings are available:</p>
     * <ul> <li> <p> <code>allow</code> - Allows access to the bucket and its
     * objects.</p> </li> <li> <p> <code>deny</code> - Denies access to the bucket and
     * its objects. Use this setting to remove access for a resource previously set to
     * <code>allow</code>.</p> </li> </ul>
     */
    inline void SetAccess(const ResourceBucketAccess& value) { m_accessHasBeenSet = true; m_access = value; }

    /**
     * <p>The access setting.</p> <p>The following access settings are available:</p>
     * <ul> <li> <p> <code>allow</code> - Allows access to the bucket and its
     * objects.</p> </li> <li> <p> <code>deny</code> - Denies access to the bucket and
     * its objects. Use this setting to remove access for a resource previously set to
     * <code>allow</code>.</p> </li> </ul>
     */
    inline void SetAccess(ResourceBucketAccess&& value) { m_accessHasBeenSet = true; m_access = std::move(value); }

    /**
     * <p>The access setting.</p> <p>The following access settings are available:</p>
     * <ul> <li> <p> <code>allow</code> - Allows access to the bucket and its
     * objects.</p> </li> <li> <p> <code>deny</code> - Denies access to the bucket and
     * its objects. Use this setting to remove access for a resource previously set to
     * <code>allow</code>.</p> </li> </ul>
     */
    inline SetResourceAccessForBucketRequest& WithAccess(const ResourceBucketAccess& value) { SetAccess(value); return *this;}

    /**
     * <p>The access setting.</p> <p>The following access settings are available:</p>
     * <ul> <li> <p> <code>allow</code> - Allows access to the bucket and its
     * objects.</p> </li> <li> <p> <code>deny</code> - Denies access to the bucket and
     * its objects. Use this setting to remove access for a resource previously set to
     * <code>allow</code>.</p> </li> </ul>
     */
    inline SetResourceAccessForBucketRequest& WithAccess(ResourceBucketAccess&& value) { SetAccess(std::move(value)); return *this;}

  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    ResourceBucketAccess m_access;
    bool m_accessHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
