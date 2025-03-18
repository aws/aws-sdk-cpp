/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/RejectedLogEventsInfo.h>
#include <aws/logs/model/RejectedEntityInfo.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class PutLogEventsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutLogEventsResult() = default;
    AWS_CLOUDWATCHLOGS_API PutLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next sequence token.</p>  <p>This field has been
     * deprecated.</p> <p>The sequence token is now ignored in
     * <code>PutLogEvents</code> actions. <code>PutLogEvents</code> actions are always
     * accepted even if the sequence token is not valid. You can use parallel
     * <code>PutLogEvents</code> actions on the same log stream and you do not need to
     * wait for the response of a previous <code>PutLogEvents</code> action to obtain
     * the <code>nextSequenceToken</code> value.</p> 
     */
    inline const Aws::String& GetNextSequenceToken() const { return m_nextSequenceToken; }
    template<typename NextSequenceTokenT = Aws::String>
    void SetNextSequenceToken(NextSequenceTokenT&& value) { m_nextSequenceTokenHasBeenSet = true; m_nextSequenceToken = std::forward<NextSequenceTokenT>(value); }
    template<typename NextSequenceTokenT = Aws::String>
    PutLogEventsResult& WithNextSequenceToken(NextSequenceTokenT&& value) { SetNextSequenceToken(std::forward<NextSequenceTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rejected events.</p>
     */
    inline const RejectedLogEventsInfo& GetRejectedLogEventsInfo() const { return m_rejectedLogEventsInfo; }
    template<typename RejectedLogEventsInfoT = RejectedLogEventsInfo>
    void SetRejectedLogEventsInfo(RejectedLogEventsInfoT&& value) { m_rejectedLogEventsInfoHasBeenSet = true; m_rejectedLogEventsInfo = std::forward<RejectedLogEventsInfoT>(value); }
    template<typename RejectedLogEventsInfoT = RejectedLogEventsInfo>
    PutLogEventsResult& WithRejectedLogEventsInfo(RejectedLogEventsInfoT&& value) { SetRejectedLogEventsInfo(std::forward<RejectedLogEventsInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why the entity is rejected when calling
     * <code>PutLogEvents</code>. Only returned when the entity is rejected.</p> 
     * <p>When the entity is rejected, the events may still be accepted.</p> 
     */
    inline const RejectedEntityInfo& GetRejectedEntityInfo() const { return m_rejectedEntityInfo; }
    template<typename RejectedEntityInfoT = RejectedEntityInfo>
    void SetRejectedEntityInfo(RejectedEntityInfoT&& value) { m_rejectedEntityInfoHasBeenSet = true; m_rejectedEntityInfo = std::forward<RejectedEntityInfoT>(value); }
    template<typename RejectedEntityInfoT = RejectedEntityInfo>
    PutLogEventsResult& WithRejectedEntityInfo(RejectedEntityInfoT&& value) { SetRejectedEntityInfo(std::forward<RejectedEntityInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutLogEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextSequenceToken;
    bool m_nextSequenceTokenHasBeenSet = false;

    RejectedLogEventsInfo m_rejectedLogEventsInfo;
    bool m_rejectedLogEventsInfoHasBeenSet = false;

    RejectedEntityInfo m_rejectedEntityInfo;
    bool m_rejectedEntityInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
