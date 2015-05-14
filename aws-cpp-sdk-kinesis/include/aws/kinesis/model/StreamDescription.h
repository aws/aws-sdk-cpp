/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StreamStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/model/Shard.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Kinesis
{
namespace Model
{
  /*
    <p>Represents the output for <code>DescribeStream</code>.</p>
  */
  class AWS_KINESIS_API StreamDescription
  {
  public:
    StreamDescription();
    StreamDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    StreamDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The name of the stream being described.</p>
    */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    /*
     <p>The name of the stream being described.</p>
    */
    inline void SetStreamName(const Aws::String& value) { m_streamName = value; }

    /*
     <p>The name of the stream being described.</p>
    */
    inline void SetStreamName(const char* value) { m_streamName.assign(value); }

    /*
     <p>The name of the stream being described.</p>
    */
    inline StreamDescription&  WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /*
     <p>The name of the stream being described.</p>
    */
    inline StreamDescription& WithStreamName(const char* value) { SetStreamName(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) for the stream being described.</p>
    */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }
    /*
     <p>The Amazon Resource Name (ARN) for the stream being described.</p>
    */
    inline void SetStreamARN(const Aws::String& value) { m_streamARN = value; }

    /*
     <p>The Amazon Resource Name (ARN) for the stream being described.</p>
    */
    inline void SetStreamARN(const char* value) { m_streamARN.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) for the stream being described.</p>
    */
    inline StreamDescription&  WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) for the stream being described.</p>
    */
    inline StreamDescription& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}

    /*
     <p>The current status of the stream being described.</p> <p>The stream status is one of the following states:</p> <ul> <li> <code>CREATING</code> - The stream is being created. Amazon Kinesis immediately returns and sets <code>StreamStatus</code> to <code>CREATING</code>.</li> <li> <code>DELETING</code> - The stream is being deleted. The specified stream is in the <code>DELETING</code> state until Amazon Kinesis completes the deletion.</li> <li> <code>ACTIVE</code> - The stream exists and is ready for read and write operations or deletion. You should perform read and write operations only on an <code>ACTIVE</code> stream.</li> <li> <code>UPDATING</code> - Shards in the stream are being merged or split. Read and write operations continue to work while the stream is in the <code>UPDATING</code> state.</li> </ul>
    */
    inline const StreamStatus& GetStreamStatus() const{ return m_streamStatus; }
    /*
     <p>The current status of the stream being described.</p> <p>The stream status is one of the following states:</p> <ul> <li> <code>CREATING</code> - The stream is being created. Amazon Kinesis immediately returns and sets <code>StreamStatus</code> to <code>CREATING</code>.</li> <li> <code>DELETING</code> - The stream is being deleted. The specified stream is in the <code>DELETING</code> state until Amazon Kinesis completes the deletion.</li> <li> <code>ACTIVE</code> - The stream exists and is ready for read and write operations or deletion. You should perform read and write operations only on an <code>ACTIVE</code> stream.</li> <li> <code>UPDATING</code> - Shards in the stream are being merged or split. Read and write operations continue to work while the stream is in the <code>UPDATING</code> state.</li> </ul>
    */
    inline void SetStreamStatus(const StreamStatus& value) { m_streamStatus = value; }

    /*
     <p>The current status of the stream being described.</p> <p>The stream status is one of the following states:</p> <ul> <li> <code>CREATING</code> - The stream is being created. Amazon Kinesis immediately returns and sets <code>StreamStatus</code> to <code>CREATING</code>.</li> <li> <code>DELETING</code> - The stream is being deleted. The specified stream is in the <code>DELETING</code> state until Amazon Kinesis completes the deletion.</li> <li> <code>ACTIVE</code> - The stream exists and is ready for read and write operations or deletion. You should perform read and write operations only on an <code>ACTIVE</code> stream.</li> <li> <code>UPDATING</code> - Shards in the stream are being merged or split. Read and write operations continue to work while the stream is in the <code>UPDATING</code> state.</li> </ul>
    */
    inline StreamDescription&  WithStreamStatus(const StreamStatus& value) { SetStreamStatus(value); return *this;}

    /*
     <p>The shards that comprise the stream.</p>
    */
    inline const Aws::Vector<Shard>& GetShards() const{ return m_shards; }
    /*
     <p>The shards that comprise the stream.</p>
    */
    inline void SetShards(const Aws::Vector<Shard>& value) { m_shards = value; }

    /*
     <p>The shards that comprise the stream.</p>
    */
    inline StreamDescription&  WithShards(const Aws::Vector<Shard>& value) { SetShards(value); return *this;}

    /*
     <p>The shards that comprise the stream.</p>
    */
    inline StreamDescription& AddShards(const Shard& value) { m_shards.push_back(value); return *this; }

    /*
     <p>If set to <code>true</code>, more shards in the stream are available to describe.</p>
    */
    inline bool GetHasMoreShards() const{ return m_hasMoreShards; }
    /*
     <p>If set to <code>true</code>, more shards in the stream are available to describe.</p>
    */
    inline void SetHasMoreShards(bool value) { m_hasMoreShards = value; }

    /*
     <p>If set to <code>true</code>, more shards in the stream are available to describe.</p>
    */
    inline StreamDescription&  WithHasMoreShards(bool value) { SetHasMoreShards(value); return *this;}

  private:
    Aws::String m_streamName;
    Aws::String m_streamARN;
    StreamStatus m_streamStatus;
    Aws::Vector<Shard> m_shards;
    bool m_hasMoreShards;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
