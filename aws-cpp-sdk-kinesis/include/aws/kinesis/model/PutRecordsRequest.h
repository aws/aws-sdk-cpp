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
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/PutRecordsRequestEntry.h>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>A <code>PutRecords</code> request.</p>
   */
  class AWS_KINESIS_API PutRecordsRequest : public KinesisRequest
  {
  public:
    PutRecordsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The records associated with the request.</p>
     */
    inline const Aws::Vector<PutRecordsRequestEntry>& GetRecords() const{ return m_records; }

    /**
     * <p>The records associated with the request.</p>
     */
    inline void SetRecords(const Aws::Vector<PutRecordsRequestEntry>& value) { m_recordsHasBeenSet = true; m_records = value; }

    /**
     * <p>The records associated with the request.</p>
     */
    inline void SetRecords(Aws::Vector<PutRecordsRequestEntry>&& value) { m_recordsHasBeenSet = true; m_records = value; }

    /**
     * <p>The records associated with the request.</p>
     */
    inline PutRecordsRequest& WithRecords(const Aws::Vector<PutRecordsRequestEntry>& value) { SetRecords(value); return *this;}

    /**
     * <p>The records associated with the request.</p>
     */
    inline PutRecordsRequest& WithRecords(Aws::Vector<PutRecordsRequestEntry>&& value) { SetRecords(value); return *this;}

    /**
     * <p>The records associated with the request.</p>
     */
    inline PutRecordsRequest& AddRecords(const PutRecordsRequestEntry& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

    /**
     * <p>The records associated with the request.</p>
     */
    inline PutRecordsRequest& AddRecords(PutRecordsRequestEntry&& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

    /**
     * <p>The stream name associated with the request.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The stream name associated with the request.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The stream name associated with the request.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The stream name associated with the request.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The stream name associated with the request.</p>
     */
    inline PutRecordsRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The stream name associated with the request.</p>
     */
    inline PutRecordsRequest& WithStreamName(Aws::String&& value) { SetStreamName(value); return *this;}

    /**
     * <p>The stream name associated with the request.</p>
     */
    inline PutRecordsRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:
    Aws::Vector<PutRecordsRequestEntry> m_records;
    bool m_recordsHasBeenSet;
    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
