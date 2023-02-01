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
    AWS_IOTSITEWISE_API UpdatePortalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePortal"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the portal to update.</p>
     */
    inline const Aws::String& GetPortalId() const{ return m_portalId; }

    /**
     * <p>The ID of the portal to update.</p>
     */
    inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }

    /**
     * <p>The ID of the portal to update.</p>
     */
    inline void SetPortalId(const Aws::String& value) { m_portalIdHasBeenSet = true; m_portalId = value; }

    /**
     * <p>The ID of the portal to update.</p>
     */
    inline void SetPortalId(Aws::String&& value) { m_portalIdHasBeenSet = true; m_portalId = std::move(value); }

    /**
     * <p>The ID of the portal to update.</p>
     */
    inline void SetPortalId(const char* value) { m_portalIdHasBeenSet = true; m_portalId.assign(value); }

    /**
     * <p>The ID of the portal to update.</p>
     */
    inline UpdatePortalRequest& WithPortalId(const Aws::String& value) { SetPortalId(value); return *this;}

    /**
     * <p>The ID of the portal to update.</p>
     */
    inline UpdatePortalRequest& WithPortalId(Aws::String&& value) { SetPortalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the portal to update.</p>
     */
    inline UpdatePortalRequest& WithPortalId(const char* value) { SetPortalId(value); return *this;}


    /**
     * <p>A new friendly name for the portal.</p>
     */
    inline const Aws::String& GetPortalName() const{ return m_portalName; }

    /**
     * <p>A new friendly name for the portal.</p>
     */
    inline bool PortalNameHasBeenSet() const { return m_portalNameHasBeenSet; }

    /**
     * <p>A new friendly name for the portal.</p>
     */
    inline void SetPortalName(const Aws::String& value) { m_portalNameHasBeenSet = true; m_portalName = value; }

    /**
     * <p>A new friendly name for the portal.</p>
     */
    inline void SetPortalName(Aws::String&& value) { m_portalNameHasBeenSet = true; m_portalName = std::move(value); }

    /**
     * <p>A new friendly name for the portal.</p>
     */
    inline void SetPortalName(const char* value) { m_portalNameHasBeenSet = true; m_portalName.assign(value); }

    /**
     * <p>A new friendly name for the portal.</p>
     */
    inline UpdatePortalRequest& WithPortalName(const Aws::String& value) { SetPortalName(value); return *this;}

    /**
     * <p>A new friendly name for the portal.</p>
     */
    inline UpdatePortalRequest& WithPortalName(Aws::String&& value) { SetPortalName(std::move(value)); return *this;}

    /**
     * <p>A new friendly name for the portal.</p>
     */
    inline UpdatePortalRequest& WithPortalName(const char* value) { SetPortalName(value); return *this;}


    /**
     * <p>A new description for the portal.</p>
     */
    inline const Aws::String& GetPortalDescription() const{ return m_portalDescription; }

    /**
     * <p>A new description for the portal.</p>
     */
    inline bool PortalDescriptionHasBeenSet() const { return m_portalDescriptionHasBeenSet; }

    /**
     * <p>A new description for the portal.</p>
     */
    inline void SetPortalDescription(const Aws::String& value) { m_portalDescriptionHasBeenSet = true; m_portalDescription = value; }

    /**
     * <p>A new description for the portal.</p>
     */
    inline void SetPortalDescription(Aws::String&& value) { m_portalDescriptionHasBeenSet = true; m_portalDescription = std::move(value); }

    /**
     * <p>A new description for the portal.</p>
     */
    inline void SetPortalDescription(const char* value) { m_portalDescriptionHasBeenSet = true; m_portalDescription.assign(value); }

    /**
     * <p>A new description for the portal.</p>
     */
    inline UpdatePortalRequest& WithPortalDescription(const Aws::String& value) { SetPortalDescription(value); return *this;}

    /**
     * <p>A new description for the portal.</p>
     */
    inline UpdatePortalRequest& WithPortalDescription(Aws::String&& value) { SetPortalDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the portal.</p>
     */
    inline UpdatePortalRequest& WithPortalDescription(const char* value) { SetPortalDescription(value); return *this;}


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
    inline UpdatePortalRequest& WithPortalContactEmail(const Aws::String& value) { SetPortalContactEmail(value); return *this;}

    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline UpdatePortalRequest& WithPortalContactEmail(Aws::String&& value) { SetPortalContactEmail(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline UpdatePortalRequest& WithPortalContactEmail(const char* value) { SetPortalContactEmail(value); return *this;}


    
    inline const Image& GetPortalLogoImage() const{ return m_portalLogoImage; }

    
    inline bool PortalLogoImageHasBeenSet() const { return m_portalLogoImageHasBeenSet; }

    
    inline void SetPortalLogoImage(const Image& value) { m_portalLogoImageHasBeenSet = true; m_portalLogoImage = value; }

    
    inline void SetPortalLogoImage(Image&& value) { m_portalLogoImageHasBeenSet = true; m_portalLogoImage = std::move(value); }

    
    inline UpdatePortalRequest& WithPortalLogoImage(const Image& value) { SetPortalLogoImage(value); return *this;}

    
    inline UpdatePortalRequest& WithPortalLogoImage(Image&& value) { SetPortalLogoImage(std::move(value)); return *this;}


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
    inline UpdatePortalRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline UpdatePortalRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of a service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline UpdatePortalRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline UpdatePortalRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdatePortalRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdatePortalRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline const Aws::String& GetNotificationSenderEmail() const{ return m_notificationSenderEmail; }

    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline bool NotificationSenderEmailHasBeenSet() const { return m_notificationSenderEmailHasBeenSet; }

    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline void SetNotificationSenderEmail(const Aws::String& value) { m_notificationSenderEmailHasBeenSet = true; m_notificationSenderEmail = value; }

    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline void SetNotificationSenderEmail(Aws::String&& value) { m_notificationSenderEmailHasBeenSet = true; m_notificationSenderEmail = std::move(value); }

    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline void SetNotificationSenderEmail(const char* value) { m_notificationSenderEmailHasBeenSet = true; m_notificationSenderEmail.assign(value); }

    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline UpdatePortalRequest& WithNotificationSenderEmail(const Aws::String& value) { SetNotificationSenderEmail(value); return *this;}

    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline UpdatePortalRequest& WithNotificationSenderEmail(Aws::String&& value) { SetNotificationSenderEmail(std::move(value)); return *this;}

    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline UpdatePortalRequest& WithNotificationSenderEmail(const char* value) { SetNotificationSenderEmail(value); return *this;}


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
    inline UpdatePortalRequest& WithAlarms(const Alarms& value) { SetAlarms(value); return *this;}

    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal. You can use the alarm to monitor an asset property and get
     * notified when the asset property value is outside a specified range. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/monitor-alarms.html">Monitoring
     * with alarms</a> in the <i>IoT SiteWise Application Guide</i>.</p>
     */
    inline UpdatePortalRequest& WithAlarms(Alarms&& value) { SetAlarms(std::move(value)); return *this;}

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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_notificationSenderEmail;
    bool m_notificationSenderEmailHasBeenSet = false;

    Alarms m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
