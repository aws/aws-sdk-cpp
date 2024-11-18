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
    AWS_IOTSITEWISE_API DescribePortalResult();
    AWS_IOTSITEWISE_API DescribePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the portal.</p>
     */
    inline const Aws::String& GetPortalId() const{ return m_portalId; }
    inline void SetPortalId(const Aws::String& value) { m_portalId = value; }
    inline void SetPortalId(Aws::String&& value) { m_portalId = std::move(value); }
    inline void SetPortalId(const char* value) { m_portalId.assign(value); }
    inline DescribePortalResult& WithPortalId(const Aws::String& value) { SetPortalId(value); return *this;}
    inline DescribePortalResult& WithPortalId(Aws::String&& value) { SetPortalId(std::move(value)); return *this;}
    inline DescribePortalResult& WithPortalId(const char* value) { SetPortalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }
    inline void SetPortalArn(const Aws::String& value) { m_portalArn = value; }
    inline void SetPortalArn(Aws::String&& value) { m_portalArn = std::move(value); }
    inline void SetPortalArn(const char* value) { m_portalArn.assign(value); }
    inline DescribePortalResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}
    inline DescribePortalResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}
    inline DescribePortalResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the portal.</p>
     */
    inline const Aws::String& GetPortalName() const{ return m_portalName; }
    inline void SetPortalName(const Aws::String& value) { m_portalName = value; }
    inline void SetPortalName(Aws::String&& value) { m_portalName = std::move(value); }
    inline void SetPortalName(const char* value) { m_portalName.assign(value); }
    inline DescribePortalResult& WithPortalName(const Aws::String& value) { SetPortalName(value); return *this;}
    inline DescribePortalResult& WithPortalName(Aws::String&& value) { SetPortalName(std::move(value)); return *this;}
    inline DescribePortalResult& WithPortalName(const char* value) { SetPortalName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portal's description.</p>
     */
    inline const Aws::String& GetPortalDescription() const{ return m_portalDescription; }
    inline void SetPortalDescription(const Aws::String& value) { m_portalDescription = value; }
    inline void SetPortalDescription(Aws::String&& value) { m_portalDescription = std::move(value); }
    inline void SetPortalDescription(const char* value) { m_portalDescription.assign(value); }
    inline DescribePortalResult& WithPortalDescription(const Aws::String& value) { SetPortalDescription(value); return *this;}
    inline DescribePortalResult& WithPortalDescription(Aws::String&& value) { SetPortalDescription(std::move(value)); return *this;}
    inline DescribePortalResult& WithPortalDescription(const char* value) { SetPortalDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center application generated client ID (used with IAM
     * Identity Center API operations). IoT SiteWise includes
     * <code>portalClientId</code> for only portals that use IAM Identity Center to
     * authenticate users.</p>
     */
    inline const Aws::String& GetPortalClientId() const{ return m_portalClientId; }
    inline void SetPortalClientId(const Aws::String& value) { m_portalClientId = value; }
    inline void SetPortalClientId(Aws::String&& value) { m_portalClientId = std::move(value); }
    inline void SetPortalClientId(const char* value) { m_portalClientId.assign(value); }
    inline DescribePortalResult& WithPortalClientId(const Aws::String& value) { SetPortalClientId(value); return *this;}
    inline DescribePortalResult& WithPortalClientId(Aws::String&& value) { SetPortalClientId(std::move(value)); return *this;}
    inline DescribePortalResult& WithPortalClientId(const char* value) { SetPortalClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline const Aws::String& GetPortalStartUrl() const{ return m_portalStartUrl; }
    inline void SetPortalStartUrl(const Aws::String& value) { m_portalStartUrl = value; }
    inline void SetPortalStartUrl(Aws::String&& value) { m_portalStartUrl = std::move(value); }
    inline void SetPortalStartUrl(const char* value) { m_portalStartUrl.assign(value); }
    inline DescribePortalResult& WithPortalStartUrl(const Aws::String& value) { SetPortalStartUrl(value); return *this;}
    inline DescribePortalResult& WithPortalStartUrl(Aws::String&& value) { SetPortalStartUrl(std::move(value)); return *this;}
    inline DescribePortalResult& WithPortalStartUrl(const char* value) { SetPortalStartUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services administrator's contact email address.</p>
     */
    inline const Aws::String& GetPortalContactEmail() const{ return m_portalContactEmail; }
    inline void SetPortalContactEmail(const Aws::String& value) { m_portalContactEmail = value; }
    inline void SetPortalContactEmail(Aws::String&& value) { m_portalContactEmail = std::move(value); }
    inline void SetPortalContactEmail(const char* value) { m_portalContactEmail.assign(value); }
    inline DescribePortalResult& WithPortalContactEmail(const Aws::String& value) { SetPortalContactEmail(value); return *this;}
    inline DescribePortalResult& WithPortalContactEmail(Aws::String&& value) { SetPortalContactEmail(std::move(value)); return *this;}
    inline DescribePortalResult& WithPortalContactEmail(const char* value) { SetPortalContactEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the portal, which contains a state and any error
     * message.</p>
     */
    inline const PortalStatus& GetPortalStatus() const{ return m_portalStatus; }
    inline void SetPortalStatus(const PortalStatus& value) { m_portalStatus = value; }
    inline void SetPortalStatus(PortalStatus&& value) { m_portalStatus = std::move(value); }
    inline DescribePortalResult& WithPortalStatus(const PortalStatus& value) { SetPortalStatus(value); return *this;}
    inline DescribePortalResult& WithPortalStatus(PortalStatus&& value) { SetPortalStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the portal was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetPortalCreationDate() const{ return m_portalCreationDate; }
    inline void SetPortalCreationDate(const Aws::Utils::DateTime& value) { m_portalCreationDate = value; }
    inline void SetPortalCreationDate(Aws::Utils::DateTime&& value) { m_portalCreationDate = std::move(value); }
    inline DescribePortalResult& WithPortalCreationDate(const Aws::Utils::DateTime& value) { SetPortalCreationDate(value); return *this;}
    inline DescribePortalResult& WithPortalCreationDate(Aws::Utils::DateTime&& value) { SetPortalCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the portal was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetPortalLastUpdateDate() const{ return m_portalLastUpdateDate; }
    inline void SetPortalLastUpdateDate(const Aws::Utils::DateTime& value) { m_portalLastUpdateDate = value; }
    inline void SetPortalLastUpdateDate(Aws::Utils::DateTime&& value) { m_portalLastUpdateDate = std::move(value); }
    inline DescribePortalResult& WithPortalLastUpdateDate(const Aws::Utils::DateTime& value) { SetPortalLastUpdateDate(value); return *this;}
    inline DescribePortalResult& WithPortalLastUpdateDate(Aws::Utils::DateTime&& value) { SetPortalLastUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portal's logo image, which is available at a URL.</p>
     */
    inline const ImageLocation& GetPortalLogoImageLocation() const{ return m_portalLogoImageLocation; }
    inline void SetPortalLogoImageLocation(const ImageLocation& value) { m_portalLogoImageLocation = value; }
    inline void SetPortalLogoImageLocation(ImageLocation&& value) { m_portalLogoImageLocation = std::move(value); }
    inline DescribePortalResult& WithPortalLogoImageLocation(const ImageLocation& value) { SetPortalLogoImageLocation(value); return *this;}
    inline DescribePortalResult& WithPortalLogoImageLocation(ImageLocation&& value) { SetPortalLogoImageLocation(std::move(value)); return *this;}
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
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribePortalResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribePortalResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribePortalResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service to use to authenticate users to the portal.</p>
     */
    inline const AuthMode& GetPortalAuthMode() const{ return m_portalAuthMode; }
    inline void SetPortalAuthMode(const AuthMode& value) { m_portalAuthMode = value; }
    inline void SetPortalAuthMode(AuthMode&& value) { m_portalAuthMode = std::move(value); }
    inline DescribePortalResult& WithPortalAuthMode(const AuthMode& value) { SetPortalAuthMode(value); return *this;}
    inline DescribePortalResult& WithPortalAuthMode(AuthMode&& value) { SetPortalAuthMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that sends alarm notifications.</p>
     */
    inline const Aws::String& GetNotificationSenderEmail() const{ return m_notificationSenderEmail; }
    inline void SetNotificationSenderEmail(const Aws::String& value) { m_notificationSenderEmail = value; }
    inline void SetNotificationSenderEmail(Aws::String&& value) { m_notificationSenderEmail = std::move(value); }
    inline void SetNotificationSenderEmail(const char* value) { m_notificationSenderEmail.assign(value); }
    inline DescribePortalResult& WithNotificationSenderEmail(const Aws::String& value) { SetNotificationSenderEmail(value); return *this;}
    inline DescribePortalResult& WithNotificationSenderEmail(Aws::String&& value) { SetNotificationSenderEmail(std::move(value)); return *this;}
    inline DescribePortalResult& WithNotificationSenderEmail(const char* value) { SetNotificationSenderEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of an alarm created in an IoT SiteWise
     * Monitor portal.</p>
     */
    inline const Alarms& GetAlarms() const{ return m_alarms; }
    inline void SetAlarms(const Alarms& value) { m_alarms = value; }
    inline void SetAlarms(Alarms&& value) { m_alarms = std::move(value); }
    inline DescribePortalResult& WithAlarms(const Alarms& value) { SetAlarms(value); return *this;}
    inline DescribePortalResult& WithAlarms(Alarms&& value) { SetAlarms(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the type of portal. The value for IoT SiteWise Monitor (Classic) is
     * <code>SITEWISE_PORTAL_V1</code>. The value for IoT SiteWise Monitor (AI-aware)
     * is <code>SITEWISE_PORTAL_V2</code>.</p>
     */
    inline const PortalType& GetPortalType() const{ return m_portalType; }
    inline void SetPortalType(const PortalType& value) { m_portalType = value; }
    inline void SetPortalType(PortalType&& value) { m_portalType = std::move(value); }
    inline DescribePortalResult& WithPortalType(const PortalType& value) { SetPortalType(value); return *this;}
    inline DescribePortalResult& WithPortalType(PortalType&& value) { SetPortalType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration entry associated with the specific portal type. The value
     * for IoT SiteWise Monitor (Classic) is <code>SITEWISE_PORTAL_V1</code>. The value
     * for IoT SiteWise Monitor (AI-aware) is <code>SITEWISE_PORTAL_V2</code>.</p>
     */
    inline const Aws::Map<Aws::String, PortalTypeEntry>& GetPortalTypeConfiguration() const{ return m_portalTypeConfiguration; }
    inline void SetPortalTypeConfiguration(const Aws::Map<Aws::String, PortalTypeEntry>& value) { m_portalTypeConfiguration = value; }
    inline void SetPortalTypeConfiguration(Aws::Map<Aws::String, PortalTypeEntry>&& value) { m_portalTypeConfiguration = std::move(value); }
    inline DescribePortalResult& WithPortalTypeConfiguration(const Aws::Map<Aws::String, PortalTypeEntry>& value) { SetPortalTypeConfiguration(value); return *this;}
    inline DescribePortalResult& WithPortalTypeConfiguration(Aws::Map<Aws::String, PortalTypeEntry>&& value) { SetPortalTypeConfiguration(std::move(value)); return *this;}
    inline DescribePortalResult& AddPortalTypeConfiguration(const Aws::String& key, const PortalTypeEntry& value) { m_portalTypeConfiguration.emplace(key, value); return *this; }
    inline DescribePortalResult& AddPortalTypeConfiguration(Aws::String&& key, const PortalTypeEntry& value) { m_portalTypeConfiguration.emplace(std::move(key), value); return *this; }
    inline DescribePortalResult& AddPortalTypeConfiguration(const Aws::String& key, PortalTypeEntry&& value) { m_portalTypeConfiguration.emplace(key, std::move(value)); return *this; }
    inline DescribePortalResult& AddPortalTypeConfiguration(Aws::String&& key, PortalTypeEntry&& value) { m_portalTypeConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribePortalResult& AddPortalTypeConfiguration(const char* key, PortalTypeEntry&& value) { m_portalTypeConfiguration.emplace(key, std::move(value)); return *this; }
    inline DescribePortalResult& AddPortalTypeConfiguration(const char* key, const PortalTypeEntry& value) { m_portalTypeConfiguration.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePortalResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePortalResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePortalResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_portalId;

    Aws::String m_portalArn;

    Aws::String m_portalName;

    Aws::String m_portalDescription;

    Aws::String m_portalClientId;

    Aws::String m_portalStartUrl;

    Aws::String m_portalContactEmail;

    PortalStatus m_portalStatus;

    Aws::Utils::DateTime m_portalCreationDate;

    Aws::Utils::DateTime m_portalLastUpdateDate;

    ImageLocation m_portalLogoImageLocation;

    Aws::String m_roleArn;

    AuthMode m_portalAuthMode;

    Aws::String m_notificationSenderEmail;

    Alarms m_alarms;

    PortalType m_portalType;

    Aws::Map<Aws::String, PortalTypeEntry> m_portalTypeConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
