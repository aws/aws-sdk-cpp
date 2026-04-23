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
#include <aws/mediaconvert/model/RenewalType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ReservationPlanSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API ReservationPlanSettings
  {
  public:
    ReservationPlanSettings();
    ReservationPlanSettings(Aws::Utils::Json::JsonView jsonValue);
    ReservationPlanSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ReservationPlanSettings& WithCommitment(const Commitment& value) { SetCommitment(value); return *this;}

    /**
     * The length of the term of your reserved queue pricing plan commitment.
     */
    inline ReservationPlanSettings& WithCommitment(Commitment&& value) { SetCommitment(std::move(value)); return *this;}


    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term. When your term
     * is auto renewed, you extend your commitment by 12 months from the auto renew
     * date. You can cancel this commitment.
     */
    inline const RenewalType& GetRenewalType() const{ return m_renewalType; }

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term. When your term
     * is auto renewed, you extend your commitment by 12 months from the auto renew
     * date. You can cancel this commitment.
     */
    inline bool RenewalTypeHasBeenSet() const { return m_renewalTypeHasBeenSet; }

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term. When your term
     * is auto renewed, you extend your commitment by 12 months from the auto renew
     * date. You can cancel this commitment.
     */
    inline void SetRenewalType(const RenewalType& value) { m_renewalTypeHasBeenSet = true; m_renewalType = value; }

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term. When your term
     * is auto renewed, you extend your commitment by 12 months from the auto renew
     * date. You can cancel this commitment.
     */
    inline void SetRenewalType(RenewalType&& value) { m_renewalTypeHasBeenSet = true; m_renewalType = std::move(value); }

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term. When your term
     * is auto renewed, you extend your commitment by 12 months from the auto renew
     * date. You can cancel this commitment.
     */
    inline ReservationPlanSettings& WithRenewalType(const RenewalType& value) { SetRenewalType(value); return *this;}

    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term. When your term
     * is auto renewed, you extend your commitment by 12 months from the auto renew
     * date. You can cancel this commitment.
     */
    inline ReservationPlanSettings& WithRenewalType(RenewalType&& value) { SetRenewalType(std::move(value)); return *this;}


    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. You can't decrease the number of RTS in your
     * reserved queue. You can increase the number of RTS by extending your existing
     * commitment with a new 12-month commitment for the larger number. The new
     * commitment begins when you purchase the additional capacity. You can't cancel
     * your commitment or revert to your original commitment after you increase the
     * capacity.
     */
    inline int GetReservedSlots() const{ return m_reservedSlots; }

    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. You can't decrease the number of RTS in your
     * reserved queue. You can increase the number of RTS by extending your existing
     * commitment with a new 12-month commitment for the larger number. The new
     * commitment begins when you purchase the additional capacity. You can't cancel
     * your commitment or revert to your original commitment after you increase the
     * capacity.
     */
    inline bool ReservedSlotsHasBeenSet() const { return m_reservedSlotsHasBeenSet; }

    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. You can't decrease the number of RTS in your
     * reserved queue. You can increase the number of RTS by extending your existing
     * commitment with a new 12-month commitment for the larger number. The new
     * commitment begins when you purchase the additional capacity. You can't cancel
     * your commitment or revert to your original commitment after you increase the
     * capacity.
     */
    inline void SetReservedSlots(int value) { m_reservedSlotsHasBeenSet = true; m_reservedSlots = value; }

    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. You can't decrease the number of RTS in your
     * reserved queue. You can increase the number of RTS by extending your existing
     * commitment with a new 12-month commitment for the larger number. The new
     * commitment begins when you purchase the additional capacity. You can't cancel
     * your commitment or revert to your original commitment after you increase the
     * capacity.
     */
    inline ReservationPlanSettings& WithReservedSlots(int value) { SetReservedSlots(value); return *this;}

  private:

    Commitment m_commitment;
    bool m_commitmentHasBeenSet;

    RenewalType m_renewalType;
    bool m_renewalTypeHasBeenSet;

    int m_reservedSlots;
    bool m_reservedSlotsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
