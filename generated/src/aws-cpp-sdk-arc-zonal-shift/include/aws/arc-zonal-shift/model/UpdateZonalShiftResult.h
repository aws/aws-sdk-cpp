/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/arc-zonal-shift/model/ZonalShiftStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ARCZonalShift
{
namespace Model
{
  class UpdateZonalShiftResult
  {
  public:
    AWS_ARCZONALSHIFT_API UpdateZonalShiftResult();
    AWS_ARCZONALSHIFT_API UpdateZonalShiftResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API UpdateZonalShiftResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetAwayFrom(const Aws::String& value) { m_awayFrom = value; }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline void SetAwayFrom(Aws::String&& value) { m_awayFrom = std::move(value); }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline void SetAwayFrom(const char* value) { m_awayFrom.assign(value); }

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline UpdateZonalShiftResult& WithAwayFrom(const Aws::String& value) { SetAwayFrom(value); return *this;}

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline UpdateZonalShiftResult& WithAwayFrom(Aws::String&& value) { SetAwayFrom(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone that traffic is moved away from for a resource when you
     * start a zonal shift. Until the zonal shift expires or you cancel it, traffic for
     * the resource is instead moved to other Availability Zones in the AWS Region.</p>
     */
    inline UpdateZonalShiftResult& WithAwayFrom(const char* value) { SetAwayFrom(value); return *this;}


    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline void SetComment(const Aws::String& value) { m_comment = value; }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline void SetComment(Aws::String&& value) { m_comment = std::move(value); }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline void SetComment(const char* value) { m_comment.assign(value); }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline UpdateZonalShiftResult& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline UpdateZonalShiftResult& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline UpdateZonalShiftResult& WithComment(const char* value) { SetComment(value); return *this;}


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
    inline void SetExpiryTime(const Aws::Utils::DateTime& value) { m_expiryTime = value; }

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
    inline void SetExpiryTime(Aws::Utils::DateTime&& value) { m_expiryTime = std::move(value); }

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
    inline UpdateZonalShiftResult& WithExpiryTime(const Aws::Utils::DateTime& value) { SetExpiryTime(value); return *this;}

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
    inline UpdateZonalShiftResult& WithExpiryTime(Aws::Utils::DateTime&& value) { SetExpiryTime(std::move(value)); return *this;}


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
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifier = value; }

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline UpdateZonalShiftResult& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline UpdateZonalShiftResult& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource to include in a zonal shift. The identifier
     * is the Amazon Resource Name (ARN) for the resource.</p> <p>At this time, you can
     * only start a zonal shift for Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline UpdateZonalShiftResult& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline UpdateZonalShiftResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time (UTC) when the zonal shift is started.</p>
     */
    inline UpdateZonalShiftResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift is started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal shift
     * has expired (the expiry time was exceeded).</p> </li> <li> <p> <b>CANCELED:</b>
     * The zonal shift was canceled.</p> </li> </ul>
     */
    inline const ZonalShiftStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift is started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal shift
     * has expired (the expiry time was exceeded).</p> </li> <li> <p> <b>CANCELED:</b>
     * The zonal shift was canceled.</p> </li> </ul>
     */
    inline void SetStatus(const ZonalShiftStatus& value) { m_status = value; }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift is started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal shift
     * has expired (the expiry time was exceeded).</p> </li> <li> <p> <b>CANCELED:</b>
     * The zonal shift was canceled.</p> </li> </ul>
     */
    inline void SetStatus(ZonalShiftStatus&& value) { m_status = std::move(value); }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift is started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal shift
     * has expired (the expiry time was exceeded).</p> </li> <li> <p> <b>CANCELED:</b>
     * The zonal shift was canceled.</p> </li> </ul>
     */
    inline UpdateZonalShiftResult& WithStatus(const ZonalShiftStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE:</b> The zonal
     * shift is started and active.</p> </li> <li> <p> <b>EXPIRED:</b> The zonal shift
     * has expired (the expiry time was exceeded).</p> </li> <li> <p> <b>CANCELED:</b>
     * The zonal shift was canceled.</p> </li> </ul>
     */
    inline UpdateZonalShiftResult& WithStatus(ZonalShiftStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline const Aws::String& GetZonalShiftId() const{ return m_zonalShiftId; }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(const Aws::String& value) { m_zonalShiftId = value; }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(Aws::String&& value) { m_zonalShiftId = std::move(value); }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(const char* value) { m_zonalShiftId.assign(value); }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline UpdateZonalShiftResult& WithZonalShiftId(const Aws::String& value) { SetZonalShiftId(value); return *this;}

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline UpdateZonalShiftResult& WithZonalShiftId(Aws::String&& value) { SetZonalShiftId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline UpdateZonalShiftResult& WithZonalShiftId(const char* value) { SetZonalShiftId(value); return *this;}

  private:

    Aws::String m_awayFrom;

    Aws::String m_comment;

    Aws::Utils::DateTime m_expiryTime;

    Aws::String m_resourceIdentifier;

    Aws::Utils::DateTime m_startTime;

    ZonalShiftStatus m_status;

    Aws::String m_zonalShiftId;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
