/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/FindingPublishingFrequency.h>
#include <aws/macie2/model/MacieStatus.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class AWS_MACIE2_API UpdateMacieSessionRequest : public Macie2Request
  {
  public:
    UpdateMacieSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMacieSession"; }

    Aws::String SerializePayload() const override;


    /**
     * Specifies how often to publish updates to policy findings for the account. This
     * includes publishing updates to AWS Security Hub and Amazon EventBridge (formerly
     * called Amazon CloudWatch Events).
     */
    inline const FindingPublishingFrequency& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    /**
     * Specifies how often to publish updates to policy findings for the account. This
     * includes publishing updates to AWS Security Hub and Amazon EventBridge (formerly
     * called Amazon CloudWatch Events).
     */
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }

    /**
     * Specifies how often to publish updates to policy findings for the account. This
     * includes publishing updates to AWS Security Hub and Amazon EventBridge (formerly
     * called Amazon CloudWatch Events).
     */
    inline void SetFindingPublishingFrequency(const FindingPublishingFrequency& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }

    /**
     * Specifies how often to publish updates to policy findings for the account. This
     * includes publishing updates to AWS Security Hub and Amazon EventBridge (formerly
     * called Amazon CloudWatch Events).
     */
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency&& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = std::move(value); }

    /**
     * Specifies how often to publish updates to policy findings for the account. This
     * includes publishing updates to AWS Security Hub and Amazon EventBridge (formerly
     * called Amazon CloudWatch Events).
     */
    inline UpdateMacieSessionRequest& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * Specifies how often to publish updates to policy findings for the account. This
     * includes publishing updates to AWS Security Hub and Amazon EventBridge (formerly
     * called Amazon CloudWatch Events).
     */
    inline UpdateMacieSessionRequest& WithFindingPublishingFrequency(FindingPublishingFrequency&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}


    /**
     * <p>Specifies a new status for the account. Valid values are: ENABLED, resume all
     * Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline const MacieStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies a new status for the account. Valid values are: ENABLED, resume all
     * Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies a new status for the account. Valid values are: ENABLED, resume all
     * Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline void SetStatus(const MacieStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies a new status for the account. Valid values are: ENABLED, resume all
     * Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline void SetStatus(MacieStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies a new status for the account. Valid values are: ENABLED, resume all
     * Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline UpdateMacieSessionRequest& WithStatus(const MacieStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies a new status for the account. Valid values are: ENABLED, resume all
     * Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline UpdateMacieSessionRequest& WithStatus(MacieStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    FindingPublishingFrequency m_findingPublishingFrequency;
    bool m_findingPublishingFrequencyHasBeenSet;

    MacieStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
