/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StreamModeDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_KINESIS_API CreateStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStream"; }

    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name to identify the stream. The stream name is scoped to the Amazon Web
     * Services account used by the application that creates the stream. It is also
     * scoped by Amazon Web Services Region. That is, two streams in two different
     * Amazon Web Services accounts can have the same name. Two streams in the same
     * Amazon Web Services account but in two different Regions can also have the same
     * name.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    CreateStreamRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards that the stream will use. The throughput of the stream
     * is a function of the number of shards; more shards are required for greater
     * provisioned throughput.</p>
     */
    inline int GetShardCount() const { return m_shardCount; }
    inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }
    inline void SetShardCount(int value) { m_shardCountHasBeenSet = true; m_shardCount = value; }
    inline CreateStreamRequest& WithShardCount(int value) { SetShardCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the capacity mode of the data stream. Currently, in Kinesis Data
     * Streams, you can choose between an <b>on-demand</b> capacity mode and a
     * <b>provisioned</b> capacity mode for your data streams.</p>
     */
    inline const StreamModeDetails& GetStreamModeDetails() const { return m_streamModeDetails; }
    inline bool StreamModeDetailsHasBeenSet() const { return m_streamModeDetailsHasBeenSet; }
    template<typename StreamModeDetailsT = StreamModeDetails>
    void SetStreamModeDetails(StreamModeDetailsT&& value) { m_streamModeDetailsHasBeenSet = true; m_streamModeDetails = std::forward<StreamModeDetailsT>(value); }
    template<typename StreamModeDetailsT = StreamModeDetails>
    CreateStreamRequest& WithStreamModeDetails(StreamModeDetailsT&& value) { SetStreamModeDetails(std::forward<StreamModeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of up to 50 key-value pairs to use to create the tags. A tag consists
     * of a required key and an optional value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateStreamRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateStreamRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    int m_shardCount{0};
    bool m_shardCountHasBeenSet = false;

    StreamModeDetails m_streamModeDetails;
    bool m_streamModeDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
