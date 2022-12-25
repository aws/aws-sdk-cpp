/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/Identity.h>
#include <aws/iotsitewise/model/Resource.h>
#include <aws/iotsitewise/model/Permission.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class CreateAccessPolicyRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API CreateAccessPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessPolicy"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identity for this access policy. Choose an IAM Identity Center user, an
     * IAM Identity Center group, or an IAM user.</p>
     */
    inline const Identity& GetAccessPolicyIdentity() const{ return m_accessPolicyIdentity; }

    /**
     * <p>The identity for this access policy. Choose an IAM Identity Center user, an
     * IAM Identity Center group, or an IAM user.</p>
     */
    inline bool AccessPolicyIdentityHasBeenSet() const { return m_accessPolicyIdentityHasBeenSet; }

    /**
     * <p>The identity for this access policy. Choose an IAM Identity Center user, an
     * IAM Identity Center group, or an IAM user.</p>
     */
    inline void SetAccessPolicyIdentity(const Identity& value) { m_accessPolicyIdentityHasBeenSet = true; m_accessPolicyIdentity = value; }

    /**
     * <p>The identity for this access policy. Choose an IAM Identity Center user, an
     * IAM Identity Center group, or an IAM user.</p>
     */
    inline void SetAccessPolicyIdentity(Identity&& value) { m_accessPolicyIdentityHasBeenSet = true; m_accessPolicyIdentity = std::move(value); }

    /**
     * <p>The identity for this access policy. Choose an IAM Identity Center user, an
     * IAM Identity Center group, or an IAM user.</p>
     */
    inline CreateAccessPolicyRequest& WithAccessPolicyIdentity(const Identity& value) { SetAccessPolicyIdentity(value); return *this;}

    /**
     * <p>The identity for this access policy. Choose an IAM Identity Center user, an
     * IAM Identity Center group, or an IAM user.</p>
     */
    inline CreateAccessPolicyRequest& WithAccessPolicyIdentity(Identity&& value) { SetAccessPolicyIdentity(std::move(value)); return *this;}


    /**
     * <p>The IoT SiteWise Monitor resource for this access policy. Choose either a
     * portal or a project.</p>
     */
    inline const Resource& GetAccessPolicyResource() const{ return m_accessPolicyResource; }

    /**
     * <p>The IoT SiteWise Monitor resource for this access policy. Choose either a
     * portal or a project.</p>
     */
    inline bool AccessPolicyResourceHasBeenSet() const { return m_accessPolicyResourceHasBeenSet; }

    /**
     * <p>The IoT SiteWise Monitor resource for this access policy. Choose either a
     * portal or a project.</p>
     */
    inline void SetAccessPolicyResource(const Resource& value) { m_accessPolicyResourceHasBeenSet = true; m_accessPolicyResource = value; }

    /**
     * <p>The IoT SiteWise Monitor resource for this access policy. Choose either a
     * portal or a project.</p>
     */
    inline void SetAccessPolicyResource(Resource&& value) { m_accessPolicyResourceHasBeenSet = true; m_accessPolicyResource = std::move(value); }

    /**
     * <p>The IoT SiteWise Monitor resource for this access policy. Choose either a
     * portal or a project.</p>
     */
    inline CreateAccessPolicyRequest& WithAccessPolicyResource(const Resource& value) { SetAccessPolicyResource(value); return *this;}

    /**
     * <p>The IoT SiteWise Monitor resource for this access policy. Choose either a
     * portal or a project.</p>
     */
    inline CreateAccessPolicyRequest& WithAccessPolicyResource(Resource&& value) { SetAccessPolicyResource(std::move(value)); return *this;}


    /**
     * <p>The permission level for this access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline const Permission& GetAccessPolicyPermission() const{ return m_accessPolicyPermission; }

    /**
     * <p>The permission level for this access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline bool AccessPolicyPermissionHasBeenSet() const { return m_accessPolicyPermissionHasBeenSet; }

    /**
     * <p>The permission level for this access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline void SetAccessPolicyPermission(const Permission& value) { m_accessPolicyPermissionHasBeenSet = true; m_accessPolicyPermission = value; }

    /**
     * <p>The permission level for this access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline void SetAccessPolicyPermission(Permission&& value) { m_accessPolicyPermissionHasBeenSet = true; m_accessPolicyPermission = std::move(value); }

    /**
     * <p>The permission level for this access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline CreateAccessPolicyRequest& WithAccessPolicyPermission(const Permission& value) { SetAccessPolicyPermission(value); return *this;}

    /**
     * <p>The permission level for this access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline CreateAccessPolicyRequest& WithAccessPolicyPermission(Permission&& value) { SetAccessPolicyPermission(std::move(value)); return *this;}


    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreateAccessPolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreateAccessPolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreateAccessPolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAccessPolicyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAccessPolicyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAccessPolicyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAccessPolicyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAccessPolicyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAccessPolicyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAccessPolicyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAccessPolicyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the access policy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAccessPolicyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Identity m_accessPolicyIdentity;
    bool m_accessPolicyIdentityHasBeenSet = false;

    Resource m_accessPolicyResource;
    bool m_accessPolicyResourceHasBeenSet = false;

    Permission m_accessPolicyPermission;
    bool m_accessPolicyPermissionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
