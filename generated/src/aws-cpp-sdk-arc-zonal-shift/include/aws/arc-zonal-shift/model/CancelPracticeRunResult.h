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
  class CancelPracticeRunResult
  {
  public:
    AWS_ARCZONALSHIFT_API CancelPracticeRunResult() = default;
    AWS_ARCZONALSHIFT_API CancelPracticeRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API CancelPracticeRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the practice run zonal shift in Amazon Application Recovery
     * Controller that was canceled.</p>
     */
    inline const Aws::String& GetZonalShiftId() const { return m_zonalShiftId; }
    template<typename ZonalShiftIdT = Aws::String>
    void SetZonalShiftId(ZonalShiftIdT&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::forward<ZonalShiftIdT>(value); }
    template<typename ZonalShiftIdT = Aws::String>
    CancelPracticeRunResult& WithZonalShiftId(ZonalShiftIdT&& value) { SetZonalShiftId(std::forward<ZonalShiftIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the resource that you canceled a practice run zonal shift
     * for. The identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    CancelPracticeRunResult& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (for example, <code>use1-az1</code>) that traffic was
     * moved away from for a resource that you specified for the practice run.</p>
     */
    inline const Aws::String& GetAwayFrom() const { return m_awayFrom; }
    template<typename AwayFromT = Aws::String>
    void SetAwayFrom(AwayFromT&& value) { m_awayFromHasBeenSet = true; m_awayFrom = std::forward<AwayFromT>(value); }
    template<typename AwayFromT = Aws::String>
    CancelPracticeRunResult& WithAwayFrom(AwayFromT&& value) { SetAwayFrom(std::forward<AwayFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry time (expiration time) for an on-demand practice run zonal shift
     * is 30 minutes from the time when you start the practice run, unless you cancel
     * it before that time. However, be aware that the <code>expiryTime</code> field
     * for practice run zonal shifts always has a value of 1 minute. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const { return m_expiryTime; }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    void SetExpiryTime(ExpiryTimeT&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::forward<ExpiryTimeT>(value); }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    CancelPracticeRunResult& WithExpiryTime(ExpiryTimeT&& value) { SetExpiryTime(std::forward<ExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the zonal shift starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CancelPracticeRunResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status for the practice run that you canceled (expected status is
     * <b>CANCELED</b>).</p> <p>The <code>Status</code> for a practice run zonal shift
     * can have one of the following values:</p>
     */
    inline ZonalShiftStatus GetStatus() const { return m_status; }
    inline void SetStatus(ZonalShiftStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CancelPracticeRunResult& WithStatus(ZonalShiftStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial comment that you entered about the practice run. Be aware that
     * this comment can be overwritten by Amazon Web Services if the automatic check
     * for balanced capacity fails. For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.how-it-works.capacity-check.html">
     * Capacity checks for practice runs</a> in the Amazon Application Recovery
     * Controller Developer Guide. </p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    CancelPracticeRunResult& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelPracticeRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
