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
    AWS_ARCZONALSHIFT_API UpdateZonalShiftResult() = default;
    AWS_ARCZONALSHIFT_API UpdateZonalShiftResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API UpdateZonalShiftResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline const Aws::String& GetZonalShiftId() const { return m_zonalShiftId; }
    template<typename ZonalShiftIdT = Aws::String>
    void SetZonalShiftId(ZonalShiftIdT&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::forward<ZonalShiftIdT>(value); }
    template<typename ZonalShiftIdT = Aws::String>
    UpdateZonalShiftResult& WithZonalShiftId(ZonalShiftIdT&& value) { SetZonalShiftId(std::forward<ZonalShiftIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the resource that Amazon Web Services shifts traffic for.
     * The identifier is the Amazon Resource Name (ARN) for the resource.</p> <p>Amazon
     * Application Recovery Controller currently supports enabling the following
     * resources for zonal shift and zonal autoshift:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.ec2-auto-scaling-groups.html">Amazon
     * EC2 Auto Scaling groups</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.eks.html">Amazon
     * Elastic Kubernetes Service</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.app-load-balancers.html">Application
     * Load Balancer</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.network-load-balancers.html">Network
     * Load Balancer</a> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    UpdateZonalShiftResult& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (for example, <code>use1-az1</code>) that traffic is
     * moved away from for a resource when you start a zonal shift. Until the zonal
     * shift expires or you cancel it, traffic for the resource is instead moved to
     * other Availability Zones in the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwayFrom() const { return m_awayFrom; }
    template<typename AwayFromT = Aws::String>
    void SetAwayFrom(AwayFromT&& value) { m_awayFromHasBeenSet = true; m_awayFrom = std::forward<AwayFromT>(value); }
    template<typename AwayFromT = Aws::String>
    UpdateZonalShiftResult& WithAwayFrom(AwayFromT&& value) { SetAwayFrom(std::forward<AwayFromT>(value)); return *this;}
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
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    void SetExpiryTime(ExpiryTimeT&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::forward<ExpiryTimeT>(value); }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    UpdateZonalShiftResult& WithExpiryTime(ExpiryTimeT&& value) { SetExpiryTime(std::forward<ExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the zonal shift starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    UpdateZonalShiftResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    inline void SetStatus(ZonalShiftStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateZonalShiftResult& WithStatus(ZonalShiftStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    UpdateZonalShiftResult& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateZonalShiftResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
