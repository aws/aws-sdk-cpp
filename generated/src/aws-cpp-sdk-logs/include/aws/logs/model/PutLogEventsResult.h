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
    AWS_CLOUDWATCHLOGS_API PutLogEventsResult();
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
    inline const Aws::String& GetNextSequenceToken() const{ return m_nextSequenceToken; }
    inline void SetNextSequenceToken(const Aws::String& value) { m_nextSequenceToken = value; }
    inline void SetNextSequenceToken(Aws::String&& value) { m_nextSequenceToken = std::move(value); }
    inline void SetNextSequenceToken(const char* value) { m_nextSequenceToken.assign(value); }
    inline PutLogEventsResult& WithNextSequenceToken(const Aws::String& value) { SetNextSequenceToken(value); return *this;}
    inline PutLogEventsResult& WithNextSequenceToken(Aws::String&& value) { SetNextSequenceToken(std::move(value)); return *this;}
    inline PutLogEventsResult& WithNextSequenceToken(const char* value) { SetNextSequenceToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rejected events.</p>
     */
    inline const RejectedLogEventsInfo& GetRejectedLogEventsInfo() const{ return m_rejectedLogEventsInfo; }
    inline void SetRejectedLogEventsInfo(const RejectedLogEventsInfo& value) { m_rejectedLogEventsInfo = value; }
    inline void SetRejectedLogEventsInfo(RejectedLogEventsInfo&& value) { m_rejectedLogEventsInfo = std::move(value); }
    inline PutLogEventsResult& WithRejectedLogEventsInfo(const RejectedLogEventsInfo& value) { SetRejectedLogEventsInfo(value); return *this;}
    inline PutLogEventsResult& WithRejectedLogEventsInfo(RejectedLogEventsInfo&& value) { SetRejectedLogEventsInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why the entity is rejected when calling
     * <code>PutLogEvents</code>. Only returned when the entity is rejected.</p> 
     * <p>When the entity is rejected, the events may still be accepted.</p> 
     */
    inline const RejectedEntityInfo& GetRejectedEntityInfo() const{ return m_rejectedEntityInfo; }
    inline void SetRejectedEntityInfo(const RejectedEntityInfo& value) { m_rejectedEntityInfo = value; }
    inline void SetRejectedEntityInfo(RejectedEntityInfo&& value) { m_rejectedEntityInfo = std::move(value); }
    inline PutLogEventsResult& WithRejectedEntityInfo(const RejectedEntityInfo& value) { SetRejectedEntityInfo(value); return *this;}
    inline PutLogEventsResult& WithRejectedEntityInfo(RejectedEntityInfo&& value) { SetRejectedEntityInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutLogEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutLogEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutLogEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextSequenceToken;

    RejectedLogEventsInfo m_rejectedLogEventsInfo;

    RejectedEntityInfo m_rejectedEntityInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
