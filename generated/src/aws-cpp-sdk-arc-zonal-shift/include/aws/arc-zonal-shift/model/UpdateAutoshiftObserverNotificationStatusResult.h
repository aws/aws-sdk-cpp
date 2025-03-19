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
  class UpdateAutoshiftObserverNotificationStatusResult
  {
  public:
    AWS_ARCZONALSHIFT_API UpdateAutoshiftObserverNotificationStatusResult() = default;
    AWS_ARCZONALSHIFT_API UpdateAutoshiftObserverNotificationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API UpdateAutoshiftObserverNotificationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status for autoshift observer notification.</p>
     */
    inline AutoshiftObserverNotificationStatus GetStatus() const { return m_status; }
    inline void SetStatus(AutoshiftObserverNotificationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateAutoshiftObserverNotificationStatusResult& WithStatus(AutoshiftObserverNotificationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAutoshiftObserverNotificationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutoshiftObserverNotificationStatus m_status{AutoshiftObserverNotificationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
