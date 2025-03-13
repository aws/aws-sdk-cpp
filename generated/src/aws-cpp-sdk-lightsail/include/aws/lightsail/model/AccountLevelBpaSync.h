/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/AccountLevelBpaSyncStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/BPAStatusMessage.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the synchronization status of the Amazon Simple Storage Service
   * (Amazon S3) account-level block public access (BPA) feature for your Lightsail
   * buckets.</p> <p>The account-level BPA feature of Amazon S3 provides centralized
   * controls to limit public access to all Amazon S3 buckets in an account. BPA can
   * make all Amazon S3 buckets in an Amazon Web Services account private regardless
   * of the individual bucket and object permissions that are configured. Lightsail
   * buckets take into account the Amazon S3 account-level BPA configuration when
   * allowing or denying public access. To do this, Lightsail periodically fetches
   * the account-level BPA configuration from Amazon S3. When the account-level BPA
   * status is <code>InSync</code>, the Amazon S3 account-level BPA configuration is
   * synchronized and it applies to your Lightsail buckets. For more information
   * about Amazon Simple Storage Service account-level BPA and how it affects
   * Lightsail buckets, see <a
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-block-public-access-for-buckets">Block
   * public access for buckets in Amazon Lightsail</a> in the <i>Amazon Lightsail
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AccountLevelBpaSync">AWS
   * API Reference</a></p>
   */
  class AccountLevelBpaSync
  {
  public:
    AWS_LIGHTSAIL_API AccountLevelBpaSync() = default;
    AWS_LIGHTSAIL_API AccountLevelBpaSync(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AccountLevelBpaSync& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the account-level BPA synchronization.</p> <p>The following
     * statuses are possible:</p> <ul> <li> <p> <code>InSync</code> - Account-level BPA
     * is synchronized. The Amazon S3 account-level BPA configuration applies to your
     * Lightsail buckets.</p> </li> <li> <p> <code>NeverSynced</code> - Synchronization
     * has not yet happened. The Amazon S3 account-level BPA configuration does not
     * apply to your Lightsail buckets.</p> </li> <li> <p> <code>Failed</code> -
     * Synchronization failed. The Amazon S3 account-level BPA configuration does not
     * apply to your Lightsail buckets.</p> </li> <li> <p> <code>Defaulted</code> -
     * Synchronization failed and account-level BPA for your Lightsail buckets is
     * defaulted to <i>active</i>.</p> </li> </ul>  <p>You might need to complete
     * further actions if the status is <code>Failed</code> or <code>Defaulted</code>.
     * The <code>message</code> parameter provides more information for those
     * statuses.</p> 
     */
    inline AccountLevelBpaSyncStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AccountLevelBpaSyncStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AccountLevelBpaSync& WithStatus(AccountLevelBpaSyncStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the account-level BPA configuration was last
     * synchronized. This value is null when the account-level BPA configuration has
     * not been synchronized.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSyncedAt() const { return m_lastSyncedAt; }
    inline bool LastSyncedAtHasBeenSet() const { return m_lastSyncedAtHasBeenSet; }
    template<typename LastSyncedAtT = Aws::Utils::DateTime>
    void SetLastSyncedAt(LastSyncedAtT&& value) { m_lastSyncedAtHasBeenSet = true; m_lastSyncedAt = std::forward<LastSyncedAtT>(value); }
    template<typename LastSyncedAtT = Aws::Utils::DateTime>
    AccountLevelBpaSync& WithLastSyncedAt(LastSyncedAtT&& value) { SetLastSyncedAt(std::forward<LastSyncedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that provides a reason for a <code>Failed</code> or
     * <code>Defaulted</code> synchronization status.</p> <p>The following messages are
     * possible:</p> <ul> <li> <p> <code>SYNC_ON_HOLD</code> - The synchronization has
     * not yet happened. This status message occurs immediately after you create your
     * first Lightsail bucket. This status message should change after the first
     * synchronization happens, approximately 1 hour after the first bucket is
     * created.</p> </li> <li> <p> <code>DEFAULTED_FOR_SLR_MISSING</code> - The
     * synchronization failed because the required service-linked role is missing from
     * your Amazon Web Services account. The account-level BPA configuration for your
     * Lightsail buckets is defaulted to <i>active</i> until the synchronization can
     * occur. This means that all your buckets are private and not publicly accessible.
     * For more information about how to create the required service-linked role to
     * allow synchronization, see <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-using-service-linked-roles">Using
     * Service-Linked Roles for Amazon Lightsail</a> in the <i>Amazon Lightsail
     * Developer Guide</i>.</p> </li> <li> <p>
     * <code>DEFAULTED_FOR_SLR_MISSING_ON_HOLD</code> - The synchronization failed
     * because the required service-linked role is missing from your Amazon Web
     * Services account. Account-level BPA is not yet configured for your Lightsail
     * buckets. Therefore, only the bucket access permissions and individual object
     * access permissions apply to your Lightsail buckets. For more information about
     * how to create the required service-linked role to allow synchronization, see <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-using-service-linked-roles">Using
     * Service-Linked Roles for Amazon Lightsail</a> in the <i>Amazon Lightsail
     * Developer Guide</i>.</p> </li> <li> <p> <code>Unknown</code> - The reason that
     * synchronization failed is unknown. Contact Amazon Web ServicesSupport for more
     * information.</p> </li> </ul>
     */
    inline BPAStatusMessage GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(BPAStatusMessage value) { m_messageHasBeenSet = true; m_message = value; }
    inline AccountLevelBpaSync& WithMessage(BPAStatusMessage value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether account-level block public access is
     * affecting your Lightsail buckets.</p>
     */
    inline bool GetBpaImpactsLightsail() const { return m_bpaImpactsLightsail; }
    inline bool BpaImpactsLightsailHasBeenSet() const { return m_bpaImpactsLightsailHasBeenSet; }
    inline void SetBpaImpactsLightsail(bool value) { m_bpaImpactsLightsailHasBeenSet = true; m_bpaImpactsLightsail = value; }
    inline AccountLevelBpaSync& WithBpaImpactsLightsail(bool value) { SetBpaImpactsLightsail(value); return *this;}
    ///@}
  private:

    AccountLevelBpaSyncStatus m_status{AccountLevelBpaSyncStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastSyncedAt{};
    bool m_lastSyncedAtHasBeenSet = false;

    BPAStatusMessage m_message{BPAStatusMessage::NOT_SET};
    bool m_messageHasBeenSet = false;

    bool m_bpaImpactsLightsail{false};
    bool m_bpaImpactsLightsailHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
