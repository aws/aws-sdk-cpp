/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/arc-zonal-shift/model/ZonalShiftStatus.h>
#include <aws/arc-zonal-shift/model/ShiftType.h>
#include <aws/arc-zonal-shift/model/PracticeRunOutcome.h>
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
namespace ARCZonalShift
{
namespace Model
{

  /**
   * <p>Lists information about zonal shifts in Amazon Application Recovery
   * Controller, including zonal shifts that you start yourself and zonal shifts that
   * ARC starts on your behalf for practice runs with zonal autoshift.</p> <p>Zonal
   * shifts are temporary, including customer-initiated zonal shifts and the zonal
   * autoshift practice run zonal shifts that ARC starts weekly, on your behalf. A
   * zonal shift that a customer starts can be active for up to three days (72
   * hours). A practice run zonal shift has a 30 minute duration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ZonalShiftSummary">AWS
   * API Reference</a></p>
   */
  class ZonalShiftSummary
  {
  public:
    AWS_ARCZONALSHIFT_API ZonalShiftSummary() = default;
    AWS_ARCZONALSHIFT_API ZonalShiftSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ZonalShiftSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline const Aws::String& GetZonalShiftId() const { return m_zonalShiftId; }
    inline bool ZonalShiftIdHasBeenSet() const { return m_zonalShiftIdHasBeenSet; }
    template<typename ZonalShiftIdT = Aws::String>
    void SetZonalShiftId(ZonalShiftIdT&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::forward<ZonalShiftIdT>(value); }
    template<typename ZonalShiftIdT = Aws::String>
    ZonalShiftSummary& WithZonalShiftId(ZonalShiftIdT&& value) { SetZonalShiftId(std::forward<ZonalShiftIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>Amazon Application
     * Recovery Controller currently supports enabling the following resources for
     * zonal shift and zonal autoshift:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.ec2-auto-scaling-groups.html">Amazon
     * EC2 Auto Scaling groups</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.eks.html">Amazon
     * Elastic Kubernetes Service</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.app-load-balancers.html">Application
     * Load Balancers</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.network-load-balancers.html">Network
     * Load Balancers</a> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    ZonalShiftSummary& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (for example, <code>use1-az1</code>) that traffic is
     * moved away from for a resource when you start a zonal shift. Until the zonal
     * shift expires or you cancel it, traffic for the resource is instead moved to
     * other Availability Zones in the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwayFrom() const { return m_awayFrom; }
    inline bool AwayFromHasBeenSet() const { return m_awayFromHasBeenSet; }
    template<typename AwayFromT = Aws::String>
    void SetAwayFrom(AwayFromT&& value) { m_awayFromHasBeenSet = true; m_awayFrom = std::forward<AwayFromT>(value); }
    template<typename AwayFromT = Aws::String>
    ZonalShiftSummary& WithAwayFrom(AwayFromT&& value) { SetAwayFrom(std::forward<AwayFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry time (expiration time) for a customer-initiated zonal shift. A
     * zonal shift is temporary and must be set to expire when you start the zonal
     * shift. You can initially set a zonal shift to expire in a maximum of three days
     * (72 hours). However, you can update a zonal shift to set a new expiration at any
     * time. </p> <p>When you start a zonal shift, you specify how long you want it to
     * be active, which ARC converts to an expiry time (expiration time). You can
     * cancel a zonal shift when you're ready to restore traffic to the Availability
     * Zone, or just wait for it to expire. Or you can update the zonal shift to
     * specify another length of time to expire in.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const { return m_expiryTime; }
    inline bool ExpiryTimeHasBeenSet() const { return m_expiryTimeHasBeenSet; }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    void SetExpiryTime(ExpiryTimeT&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::forward<ExpiryTimeT>(value); }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    ZonalShiftSummary& WithExpiryTime(ExpiryTimeT&& value) { SetExpiryTime(std::forward<ExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the zonal shift starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ZonalShiftSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift has been started and is active.</p> </li> <li> <p> <b>EXPIRED:</b> The
     * zonal shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED:</b> The zonal shift was canceled.</p> </li> </ul>
     */
    inline ZonalShiftStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ZonalShiftStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ZonalShiftSummary& WithStatus(ZonalShiftStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    ZonalShiftSummary& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the zonal shift type.</p>
     */
    inline ShiftType GetShiftType() const { return m_shiftType; }
    inline bool ShiftTypeHasBeenSet() const { return m_shiftTypeHasBeenSet; }
    inline void SetShiftType(ShiftType value) { m_shiftTypeHasBeenSet = true; m_shiftType = value; }
    inline ZonalShiftSummary& WithShiftType(ShiftType value) { SetShiftType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outcome, or end state, of a practice run. The following values can be
     * returned:</p> <ul> <li> <p> <b>PENDING:</b> Outcome value when the practice run
     * is in progress.</p> </li> <li> <p> <b>SUCCEEDED:</b> Outcome value when the
     * outcome alarm specified for the practice run configuration does not go into an
     * <code>ALARM</code> state during the practice run, and the practice run was not
     * interrupted before it completed.</p> </li> <li> <p> <b>INTERRUPTED:</b> Outcome
     * value when the practice run did not run for the expected 30 minutes or there was
     * another problem with the practice run that created an inconclusive outcome.</p>
     * </li> <li> <p> <b>FAILED:</b> Outcome value when the outcome alarm specified for
     * the practice run configuration goes into an <code>ALARM</code> state during the
     * practice run, and the practice run was not interrupted before it completed.</p>
     * </li> <li> <p> <b>CAPACITY_CHECK_FAILED:</b> The check for balanced capacity
     * across Availability Zones for your load balancing and Auto Scaling group
     * resources failed.</p> </li> </ul> <p>For more information about practice run
     * outcomes, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.configure.html">
     * Considerations when you configure zonal autoshift</a> in the Amazon Application
     * Recovery Controller Developer Guide.</p>
     */
    inline PracticeRunOutcome GetPracticeRunOutcome() const { return m_practiceRunOutcome; }
    inline bool PracticeRunOutcomeHasBeenSet() const { return m_practiceRunOutcomeHasBeenSet; }
    inline void SetPracticeRunOutcome(PracticeRunOutcome value) { m_practiceRunOutcomeHasBeenSet = true; m_practiceRunOutcome = value; }
    inline ZonalShiftSummary& WithPracticeRunOutcome(PracticeRunOutcome value) { SetPracticeRunOutcome(value); return *this;}
    ///@}
  private:

    Aws::String m_zonalShiftId;
    bool m_zonalShiftIdHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_awayFrom;
    bool m_awayFromHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTime{};
    bool m_expiryTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    ZonalShiftStatus m_status{ZonalShiftStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    ShiftType m_shiftType{ShiftType::NOT_SET};
    bool m_shiftTypeHasBeenSet = false;

    PracticeRunOutcome m_practiceRunOutcome{PracticeRunOutcome::NOT_SET};
    bool m_practiceRunOutcomeHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
