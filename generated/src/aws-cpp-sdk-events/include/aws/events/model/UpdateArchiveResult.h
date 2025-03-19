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
    AWS_CLOUDWATCHEVENTS_API UpdateArchiveResult() = default;
    AWS_CLOUDWATCHEVENTS_API UpdateArchiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API UpdateArchiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the archive.</p>
     */
    inline const Aws::String& GetArchiveArn() const { return m_archiveArn; }
    template<typename ArchiveArnT = Aws::String>
    void SetArchiveArn(ArchiveArnT&& value) { m_archiveArnHasBeenSet = true; m_archiveArn = std::forward<ArchiveArnT>(value); }
    template<typename ArchiveArnT = Aws::String>
    UpdateArchiveResult& WithArchiveArn(ArchiveArnT&& value) { SetArchiveArn(std::forward<ArchiveArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the archive.</p>
     */
    inline ArchiveState GetState() const { return m_state; }
    inline void SetState(ArchiveState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateArchiveResult& WithState(ArchiveState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the archive is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    UpdateArchiveResult& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the archive was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    UpdateArchiveResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateArchiveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveArn;
    bool m_archiveArnHasBeenSet = false;

    ArchiveState m_state{ArchiveState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
