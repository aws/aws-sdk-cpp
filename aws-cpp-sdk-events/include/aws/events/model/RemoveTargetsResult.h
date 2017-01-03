﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/events/model/RemoveTargetsResultEntry.h>

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
  /**
   * <p>The result of the <a>RemoveTargets</a> operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemoveTargetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API RemoveTargetsResult
  {
  public:
    RemoveTargetsResult();
    RemoveTargetsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RemoveTargetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline RemoveTargetsResult& WithFailedEntryCount(int value) { SetFailedEntryCount(value); return *this;}

    /**
     * <p>An array of failed target entries.</p>
     */
    inline const Aws::Vector<RemoveTargetsResultEntry>& GetFailedEntries() const{ return m_failedEntries; }

    /**
     * <p>An array of failed target entries.</p>
     */
    inline void SetFailedEntries(const Aws::Vector<RemoveTargetsResultEntry>& value) { m_failedEntries = value; }

    /**
     * <p>An array of failed target entries.</p>
     */
    inline void SetFailedEntries(Aws::Vector<RemoveTargetsResultEntry>&& value) { m_failedEntries = value; }

    /**
     * <p>An array of failed target entries.</p>
     */
    inline RemoveTargetsResult& WithFailedEntries(const Aws::Vector<RemoveTargetsResultEntry>& value) { SetFailedEntries(value); return *this;}

    /**
     * <p>An array of failed target entries.</p>
     */
    inline RemoveTargetsResult& WithFailedEntries(Aws::Vector<RemoveTargetsResultEntry>&& value) { SetFailedEntries(value); return *this;}

    /**
     * <p>An array of failed target entries.</p>
     */
    inline RemoveTargetsResult& AddFailedEntries(const RemoveTargetsResultEntry& value) { m_failedEntries.push_back(value); return *this; }

    /**
     * <p>An array of failed target entries.</p>
     */
    inline RemoveTargetsResult& AddFailedEntries(RemoveTargetsResultEntry&& value) { m_failedEntries.push_back(value); return *this; }

  private:
    int m_failedEntryCount;
    Aws::Vector<RemoveTargetsResultEntry> m_failedEntries;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
