/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ImageFile.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotsitewise/model/AuthMode.h>
#include <aws/iotsitewise/model/Alarms.h>
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
  class CreatePortalRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API CreatePortalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePortal"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>A friendly name for the portal.</p>
     */
    inline const Aws::String& GetPortalName() const{ return m_portalName; }

    /**
     * <p>A friendly name for the portal.</p>
     */
    inline bool PortalNameHasBeenSet() const { return m_portalNameHasBeenSet; }

    /**
     * <p>A friendly name for the portal.</p>
     */
    inline void SetPortalName(const Aws::String& value) { m_portalNameHasBeenSet = true; m_portalName = value; }

    /**
     * <p>A friendly name for the portal.</p>
     */
    inline void SetPortalName(Aws::String&& value) { m_portalNameHasBeenSet = true; m_portalName = std::move(value); }

    /**
     * <p>A friendly name for the portal.</p>
     */
    inline void SetPortalName(const char* value) { m_portalNameHasBeenSet = true; m_portalName.assign(value); }

    /**
     * <p>A friendly name for the portal.</p>
     */
    inline CreatePortalRequest& WithPortalName(const Aws::String& value) { SetPortalName(value); return *this;}

    /**
     * <p>A friendly name for the portal.</p>
     */
    inline CreatePortalRequest& WithPortalName(Aws::String&& value) { SetPortalName(std::move(value)); return *this;}

    /**
     * <p>A friendly name for the portal.</p>
     */
    inline CreatePortalRequest& WithPortalName(const char* value) { SetPortalName(value); return *this;}


    /**
     * <p>A description for the portal.</p>
     */
    inline const Aws::String& GetPortalDescription() const{ return m_portalDescription; }

    /**
     * <p>A description for the portal.</p>
     */
    inline bool PortalDescriptionHasBeenSet() const { return m_portalDescriptionHasBeenSet; }

    /**
     * <p>A description for the portal.</p>
     */
    inline void SetPortalDescription(const Aws::String& value) { m_portalDescriptionHasBeenSet = true; m_portalDescription = value; }

    /**
     * <p>A description for the portal.</p>
     */
    inline void SetPortalDescription(Aws::String&& value) { m_portalDescriptionHasBeenSet = true; m_portalDescription = std::move(value); }

    /**
     * <p>A description for the portal.</p>
     */
    inline void SetPortalDescription(const char* value) { m_portalDescriptionHasBeenSet = true; m_portalDescription.assign(value); }

    /**
     * <p>A description for the portal.</p>
     */
    inline CreatePortalRequest& WithPortalDescription(const Aws::String& value) { SetPortalDescription(value); return *this;}

    /**
     * <p>A description for the portal.</p>
     */
    inline CreatePortalRequest& WithPortalDescription(Aws::String&& value) { SetPortalDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the portal.</p>
     */
    inline CreatePortalRequest& WithPortalDescription(const char* value) { SetPortalDescription(value); return *this;}


    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline const Aws::String& GetPortalContactEmail() const{ return m_portalContactEmail; }

    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline bool PortalContactEmailHasBeenSet() const { return m_portalContactEmailHasBeenSet; }

    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline void SetPortalContactEmail(const Aws::String& value) { m_portalContactEmailHasBeenSet = true; m_portalContactEmail = value; }

    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline void SetPortalContactEmail(Aws::String&& value) { m_portalContactEmailHasBeenSet = true; m_portalContactEmail = std::move(value); }

    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline void SetPortalContactEmail(const char* value) { m_portalContactEmailHasBeenSet = true; m_portalContactEmail.assign(value); }

    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline CreatePortalRequest& WithPortalContactEmail(const Aws::String& value) { SetPortalContactEmail(value); return *this;}

    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline CreatePortalRequest& WithPortalContactEmail(Aws::String&& value) { SetPortalContactEmail(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline CreatePortalRequest& WithPortalContactEmail(const char* value) { SetPortalContactEmail(value); return *this;}


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
    inline CreatePortalRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreatePortalRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreatePortalRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A logo image to display in the portal. Upload a square, high-resolution
     * image. The image is displayed on a dark background.</p>
     */
    inline const ImageFile& GetPortalLogoImageFile() const{ return m_portalLogoImageFile; }

    /**
     * <p>A logo image to display in the portal. Upload a square, high-resolution
     * image. The image is displayed on a dark background.</p>
     */
    inline bool PortalLogoImageFileHasBeenSet() const { return m_portalLogoImageFileHasBeenSet; }

    /**
     * <p>A logo image to display in the portal. Upload a square, high-resolution
     * image. The image is displayed on a dark background.</p>
     */
    inline void SetPortalLogoImageFile(const ImageFile& value) { m_portalLogoImageFileHasBeenSet = true; m_portalLogoImageFile = value; }

    /**
     * <p>A logo image to display in the portal. Upload a square, high-resolution
     * image. The image is displayed on a dark background.</p>
     */
    inline void SetPortalLogoImageFile(ImageFile&& value) { m_portalLogoImageFileHasBeenSet = true; m_portalLogoImageFile = std::move(value); }

    /**
     * <p>A logo image to display in the portal. Upload a square, high-resolution
     * image. The image is displayed on a dark background.</p>
     */
    inline CreatePortalRequest& WithPortalLogoImageFile(const ImageFile& value) { SetPortalLogoImageFile(value); return *this;}

    /**
     * <p>A logo image to display in the portal. Upload a square, high-resolution
     * image. The image is displayed on a dark background.</p>
     */
    inline CreatePortalRequest& WithPortalLogoImageFile(ImageFile&& value) { SetPortalLogoImageFile(std::move(value)); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreatePortalRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreatePortalRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreatePortalRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreatePortalRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreatePortalRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreatePortalRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreatePortalRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreatePortalRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreatePortalRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreatePortalRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreatePortalRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreatePortalRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The service to use to authenticate users to the portal. Choose from the
     * following options:</p> <ul> <li> <p> <code>SSO</code> – The portal uses IAM
     * Identity Center (successor to Single Sign-On) to authenticate users and manage
     * user permissions. Before you can create a portal that uses IAM Identity Center,
     * you must enable IAM Identity Center. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-get-started.html#mon-gs-sso">Enabling
     * IAM Identity Center</a> in the <i>IoT SiteWise User Guide</i>. This option is
     * only available in Amazon Web Services Regions other than the China Regions.</p>
     * </li> <li> <p> <code>IAM</code> – The portal uses Identity and Access Management
     * to authenticate users and manage user permissions.</p> </li> </ul> <p>You can't
     * change this value after you create a portal.</p> <p>Default: <code>SSO</code>
     * </p>
     */
    inline const AuthMode& GetPortalAuthMode() const{ return m_portalAuthMode; }

    /**
     * <p>The service to use to authenticate users to the portal. Choose from the
     * following options:</p> <ul> <li> <p> <code>SSO</code> – The portal uses IAM
     * Identity Center (successor to Single Sign-On) to authenticate users and manage
     * user permissions. Before you can create a portal that uses IAM Identity Center,
     * you must enable IAM Identity Center. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-get-started.html#mon-gs-sso">Enabling
     * IAM Identity Center</a> in the <i>IoT SiteWise User Guide</i>. This option is
     * only available in Amazon Web Services Regions other than the China Regions.</p>
     * </li> <li> <p> <code>IAM</code> – The portal uses Identity and Access Management
     * to authenticate users and manage user permissions.</p> </li> </ul> <p>You can't
     * change this value after you create a portal.</p> <p>Default: <code>SSO</code>
     * </p>
     */
    inline bool PortalAuthModeHasBeenSet() const { return m_portalAuthModeHasBeenSet; }

    /**
     * <p>The service to use to authenticate users to the portal. Choose from the
     * following options:</p> <ul> <li> <p> <code>SSO</code> – The portal uses IAM
     * Identity Center (successor to Single Sign-On) to authenticate users and manage
     * user permissions. Before you can create a portal that uses IAM Identity Center,
     * you must enable IAM Identity Center. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-get-started.html#mon-gs-sso">Enabling
     * IAM Identity Center</a> in the <i>IoT SiteWise User Guide</i>. This option is
     * only available in Amazon Web Services Regions other than the China Regions.</p>
     * </li> <li> <p> <code>IAM</code> – The portal uses Identity and Access Management
     * to authenticate users and manage user permissions.</p> </li> </ul> <p>You can't
     * change this value after you create a portal.</p> <p>Default: <code>SSO</code>
     * </p>
     */
    inline void SetPortalAuthMode(const AuthMode& value) { m_portalAuthModeHasBeenSet = true; m_portalAuthMode = value; }

    /**
     * <p>The service to use to authenticate users to the portal. Choose from the
     * following options:</p> <ul> <li> <p> <code>SSO</code> – The portal uses IAM
     * Identity Center (successor to Single Sign-On) to authenticate users and manage
     * user permissions. Before you can create a portal that uses IAM Identity Center,
     * you must enable IAM Identity Center. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-get-started.html#mon-gs-sso">Enabling
     * IAM Identity Center</a> in the <i>IoT SiteWise User Guide</i>. This option is
     * only available in Amazon Web Services Regions other than the China Regions.</p>
     * </li> <li> <p> <code>IAM</code> – The portal uses Identity and Access Management
     * to authenticate users and manage user permissions.</p> </li> </ul> <p>You can't
     * change this value after you create a portal.</p> <p>Default: <code>SSO</code>
     * </p>
     */
    inline void SetPortalAuthMode(AuthMode&& value) { m_portalAuthModeHasBeenSet = true; m_portalAuthMode = std::move(value); }

    /**
     * <p>The service to use to authenticate users to the portal. Choose from the
     * following options:</p> <ul> <li> <p> <code>SSO</code> – The portal uses IAM
     * Identity Center (successor to Single Sign-On) to authenticate users and manage
     * user permissions. Before you can create a portal that uses IAM Identity Center,
     * you must enable IAM Identity Center. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-get-started.html#mon-gs-sso">Enabling
     * IAM Identity Center</a> in the <i>IoT SiteWise User Guide</i>. This option is
     * only available in Amazon Web Services Regions other than the China Regions.</p>
     * </li> <li> <p> <code>IAM</code> – The portal uses Identity and Access Management
     * to authenticate users and manage user permissions.</p> </li> </ul> <p>You can't
     * change this value after you create a portal.</p> <p>Default: <code>SSO</code>
     * </p>
     */
    inline CreatePortalRequest& WithPortalAuthMode(const AuthMode& value) { SetPortalAuthMode(value); return *this;}

    /**
     * <p>The service to use to authenticate users to the portal. Choose from the
     * following options:</p> <ul> <li> <p> <code>SSO</code> – The portal uses IAM
     * Identity Center (successor to Single Sign-On) to authenticate users and manage
     * user permissions. Before you can create a portal that uses IAM Identity Center,
     * you must enable IAM Identity Center. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-get-started.html#mon-gs-sso">Enabling
     * IAM Identity Center</a> in the <i>IoT SiteWise User Guide</i>. This option is
     * only available in Amazon Web Services Regions other than the China Regions.</p>
     * </li> <li> <p> <code>IAM</code> – The portal uses Identity and Access Management
     * to authenticate users and manage user permissions.</p> </li> </ul> <p>You can't
     * change this value after you create a portal.</p> <p>Default: <code>SSO</code>
     * </p>
     */
    inline CreatePortalRequest& WithPortalAuthMode(AuthMode&& value) { SetPortalAuthMode(std::move(value)); return *this;}


    /**
     * <p>The email address that sends alarm notifications.</p>  <p>If you
     * use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">IoT
     * Events managed Lambda function</a> to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the sender email address in Amazon SES</a>.</p> 
     */
    inline const Aws::String& GetNotificationSenderEmail() const{ return m_notificationSenderEmail; }

    /**
     * <p>The email address that sends alarm notifications.</p>  <p>If you
     * use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">IoT
     * Events managed Lambda function</a> to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the sender email address in Amazon SES</a>.</p> 
     */
    inline bool NotificationSenderEmailHasBeenSet() const { return m_notificationSenderEmailHasBeenSet; }

    /**
     * <p>The email address that sends alarm notifications.</p>  <p>If you
     * use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">IoT
     * Events managed Lambda function</a> to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the sender email address in Amazon SES</a>.</p> 
     */
    inline void SetNotificationSenderEmail(const Aws::String& value) { m_notificationSenderEmailHasBeenSet = true; m_notificationSenderEmail = value; }

    /**
     * <p>The email address that sends alarm notifications.</p>  <p>If you
     * use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">IoT
     * Events managed Lambda function</a> to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the sender email address in Amazon SES</a>.</p> 
     */
    inline void SetNotificationSenderEmail(Aws::String&& value) { m_notificationSenderEmailHasBeenSet = true; m_notificationSenderEmail = std::move(value); }

    /**
     * <p>The email address that sends alarm notifications.</p>  <p>If you
     * use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">IoT
     * Events managed Lambda function</a> to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the sender email address in Amazon SES</a>.</p> 
     */
    inline void SetNotificationSenderEmail(const char* value) { m_notificationSenderEmailHasBeenSet = true; m_notificationSenderEmail.assign(value); }

    /**
     * <p>The email address that sends alarm notifications.</p>  <p>If you
     * use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">IoT
     * Events managed Lambda function</a> to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the sender email address in Amazon SES</a>.</p> 
     */
    inline CreatePortalRequest& WithNotificationSenderEmail(const Aws::String& value) { SetNotificationSenderEmail(value); return *this;}

    /**
     * <p>The email address that sends alarm notifications.</p>  <p>If you
     * use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">IoT
     * Events managed Lambda function</a> to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the sender email address in Amazon SES</a>.</p> 
     */
    inline CreatePortalRequest& WithNotificationSenderEmail(Aws::String&& value) { SetNotificationSenderEmail(std::move(value)); return *this;}

    /**
     * <p>The email address that sends alarm notifications.</p>  <p>If you
     * use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">IoT
     * Events managed Lambda function</a> to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the sender email address in Amazon SES</a>.</p> 
     */
    inline CreatePortalRequest& WithNotificationSenderEmail(const char* value) { SetNotificationSenderEmail(value); return *this;}


    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal. You can use the alarm to monitor an asset property and get
     * notified when the asset property value is outside a specified range. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/monitor-alarms.html">Monitoring
     * with alarms</a> in the <i>IoT SiteWise Application Guide</i>.</p>
     */
    inline const Alarms& GetAlarms() const{ return m_alarms; }

    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal. You can use the alarm to monitor an asset property and get
     * notified when the asset property value is outside a specified range. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/monitor-alarms.html">Monitoring
     * with alarms</a> in the <i>IoT SiteWise Application Guide</i>.</p>
     */
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }

    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal. You can use the alarm to monitor an asset property and get
     * notified when the asset property value is outside a specified range. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/monitor-alarms.html">Monitoring
     * with alarms</a> in the <i>IoT SiteWise Application Guide</i>.</p>
     */
    inline void SetAlarms(const Alarms& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal. You can use the alarm to monitor an asset property and get
     * notified when the asset property value is outside a specified range. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/monitor-alarms.html">Monitoring
     * with alarms</a> in the <i>IoT SiteWise Application Guide</i>.</p>
     */
    inline void SetAlarms(Alarms&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal. You can use the alarm to monitor an asset property and get
     * notified when the asset property value is outside a specified range. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/monitor-alarms.html">Monitoring
     * with alarms</a> in the <i>IoT SiteWise Application Guide</i>.</p>
     */
    inline CreatePortalRequest& WithAlarms(const Alarms& value) { SetAlarms(value); return *this;}

    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal. You can use the alarm to monitor an asset property and get
     * notified when the asset property value is outside a specified range. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/monitor-alarms.html">Monitoring
     * with alarms</a> in the <i>IoT SiteWise Application Guide</i>.</p>
     */
    inline CreatePortalRequest& WithAlarms(Alarms&& value) { SetAlarms(std::move(value)); return *this;}

  private:

    Aws::String m_portalName;
    bool m_portalNameHasBeenSet = false;

    Aws::String m_portalDescription;
    bool m_portalDescriptionHasBeenSet = false;

    Aws::String m_portalContactEmail;
    bool m_portalContactEmailHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ImageFile m_portalLogoImageFile;
    bool m_portalLogoImageFileHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AuthMode m_portalAuthMode;
    bool m_portalAuthModeHasBeenSet = false;

    Aws::String m_notificationSenderEmail;
    bool m_notificationSenderEmailHasBeenSet = false;

    Alarms m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
