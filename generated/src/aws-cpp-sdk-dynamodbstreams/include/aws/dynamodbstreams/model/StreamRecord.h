/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/model/StreamViewType.h>
#include <aws/dynamodbstreams/model/AttributeValue.h>
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
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>A description of a single data modification that was performed on an item in
   * a DynamoDB table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/StreamRecord">AWS
   * API Reference</a></p>
   */
  class StreamRecord
  {
  public:
    AWS_DYNAMODBSTREAMS_API StreamRecord() = default;
    AWS_DYNAMODBSTREAMS_API StreamRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API StreamRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The approximate date and time when the stream record was created, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format and rounded down to the closest second.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateCreationDateTime() const { return m_approximateCreationDateTime; }
    inline bool ApproximateCreationDateTimeHasBeenSet() const { return m_approximateCreationDateTimeHasBeenSet; }
    template<typename ApproximateCreationDateTimeT = Aws::Utils::DateTime>
    void SetApproximateCreationDateTime(ApproximateCreationDateTimeT&& value) { m_approximateCreationDateTimeHasBeenSet = true; m_approximateCreationDateTime = std::forward<ApproximateCreationDateTimeT>(value); }
    template<typename ApproximateCreationDateTimeT = Aws::Utils::DateTime>
    StreamRecord& WithApproximateCreationDateTime(ApproximateCreationDateTimeT&& value) { SetApproximateCreationDateTime(std::forward<ApproximateCreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key attribute(s) for the DynamoDB item that was modified.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKeys() const { return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    template<typename KeysT = Aws::Map<Aws::String, AttributeValue>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Map<Aws::String, AttributeValue>>
    StreamRecord& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysKeyT = Aws::String, typename KeysValueT = AttributeValue>
    StreamRecord& AddKeys(KeysKeyT&& key, KeysValueT&& value) {
      m_keysHasBeenSet = true; m_keys.emplace(std::forward<KeysKeyT>(key), std::forward<KeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The item in the DynamoDB table as it appeared after it was modified.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetNewImage() const { return m_newImage; }
    inline bool NewImageHasBeenSet() const { return m_newImageHasBeenSet; }
    template<typename NewImageT = Aws::Map<Aws::String, AttributeValue>>
    void SetNewImage(NewImageT&& value) { m_newImageHasBeenSet = true; m_newImage = std::forward<NewImageT>(value); }
    template<typename NewImageT = Aws::Map<Aws::String, AttributeValue>>
    StreamRecord& WithNewImage(NewImageT&& value) { SetNewImage(std::forward<NewImageT>(value)); return *this;}
    template<typename NewImageKeyT = Aws::String, typename NewImageValueT = AttributeValue>
    StreamRecord& AddNewImage(NewImageKeyT&& key, NewImageValueT&& value) {
      m_newImageHasBeenSet = true; m_newImage.emplace(std::forward<NewImageKeyT>(key), std::forward<NewImageValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The item in the DynamoDB table as it appeared before it was modified.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOldImage() const { return m_oldImage; }
    inline bool OldImageHasBeenSet() const { return m_oldImageHasBeenSet; }
    template<typename OldImageT = Aws::Map<Aws::String, AttributeValue>>
    void SetOldImage(OldImageT&& value) { m_oldImageHasBeenSet = true; m_oldImage = std::forward<OldImageT>(value); }
    template<typename OldImageT = Aws::Map<Aws::String, AttributeValue>>
    StreamRecord& WithOldImage(OldImageT&& value) { SetOldImage(std::forward<OldImageT>(value)); return *this;}
    template<typename OldImageKeyT = Aws::String, typename OldImageValueT = AttributeValue>
    StreamRecord& AddOldImage(OldImageKeyT&& key, OldImageValueT&& value) {
      m_oldImageHasBeenSet = true; m_oldImage.emplace(std::forward<OldImageKeyT>(key), std::forward<OldImageValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The sequence number of the stream record.</p>
     */
    inline const Aws::String& GetSequenceNumber() const { return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    template<typename SequenceNumberT = Aws::String>
    void SetSequenceNumber(SequenceNumberT&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::forward<SequenceNumberT>(value); }
    template<typename SequenceNumberT = Aws::String>
    StreamRecord& WithSequenceNumber(SequenceNumberT&& value) { SetSequenceNumber(std::forward<SequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the stream record, in bytes.</p>
     */
    inline long long GetSizeBytes() const { return m_sizeBytes; }
    inline bool SizeBytesHasBeenSet() const { return m_sizeBytesHasBeenSet; }
    inline void SetSizeBytes(long long value) { m_sizeBytesHasBeenSet = true; m_sizeBytes = value; }
    inline StreamRecord& WithSizeBytes(long long value) { SetSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data from the modified DynamoDB item that was captured in this
     * stream record:</p> <ul> <li> <p> <code>KEYS_ONLY</code> - only the key
     * attributes of the modified item.</p> </li> <li> <p> <code>NEW_IMAGE</code> - the
     * entire item, as it appeared after it was modified.</p> </li> <li> <p>
     * <code>OLD_IMAGE</code> - the entire item, as it appeared before it was
     * modified.</p> </li> <li> <p> <code>NEW_AND_OLD_IMAGES</code> - both the new and
     * the old item images of the item.</p> </li> </ul>
     */
    inline StreamViewType GetStreamViewType() const { return m_streamViewType; }
    inline bool StreamViewTypeHasBeenSet() const { return m_streamViewTypeHasBeenSet; }
    inline void SetStreamViewType(StreamViewType value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }
    inline StreamRecord& WithStreamViewType(StreamViewType value) { SetStreamViewType(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_approximateCreationDateTime{};
    bool m_approximateCreationDateTimeHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_newImage;
    bool m_newImageHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_oldImage;
    bool m_oldImageHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;

    long long m_sizeBytes{0};
    bool m_sizeBytesHasBeenSet = false;

    StreamViewType m_streamViewType{StreamViewType::NOT_SET};
    bool m_streamViewTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
