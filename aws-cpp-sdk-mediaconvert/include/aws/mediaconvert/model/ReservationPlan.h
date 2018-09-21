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
     * The length of time that you commit to when you set up a pricing plan contract
     * for a reserved queue.
     */
    inline const Commitment& GetCommitment() const{ return m_commitment; }

    /**
     * The length of time that you commit to when you set up a pricing plan contract
     * for a reserved queue.
     */
    inline void SetCommitment(const Commitment& value) { m_commitmentHasBeenSet = true; m_commitment = value; }

    /**
     * The length of time that you commit to when you set up a pricing plan contract
     * for a reserved queue.
     */
    inline void SetCommitment(Commitment&& value) { m_commitmentHasBeenSet = true; m_commitment = std::move(value); }

    /**
     * The length of time that you commit to when you set up a pricing plan contract
     * for a reserved queue.
     */
    inline ReservationPlan& WithCommitment(const Commitment& value) { SetCommitment(value); return *this;}

    /**
     * The length of time that you commit to when you set up a pricing plan contract
     * for a reserved queue.
     */
    inline ReservationPlan& WithCommitment(Commitment&& value) { SetCommitment(std::move(value)); return *this;}


    /**
     * The time stamp, in epoch seconds, for when the pricing plan for this reserved
     * queue expires.
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }

    /**
     * The time stamp, in epoch seconds, for when the pricing plan for this reserved
     * queue expires.
     */
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }

    /**
     * The time stamp, in epoch seconds, for when the pricing plan for this reserved
     * queue expires.
     */
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }

    /**
     * The time stamp, in epoch seconds, for when the pricing plan for this reserved
     * queue expires.
     */
    inline ReservationPlan& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}

    /**
     * The time stamp, in epoch seconds, for when the pricing plan for this reserved
     * queue expires.
     */
    inline ReservationPlan& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}


    /**
     * The time stamp in epoch seconds when the reserved queue's reservation plan was
     * created.
     */
    inline const Aws::Utils::DateTime& GetPurchasedAt() const{ return m_purchasedAt; }

    /**
     * The time stamp in epoch seconds when the reserved queue's reservation plan was
     * created.
     */
    inline void SetPurchasedAt(const Aws::Utils::DateTime& value) { m_purchasedAtHasBeenSet = true; m_purchasedAt = value; }

    /**
     * The time stamp in epoch seconds when the reserved queue's reservation plan was
     * created.
     */
    inline void SetPurchasedAt(Aws::Utils::DateTime&& value) { m_purchasedAtHasBeenSet = true; m_purchasedAt = std::move(value); }

    /**
     * The time stamp in epoch seconds when the reserved queue's reservation plan was
     * created.
     */
    inline ReservationPlan& WithPurchasedAt(const Aws::Utils::DateTime& value) { SetPurchasedAt(value); return *this;}

    /**
     * The time stamp in epoch seconds when the reserved queue's reservation plan was
     * created.
     */
    inline ReservationPlan& WithPurchasedAt(Aws::Utils::DateTime&& value) { SetPurchasedAt(std::move(value)); return *this;}


    /**
     * Specifies whether the pricing plan contract for your reserved queue
     * automatically renews (AUTO_RENEW) or expires (EXPIRE) at the end of the contract
     * period.
     */
    inline const RenewalType& GetRenewalType() const{ return m_renewalType; }

    /**
     * Specifies whether the pricing plan contract for your reserved queue
     * automatically renews (AUTO_RENEW) or expires (EXPIRE) at the end of the contract
     * period.
     */
    inline void SetRenewalType(const RenewalType& value) { m_renewalTypeHasBeenSet = true; m_renewalType = value; }

    /**
     * Specifies whether the pricing plan contract for your reserved queue
     * automatically renews (AUTO_RENEW) or expires (EXPIRE) at the end of the contract
     * period.
     */
    inline void SetRenewalType(RenewalType&& value) { m_renewalTypeHasBeenSet = true; m_renewalType = std::move(value); }

    /**
     * Specifies whether the pricing plan contract for your reserved queue
     * automatically renews (AUTO_RENEW) or expires (EXPIRE) at the end of the contract
     * period.
     */
    inline ReservationPlan& WithRenewalType(const RenewalType& value) { SetRenewalType(value); return *this;}

    /**
     * Specifies whether the pricing plan contract for your reserved queue
     * automatically renews (AUTO_RENEW) or expires (EXPIRE) at the end of the contract
     * period.
     */
    inline ReservationPlan& WithRenewalType(RenewalType&& value) { SetRenewalType(std::move(value)); return *this;}


    /**
     * Specifies the number of reserved transcode slots (RTSs) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. To increase this number, create a replacement
     * contract through the AWS Elemental MediaConvert console.
     */
    inline int GetReservedSlots() const{ return m_reservedSlots; }

    /**
     * Specifies the number of reserved transcode slots (RTSs) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. To increase this number, create a replacement
     * contract through the AWS Elemental MediaConvert console.
     */
    inline void SetReservedSlots(int value) { m_reservedSlotsHasBeenSet = true; m_reservedSlots = value; }

    /**
     * Specifies the number of reserved transcode slots (RTSs) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. To increase this number, create a replacement
     * contract through the AWS Elemental MediaConvert console.
     */
    inline ReservationPlan& WithReservedSlots(int value) { SetReservedSlots(value); return *this;}


    /**
     * Specifies whether the pricing plan for your reserved queue is ACTIVE or EXPIRED.
     */
    inline const ReservationPlanStatus& GetStatus() const{ return m_status; }

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
