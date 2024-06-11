﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/RemoveTargetsResultEntry.h>
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
namespace EventBridge
{
namespace Model
{
  class RemoveTargetsResult
  {
  public:
    AWS_EVENTBRIDGE_API RemoveTargetsResult();
    AWS_EVENTBRIDGE_API RemoveTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API RemoveTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of failed entries.</p>
     */
    inline int GetFailedEntryCount() const{ return m_failedEntryCount; }
    inline void SetFailedEntryCount(int value) { m_failedEntryCount = value; }
    inline RemoveTargetsResult& WithFailedEntryCount(int value) { SetFailedEntryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failed target entries.</p>
     */
    inline const Aws::Vector<RemoveTargetsResultEntry>& GetFailedEntries() const{ return m_failedEntries; }
    inline void SetFailedEntries(const Aws::Vector<RemoveTargetsResultEntry>& value) { m_failedEntries = value; }
    inline void SetFailedEntries(Aws::Vector<RemoveTargetsResultEntry>&& value) { m_failedEntries = std::move(value); }
    inline RemoveTargetsResult& WithFailedEntries(const Aws::Vector<RemoveTargetsResultEntry>& value) { SetFailedEntries(value); return *this;}
    inline RemoveTargetsResult& WithFailedEntries(Aws::Vector<RemoveTargetsResultEntry>&& value) { SetFailedEntries(std::move(value)); return *this;}
    inline RemoveTargetsResult& AddFailedEntries(const RemoveTargetsResultEntry& value) { m_failedEntries.push_back(value); return *this; }
    inline RemoveTargetsResult& AddFailedEntries(RemoveTargetsResultEntry&& value) { m_failedEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RemoveTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RemoveTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RemoveTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_failedEntryCount;

    Aws::Vector<RemoveTargetsResultEntry> m_failedEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
