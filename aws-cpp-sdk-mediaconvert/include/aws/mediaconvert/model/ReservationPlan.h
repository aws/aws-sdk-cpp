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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Commitment.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconvert/model/RenewalType.h>
#include <aws/mediaconvert/model/ReservationPlanStatus.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Details about the pricing plan for your reserved queue. Required for reserved
   * queues and not applicable to on-demand queues.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ReservationPlan">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API ReservationPlan
  {
  public:
    ReservationPlan();
    ReservationPlan(Aws::Utils::Json::JsonView jsonValue);
    ReservationPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The length of the term of your reserved queue pricing plan commitment.
     */
    inline const Commitment& GetCommitment() const{ return m_commitment; }

    /**
     * The length of the term of your reserved queue pricing plan commitment.
     */
    inline bool CommitmentHasBeenSet() const { return m_commitmentHasBeenSet; }

    /**
     * The length of the term of your reserved queue pricing plan commitment.
     */
    inline void SetCommitment(const Commitment& value) { m_commitmentHasBeenSet = true; m_commitment = value; }

    /**
     * The length of the term of your reserved queue pricing plan commitment.
     */
    inline void SetCommitment(Commitment&& value) { m_commitmentHasBeenSet = true; m_commitment = std::move(value); }

    /**
     * The length of the term of your reserved queue pricing plan commitment.
     */
    inline ReservationPlan& WithCommitment(const Commitment& value) { SetCommitment(value); return *this;}

    /**
     * The length of the term of your reserved queue pricing plan commitment.
     */
    inline ReservationPlan& WithCommitment(Commitment&& value) { SetCommitment(std::move(value)); return *this;}


    /**
     * The timestamp in epoch seconds for when the current pricing plan term for this
     * reserved queue expires.
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }

    /**
     * The timestamp in epoch seconds for when the current pricing plan term for this
     * reserved queue expires.
     */
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }

    /**
     * The timestamp in epoch seconds for when the current pricing plan term for this
     * reserved queue expires.
     */
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }

    /**
     * The timestamp in epoch seconds for when the current pricing plan term for this
     * reserved queue expires.
     */
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }

    /**
     * The timestamp in epoch seconds for when the current pricing plan term for this
     * reserved queue expires.
     */
    inline ReservationPlan& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}

    /**
     * The timestamp in epoch seconds for when the current pricing plan term for this
     * reserved queue expires.
     */
    inline ReservationPlan& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}


    /**
     * The timestamp in epoch seconds for when you set up the current pricing plan for
     * this reserved queue.
     */
    inline const Aws::Utils::DateTime& GetPurchasedAt() const{ return m_purchasedAt; }

    /**
     * The timestamp in epoch seconds for when you set up the current pricing plan for
     * this reserved queue.
     */
    inline bool PurchasedAtHasBeenSet() const { return m_purchasedAtHasBeenSet; }

    /**
     * The timestamp in epoch seconds for when you set up the current pricing plan for
     * this reserved queue.
     */
    inline void SetPurchasedAt(const Aws::Utils::DateTime& value) { m_purchasedAtHasBeenSet = true; m_purchasedAt = value; }

    /**
     * The timestamp in epoch seconds for when you set up the current pricing plan for
     * this reserved queue.
     */
    inline void SetPurchasedAt(Aws::Utils::DateTime&& value) { m_purchasedAtHasBeenSet = true; m_purchasedAt = std::move(value); }

    /**
     * The timestamp in epoch seconds for when you set up the current pricing plan for
     * this reserved queue.
     */
    inline ReservationPlan& WithPurchasedAt(const Aws::Utils::DateTime& value) { SetPurchasedAt(value); return *this;}

    /**
     * The timestamp in epoch seconds for when you set up the current pricing plan for
     * this reserved queue.
     */
    inline ReservationPlan& WithPurchasedAt(Aws::Utils::DateTime&& value) { SetPurchasedAt(std::move(value)); return *this;}


    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term.
     */
    inline const RenewalType& GetRenewalType() const{ return m_renewalType; }

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term.
     */
    inline bool RenewalTypeHasBeenSet() const { return m_renewalTypeHasBeenSet; }

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term.
     */
    inline void SetRenewalType(const RenewalType& value) { m_renewalTypeHasBeenSet = true; m_renewalType = value; }

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term.
     */
    inline void SetRenewalType(RenewalType&& value) { m_renewalTypeHasBeenSet = true; m_renewalType = std::move(value); }

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term.
     */
    inline ReservationPlan& WithRenewalType(const RenewalType& value) { SetRenewalType(value); return *this;}

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term.
     */
    inline ReservationPlan& WithRenewalType(RenewalType&& value) { SetRenewalType(std::move(value)); return *this;}


    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. When you increase this number, you extend
     * your existing commitment with a new 12-month commitment for a larger number of
     * RTS. The new commitment begins when you purchase the additional capacity. You
     * can't decrease the number of RTS in your reserved queue.
     */
    inline int GetReservedSlots() const{ return m_reservedSlots; }

    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. When you increase this number, you extend
     * your existing commitment with a new 12-month commitment for a larger number of
     * RTS. The new commitment begins when you purchase the additional capacity. You
     * can't decrease the number of RTS in your reserved queue.
     */
    inline bool ReservedSlotsHasBeenSet() const { return m_reservedSlotsHasBeenSet; }

    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. When you increase this number, you extend
     * your existing commitment with a new 12-month commitment for a larger number of
     * RTS. The new commitment begins when you purchase the additional capacity. You
     * can't decrease the number of RTS in your reserved queue.
     */
    inline void SetReservedSlots(int value) { m_reservedSlotsHasBeenSet = true; m_reservedSlots = value; }

    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. When you increase this number, you extend
     * your existing commitment with a new 12-month commitment for a larger number of
     * RTS. The new commitment begins when you purchase the additional capacity. You
     * can't decrease the number of RTS in your reserved queue.
     */
    inline ReservationPlan& WithReservedSlots(int value) { SetReservedSlots(value); return *this;}


    /**
     * Specifies whether the pricing plan for your reserved queue is ACTIVE or EXPIRED.
     */
    inline const ReservationPlanStatus& GetStatus() const{ return m_status; }

    /**
     * Specifies whether the pricing plan for your reserved queue is ACTIVE or EXPIRED.
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * Specifies whether the pricing plan for your reserved queue is ACTIVE or EXPIRED.
     */
    inline void SetStatus(const ReservationPlanStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * Specifies whether the pricing plan for your reserved queue is ACTIVE or EXPIRED.
     */
    inline void SetStatus(ReservationPlanStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * Specifies whether the pricing plan for your reserved queue is ACTIVE or EXPIRED.
     */
    inline ReservationPlan& WithStatus(const ReservationPlanStatus& value) { SetStatus(value); return *this;}

    /**
     * Specifies whether the pricing plan for your reserved queue is ACTIVE or EXPIRED.
     */
    inline ReservationPlan& WithStatus(ReservationPlanStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Commitment m_commitment;
    bool m_commitmentHasBeenSet;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet;

    Aws::Utils::DateTime m_purchasedAt;
    bool m_purchasedAtHasBeenSet;

    RenewalType m_renewalType;
    bool m_renewalTypeHasBeenSet;

    int m_reservedSlots;
    bool m_reservedSlotsHasBeenSet;

    ReservationPlanStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
