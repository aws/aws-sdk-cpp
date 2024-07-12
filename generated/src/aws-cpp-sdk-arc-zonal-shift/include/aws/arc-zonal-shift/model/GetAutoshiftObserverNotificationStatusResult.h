/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/model/AutoshiftObserverNotificationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetAutoshiftObserverNotificationStatusResult
  {
  public:
    AWS_ARCZONALSHIFT_API GetAutoshiftObserverNotificationStatusResult();
    AWS_ARCZONALSHIFT_API GetAutoshiftObserverNotificationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API GetAutoshiftObserverNotificationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of autoshift observer notification. If the status is
     * <code>ENABLED</code>, Route 53 ARC includes all autoshift events when you use
     * the Amazon EventBridge pattern <code>Autoshift In Progress</code>. When the
     * status is <code>DISABLED</code>, Route 53 ARC includes only autoshift events for
     * autoshifts when one or more of your resources is included in the autoshift. </p>
     */
    inline const AutoshiftObserverNotificationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AutoshiftObserverNotificationStatus& value) { m_status = value; }
    inline void SetStatus(AutoshiftObserverNotificationStatus&& value) { m_status = std::move(value); }
    inline GetAutoshiftObserverNotificationStatusResult& WithStatus(const AutoshiftObserverNotificationStatus& value) { SetStatus(value); return *this;}
    inline GetAutoshiftObserverNotificationStatusResult& WithStatus(AutoshiftObserverNotificationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAutoshiftObserverNotificationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAutoshiftObserverNotificationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAutoshiftObserverNotificationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AutoshiftObserverNotificationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
