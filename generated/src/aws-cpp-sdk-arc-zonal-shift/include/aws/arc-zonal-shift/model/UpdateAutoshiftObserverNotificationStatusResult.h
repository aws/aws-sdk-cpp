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
    AWS_ARCZONALSHIFT_API UpdateAutoshiftObserverNotificationStatusResult();
    AWS_ARCZONALSHIFT_API UpdateAutoshiftObserverNotificationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API UpdateAutoshiftObserverNotificationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status for autoshift observer notification.</p>
     */
    inline const AutoshiftObserverNotificationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AutoshiftObserverNotificationStatus& value) { m_status = value; }
    inline void SetStatus(AutoshiftObserverNotificationStatus&& value) { m_status = std::move(value); }
    inline UpdateAutoshiftObserverNotificationStatusResult& WithStatus(const AutoshiftObserverNotificationStatus& value) { SetStatus(value); return *this;}
    inline UpdateAutoshiftObserverNotificationStatusResult& WithStatus(AutoshiftObserverNotificationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAutoshiftObserverNotificationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAutoshiftObserverNotificationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAutoshiftObserverNotificationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AutoshiftObserverNotificationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
