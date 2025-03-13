/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the input for <code>PutRecord</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/PutRecordInput">AWS
   * API Reference</a></p>
   */
  class PutRecordRequest : public KinesisRequest
  {
  public:
    AWS_KINESIS_API PutRecordRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRecord"; }

    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the stream to put the data record into.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    PutRecordRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data blob to put into the record, which is base64-encoded when the blob
     * is serialized. When the data blob (the payload before base64-encoding) is added
     * to the partition key size, the total size must not exceed the maximum record
     * size (1 MiB).</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Utils::ByteBuffer>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Utils::ByteBuffer>
    PutRecordRequest& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines which shard in the stream the data record is assigned to.
     * Partition keys are Unicode strings with a maximum length limit of 256 characters
     * for each key. Amazon Kinesis Data Streams uses the partition key as input to a
     * hash function that maps the partition key and associated data to a specific
     * shard. Specifically, an MD5 hash function is used to map partition keys to
     * 128-bit integer values and to map associated data records to shards. As a result
     * of this hashing mechanism, all data records with the same partition key map to
     * the same shard within the stream.</p>
     */
    inline const Aws::String& GetPartitionKey() const { return m_partitionKey; }
    inline bool PartitionKeyHasBeenSet() const { return m_partitionKeyHasBeenSet; }
    template<typename PartitionKeyT = Aws::String>
    void SetPartitionKey(PartitionKeyT&& value) { m_partitionKeyHasBeenSet = true; m_partitionKey = std::forward<PartitionKeyT>(value); }
    template<typename PartitionKeyT = Aws::String>
    PutRecordRequest& WithPartitionKey(PartitionKeyT&& value) { SetPartitionKey(std::forward<PartitionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash value used to explicitly determine the shard the data record is
     * assigned to by overriding the partition key hash.</p>
     */
    inline const Aws::String& GetExplicitHashKey() const { return m_explicitHashKey; }
    inline bool ExplicitHashKeyHasBeenSet() const { return m_explicitHashKeyHasBeenSet; }
    template<typename ExplicitHashKeyT = Aws::String>
    void SetExplicitHashKey(ExplicitHashKeyT&& value) { m_explicitHashKeyHasBeenSet = true; m_explicitHashKey = std::forward<ExplicitHashKeyT>(value); }
    template<typename ExplicitHashKeyT = Aws::String>
    PutRecordRequest& WithExplicitHashKey(ExplicitHashKeyT&& value) { SetExplicitHashKey(std::forward<ExplicitHashKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Guarantees strictly increasing sequence numbers, for puts from the same
     * client and to the same partition key. Usage: set the
     * <code>SequenceNumberForOrdering</code> of record <i>n</i> to the sequence number
     * of record <i>n-1</i> (as returned in the result when putting record <i>n-1</i>).
     * If this parameter is not set, records are coarsely ordered based on arrival
     * time.</p>
     */
    inline const Aws::String& GetSequenceNumberForOrdering() const { return m_sequenceNumberForOrdering; }
    inline bool SequenceNumberForOrderingHasBeenSet() const { return m_sequenceNumberForOrderingHasBeenSet; }
    template<typename SequenceNumberForOrderingT = Aws::String>
    void SetSequenceNumberForOrdering(SequenceNumberForOrderingT&& value) { m_sequenceNumberForOrderingHasBeenSet = true; m_sequenceNumberForOrdering = std::forward<SequenceNumberForOrderingT>(value); }
    template<typename SequenceNumberForOrderingT = Aws::String>
    PutRecordRequest& WithSequenceNumberForOrdering(SequenceNumberForOrderingT&& value) { SetSequenceNumberForOrdering(std::forward<SequenceNumberForOrderingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    PutRecordRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::Utils::ByteBuffer m_data{};
    bool m_dataHasBeenSet = false;

    Aws::String m_partitionKey;
    bool m_partitionKeyHasBeenSet = false;

    Aws::String m_explicitHashKey;
    bool m_explicitHashKeyHasBeenSet = false;

    Aws::String m_sequenceNumberForOrdering;
    bool m_sequenceNumberForOrderingHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
