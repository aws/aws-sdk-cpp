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
  class UpdateMacieSessionRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateMacieSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMacieSession"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies how often to publish updates to policy findings for the account.
     * This includes publishing updates to Security Hub and Amazon EventBridge
     * (formerly Amazon CloudWatch Events).</p>
     */
    inline const FindingPublishingFrequency& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    /**
     * <p>Specifies how often to publish updates to policy findings for the account.
     * This includes publishing updates to Security Hub and Amazon EventBridge
     * (formerly Amazon CloudWatch Events).</p>
     */
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }

    /**
     * <p>Specifies how often to publish updates to policy findings for the account.
     * This includes publishing updates to Security Hub and Amazon EventBridge
     * (formerly Amazon CloudWatch Events).</p>
     */
    inline void SetFindingPublishingFrequency(const FindingPublishingFrequency& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }

    /**
     * <p>Specifies how often to publish updates to policy findings for the account.
     * This includes publishing updates to Security Hub and Amazon EventBridge
     * (formerly Amazon CloudWatch Events).</p>
     */
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency&& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = std::move(value); }

    /**
     * <p>Specifies how often to publish updates to policy findings for the account.
     * This includes publishing updates to Security Hub and Amazon EventBridge
     * (formerly Amazon CloudWatch Events).</p>
     */
    inline UpdateMacieSessionRequest& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * <p>Specifies how often to publish updates to policy findings for the account.
     * This includes publishing updates to Security Hub and Amazon EventBridge
     * (formerly Amazon CloudWatch Events).</p>
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
    bool m_findingPublishingFrequencyHasBeenSet = false;

    MacieStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
