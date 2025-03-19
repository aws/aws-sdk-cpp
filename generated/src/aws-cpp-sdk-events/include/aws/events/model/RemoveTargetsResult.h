/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/RemoveTargetsResultEntry.h>
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
  class RemoveTargetsResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API RemoveTargetsResult() = default;
    AWS_CLOUDWATCHEVENTS_API RemoveTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API RemoveTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of failed entries.</p>
     */
    inline int GetFailedEntryCount() const { return m_failedEntryCount; }
    inline void SetFailedEntryCount(int value) { m_failedEntryCountHasBeenSet = true; m_failedEntryCount = value; }
    inline RemoveTargetsResult& WithFailedEntryCount(int value) { SetFailedEntryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failed target entries.</p>
     */
    inline const Aws::Vector<RemoveTargetsResultEntry>& GetFailedEntries() const { return m_failedEntries; }
    template<typename FailedEntriesT = Aws::Vector<RemoveTargetsResultEntry>>
    void SetFailedEntries(FailedEntriesT&& value) { m_failedEntriesHasBeenSet = true; m_failedEntries = std::forward<FailedEntriesT>(value); }
    template<typename FailedEntriesT = Aws::Vector<RemoveTargetsResultEntry>>
    RemoveTargetsResult& WithFailedEntries(FailedEntriesT&& value) { SetFailedEntries(std::forward<FailedEntriesT>(value)); return *this;}
    template<typename FailedEntriesT = RemoveTargetsResultEntry>
    RemoveTargetsResult& AddFailedEntries(FailedEntriesT&& value) { m_failedEntriesHasBeenSet = true; m_failedEntries.emplace_back(std::forward<FailedEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RemoveTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_failedEntryCount{0};
    bool m_failedEntryCountHasBeenSet = false;

    Aws::Vector<RemoveTargetsResultEntry> m_failedEntries;
    bool m_failedEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
