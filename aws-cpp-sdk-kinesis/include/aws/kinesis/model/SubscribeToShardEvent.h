/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/Record.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kinesis
{
namespace Model
{

  /**
   * <p>After you call <a>SubscribeToShard</a>, Kinesis Data Streams sends events of
   * this type to your consumer. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/SubscribeToShardEvent">AWS
   * API Reference</a></p>
   */
  class AWS_KINESIS_API SubscribeToShardEvent
  {
  public:
    SubscribeToShardEvent();
    SubscribeToShardEvent(Aws::Utils::Json::JsonView jsonValue);
    SubscribeToShardEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }

    /**
     * <p/>
     */
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRecords(const Aws::Vector<Record>& value) { m_recordsHasBeenSet = true; m_records = value; }

    /**
     * <p/>
     */
    inline void SetRecords(Aws::Vector<Record>&& value) { m_recordsHasBeenSet = true; m_records = std::move(value); }

    /**
     * <p/>
     */
    inline SubscribeToShardEvent& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

    /**
     * <p/>
     */
    inline SubscribeToShardEvent& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline SubscribeToShardEvent& AddRecords(const Record& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline SubscribeToShardEvent& AddRecords(Record&& value) { m_recordsHasBeenSet = true; m_records.push_back(std::move(value)); return *this; }


    /**
     * <p>Use this as <code>StartingSequenceNumber</code> in the next call to
     * <a>SubscribeToShard</a>.</p>
     */
    inline const Aws::String& GetContinuationSequenceNumber() const{ return m_continuationSequenceNumber; }

    /**
     * <p>Use this as <code>StartingSequenceNumber</code> in the next call to
     * <a>SubscribeToShard</a>.</p>
     */
    inline bool ContinuationSequenceNumberHasBeenSet() const { return m_continuationSequenceNumberHasBeenSet; }

    /**
     * <p>Use this as <code>StartingSequenceNumber</code> in the next call to
     * <a>SubscribeToShard</a>.</p>
     */
    inline void SetContinuationSequenceNumber(const Aws::String& value) { m_continuationSequenceNumberHasBeenSet = true; m_continuationSequenceNumber = value; }

    /**
     * <p>Use this as <code>StartingSequenceNumber</code> in the next call to
     * <a>SubscribeToShard</a>.</p>
     */
    inline void SetContinuationSequenceNumber(Aws::String&& value) { m_continuationSequenceNumberHasBeenSet = true; m_continuationSequenceNumber = std::move(value); }

    /**
     * <p>Use this as <code>StartingSequenceNumber</code> in the next call to
     * <a>SubscribeToShard</a>.</p>
     */
    inline void SetContinuationSequenceNumber(const char* value) { m_continuationSequenceNumberHasBeenSet = true; m_continuationSequenceNumber.assign(value); }

    /**
     * <p>Use this as <code>StartingSequenceNumber</code> in the next call to
     * <a>SubscribeToShard</a>.</p>
     */
    inline SubscribeToShardEvent& WithContinuationSequenceNumber(const Aws::String& value) { SetContinuationSequenceNumber(value); return *this;}

    /**
     * <p>Use this as <code>StartingSequenceNumber</code> in the next call to
     * <a>SubscribeToShard</a>.</p>
     */
    inline SubscribeToShardEvent& WithContinuationSequenceNumber(Aws::String&& value) { SetContinuationSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>Use this as <code>StartingSequenceNumber</code> in the next call to
     * <a>SubscribeToShard</a>.</p>
     */
    inline SubscribeToShardEvent& WithContinuationSequenceNumber(const char* value) { SetContinuationSequenceNumber(value); return *this;}


    /**
     * <p>The number of milliseconds the read records are from the tip of the stream,
     * indicating how far behind current time the consumer is. A value of zero
     * indicates that record processing is caught up, and there are no new records to
     * process at this moment.</p>
     */
    inline long long GetMillisBehindLatest() const{ return m_millisBehindLatest; }

    /**
     * <p>The number of milliseconds the read records are from the tip of the stream,
     * indicating how far behind current time the consumer is. A value of zero
     * indicates that record processing is caught up, and there are no new records to
     * process at this moment.</p>
     */
    inline bool MillisBehindLatestHasBeenSet() const { return m_millisBehindLatestHasBeenSet; }

    /**
     * <p>The number of milliseconds the read records are from the tip of the stream,
     * indicating how far behind current time the consumer is. A value of zero
     * indicates that record processing is caught up, and there are no new records to
     * process at this moment.</p>
     */
    inline void SetMillisBehindLatest(long long value) { m_millisBehindLatestHasBeenSet = true; m_millisBehindLatest = value; }

    /**
     * <p>The number of milliseconds the read records are from the tip of the stream,
     * indicating how far behind current time the consumer is. A value of zero
     * indicates that record processing is caught up, and there are no new records to
     * process at this moment.</p>
     */
    inline SubscribeToShardEvent& WithMillisBehindLatest(long long value) { SetMillisBehindLatest(value); return *this;}

  private:

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet;

    Aws::String m_continuationSequenceNumber;
    bool m_continuationSequenceNumberHasBeenSet;

    long long m_millisBehindLatest;
    bool m_millisBehindLatestHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
