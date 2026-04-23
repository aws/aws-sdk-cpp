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
   * <p>An object that contains inbox placement data for an email
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PlacementStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PlacementStatistics
  {
  public:
    PlacementStatistics();
    PlacementStatistics(Aws::Utils::Json::JsonView jsonValue);
    PlacementStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of emails that arrived in recipients' inboxes during the
     * predictive inbox placement test.</p>
     */
    inline double GetInboxPercentage() const{ return m_inboxPercentage; }

    /**
     * <p>The percentage of emails that arrived in recipients' inboxes during the
     * predictive inbox placement test.</p>
     */
    inline bool InboxPercentageHasBeenSet() const { return m_inboxPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that arrived in recipients' inboxes during the
     * predictive inbox placement test.</p>
     */
    inline void SetInboxPercentage(double value) { m_inboxPercentageHasBeenSet = true; m_inboxPercentage = value; }

    /**
     * <p>The percentage of emails that arrived in recipients' inboxes during the
     * predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithInboxPercentage(double value) { SetInboxPercentage(value); return *this;}


    /**
     * <p>The percentage of emails that arrived in recipients' spam or junk mail
     * folders during the predictive inbox placement test.</p>
     */
    inline double GetSpamPercentage() const{ return m_spamPercentage; }

    /**
     * <p>The percentage of emails that arrived in recipients' spam or junk mail
     * folders during the predictive inbox placement test.</p>
     */
    inline bool SpamPercentageHasBeenSet() const { return m_spamPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that arrived in recipients' spam or junk mail
     * folders during the predictive inbox placement test.</p>
     */
    inline void SetSpamPercentage(double value) { m_spamPercentageHasBeenSet = true; m_spamPercentage = value; }

    /**
     * <p>The percentage of emails that arrived in recipients' spam or junk mail
     * folders during the predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithSpamPercentage(double value) { SetSpamPercentage(value); return *this;}


    /**
     * <p>The percentage of emails that didn't arrive in recipients' inboxes at all
     * during the predictive inbox placement test.</p>
     */
    inline double GetMissingPercentage() const{ return m_missingPercentage; }

    /**
     * <p>The percentage of emails that didn't arrive in recipients' inboxes at all
     * during the predictive inbox placement test.</p>
     */
    inline bool MissingPercentageHasBeenSet() const { return m_missingPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that didn't arrive in recipients' inboxes at all
     * during the predictive inbox placement test.</p>
     */
    inline void SetMissingPercentage(double value) { m_missingPercentageHasBeenSet = true; m_missingPercentage = value; }

    /**
     * <p>The percentage of emails that didn't arrive in recipients' inboxes at all
     * during the predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithMissingPercentage(double value) { SetMissingPercentage(value); return *this;}


    /**
     * <p>The percentage of emails that were authenticated by using Sender Policy
     * Framework (SPF) during the predictive inbox placement test.</p>
     */
    inline double GetSpfPercentage() const{ return m_spfPercentage; }

    /**
     * <p>The percentage of emails that were authenticated by using Sender Policy
     * Framework (SPF) during the predictive inbox placement test.</p>
     */
    inline bool SpfPercentageHasBeenSet() const { return m_spfPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that were authenticated by using Sender Policy
     * Framework (SPF) during the predictive inbox placement test.</p>
     */
    inline void SetSpfPercentage(double value) { m_spfPercentageHasBeenSet = true; m_spfPercentage = value; }

    /**
     * <p>The percentage of emails that were authenticated by using Sender Policy
     * Framework (SPF) during the predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithSpfPercentage(double value) { SetSpfPercentage(value); return *this;}


    /**
     * <p>The percentage of emails that were authenticated by using DomainKeys
     * Identified Mail (DKIM) during the predictive inbox placement test.</p>
     */
    inline double GetDkimPercentage() const{ return m_dkimPercentage; }

    /**
     * <p>The percentage of emails that were authenticated by using DomainKeys
     * Identified Mail (DKIM) during the predictive inbox placement test.</p>
     */
    inline bool DkimPercentageHasBeenSet() const { return m_dkimPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that were authenticated by using DomainKeys
     * Identified Mail (DKIM) during the predictive inbox placement test.</p>
     */
    inline void SetDkimPercentage(double value) { m_dkimPercentageHasBeenSet = true; m_dkimPercentage = value; }

    /**
     * <p>The percentage of emails that were authenticated by using DomainKeys
     * Identified Mail (DKIM) during the predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithDkimPercentage(double value) { SetDkimPercentage(value); return *this;}

  private:

    double m_inboxPercentage;
    bool m_inboxPercentageHasBeenSet;

    double m_spamPercentage;
    bool m_spamPercentageHasBeenSet;

    double m_missingPercentage;
    bool m_missingPercentageHasBeenSet;

    double m_spfPercentage;
    bool m_spfPercentageHasBeenSet;

    double m_dkimPercentage;
    bool m_dkimPercentageHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
