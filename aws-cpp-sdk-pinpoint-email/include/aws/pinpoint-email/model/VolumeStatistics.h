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
   * <p>An object that contains information about the amount of email that was
   * delivered to recipients.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/VolumeStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API VolumeStatistics
  {
  public:
    VolumeStatistics();
    VolumeStatistics(Aws::Utils::Json::JsonView jsonValue);
    VolumeStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of emails that arrived in recipients' inboxes.</p>
     */
    inline long long GetInboxRawCount() const{ return m_inboxRawCount; }

    /**
     * <p>The total number of emails that arrived in recipients' inboxes.</p>
     */
    inline bool InboxRawCountHasBeenSet() const { return m_inboxRawCountHasBeenSet; }

    /**
     * <p>The total number of emails that arrived in recipients' inboxes.</p>
     */
    inline void SetInboxRawCount(long long value) { m_inboxRawCountHasBeenSet = true; m_inboxRawCount = value; }

    /**
     * <p>The total number of emails that arrived in recipients' inboxes.</p>
     */
    inline VolumeStatistics& WithInboxRawCount(long long value) { SetInboxRawCount(value); return *this;}


    /**
     * <p>The total number of emails that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline long long GetSpamRawCount() const{ return m_spamRawCount; }

    /**
     * <p>The total number of emails that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline bool SpamRawCountHasBeenSet() const { return m_spamRawCountHasBeenSet; }

    /**
     * <p>The total number of emails that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline void SetSpamRawCount(long long value) { m_spamRawCountHasBeenSet = true; m_spamRawCount = value; }

    /**
     * <p>The total number of emails that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline VolumeStatistics& WithSpamRawCount(long long value) { SetSpamRawCount(value); return *this;}


    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' inboxes.</p>
     */
    inline long long GetProjectedInbox() const{ return m_projectedInbox; }

    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' inboxes.</p>
     */
    inline bool ProjectedInboxHasBeenSet() const { return m_projectedInboxHasBeenSet; }

    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' inboxes.</p>
     */
    inline void SetProjectedInbox(long long value) { m_projectedInboxHasBeenSet = true; m_projectedInbox = value; }

    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' inboxes.</p>
     */
    inline VolumeStatistics& WithProjectedInbox(long long value) { SetProjectedInbox(value); return *this;}


    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' spam or junk mail folders.</p>
     */
    inline long long GetProjectedSpam() const{ return m_projectedSpam; }

    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' spam or junk mail folders.</p>
     */
    inline bool ProjectedSpamHasBeenSet() const { return m_projectedSpamHasBeenSet; }

    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' spam or junk mail folders.</p>
     */
    inline void SetProjectedSpam(long long value) { m_projectedSpamHasBeenSet = true; m_projectedSpam = value; }

    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' spam or junk mail folders.</p>
     */
    inline VolumeStatistics& WithProjectedSpam(long long value) { SetProjectedSpam(value); return *this;}

  private:

    long long m_inboxRawCount;
    bool m_inboxRawCountHasBeenSet;

    long long m_spamRawCount;
    bool m_spamRawCountHasBeenSet;

    long long m_projectedInbox;
    bool m_projectedInboxHasBeenSet;

    long long m_projectedSpam;
    bool m_projectedSpamHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
