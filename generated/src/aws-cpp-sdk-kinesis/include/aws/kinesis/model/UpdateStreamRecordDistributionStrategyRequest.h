/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/RecordDistributionStrategy.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class UpdateStreamRecordDistributionStrategyRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API UpdateStreamRecordDistributionStrategyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateStreamRecordDistributionStrategy"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the stream to update.</p>
   */
  inline const Aws::String& GetStreamARN() const { return m_streamARN; }
  inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
  template <typename StreamARNT = Aws::String>
  void SetStreamARN(StreamARNT&& value) {
    m_streamARNHasBeenSet = true;
    m_streamARN = std::forward<StreamARNT>(value);
  }
  template <typename StreamARNT = Aws::String>
  UpdateStreamRecordDistributionStrategyRequest& WithStreamARN(StreamARNT&& value) {
    SetStreamARN(std::forward<StreamARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Not Implemented. Reserved for future use.</p>
   */
  inline const Aws::String& GetStreamId() const { return m_streamId; }
  inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
  template <typename StreamIdT = Aws::String>
  void SetStreamId(StreamIdT&& value) {
    m_streamIdHasBeenSet = true;
    m_streamId = std::forward<StreamIdT>(value);
  }
  template <typename StreamIdT = Aws::String>
  UpdateStreamRecordDistributionStrategyRequest& WithStreamId(StreamIdT&& value) {
    SetStreamId(std::forward<StreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The record distribution strategy to apply to the stream. Specify one of the
   * following values:</p> <ul> <li> <p> <code>AUTO</code> – Amazon Kinesis Data
   * Streams distributes records evenly across shards and ignores any partition key
   * and <code>ExplicitHashKey</code> that producers supply.</p> </li> <li> <p>
   * <code>USER_PARTITION_KEY</code> – Producers must supply a partition key, which
   * Amazon Kinesis Data Streams uses to determine shard placement. This is the
   * default.</p> </li> </ul>
   */
  inline RecordDistributionStrategy GetRecordDistributionStrategy() const { return m_recordDistributionStrategy; }
  inline bool RecordDistributionStrategyHasBeenSet() const { return m_recordDistributionStrategyHasBeenSet; }
  inline void SetRecordDistributionStrategy(RecordDistributionStrategy value) {
    m_recordDistributionStrategyHasBeenSet = true;
    m_recordDistributionStrategy = value;
  }
  inline UpdateStreamRecordDistributionStrategyRequest& WithRecordDistributionStrategy(RecordDistributionStrategy value) {
    SetRecordDistributionStrategy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamARN;

  Aws::String m_streamId;

  RecordDistributionStrategy m_recordDistributionStrategy{RecordDistributionStrategy::NOT_SET};
  bool m_streamARNHasBeenSet = false;
  bool m_streamIdHasBeenSet = false;
  bool m_recordDistributionStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
