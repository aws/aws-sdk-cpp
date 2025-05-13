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
#include <aws/iotsitewise/model/PortalType.h>
#include <aws/iotsitewise/model/PortalTypeEntry.h>
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
    AWS_IOTSITEWISE_API CreatePortalRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePortal"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A friendly name for the portal.</p>
     */
    inline const Aws::String& GetPortalName() const { return m_portalName; }
    inline bool PortalNameHasBeenSet() const { return m_portalNameHasBeenSet; }
    template<typename PortalNameT = Aws::String>
    void SetPortalName(PortalNameT&& value) { m_portalNameHasBeenSet = true; m_portalName = std::forward<PortalNameT>(value); }
    template<typename PortalNameT = Aws::String>
    CreatePortalRequest& WithPortalName(PortalNameT&& value) { SetPortalName(std::forward<PortalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the portal.</p>
     */
    inline const Aws::String& GetPortalDescription() const { return m_portalDescription; }
    inline bool PortalDescriptionHasBeenSet() const { return m_portalDescriptionHasBeenSet; }
    template<typename PortalDescriptionT = Aws::String>
    void SetPortalDescription(PortalDescriptionT&& value) { m_portalDescriptionHasBeenSet = true; m_portalDescription = std::forward<PortalDescriptionT>(value); }
    template<typename PortalDescriptionT = Aws::String>
    CreatePortalRequest& WithPortalDescription(PortalDescriptionT&& value) { SetPortalDescription(std::forward<PortalDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline const Aws::String& GetPortalContactEmail() const { return m_portalContactEmail; }
    inline bool PortalContactEmailHasBeenSet() const { return m_portalContactEmailHasBeenSet; }
    template<typename PortalContactEmailT = Aws::String>
    void SetPortalContactEmail(PortalContactEmailT&& value) { m_portalContactEmailHasBeenSet = true; m_portalContactEmail = std::forward<PortalContactEmailT>(value); }
    template<typename PortalContactEmailT = Aws::String>
    CreatePortalRequest& WithPortalContactEmail(PortalContactEmailT&& value) { SetPortalContactEmail(std::forward<PortalContactEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreatePortalRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A logo image to display in the portal. Upload a square, high-resolution
     * image. The image is displayed on a dark background.</p>
     */
    inline const ImageFile& GetPortalLogoImageFile() const { return m_portalLogoImageFile; }
    inline bool PortalLogoImageFileHasBeenSet() const { return m_portalLogoImageFileHasBeenSet; }
    template<typename PortalLogoImageFileT = ImageFile>
    void SetPortalLogoImageFile(PortalLogoImageFileT&& value) { m_portalLogoImageFileHasBeenSet = true; m_portalLogoImageFile = std::forward<PortalLogoImageFileT>(value); }
    template<typename PortalLogoImageFileT = ImageFile>
    CreatePortalRequest& WithPortalLogoImageFile(PortalLogoImageFileT&& value) { SetPortalLogoImageFile(std::forward<PortalLogoImageFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreatePortalRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the portal. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreatePortalRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreatePortalRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The service to use to authenticate users to the portal. Choose from the
     * following options:</p> <ul> <li> <p> <code>SSO</code> – The portal uses IAM
     * Identity Center to authenticate users and manage user permissions. Before you
     * can create a portal that uses IAM Identity Center, you must enable IAM Identity
     * Center. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-get-started.html#mon-gs-sso">Enabling
     * IAM Identity Center</a> in the <i>IoT SiteWise User Guide</i>. This option is
     * only available in Amazon Web Services Regions other than the China Regions.</p>
     * </li> <li> <p> <code>IAM</code> – The portal uses Identity and Access Management
     * to authenticate users and manage user permissions.</p> </li> </ul> <p>You can't
     * change this value after you create a portal.</p> <p>Default: <code>SSO</code>
     * </p>
     */
    inline AuthMode GetPortalAuthMode() const { return m_portalAuthMode; }
    inline bool PortalAuthModeHasBeenSet() const { return m_portalAuthModeHasBeenSet; }
    inline void SetPortalAuthMode(AuthMode value) { m_portalAuthModeHasBeenSet = true; m_portalAuthMode = value; }
    inline CreatePortalRequest& WithPortalAuthMode(AuthMode value) { SetPortalAuthMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that sends alarm notifications.</p>  <p>If you
     * use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">IoT
     * Events managed Lambda function</a> to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the sender email address in Amazon SES</a>.</p> 
     */
    inline const Aws::String& GetNotificationSenderEmail() const { return m_notificationSenderEmail; }
    inline bool NotificationSenderEmailHasBeenSet() const { return m_notificationSenderEmailHasBeenSet; }
    template<typename NotificationSenderEmailT = Aws::String>
    void SetNotificationSenderEmail(NotificationSenderEmailT&& value) { m_notificationSenderEmailHasBeenSet = true; m_notificationSenderEmail = std::forward<NotificationSenderEmailT>(value); }
    template<typename NotificationSenderEmailT = Aws::String>
    CreatePortalRequest& WithNotificationSenderEmail(NotificationSenderEmailT&& value) { SetNotificationSenderEmail(std::forward<NotificationSenderEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal. You can use the alarm to monitor an asset property and get
     * notified when the asset property value is outside a specified range. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/monitor-alarms.html">Monitoring
     * with alarms</a> in the <i>IoT SiteWise Application Guide</i>.</p>
     */
    inline const Alarms& GetAlarms() const { return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    template<typename AlarmsT = Alarms>
    void SetAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms = std::forward<AlarmsT>(value); }
    template<typename AlarmsT = Alarms>
    CreatePortalRequest& WithAlarms(AlarmsT&& value) { SetAlarms(std::forward<AlarmsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the type of portal. The value for IoT SiteWise Monitor (Classic) is
     * <code>SITEWISE_PORTAL_V1</code>. The value for IoT SiteWise Monitor (AI-aware)
     * is <code>SITEWISE_PORTAL_V2</code>.</p>
     */
    inline PortalType GetPortalType() const { return m_portalType; }
    inline bool PortalTypeHasBeenSet() const { return m_portalTypeHasBeenSet; }
    inline void SetPortalType(PortalType value) { m_portalTypeHasBeenSet = true; m_portalType = value; }
    inline CreatePortalRequest& WithPortalType(PortalType value) { SetPortalType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration entry associated with the specific portal type. The value
     * for IoT SiteWise Monitor (Classic) is <code>SITEWISE_PORTAL_V1</code>. The value
     * for IoT SiteWise Monitor (AI-aware) is <code>SITEWISE_PORTAL_V2</code>.</p>
     */
    inline const Aws::Map<Aws::String, PortalTypeEntry>& GetPortalTypeConfiguration() const { return m_portalTypeConfiguration; }
    inline bool PortalTypeConfigurationHasBeenSet() const { return m_portalTypeConfigurationHasBeenSet; }
    template<typename PortalTypeConfigurationT = Aws::Map<Aws::String, PortalTypeEntry>>
    void SetPortalTypeConfiguration(PortalTypeConfigurationT&& value) { m_portalTypeConfigurationHasBeenSet = true; m_portalTypeConfiguration = std::forward<PortalTypeConfigurationT>(value); }
    template<typename PortalTypeConfigurationT = Aws::Map<Aws::String, PortalTypeEntry>>
    CreatePortalRequest& WithPortalTypeConfiguration(PortalTypeConfigurationT&& value) { SetPortalTypeConfiguration(std::forward<PortalTypeConfigurationT>(value)); return *this;}
    template<typename PortalTypeConfigurationKeyT = Aws::String, typename PortalTypeConfigurationValueT = PortalTypeEntry>
    CreatePortalRequest& AddPortalTypeConfiguration(PortalTypeConfigurationKeyT&& key, PortalTypeConfigurationValueT&& value) {
      m_portalTypeConfigurationHasBeenSet = true; m_portalTypeConfiguration.emplace(std::forward<PortalTypeConfigurationKeyT>(key), std::forward<PortalTypeConfigurationValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_portalName;
    bool m_portalNameHasBeenSet = false;

    Aws::String m_portalDescription;
    bool m_portalDescriptionHasBeenSet = false;

    Aws::String m_portalContactEmail;
    bool m_portalContactEmailHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    ImageFile m_portalLogoImageFile;
    bool m_portalLogoImageFileHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AuthMode m_portalAuthMode{AuthMode::NOT_SET};
    bool m_portalAuthModeHasBeenSet = false;

    Aws::String m_notificationSenderEmail;
    bool m_notificationSenderEmailHasBeenSet = false;

    Alarms m_alarms;
    bool m_alarmsHasBeenSet = false;

    PortalType m_portalType{PortalType::NOT_SET};
    bool m_portalTypeHasBeenSet = false;

    Aws::Map<Aws::String, PortalTypeEntry> m_portalTypeConfiguration;
    bool m_portalTypeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
