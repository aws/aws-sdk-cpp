/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/FindingPublishingFrequency.h>
#include <aws/macie2/model/MacieStatus.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class EnableMacieRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API EnableMacieRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableMacie"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline EnableMacieRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline EnableMacieRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline EnableMacieRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline EnableMacieRequest& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * <p>Specifies how often to publish updates to policy findings for the account.
     * This includes publishing updates to Security Hub and Amazon EventBridge
     * (formerly Amazon CloudWatch Events).</p>
     */
    inline EnableMacieRequest& WithFindingPublishingFrequency(FindingPublishingFrequency&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}


    /**
     * <p>Specifies the new status for the account. To enable Amazon Macie and start
     * all Macie activities for the account, set this value to ENABLED.</p>
     */
    inline const MacieStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the new status for the account. To enable Amazon Macie and start
     * all Macie activities for the account, set this value to ENABLED.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the new status for the account. To enable Amazon Macie and start
     * all Macie activities for the account, set this value to ENABLED.</p>
     */
    inline void SetStatus(const MacieStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the new status for the account. To enable Amazon Macie and start
     * all Macie activities for the account, set this value to ENABLED.</p>
     */
    inline void SetStatus(MacieStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the new status for the account. To enable Amazon Macie and start
     * all Macie activities for the account, set this value to ENABLED.</p>
     */
    inline EnableMacieRequest& WithStatus(const MacieStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the new status for the account. To enable Amazon Macie and start
     * all Macie activities for the account, set this value to ENABLED.</p>
     */
    inline EnableMacieRequest& WithStatus(MacieStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FindingPublishingFrequency m_findingPublishingFrequency;
    bool m_findingPublishingFrequencyHasBeenSet = false;

    MacieStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
