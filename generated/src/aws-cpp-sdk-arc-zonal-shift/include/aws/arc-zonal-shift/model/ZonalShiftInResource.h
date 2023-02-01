/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/model/AppliedStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_ARCZONALSHIFT_API ZonalShiftInResource();
    AWS_ARCZONALSHIFT_API ZonalShiftInResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ZonalShiftInResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An <code>appliedStatus</code> for a zonal shift for a resource can have one
     * of two values: <code>APPLIED</code> or <code>NOT_APPLIED</code>. </p>
     */
    inline const AppliedStatus& GetAppliedStatus() const{ return m_appliedStatus; }

    /**
     * <p>An <code>appliedStatus</code> for a zonal shift for a resource can have one
     * of two values: <code>APPLIED</code> or <code>NOT_APPLIED</code>. </p>
     */
    inline bool AppliedStatusHasBeenSet() const { return m_appliedStatusHasBeenSet; }

    /**
     * <p>An <code>appliedStatus</code> for a zonal shift for a resource can have one
     * of two values: <code>APPLIED</code> or <code>NOT_APPLIED</code>. </p>
     */
    inline void SetAppliedStatus(const AppliedStatus& value) { m_appliedStatusHasBeenSet = true; m_appliedStatus = value; }

    /**
     * <p>An <code>appliedStatus</code> for a zonal shift for a resource can have one
     * of two values: <code>APPLIED</code> or <code>NOT_APPLIED</code>. </p>
     */
    inline void SetAppliedStatus(AppliedStatus&& value) { m_appliedStatusHasBeenSet = true; m_appliedStatus = std::move(value); }

    /**
     * <p>An <code>appliedStatus</code> for a zonal shift for a resource can have one
     * of two values: <code>APPLIED</code> or <code>NOT_APPLIED</code>. </p>
     */
    inline ZonalShiftInResource& WithAppliedStatus(const AppliedStatus& value) { SetAppliedStatus(value); return *this;}

    /**
     * <p>An <code>appliedStatus</code> for a zonal shift for a resource can have one
     * of two values: <code>APPLIED</code> or <code>NOT_APPLIED</code>. </p>
     */
    inline ZonalShiftInResource& WithAppliedStatus(AppliedStatus&& value) { SetAppliedStatus(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline const Aws::String& GetAwayFrom() const{ return m_awayFrom; }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline bool AwayFromHasBeenSet() const { return m_awayFromHasBeenSet; }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline void SetAwayFrom(const Aws::String& value) { m_awayFromHasBeenSet = true; m_awayFrom = value; }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline void SetAwayFrom(Aws::String&& value) { m_awayFromHasBeenSet = true; m_awayFrom = std::move(value); }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline void SetAwayFrom(const char* value) { m_awayFromHasBeenSet = true; m_awayFrom.assign(value); }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline ZonalShiftInResource& WithAwayFrom(const Aws::String& value) { SetAwayFrom(value); return *this;}

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline ZonalShiftInResource& WithAwayFrom(Aws::String&& value) { SetAwayFrom(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline ZonalShiftInResource& WithAwayFrom(const char* value) { SetAwayFrom(value); return *this;}


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
    inline ZonalShiftInResource& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline ZonalShiftInResource& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. That is, a new comment overwrites
     * any existing comment string.</p>
     */
    inline ZonalShiftInResource& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The expiry time (expiration time) for the zonal shift. A zonal shift is
     * temporary and must be set to expire when you start the zonal shift. You can
     * initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift, for example, if you're ready to restore traffic to the
     * Availability Zone. Or you can update the zonal shift to specify another length
     * of time to expire in.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const{ return m_expiryTime; }

    /**
     * <p>The expiry time (expiration time) for the zonal shift. A zonal shift is
     * temporary and must be set to expire when you start the zonal shift. You can
     * initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift, for example, if you're ready to restore traffic to the
     * Availability Zone. Or you can update the zonal shift to specify another length
     * of time to expire in.</p>
     */
    inline bool ExpiryTimeHasBeenSet() const { return m_expiryTimeHasBeenSet; }

    /**
     * <p>The expiry time (expiration time) for the zonal shift. A zonal shift is
     * temporary and must be set to expire when you start the zonal shift. You can
     * initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift, for example, if you're ready to restore traffic to the
     * Availability Zone. Or you can update the zonal shift to specify another length
     * of time to expire in.</p>
     */
    inline void SetExpiryTime(const Aws::Utils::DateTime& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = value; }

    /**
     * <p>The expiry time (expiration time) for the zonal shift. A zonal shift is
     * temporary and must be set to expire when you start the zonal shift. You can
     * initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift, for example, if you're ready to restore traffic to the
     * Availability Zone. Or you can update the zonal shift to specify another length
     * of time to expire in.</p>
     */
    inline void SetExpiryTime(Aws::Utils::DateTime&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::move(value); }

    /**
     * <p>The expiry time (expiration time) for the zonal shift. A zonal shift is
     * temporary and must be set to expire when you start the zonal shift. You can
     * initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift, for example, if you're ready to restore traffic to the
     * Availability Zone. Or you can update the zonal shift to specify another length
     * of time to expire in.</p>
     */
    inline ZonalShiftInResource& WithExpiryTime(const Aws::Utils::DateTime& value) { SetExpiryTime(value); return *this;}

    /**
     * <p>The expiry time (expiration time) for the zonal shift. A zonal shift is
     * temporary and must be set to expire when you start the zonal shift. You can
     * initially set a zonal shift to expire in a maximum of three days (72 hours).
     * However, you can update a zonal shift to set a new expiration at any time. </p>
     * <p>When you start a zonal shift, you specify how long you want it to be active,
     * which Route 53 ARC converts to an expiry time (expiration time). You can cancel
     * a zonal shift, for example, if you're ready to restore traffic to the
     * Availability Zone. Or you can update the zonal shift to specify another length
     * of time to expire in.</p>
     */
    inline ZonalShiftInResource& WithExpiryTime(Aws::Utils::DateTime&& value) { SetExpiryTime(std::move(value)); return *this;}


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
    inline ZonalShiftInResource& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline ZonalShiftInResource& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline ZonalShiftInResource& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline ZonalShiftInResource& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline ZonalShiftInResource& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline ZonalShiftInResource& WithZonalShiftId(const Aws::String& value) { SetZonalShiftId(value); return *this;}

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline ZonalShiftInResource& WithZonalShiftId(Aws::String&& value) { SetZonalShiftId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline ZonalShiftInResource& WithZonalShiftId(const char* value) { SetZonalShiftId(value); return *this;}

  private:

    AppliedStatus m_appliedStatus;
    bool m_appliedStatusHasBeenSet = false;

    Aws::String m_awayFrom;
    bool m_awayFromHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTime;
    bool m_expiryTimeHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_zonalShiftId;
    bool m_zonalShiftIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
