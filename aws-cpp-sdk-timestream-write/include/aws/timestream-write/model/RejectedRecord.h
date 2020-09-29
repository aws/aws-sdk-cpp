/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p> Records that were not successfully inserted into Timestream due to data
   * validation issues that must be resolved prior to reinserting time series data
   * into the system. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/RejectedRecord">AWS
   * API Reference</a></p>
   */
  class AWS_TIMESTREAMWRITE_API RejectedRecord
  {
  public:
    RejectedRecord();
    RejectedRecord(Aws::Utils::Json::JsonView jsonValue);
    RejectedRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The index of the record in the input request for WriteRecords. Indexes begin
     * with 0. </p>
     */
    inline int GetRecordIndex() const{ return m_recordIndex; }

    /**
     * <p> The index of the record in the input request for WriteRecords. Indexes begin
     * with 0. </p>
     */
    inline bool RecordIndexHasBeenSet() const { return m_recordIndexHasBeenSet; }

    /**
     * <p> The index of the record in the input request for WriteRecords. Indexes begin
     * with 0. </p>
     */
    inline void SetRecordIndex(int value) { m_recordIndexHasBeenSet = true; m_recordIndex = value; }

    /**
     * <p> The index of the record in the input request for WriteRecords. Indexes begin
     * with 0. </p>
     */
    inline RejectedRecord& WithRecordIndex(int value) { SetRecordIndex(value); return *this;}


    /**
     * <p> The reason why a record was not successfully inserted into Timestream.
     * Possible causes of failure include: </p> <ul> <li> <p> Records with duplicate
     * data where there are multiple records with the same dimensions, timestamps, and
     * measure names but different measure values. </p> </li> <li> <p> Records with
     * timestamps that lie outside the retention duration of the memory store </p>
     * </li> <li> <p> Records with dimensions or measures that exceed the Timestream
     * defined limits. </p> </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
     * Management</a> in the Timestream Developer Guide. </p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p> The reason why a record was not successfully inserted into Timestream.
     * Possible causes of failure include: </p> <ul> <li> <p> Records with duplicate
     * data where there are multiple records with the same dimensions, timestamps, and
     * measure names but different measure values. </p> </li> <li> <p> Records with
     * timestamps that lie outside the retention duration of the memory store </p>
     * </li> <li> <p> Records with dimensions or measures that exceed the Timestream
     * defined limits. </p> </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
     * Management</a> in the Timestream Developer Guide. </p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p> The reason why a record was not successfully inserted into Timestream.
     * Possible causes of failure include: </p> <ul> <li> <p> Records with duplicate
     * data where there are multiple records with the same dimensions, timestamps, and
     * measure names but different measure values. </p> </li> <li> <p> Records with
     * timestamps that lie outside the retention duration of the memory store </p>
     * </li> <li> <p> Records with dimensions or measures that exceed the Timestream
     * defined limits. </p> </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
     * Management</a> in the Timestream Developer Guide. </p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p> The reason why a record was not successfully inserted into Timestream.
     * Possible causes of failure include: </p> <ul> <li> <p> Records with duplicate
     * data where there are multiple records with the same dimensions, timestamps, and
     * measure names but different measure values. </p> </li> <li> <p> Records with
     * timestamps that lie outside the retention duration of the memory store </p>
     * </li> <li> <p> Records with dimensions or measures that exceed the Timestream
     * defined limits. </p> </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
     * Management</a> in the Timestream Developer Guide. </p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p> The reason why a record was not successfully inserted into Timestream.
     * Possible causes of failure include: </p> <ul> <li> <p> Records with duplicate
     * data where there are multiple records with the same dimensions, timestamps, and
     * measure names but different measure values. </p> </li> <li> <p> Records with
     * timestamps that lie outside the retention duration of the memory store </p>
     * </li> <li> <p> Records with dimensions or measures that exceed the Timestream
     * defined limits. </p> </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
     * Management</a> in the Timestream Developer Guide. </p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p> The reason why a record was not successfully inserted into Timestream.
     * Possible causes of failure include: </p> <ul> <li> <p> Records with duplicate
     * data where there are multiple records with the same dimensions, timestamps, and
     * measure names but different measure values. </p> </li> <li> <p> Records with
     * timestamps that lie outside the retention duration of the memory store </p>
     * </li> <li> <p> Records with dimensions or measures that exceed the Timestream
     * defined limits. </p> </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
     * Management</a> in the Timestream Developer Guide. </p>
     */
    inline RejectedRecord& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p> The reason why a record was not successfully inserted into Timestream.
     * Possible causes of failure include: </p> <ul> <li> <p> Records with duplicate
     * data where there are multiple records with the same dimensions, timestamps, and
     * measure names but different measure values. </p> </li> <li> <p> Records with
     * timestamps that lie outside the retention duration of the memory store </p>
     * </li> <li> <p> Records with dimensions or measures that exceed the Timestream
     * defined limits. </p> </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
     * Management</a> in the Timestream Developer Guide. </p>
     */
    inline RejectedRecord& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p> The reason why a record was not successfully inserted into Timestream.
     * Possible causes of failure include: </p> <ul> <li> <p> Records with duplicate
     * data where there are multiple records with the same dimensions, timestamps, and
     * measure names but different measure values. </p> </li> <li> <p> Records with
     * timestamps that lie outside the retention duration of the memory store </p>
     * </li> <li> <p> Records with dimensions or measures that exceed the Timestream
     * defined limits. </p> </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
     * Management</a> in the Timestream Developer Guide. </p>
     */
    inline RejectedRecord& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    int m_recordIndex;
    bool m_recordIndexHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
