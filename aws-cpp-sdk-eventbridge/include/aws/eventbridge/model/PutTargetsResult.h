/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/PutTargetsResultEntry.h>
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
  class PutTargetsResult
  {
  public:
    AWS_EVENTBRIDGE_API PutTargetsResult();
    AWS_EVENTBRIDGE_API PutTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API PutTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of failed entries.</p>
     */
    inline int GetFailedEntryCount() const{ return m_failedEntryCount; }

    /**
     * <p>The number of failed entries.</p>
     */
    inline void SetFailedEntryCount(int value) { m_failedEntryCount = value; }

    /**
     * <p>The number of failed entries.</p>
     */
    inline PutTargetsResult& WithFailedEntryCount(int value) { SetFailedEntryCount(value); return *this;}


    /**
     * <p>The failed target entries.</p>
     */
    inline const Aws::Vector<PutTargetsResultEntry>& GetFailedEntries() const{ return m_failedEntries; }

    /**
     * <p>The failed target entries.</p>
     */
    inline void SetFailedEntries(const Aws::Vector<PutTargetsResultEntry>& value) { m_failedEntries = value; }

    /**
     * <p>The failed target entries.</p>
     */
    inline void SetFailedEntries(Aws::Vector<PutTargetsResultEntry>&& value) { m_failedEntries = std::move(value); }

    /**
     * <p>The failed target entries.</p>
     */
    inline PutTargetsResult& WithFailedEntries(const Aws::Vector<PutTargetsResultEntry>& value) { SetFailedEntries(value); return *this;}

    /**
     * <p>The failed target entries.</p>
     */
    inline PutTargetsResult& WithFailedEntries(Aws::Vector<PutTargetsResultEntry>&& value) { SetFailedEntries(std::move(value)); return *this;}

    /**
     * <p>The failed target entries.</p>
     */
    inline PutTargetsResult& AddFailedEntries(const PutTargetsResultEntry& value) { m_failedEntries.push_back(value); return *this; }

    /**
     * <p>The failed target entries.</p>
     */
    inline PutTargetsResult& AddFailedEntries(PutTargetsResultEntry&& value) { m_failedEntries.push_back(std::move(value)); return *this; }

  private:

    int m_failedEntryCount;

    Aws::Vector<PutTargetsResultEntry> m_failedEntries;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
