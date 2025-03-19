/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PortalStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/ImageLocation.h>
#include <aws/iotsitewise/model/AuthMode.h>
#include <aws/iotsitewise/model/Alarms.h>
#include <aws/iotsitewise/model/PortalType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotsitewise/model/PortalTypeEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribePortalResult
  {
  public:
    AWS_IOTSITEWISE_API DescribePortalResult() = default;
    AWS_IOTSITEWISE_API DescribePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the portal.</p>
     */
    inline const Aws::String& GetPortalId() const { return m_portalId; }
    template<typename PortalIdT = Aws::String>
    void SetPortalId(PortalIdT&& value) { m_portalIdHasBeenSet = true; m_portalId = std::forward<PortalIdT>(value); }
    template<typename PortalIdT = Aws::String>
    DescribePortalResult& WithPortalId(PortalIdT&& value) { SetPortalId(std::forward<PortalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline const Aws::String& GetPortalArn() const { return m_portalArn; }
    template<typename PortalArnT = Aws::String>
    void SetPortalArn(PortalArnT&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::forward<PortalArnT>(value); }
    template<typename PortalArnT = Aws::String>
    DescribePortalResult& WithPortalArn(PortalArnT&& value) { SetPortalArn(std::forward<PortalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the portal.</p>
     */
    inline const Aws::String& GetPortalName() const { return m_portalName; }
    template<typename PortalNameT = Aws::String>
    void SetPortalName(PortalNameT&& value) { m_portalNameHasBeenSet = true; m_portalName = std::forward<PortalNameT>(value); }
    template<typename PortalNameT = Aws::String>
    DescribePortalResult& WithPortalName(PortalNameT&& value) { SetPortalName(std::forward<PortalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portal's description.</p>
     */
    inline const Aws::String& GetPortalDescription() const { return m_portalDescription; }
    template<typename PortalDescriptionT = Aws::String>
    void SetPortalDescription(PortalDescriptionT&& value) { m_portalDescriptionHasBeenSet = true; m_portalDescription = std::forward<PortalDescriptionT>(value); }
    template<typename PortalDescriptionT = Aws::String>
    DescribePortalResult& WithPortalDescription(PortalDescriptionT&& value) { SetPortalDescription(std::forward<PortalDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center application generated client ID (used with IAM
     * Identity Center API operations). IoT SiteWise includes
     * <code>portalClientId</code> for only portals that use IAM Identity Center to
     * authenticate users.</p>
     */
    inline const Aws::String& GetPortalClientId() const { return m_portalClientId; }
    template<typename PortalClientIdT = Aws::String>
    void SetPortalClientId(PortalClientIdT&& value) { m_portalClientIdHasBeenSet = true; m_portalClientId = std::forward<PortalClientIdT>(value); }
    template<typename PortalClientIdT = Aws::String>
    DescribePortalResult& WithPortalClientId(PortalClientIdT&& value) { SetPortalClientId(std::forward<PortalClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline const Aws::String& GetPortalStartUrl() const { return m_portalStartUrl; }
    template<typename PortalStartUrlT = Aws::String>
    void SetPortalStartUrl(PortalStartUrlT&& value) { m_portalStartUrlHasBeenSet = true; m_portalStartUrl = std::forward<PortalStartUrlT>(value); }
    template<typename PortalStartUrlT = Aws::String>
    DescribePortalResult& WithPortalStartUrl(PortalStartUrlT&& value) { SetPortalStartUrl(std::forward<PortalStartUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline const Aws::String& GetPortalContactEmail() const { return m_portalContactEmail; }
    template<typename PortalContactEmailT = Aws::String>
    void SetPortalContactEmail(PortalContactEmailT&& value) { m_portalContactEmailHasBeenSet = true; m_portalContactEmail = std::forward<PortalContactEmailT>(value); }
    template<typename PortalContactEmailT = Aws::String>
    DescribePortalResult& WithPortalContactEmail(PortalContactEmailT&& value) { SetPortalContactEmail(std::forward<PortalContactEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the portal, which contains a state and any error
     * message.</p>
     */
    inline const PortalStatus& GetPortalStatus() const { return m_portalStatus; }
    template<typename PortalStatusT = PortalStatus>
    void SetPortalStatus(PortalStatusT&& value) { m_portalStatusHasBeenSet = true; m_portalStatus = std::forward<PortalStatusT>(value); }
    template<typename PortalStatusT = PortalStatus>
    DescribePortalResult& WithPortalStatus(PortalStatusT&& value) { SetPortalStatus(std::forward<PortalStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the portal was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetPortalCreationDate() const { return m_portalCreationDate; }
    template<typename PortalCreationDateT = Aws::Utils::DateTime>
    void SetPortalCreationDate(PortalCreationDateT&& value) { m_portalCreationDateHasBeenSet = true; m_portalCreationDate = std::forward<PortalCreationDateT>(value); }
    template<typename PortalCreationDateT = Aws::Utils::DateTime>
    DescribePortalResult& WithPortalCreationDate(PortalCreationDateT&& value) { SetPortalCreationDate(std::forward<PortalCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the portal was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetPortalLastUpdateDate() const { return m_portalLastUpdateDate; }
    template<typename PortalLastUpdateDateT = Aws::Utils::DateTime>
    void SetPortalLastUpdateDate(PortalLastUpdateDateT&& value) { m_portalLastUpdateDateHasBeenSet = true; m_portalLastUpdateDate = std::forward<PortalLastUpdateDateT>(value); }
    template<typename PortalLastUpdateDateT = Aws::Utils::DateTime>
    DescribePortalResult& WithPortalLastUpdateDate(PortalLastUpdateDateT&& value) { SetPortalLastUpdateDate(std::forward<PortalLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portal's logo image, which is available at a URL.</p>
     */
    inline const ImageLocation& GetPortalLogoImageLocation() const { return m_portalLogoImageLocation; }
    template<typename PortalLogoImageLocationT = ImageLocation>
    void SetPortalLogoImageLocation(PortalLogoImageLocationT&& value) { m_portalLogoImageLocationHasBeenSet = true; m_portalLogoImageLocation = std::forward<PortalLogoImageLocationT>(value); }
    template<typename PortalLogoImageLocationT = ImageLocation>
    DescribePortalResult& WithPortalLogoImageLocation(PortalLogoImageLocationT&& value) { SetPortalLogoImageLocation(std::forward<PortalLogoImageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribePortalResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service to use to authenticate users to the portal.</p>
     */
    inline AuthMode GetPortalAuthMode() const { return m_portalAuthMode; }
    inline void SetPortalAuthMode(AuthMode value) { m_portalAuthModeHasBeenSet = true; m_portalAuthMode = value; }
    inline DescribePortalResult& WithPortalAuthMode(AuthMode value) { SetPortalAuthMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline const Aws::String& GetNotificationSenderEmail() const { return m_notificationSenderEmail; }
    template<typename NotificationSenderEmailT = Aws::String>
    void SetNotificationSenderEmail(NotificationSenderEmailT&& value) { m_notificationSenderEmailHasBeenSet = true; m_notificationSenderEmail = std::forward<NotificationSenderEmailT>(value); }
    template<typename NotificationSenderEmailT = Aws::String>
    DescribePortalResult& WithNotificationSenderEmail(NotificationSenderEmailT&& value) { SetNotificationSenderEmail(std::forward<NotificationSenderEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal.</p>
     */
    inline const Alarms& GetAlarms() const { return m_alarms; }
    template<typename AlarmsT = Alarms>
    void SetAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms = std::forward<AlarmsT>(value); }
    template<typename AlarmsT = Alarms>
    DescribePortalResult& WithAlarms(AlarmsT&& value) { SetAlarms(std::forward<AlarmsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the type of portal. The value for IoT SiteWise Monitor (Classic) is
     * <code>SITEWISE_PORTAL_V1</code>. The value for IoT SiteWise Monitor (AI-aware)
     * is <code>SITEWISE_PORTAL_V2</code>.</p>
     */
    inline PortalType GetPortalType() const { return m_portalType; }
    inline void SetPortalType(PortalType value) { m_portalTypeHasBeenSet = true; m_portalType = value; }
    inline DescribePortalResult& WithPortalType(PortalType value) { SetPortalType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration entry associated with the specific portal type. The value
     * for IoT SiteWise Monitor (Classic) is <code>SITEWISE_PORTAL_V1</code>. The value
     * for IoT SiteWise Monitor (AI-aware) is <code>SITEWISE_PORTAL_V2</code>.</p>
     */
    inline const Aws::Map<Aws::String, PortalTypeEntry>& GetPortalTypeConfiguration() const { return m_portalTypeConfiguration; }
    template<typename PortalTypeConfigurationT = Aws::Map<Aws::String, PortalTypeEntry>>
    void SetPortalTypeConfiguration(PortalTypeConfigurationT&& value) { m_portalTypeConfigurationHasBeenSet = true; m_portalTypeConfiguration = std::forward<PortalTypeConfigurationT>(value); }
    template<typename PortalTypeConfigurationT = Aws::Map<Aws::String, PortalTypeEntry>>
    DescribePortalResult& WithPortalTypeConfiguration(PortalTypeConfigurationT&& value) { SetPortalTypeConfiguration(std::forward<PortalTypeConfigurationT>(value)); return *this;}
    template<typename PortalTypeConfigurationKeyT = Aws::String, typename PortalTypeConfigurationValueT = PortalTypeEntry>
    DescribePortalResult& AddPortalTypeConfiguration(PortalTypeConfigurationKeyT&& key, PortalTypeConfigurationValueT&& value) {
      m_portalTypeConfigurationHasBeenSet = true; m_portalTypeConfiguration.emplace(std::forward<PortalTypeConfigurationKeyT>(key), std::forward<PortalTypeConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePortalResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet = false;

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_portalName;
    bool m_portalNameHasBeenSet = false;

    Aws::String m_portalDescription;
    bool m_portalDescriptionHasBeenSet = false;

    Aws::String m_portalClientId;
    bool m_portalClientIdHasBeenSet = false;

    Aws::String m_portalStartUrl;
    bool m_portalStartUrlHasBeenSet = false;

    Aws::String m_portalContactEmail;
    bool m_portalContactEmailHasBeenSet = false;

    PortalStatus m_portalStatus;
    bool m_portalStatusHasBeenSet = false;

    Aws::Utils::DateTime m_portalCreationDate{};
    bool m_portalCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_portalLastUpdateDate{};
    bool m_portalLastUpdateDateHasBeenSet = false;

    ImageLocation m_portalLogoImageLocation;
    bool m_portalLogoImageLocationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
