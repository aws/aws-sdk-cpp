/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/arc-zonal-shift/model/PracticeRunOutcome.h>
#include <aws/arc-zonal-shift/model/ZonalShiftStatus.h>
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
   * <p>Lists information about zonal shifts in Amazon Route 53 Application Recovery
   * Controller, including zonal shifts that you start yourself and zonal shifts that
   * Route 53 ARC starts on your behalf for practice runs with zonal autoshift.</p>
   * <p>Zonal shifts are temporary, including customer-started zonal shifts and the
   * zonal autoshift practice run zonal shifts that Route 53 ARC starts weekly, on
   * your behalf. A zonal shift that a customer starts can be active for up to three
   * days (72 hours). A practice run zonal shift has a 30 minute
   * duration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ZonalShiftSummary">AWS
   * API Reference</a></p>
   */
  class ZonalShiftSummary
  {
  public:
    AWS_ARCZONALSHIFT_API ZonalShiftSummary();
    AWS_ARCZONALSHIFT_API ZonalShiftSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ZonalShiftSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetAwayFrom() const{ return m_awayFrom; }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the Amazon Web
     * Services Region.</p>
     */
    inline bool AwayFromHasBeenSet() const { return m_awayFromHasBeenSet; }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the Amazon Web
     * Services Region.</p>
     */
    inline void SetAwayFrom(const Aws::String& value) { m_awayFromHasBeenSet = true; m_awayFrom = value; }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the Amazon Web
     * Services Region.</p>
     */
    inline void SetAwayFrom(Aws::String&& value) { m_awayFromHasBeenSet = true; m_awayFrom = std::move(value); }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the Amazon Web
     * Services Region.</p>
     */
    inline void SetAwayFrom(const char* value) { m_awayFromHasBeenSet = true; m_awayFrom.assign(value); }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the Amazon Web
     * Services Region.</p>
     */
    inline ZonalShiftSummary& WithAwayFrom(const Aws::String& value) { SetAwayFrom(value); return *this;}

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the Amazon Web
     * Services Region.</p>
     */
    inline ZonalShiftSummary& WithAwayFrom(Aws::String&& value) { SetAwayFrom(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the Amazon Web
     * Services Region.</p>
     */
    inline ZonalShiftSummary& WithAwayFrom(const char* value) { SetAwayFrom(value); return *this;}


    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline ZonalShiftSummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline ZonalShiftSummary& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline ZonalShiftSummary& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The expiry time (expiration time) for a customer-started zonal shift. A zonal
     * shift is temporary and must be set to expire when you start the zonal shift. You
     * can initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift when you're ready to restore traffic to the Availability Zone, or
     * just wait for it to expire. Or you can update the zonal shift to specify another
     * length of time to expire in.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const{ return m_expiryTime; }

    /**
     * <p>The expiry time (expiration time) for a customer-started zonal shift. A zonal
     * shift is temporary and must be set to expire when you start the zonal shift. You
     * can initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift when you're ready to restore traffic to the Availability Zone, or
     * just wait for it to expire. Or you can update the zonal shift to specify another
     * length of time to expire in.</p>
     */
    inline bool ExpiryTimeHasBeenSet() const { return m_expiryTimeHasBeenSet; }

    /**
     * <p>The expiry time (expiration time) for a customer-started zonal shift. A zonal
     * shift is temporary and must be set to expire when you start the zonal shift. You
     * can initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift when you're ready to restore traffic to the Availability Zone, or
     * just wait for it to expire. Or you can update the zonal shift to specify another
     * length of time to expire in.</p>
     */
    inline void SetExpiryTime(const Aws::Utils::DateTime& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = value; }

    /**
     * <p>The expiry time (expiration time) for a customer-started zonal shift. A zonal
     * shift is temporary and must be set to expire when you start the zonal shift. You
     * can initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift when you're ready to restore traffic to the Availability Zone, or
     * just wait for it to expire. Or you can update the zonal shift to specify another
     * length of time to expire in.</p>
     */
    inline void SetExpiryTime(Aws::Utils::DateTime&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::move(value); }

    /**
     * <p>The expiry time (expiration time) for a customer-started zonal shift. A zonal
     * shift is temporary and must be set to expire when you start the zonal shift. You
     * can initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift when you're ready to restore traffic to the Availability Zone, or
     * just wait for it to expire. Or you can update the zonal shift to specify another
     * length of time to expire in.</p>
     */
    inline ZonalShiftSummary& WithExpiryTime(const Aws::Utils::DateTime& value) { SetExpiryTime(value); return *this;}

    /**
     * <p>The expiry time (expiration time) for a customer-started zonal shift. A zonal
     * shift is temporary and must be set to expire when you start the zonal shift. You
     * can initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift when you're ready to restore traffic to the Availability Zone, or
     * just wait for it to expire. Or you can update the zonal shift to specify another
     * length of time to expire in.</p>
     */
    inline ZonalShiftSummary& WithExpiryTime(Aws::Utils::DateTime&& value) { SetExpiryTime(std::move(value)); return *this;}


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
     * </li> </ul> <p>For more information about practice run outcomes, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.configure.html">
     * Considerations when you configure zonal autoshift</a> in the Amazon Route 53
     * Application Recovery Controller Developer Guide.</p>
     */
    inline const PracticeRunOutcome& GetPracticeRunOutcome() const{ return m_practiceRunOutcome; }

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
     * </li> </ul> <p>For more information about practice run outcomes, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.configure.html">
     * Considerations when you configure zonal autoshift</a> in the Amazon Route 53
     * Application Recovery Controller Developer Guide.</p>
     */
    inline bool PracticeRunOutcomeHasBeenSet() const { return m_practiceRunOutcomeHasBeenSet; }

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
     * </li> </ul> <p>For more information about practice run outcomes, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.configure.html">
     * Considerations when you configure zonal autoshift</a> in the Amazon Route 53
     * Application Recovery Controller Developer Guide.</p>
     */
    inline void SetPracticeRunOutcome(const PracticeRunOutcome& value) { m_practiceRunOutcomeHasBeenSet = true; m_practiceRunOutcome = value; }

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
     * </li> </ul> <p>For more information about practice run outcomes, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.configure.html">
     * Considerations when you configure zonal autoshift</a> in the Amazon Route 53
     * Application Recovery Controller Developer Guide.</p>
     */
    inline void SetPracticeRunOutcome(PracticeRunOutcome&& value) { m_practiceRunOutcomeHasBeenSet = true; m_practiceRunOutcome = std::move(value); }

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
     * </li> </ul> <p>For more information about practice run outcomes, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.configure.html">
     * Considerations when you configure zonal autoshift</a> in the Amazon Route 53
     * Application Recovery Controller Developer Guide.</p>
     */
    inline ZonalShiftSummary& WithPracticeRunOutcome(const PracticeRunOutcome& value) { SetPracticeRunOutcome(value); return *this;}

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
     * </li> </ul> <p>For more information about practice run outcomes, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.configure.html">
     * Considerations when you configure zonal autoshift</a> in the Amazon Route 53
     * Application Recovery Controller Developer Guide.</p>
     */
    inline ZonalShiftSummary& WithPracticeRunOutcome(PracticeRunOutcome&& value) { SetPracticeRunOutcome(std::move(value)); return *this;}


    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline ZonalShiftSummary& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline ZonalShiftSummary& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline ZonalShiftSummary& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The time (UTC) when the zonal shift starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time (UTC) when the zonal shift starts.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time (UTC) when the zonal shift starts.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time (UTC) when the zonal shift starts.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time (UTC) when the zonal shift starts.</p>
     */
    inline ZonalShiftSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time (UTC) when the zonal shift starts.</p>
     */
    inline ZonalShiftSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED:</b> The zonal shift was canceled.</p> </li> </ul>
     */
    inline const ZonalShiftStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED:</b> The zonal shift was canceled.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED:</b> The zonal shift was canceled.</p> </li> </ul>
     */
    inline void SetStatus(const ZonalShiftStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED:</b> The zonal shift was canceled.</p> </li> </ul>
     */
    inline void SetStatus(ZonalShiftStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED:</b> The zonal shift was canceled.</p> </li> </ul>
     */
    inline ZonalShiftSummary& WithStatus(const ZonalShiftStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED:</b> The zonal shift was canceled.</p> </li> </ul>
     */
    inline ZonalShiftSummary& WithStatus(ZonalShiftStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline const Aws::String& GetZonalShiftId() const{ return m_zonalShiftId; }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline bool ZonalShiftIdHasBeenSet() const { return m_zonalShiftIdHasBeenSet; }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(const Aws::String& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = value; }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(Aws::String&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::move(value); }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(const char* value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId.assign(value); }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline ZonalShiftSummary& WithZonalShiftId(const Aws::String& value) { SetZonalShiftId(value); return *this;}

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline ZonalShiftSummary& WithZonalShiftId(Aws::String&& value) { SetZonalShiftId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline ZonalShiftSummary& WithZonalShiftId(const char* value) { SetZonalShiftId(value); return *this;}

  private:

    Aws::String m_awayFrom;
    bool m_awayFromHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTime;
    bool m_expiryTimeHasBeenSet = false;

    PracticeRunOutcome m_practiceRunOutcome;
    bool m_practiceRunOutcomeHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    ZonalShiftStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_zonalShiftId;
    bool m_zonalShiftIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
