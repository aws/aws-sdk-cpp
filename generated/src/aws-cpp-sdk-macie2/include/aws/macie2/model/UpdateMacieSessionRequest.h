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
    AWS_MACIE2_API UpdateMacieSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMacieSession"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies how often to publish updates to policy findings for the account.
     * This includes publishing updates to Security Hub and Amazon EventBridge
     * (formerly Amazon CloudWatch Events).</p>
     */
    inline FindingPublishingFrequency GetFindingPublishingFrequency() const { return m_findingPublishingFrequency; }
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }
    inline UpdateMacieSessionRequest& WithFindingPublishingFrequency(FindingPublishingFrequency value) { SetFindingPublishingFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new status for the account. Valid values are: ENABLED, resume all
     * Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline MacieStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MacieStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateMacieSessionRequest& WithStatus(MacieStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    FindingPublishingFrequency m_findingPublishingFrequency{FindingPublishingFrequency::NOT_SET};
    bool m_findingPublishingFrequencyHasBeenSet = false;

    MacieStatus m_status{MacieStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
