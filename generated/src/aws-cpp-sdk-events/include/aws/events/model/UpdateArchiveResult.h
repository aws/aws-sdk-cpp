/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ArchiveState.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class UpdateArchiveResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API UpdateArchiveResult();
    AWS_CLOUDWATCHEVENTS_API UpdateArchiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API UpdateArchiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the archive.</p>
     */
    inline const Aws::String& GetArchiveArn() const{ return m_archiveArn; }
    inline void SetArchiveArn(const Aws::String& value) { m_archiveArn = value; }
    inline void SetArchiveArn(Aws::String&& value) { m_archiveArn = std::move(value); }
    inline void SetArchiveArn(const char* value) { m_archiveArn.assign(value); }
    inline UpdateArchiveResult& WithArchiveArn(const Aws::String& value) { SetArchiveArn(value); return *this;}
    inline UpdateArchiveResult& WithArchiveArn(Aws::String&& value) { SetArchiveArn(std::move(value)); return *this;}
    inline UpdateArchiveResult& WithArchiveArn(const char* value) { SetArchiveArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the archive.</p>
     */
    inline const ArchiveState& GetState() const{ return m_state; }
    inline void SetState(const ArchiveState& value) { m_state = value; }
    inline void SetState(ArchiveState&& value) { m_state = std::move(value); }
    inline UpdateArchiveResult& WithState(const ArchiveState& value) { SetState(value); return *this;}
    inline UpdateArchiveResult& WithState(ArchiveState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the archive is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }
    inline UpdateArchiveResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline UpdateArchiveResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline UpdateArchiveResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the archive was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline UpdateArchiveResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline UpdateArchiveResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateArchiveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateArchiveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateArchiveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_archiveArn;

    ArchiveState m_state;

    Aws::String m_stateReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
