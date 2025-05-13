/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/Image.h>
#include <aws/iotsitewise/model/Alarms.h>
#include <aws/iotsitewise/model/PortalType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class UpdatePortalRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdatePortalRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePortal"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the portal to update.</p>
     */
    inline const Aws::String& GetPortalId() const { return m_portalId; }
    inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }
    template<typename PortalIdT = Aws::String>
    void SetPortalId(PortalIdT&& value) { m_portalIdHasBeenSet = true; m_portalId = std::forward<PortalIdT>(value); }
    template<typename PortalIdT = Aws::String>
    UpdatePortalRequest& WithPortalId(PortalIdT&& value) { SetPortalId(std::forward<PortalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new friendly name for the portal.</p>
     */
    inline const Aws::String& GetPortalName() const { return m_portalName; }
    inline bool PortalNameHasBeenSet() const { return m_portalNameHasBeenSet; }
    template<typename PortalNameT = Aws::String>
    void SetPortalName(PortalNameT&& value) { m_portalNameHasBeenSet = true; m_portalName = std::forward<PortalNameT>(value); }
    template<typename PortalNameT = Aws::String>
    UpdatePortalRequest& WithPortalName(PortalNameT&& value) { SetPortalName(std::forward<PortalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the portal.</p>
     */
    inline const Aws::String& GetPortalDescription() const { return m_portalDescription; }
    inline bool PortalDescriptionHasBeenSet() const { return m_portalDescriptionHasBeenSet; }
    template<typename PortalDescriptionT = Aws::String>
    void SetPortalDescription(PortalDescriptionT&& value) { m_portalDescriptionHasBeenSet = true; m_portalDescription = std::forward<PortalDescriptionT>(value); }
    template<typename PortalDescriptionT = Aws::String>
    UpdatePortalRequest& WithPortalDescription(PortalDescriptionT&& value) { SetPortalDescription(std::forward<PortalDescriptionT>(value)); return *this;}
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
    UpdatePortalRequest& WithPortalContactEmail(PortalContactEmailT&& value) { SetPortalContactEmail(std::forward<PortalContactEmailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Image& GetPortalLogoImage() const { return m_portalLogoImage; }
    inline bool PortalLogoImageHasBeenSet() const { return m_portalLogoImageHasBeenSet; }
    template<typename PortalLogoImageT = Image>
    void SetPortalLogoImage(PortalLogoImageT&& value) { m_portalLogoImageHasBeenSet = true; m_portalLogoImage = std::forward<PortalLogoImageT>(value); }
    template<typename PortalLogoImageT = Image>
    UpdatePortalRequest& WithPortalLogoImage(PortalLogoImageT&& value) { SetPortalLogoImage(std::forward<PortalLogoImageT>(value)); return *this;}
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
    UpdatePortalRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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
    UpdatePortalRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline const Aws::String& GetNotificationSenderEmail() const { return m_notificationSenderEmail; }
    inline bool NotificationSenderEmailHasBeenSet() const { return m_notificationSenderEmailHasBeenSet; }
    template<typename NotificationSenderEmailT = Aws::String>
    void SetNotificationSenderEmail(NotificationSenderEmailT&& value) { m_notificationSenderEmailHasBeenSet = true; m_notificationSenderEmail = std::forward<NotificationSenderEmailT>(value); }
    template<typename NotificationSenderEmailT = Aws::String>
    UpdatePortalRequest& WithNotificationSenderEmail(NotificationSenderEmailT&& value) { SetNotificationSenderEmail(std::forward<NotificationSenderEmailT>(value)); return *this;}
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
    UpdatePortalRequest& WithAlarms(AlarmsT&& value) { SetAlarms(std::forward<AlarmsT>(value)); return *this;}
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
    inline UpdatePortalRequest& WithPortalType(PortalType value) { SetPortalType(value); return *this;}
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
    UpdatePortalRequest& WithPortalTypeConfiguration(PortalTypeConfigurationT&& value) { SetPortalTypeConfiguration(std::forward<PortalTypeConfigurationT>(value)); return *this;}
    template<typename PortalTypeConfigurationKeyT = Aws::String, typename PortalTypeConfigurationValueT = PortalTypeEntry>
    UpdatePortalRequest& AddPortalTypeConfiguration(PortalTypeConfigurationKeyT&& key, PortalTypeConfigurationValueT&& value) {
      m_portalTypeConfigurationHasBeenSet = true; m_portalTypeConfiguration.emplace(std::forward<PortalTypeConfigurationKeyT>(key), std::forward<PortalTypeConfigurationValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet = false;

    Aws::String m_portalName;
    bool m_portalNameHasBeenSet = false;

    Aws::String m_portalDescription;
    bool m_portalDescriptionHasBeenSet = false;

    Aws::String m_portalContactEmail;
    bool m_portalContactEmailHasBeenSet = false;

    Image m_portalLogoImage;
    bool m_portalLogoImageHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
