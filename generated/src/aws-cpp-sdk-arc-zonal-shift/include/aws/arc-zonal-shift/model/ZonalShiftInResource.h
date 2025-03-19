/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/model/AppliedStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A complex structure that lists the zonal shifts for a managed resource and
   * their statuses for the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ZonalShiftInResource">AWS
   * API Reference</a></p>
   */
  class ZonalShiftInResource
  {
  public:
    AWS_ARCZONALSHIFT_API ZonalShiftInResource() = default;
    AWS_ARCZONALSHIFT_API ZonalShiftInResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ZonalShiftInResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>appliedStatus</code> field specifies which application traffic
     * shift is in effect for a resource when there is more than one active traffic
     * shift. There can be more than one application traffic shift in progress at the
     * same time - that is, practice run zonal shifts, customer-initiated zonal shifts,
     * or an autoshift. The <code>appliedStatus</code> field for a shift that is in
     * progress for a resource can have one of two values: <code>APPLIED</code> or
     * <code>NOT_APPLIED</code>. The zonal shift or autoshift that is currently in
     * effect for the resource has an <code>appliedStatus</code> set to
     * <code>APPLIED</code>.</p> <p>The overall principle for precedence is that zonal
     * shifts that you start as a customer take precedence autoshifts, which take
     * precedence over practice runs. That is, customer-initiated zonal shifts &gt;
     * autoshifts &gt; practice run zonal shifts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.how-it-works.html">How
     * zonal autoshift and practice runs work</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline AppliedStatus GetAppliedStatus() const { return m_appliedStatus; }
    inline bool AppliedStatusHasBeenSet() const { return m_appliedStatusHasBeenSet; }
    inline void SetAppliedStatus(AppliedStatus value) { m_appliedStatusHasBeenSet = true; m_appliedStatus = value; }
    inline ZonalShiftInResource& WithAppliedStatus(AppliedStatus value) { SetAppliedStatus(value); return *this;}
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
    ZonalShiftInResource& WithAwayFrom(AwayFromT&& value) { SetAwayFrom(std::forward<AwayFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment that you enter for a customer-initiated zonal shift. Only the
     * latest comment is retained; no comment history is maintained. That is, a new
     * comment overwrites any existing comment string.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    ZonalShiftInResource& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry time (expiration time) for a customer-initiated zonal shift. A
     * zonal shift is temporary and must be set to expire when you start the zonal
     * shift. You can initially set a zonal shift to expire in a maximum of three days
     * (72 hours). However, you can update a zonal shift to set a new expiration at any
     * time. </p> <p>When you start a zonal shift, you specify how long you want it to
     * be active, which Route 53 ARC converts to an expiry time (expiration time). You
     * can cancel a zonal shift when you're ready to restore traffic to the
     * Availability Zone, or just wait for it to expire. Or you can update the zonal
     * shift to specify another length of time to expire in.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const { return m_expiryTime; }
    inline bool ExpiryTimeHasBeenSet() const { return m_expiryTimeHasBeenSet; }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    void SetExpiryTime(ExpiryTimeT&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::forward<ExpiryTimeT>(value); }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    ZonalShiftInResource& WithExpiryTime(ExpiryTimeT&& value) { SetExpiryTime(std::forward<ExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outcome, or end state, returned for a practice run. The following values
     * can be returned:</p> <ul> <li> <p> <b>PENDING:</b> Outcome value when a practice
     * run is in progress.</p> </li> <li> <p> <b>SUCCEEDED:</b> Outcome value when the
     * outcome alarm specified for the practice run configuration does not go into an
     * <code>ALARM</code> state during the practice run, and the practice run was not
     * interrupted before it completed the expected 30 minute zonal shift.</p> </li>
     * <li> <p> <b>INTERRUPTED:</b> Outcome value when the practice run was stopped
     * before the expected 30 minute zonal shift duration, or there was another problem
     * with the practice run that created an inconclusive outcome.</p> </li> <li> <p>
     * <b>FAILED:</b> Outcome value when the outcome alarm specified for the practice
     * run configuration goes into an <code>ALARM</code> state during the practice run,
     * and the practice run was not interrupted before it completed.</p> </li> </ul>
     * <p>For more information about practice run outcomes, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.configure.html">
     * Considerations when you configure zonal autoshift</a> in the Amazon Route 53
     * Application Recovery Controller Developer Guide.</p>
     */
    inline PracticeRunOutcome GetPracticeRunOutcome() const { return m_practiceRunOutcome; }
    inline bool PracticeRunOutcomeHasBeenSet() const { return m_practiceRunOutcomeHasBeenSet; }
    inline void SetPracticeRunOutcome(PracticeRunOutcome value) { m_practiceRunOutcomeHasBeenSet = true; m_practiceRunOutcome = value; }
    inline ZonalShiftInResource& WithPracticeRunOutcome(PracticeRunOutcome value) { SetPracticeRunOutcome(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    ZonalShiftInResource& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
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
    ZonalShiftInResource& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline const Aws::String& GetZonalShiftId() const { return m_zonalShiftId; }
    inline bool ZonalShiftIdHasBeenSet() const { return m_zonalShiftIdHasBeenSet; }
    template<typename ZonalShiftIdT = Aws::String>
    void SetZonalShiftId(ZonalShiftIdT&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::forward<ZonalShiftIdT>(value); }
    template<typename ZonalShiftIdT = Aws::String>
    ZonalShiftInResource& WithZonalShiftId(ZonalShiftIdT&& value) { SetZonalShiftId(std::forward<ZonalShiftIdT>(value)); return *this;}
    ///@}
  private:

    AppliedStatus m_appliedStatus{AppliedStatus::NOT_SET};
    bool m_appliedStatusHasBeenSet = false;

    Aws::String m_awayFrom;
    bool m_awayFromHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTime{};
    bool m_expiryTimeHasBeenSet = false;

    PracticeRunOutcome m_practiceRunOutcome{PracticeRunOutcome::NOT_SET};
    bool m_practiceRunOutcomeHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::String m_zonalShiftId;
    bool m_zonalShiftIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
