/*
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
#include <aws/events/model/PutTargetsResultEntry.h>

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
  class AWS_CLOUDWATCHEVENTS_API PutTargetsResult
  {
  public:
    PutTargetsResult();
    PutTargetsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutTargetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <zonbook> <simpara>The number of failed entries.</simpara> </zonbook> <xhtml>
     * <p>The number of failed entries.</p> </xhtml>
     */
    inline int GetFailedEntryCount() const{ return m_failedEntryCount; }

    /**
     * <zonbook> <simpara>The number of failed entries.</simpara> </zonbook> <xhtml>
     * <p>The number of failed entries.</p> </xhtml>
     */
    inline void SetFailedEntryCount(int value) { m_failedEntryCount = value; }

    /**
     * <zonbook> <simpara>The number of failed entries.</simpara> </zonbook> <xhtml>
     * <p>The number of failed entries.</p> </xhtml>
     */
    inline PutTargetsResult& WithFailedEntryCount(int value) { SetFailedEntryCount(value); return *this;}

    /**
     * <zonbook> <simpara>The failed target entries.</simpara> </zonbook> <xhtml>
     * <p>The failed target entries.</p> </xhtml>
     */
    inline const Aws::Vector<PutTargetsResultEntry>& GetFailedEntries() const{ return m_failedEntries; }

    /**
     * <zonbook> <simpara>The failed target entries.</simpara> </zonbook> <xhtml>
     * <p>The failed target entries.</p> </xhtml>
     */
    inline void SetFailedEntries(const Aws::Vector<PutTargetsResultEntry>& value) { m_failedEntries = value; }

    /**
     * <zonbook> <simpara>The failed target entries.</simpara> </zonbook> <xhtml>
     * <p>The failed target entries.</p> </xhtml>
     */
    inline void SetFailedEntries(Aws::Vector<PutTargetsResultEntry>&& value) { m_failedEntries = value; }

    /**
     * <zonbook> <simpara>The failed target entries.</simpara> </zonbook> <xhtml>
     * <p>The failed target entries.</p> </xhtml>
     */
    inline PutTargetsResult& WithFailedEntries(const Aws::Vector<PutTargetsResultEntry>& value) { SetFailedEntries(value); return *this;}

    /**
     * <zonbook> <simpara>The failed target entries.</simpara> </zonbook> <xhtml>
     * <p>The failed target entries.</p> </xhtml>
     */
    inline PutTargetsResult& WithFailedEntries(Aws::Vector<PutTargetsResultEntry>&& value) { SetFailedEntries(value); return *this;}

    /**
     * <zonbook> <simpara>The failed target entries.</simpara> </zonbook> <xhtml>
     * <p>The failed target entries.</p> </xhtml>
     */
    inline PutTargetsResult& AddFailedEntries(const PutTargetsResultEntry& value) { m_failedEntries.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>The failed target entries.</simpara> </zonbook> <xhtml>
     * <p>The failed target entries.</p> </xhtml>
     */
    inline PutTargetsResult& AddFailedEntries(PutTargetsResultEntry&& value) { m_failedEntries.push_back(value); return *this; }

  private:
    int m_failedEntryCount;
    Aws::Vector<PutTargetsResultEntry> m_failedEntries;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
