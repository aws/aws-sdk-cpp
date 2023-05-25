/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StreamModeDetails.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the input for <code>CreateStream</code>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/CreateStreamInput">AWS
   * API Reference</a></p>
   */
  class CreateStreamRequest : public KinesisRequest
  {
  public:
    AWS_KINESIS_API CreateStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStream"; }

    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name to identify the stream. The stream name is scoped to the Amazon Web
     * Services account used by the application that creates the stream. It is also
     * scoped by Amazon Web Services Region. That is, two streams in two different
     * Amazon Web Services accounts can have the same name. Two streams in the same
     * Amazon Web Services account but in two different Regions can also have the same
     * name.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>A name to identify the stream. The stream name is scoped to the Amazon Web
     * Services account used by the application that creates the stream. It is also
     * scoped by Amazon Web Services Region. That is, two streams in two different
     * Amazon Web Services accounts can have the same name. Two streams in the same
     * Amazon Web Services account but in two different Regions can also have the same
     * name.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>A name to identify the stream. The stream name is scoped to the Amazon Web
     * Services account used by the application that creates the stream. It is also
     * scoped by Amazon Web Services Region. That is, two streams in two different
     * Amazon Web Services accounts can have the same name. Two streams in the same
     * Amazon Web Services account but in two different Regions can also have the same
     * name.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>A name to identify the stream. The stream name is scoped to the Amazon Web
     * Services account used by the application that creates the stream. It is also
     * scoped by Amazon Web Services Region. That is, two streams in two different
     * Amazon Web Services accounts can have the same name. Two streams in the same
     * Amazon Web Services account but in two different Regions can also have the same
     * name.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>A name to identify the stream. The stream name is scoped to the Amazon Web
     * Services account used by the application that creates the stream. It is also
     * scoped by Amazon Web Services Region. That is, two streams in two different
     * Amazon Web Services accounts can have the same name. Two streams in the same
     * Amazon Web Services account but in two different Regions can also have the same
     * name.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>A name to identify the stream. The stream name is scoped to the Amazon Web
     * Services account used by the application that creates the stream. It is also
     * scoped by Amazon Web Services Region. That is, two streams in two different
     * Amazon Web Services accounts can have the same name. Two streams in the same
     * Amazon Web Services account but in two different Regions can also have the same
     * name.</p>
     */
    inline CreateStreamRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>A name to identify the stream. The stream name is scoped to the Amazon Web
     * Services account used by the application that creates the stream. It is also
     * scoped by Amazon Web Services Region. That is, two streams in two different
     * Amazon Web Services accounts can have the same name. Two streams in the same
     * Amazon Web Services account but in two different Regions can also have the same
     * name.</p>
     */
    inline CreateStreamRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>A name to identify the stream. The stream name is scoped to the Amazon Web
     * Services account used by the application that creates the stream. It is also
     * scoped by Amazon Web Services Region. That is, two streams in two different
     * Amazon Web Services accounts can have the same name. Two streams in the same
     * Amazon Web Services account but in two different Regions can also have the same
     * name.</p>
     */
    inline CreateStreamRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The number of shards that the stream will use. The throughput of the stream
     * is a function of the number of shards; more shards are required for greater
     * provisioned throughput.</p>
     */
    inline int GetShardCount() const{ return m_shardCount; }

    /**
     * <p>The number of shards that the stream will use. The throughput of the stream
     * is a function of the number of shards; more shards are required for greater
     * provisioned throughput.</p>
     */
    inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }

    /**
     * <p>The number of shards that the stream will use. The throughput of the stream
     * is a function of the number of shards; more shards are required for greater
     * provisioned throughput.</p>
     */
    inline void SetShardCount(int value) { m_shardCountHasBeenSet = true; m_shardCount = value; }

    /**
     * <p>The number of shards that the stream will use. The throughput of the stream
     * is a function of the number of shards; more shards are required for greater
     * provisioned throughput.</p>
     */
    inline CreateStreamRequest& WithShardCount(int value) { SetShardCount(value); return *this;}


    /**
     * <p> Indicates the capacity mode of the data stream. Currently, in Kinesis Data
     * Streams, you can choose between an <b>on-demand</b> capacity mode and a
     * <b>provisioned</b> capacity mode for your data streams.</p>
     */
    inline const StreamModeDetails& GetStreamModeDetails() const{ return m_streamModeDetails; }

    /**
     * <p> Indicates the capacity mode of the data stream. Currently, in Kinesis Data
     * Streams, you can choose between an <b>on-demand</b> capacity mode and a
     * <b>provisioned</b> capacity mode for your data streams.</p>
     */
    inline bool StreamModeDetailsHasBeenSet() const { return m_streamModeDetailsHasBeenSet; }

    /**
     * <p> Indicates the capacity mode of the data stream. Currently, in Kinesis Data
     * Streams, you can choose between an <b>on-demand</b> capacity mode and a
     * <b>provisioned</b> capacity mode for your data streams.</p>
     */
    inline void SetStreamModeDetails(const StreamModeDetails& value) { m_streamModeDetailsHasBeenSet = true; m_streamModeDetails = value; }

    /**
     * <p> Indicates the capacity mode of the data stream. Currently, in Kinesis Data
     * Streams, you can choose between an <b>on-demand</b> capacity mode and a
     * <b>provisioned</b> capacity mode for your data streams.</p>
     */
    inline void SetStreamModeDetails(StreamModeDetails&& value) { m_streamModeDetailsHasBeenSet = true; m_streamModeDetails = std::move(value); }

    /**
     * <p> Indicates the capacity mode of the data stream. Currently, in Kinesis Data
     * Streams, you can choose between an <b>on-demand</b> capacity mode and a
     * <b>provisioned</b> capacity mode for your data streams.</p>
     */
    inline CreateStreamRequest& WithStreamModeDetails(const StreamModeDetails& value) { SetStreamModeDetails(value); return *this;}

    /**
     * <p> Indicates the capacity mode of the data stream. Currently, in Kinesis Data
     * Streams, you can choose between an <b>on-demand</b> capacity mode and a
     * <b>provisioned</b> capacity mode for your data streams.</p>
     */
    inline CreateStreamRequest& WithStreamModeDetails(StreamModeDetails&& value) { SetStreamModeDetails(std::move(value)); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    int m_shardCount;
    bool m_shardCountHasBeenSet = false;

    StreamModeDetails m_streamModeDetails;
    bool m_streamModeDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
