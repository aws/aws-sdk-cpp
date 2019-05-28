/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains the deliverability data for a specific campaign. This
   * data is available for a campaign only if the campaign sent email by using a
   * domain that the Deliverability dashboard is enabled for
   * (<code>PutDeliverabilityDashboardOption</code> operation).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DomainDeliverabilityCampaign">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API DomainDeliverabilityCampaign
  {
  public:
    DomainDeliverabilityCampaign();
    DomainDeliverabilityCampaign(Aws::Utils::Json::JsonView jsonValue);
    DomainDeliverabilityCampaign& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline DomainDeliverabilityCampaign& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline DomainDeliverabilityCampaign& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline DomainDeliverabilityCampaign& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}


    /**
     * <p>The URL of an image that contains a snapshot of the email message that was
     * sent.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }

    /**
     * <p>The URL of an image that contains a snapshot of the email message that was
     * sent.</p>
     */
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }

    /**
     * <p>The URL of an image that contains a snapshot of the email message that was
     * sent.</p>
     */
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }

    /**
     * <p>The URL of an image that contains a snapshot of the email message that was
     * sent.</p>
     */
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }

    /**
     * <p>The URL of an image that contains a snapshot of the email message that was
     * sent.</p>
     */
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }

    /**
     * <p>The URL of an image that contains a snapshot of the email message that was
     * sent.</p>
     */
    inline DomainDeliverabilityCampaign& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * <p>The URL of an image that contains a snapshot of the email message that was
     * sent.</p>
     */
    inline DomainDeliverabilityCampaign& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of an image that contains a snapshot of the email message that was
     * sent.</p>
     */
    inline DomainDeliverabilityCampaign& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * <p>The subject line, or title, of the email message.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line, or title, of the email message.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line, or title, of the email message.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line, or title, of the email message.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line, or title, of the email message.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject line, or title, of the email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line, or title, of the email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line, or title, of the email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The verified email address that the email message was sent from.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * <p>The verified email address that the email message was sent from.</p>
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * <p>The verified email address that the email message was sent from.</p>
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * <p>The verified email address that the email message was sent from.</p>
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * <p>The verified email address that the email message was sent from.</p>
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * <p>The verified email address that the email message was sent from.</p>
     */
    inline DomainDeliverabilityCampaign& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * <p>The verified email address that the email message was sent from.</p>
     */
    inline DomainDeliverabilityCampaign& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * <p>The verified email address that the email message was sent from.</p>
     */
    inline DomainDeliverabilityCampaign& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSendingIps() const{ return m_sendingIps; }

    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline bool SendingIpsHasBeenSet() const { return m_sendingIpsHasBeenSet; }

    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline void SetSendingIps(const Aws::Vector<Aws::String>& value) { m_sendingIpsHasBeenSet = true; m_sendingIps = value; }

    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline void SetSendingIps(Aws::Vector<Aws::String>&& value) { m_sendingIpsHasBeenSet = true; m_sendingIps = std::move(value); }

    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithSendingIps(const Aws::Vector<Aws::String>& value) { SetSendingIps(value); return *this;}

    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithSendingIps(Aws::Vector<Aws::String>&& value) { SetSendingIps(std::move(value)); return *this;}

    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline DomainDeliverabilityCampaign& AddSendingIps(const Aws::String& value) { m_sendingIpsHasBeenSet = true; m_sendingIps.push_back(value); return *this; }

    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline DomainDeliverabilityCampaign& AddSendingIps(Aws::String&& value) { m_sendingIpsHasBeenSet = true; m_sendingIps.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline DomainDeliverabilityCampaign& AddSendingIps(const char* value) { m_sendingIpsHasBeenSet = true; m_sendingIps.push_back(value); return *this; }


    /**
     * <p>The first time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSeenDateTime() const{ return m_firstSeenDateTime; }

    /**
     * <p>The first time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline bool FirstSeenDateTimeHasBeenSet() const { return m_firstSeenDateTimeHasBeenSet; }

    /**
     * <p>The first time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline void SetFirstSeenDateTime(const Aws::Utils::DateTime& value) { m_firstSeenDateTimeHasBeenSet = true; m_firstSeenDateTime = value; }

    /**
     * <p>The first time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline void SetFirstSeenDateTime(Aws::Utils::DateTime&& value) { m_firstSeenDateTimeHasBeenSet = true; m_firstSeenDateTime = std::move(value); }

    /**
     * <p>The first time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithFirstSeenDateTime(const Aws::Utils::DateTime& value) { SetFirstSeenDateTime(value); return *this;}

    /**
     * <p>The first time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithFirstSeenDateTime(Aws::Utils::DateTime&& value) { SetFirstSeenDateTime(std::move(value)); return *this;}


    /**
     * <p>The last time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenDateTime() const{ return m_lastSeenDateTime; }

    /**
     * <p>The last time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline bool LastSeenDateTimeHasBeenSet() const { return m_lastSeenDateTimeHasBeenSet; }

    /**
     * <p>The last time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline void SetLastSeenDateTime(const Aws::Utils::DateTime& value) { m_lastSeenDateTimeHasBeenSet = true; m_lastSeenDateTime = value; }

    /**
     * <p>The last time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline void SetLastSeenDateTime(Aws::Utils::DateTime&& value) { m_lastSeenDateTimeHasBeenSet = true; m_lastSeenDateTime = std::move(value); }

    /**
     * <p>The last time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithLastSeenDateTime(const Aws::Utils::DateTime& value) { SetLastSeenDateTime(value); return *this;}

    /**
     * <p>The last time, in Unix time format, when the email message was delivered to
     * any recipient's inbox. This value can help you determine how long it took for a
     * campaign to deliver an email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithLastSeenDateTime(Aws::Utils::DateTime&& value) { SetLastSeenDateTime(std::move(value)); return *this;}


    /**
     * <p>The number of email messages that were delivered to recipients’ inboxes.</p>
     */
    inline long long GetInboxCount() const{ return m_inboxCount; }

    /**
     * <p>The number of email messages that were delivered to recipients’ inboxes.</p>
     */
    inline bool InboxCountHasBeenSet() const { return m_inboxCountHasBeenSet; }

    /**
     * <p>The number of email messages that were delivered to recipients’ inboxes.</p>
     */
    inline void SetInboxCount(long long value) { m_inboxCountHasBeenSet = true; m_inboxCount = value; }

    /**
     * <p>The number of email messages that were delivered to recipients’ inboxes.</p>
     */
    inline DomainDeliverabilityCampaign& WithInboxCount(long long value) { SetInboxCount(value); return *this;}


    /**
     * <p>The number of email messages that were delivered to recipients' spam or junk
     * mail folders.</p>
     */
    inline long long GetSpamCount() const{ return m_spamCount; }

    /**
     * <p>The number of email messages that were delivered to recipients' spam or junk
     * mail folders.</p>
     */
    inline bool SpamCountHasBeenSet() const { return m_spamCountHasBeenSet; }

    /**
     * <p>The number of email messages that were delivered to recipients' spam or junk
     * mail folders.</p>
     */
    inline void SetSpamCount(long long value) { m_spamCountHasBeenSet = true; m_spamCount = value; }

    /**
     * <p>The number of email messages that were delivered to recipients' spam or junk
     * mail folders.</p>
     */
    inline DomainDeliverabilityCampaign& WithSpamCount(long long value) { SetSpamCount(value); return *this;}


    /**
     * <p>The percentage of email messages that were opened by recipients. Due to
     * technical limitations, this value only includes recipients who opened the
     * message by using an email client that supports images.</p>
     */
    inline double GetReadRate() const{ return m_readRate; }

    /**
     * <p>The percentage of email messages that were opened by recipients. Due to
     * technical limitations, this value only includes recipients who opened the
     * message by using an email client that supports images.</p>
     */
    inline bool ReadRateHasBeenSet() const { return m_readRateHasBeenSet; }

    /**
     * <p>The percentage of email messages that were opened by recipients. Due to
     * technical limitations, this value only includes recipients who opened the
     * message by using an email client that supports images.</p>
     */
    inline void SetReadRate(double value) { m_readRateHasBeenSet = true; m_readRate = value; }

    /**
     * <p>The percentage of email messages that were opened by recipients. Due to
     * technical limitations, this value only includes recipients who opened the
     * message by using an email client that supports images.</p>
     */
    inline DomainDeliverabilityCampaign& WithReadRate(double value) { SetReadRate(value); return *this;}


    /**
     * <p>The percentage of email messages that were deleted by recipients, without
     * being opened first. Due to technical limitations, this value only includes
     * recipients who opened the message by using an email client that supports
     * images.</p>
     */
    inline double GetDeleteRate() const{ return m_deleteRate; }

    /**
     * <p>The percentage of email messages that were deleted by recipients, without
     * being opened first. Due to technical limitations, this value only includes
     * recipients who opened the message by using an email client that supports
     * images.</p>
     */
    inline bool DeleteRateHasBeenSet() const { return m_deleteRateHasBeenSet; }

    /**
     * <p>The percentage of email messages that were deleted by recipients, without
     * being opened first. Due to technical limitations, this value only includes
     * recipients who opened the message by using an email client that supports
     * images.</p>
     */
    inline void SetDeleteRate(double value) { m_deleteRateHasBeenSet = true; m_deleteRate = value; }

    /**
     * <p>The percentage of email messages that were deleted by recipients, without
     * being opened first. Due to technical limitations, this value only includes
     * recipients who opened the message by using an email client that supports
     * images.</p>
     */
    inline DomainDeliverabilityCampaign& WithDeleteRate(double value) { SetDeleteRate(value); return *this;}


    /**
     * <p>The percentage of email messages that were opened and then deleted by
     * recipients. Due to technical limitations, this value only includes recipients
     * who opened the message by using an email client that supports images.</p>
     */
    inline double GetReadDeleteRate() const{ return m_readDeleteRate; }

    /**
     * <p>The percentage of email messages that were opened and then deleted by
     * recipients. Due to technical limitations, this value only includes recipients
     * who opened the message by using an email client that supports images.</p>
     */
    inline bool ReadDeleteRateHasBeenSet() const { return m_readDeleteRateHasBeenSet; }

    /**
     * <p>The percentage of email messages that were opened and then deleted by
     * recipients. Due to technical limitations, this value only includes recipients
     * who opened the message by using an email client that supports images.</p>
     */
    inline void SetReadDeleteRate(double value) { m_readDeleteRateHasBeenSet = true; m_readDeleteRate = value; }

    /**
     * <p>The percentage of email messages that were opened and then deleted by
     * recipients. Due to technical limitations, this value only includes recipients
     * who opened the message by using an email client that supports images.</p>
     */
    inline DomainDeliverabilityCampaign& WithReadDeleteRate(double value) { SetReadDeleteRate(value); return *this;}


    /**
     * <p>The projected number of recipients that the email message was sent to.</p>
     */
    inline long long GetProjectedVolume() const{ return m_projectedVolume; }

    /**
     * <p>The projected number of recipients that the email message was sent to.</p>
     */
    inline bool ProjectedVolumeHasBeenSet() const { return m_projectedVolumeHasBeenSet; }

    /**
     * <p>The projected number of recipients that the email message was sent to.</p>
     */
    inline void SetProjectedVolume(long long value) { m_projectedVolumeHasBeenSet = true; m_projectedVolume = value; }

    /**
     * <p>The projected number of recipients that the email message was sent to.</p>
     */
    inline DomainDeliverabilityCampaign& WithProjectedVolume(long long value) { SetProjectedVolume(value); return *this;}


    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEsps() const{ return m_esps; }

    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline bool EspsHasBeenSet() const { return m_espsHasBeenSet; }

    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline void SetEsps(const Aws::Vector<Aws::String>& value) { m_espsHasBeenSet = true; m_esps = value; }

    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline void SetEsps(Aws::Vector<Aws::String>&& value) { m_espsHasBeenSet = true; m_esps = std::move(value); }

    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithEsps(const Aws::Vector<Aws::String>& value) { SetEsps(value); return *this;}

    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline DomainDeliverabilityCampaign& WithEsps(Aws::Vector<Aws::String>&& value) { SetEsps(std::move(value)); return *this;}

    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline DomainDeliverabilityCampaign& AddEsps(const Aws::String& value) { m_espsHasBeenSet = true; m_esps.push_back(value); return *this; }

    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline DomainDeliverabilityCampaign& AddEsps(Aws::String&& value) { m_espsHasBeenSet = true; m_esps.push_back(std::move(value)); return *this; }

    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline DomainDeliverabilityCampaign& AddEsps(const char* value) { m_espsHasBeenSet = true; m_esps.push_back(value); return *this; }

  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet;

    Aws::String m_subject;
    bool m_subjectHasBeenSet;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet;

    Aws::Vector<Aws::String> m_sendingIps;
    bool m_sendingIpsHasBeenSet;

    Aws::Utils::DateTime m_firstSeenDateTime;
    bool m_firstSeenDateTimeHasBeenSet;

    Aws::Utils::DateTime m_lastSeenDateTime;
    bool m_lastSeenDateTimeHasBeenSet;

    long long m_inboxCount;
    bool m_inboxCountHasBeenSet;

    long long m_spamCount;
    bool m_spamCountHasBeenSet;

    double m_readRate;
    bool m_readRateHasBeenSet;

    double m_deleteRate;
    bool m_deleteRateHasBeenSet;

    double m_readDeleteRate;
    bool m_readDeleteRateHasBeenSet;

    long long m_projectedVolume;
    bool m_projectedVolumeHasBeenSet;

    Aws::Vector<Aws::String> m_esps;
    bool m_espsHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
