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
    AWS_DYNAMODBSTREAMS_API StreamRecord();
    AWS_DYNAMODBSTREAMS_API StreamRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API StreamRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The approximate date and time when the stream record was created, in <a
     * href="http://www.epochconverter.com/">UNIX epoch time</a> format and rounded
     * down to the closest second.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateCreationDateTime() const{ return m_approximateCreationDateTime; }
    inline bool ApproximateCreationDateTimeHasBeenSet() const { return m_approximateCreationDateTimeHasBeenSet; }
    inline void SetApproximateCreationDateTime(const Aws::Utils::DateTime& value) { m_approximateCreationDateTimeHasBeenSet = true; m_approximateCreationDateTime = value; }
    inline void SetApproximateCreationDateTime(Aws::Utils::DateTime&& value) { m_approximateCreationDateTimeHasBeenSet = true; m_approximateCreationDateTime = std::move(value); }
    inline StreamRecord& WithApproximateCreationDateTime(const Aws::Utils::DateTime& value) { SetApproximateCreationDateTime(value); return *this;}
    inline StreamRecord& WithApproximateCreationDateTime(Aws::Utils::DateTime&& value) { SetApproximateCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key attribute(s) for the DynamoDB item that was modified.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKeys() const{ return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    inline void SetKeys(const Aws::Map<Aws::String, AttributeValue>& value) { m_keysHasBeenSet = true; m_keys = value; }
    inline void SetKeys(Aws::Map<Aws::String, AttributeValue>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }
    inline StreamRecord& WithKeys(const Aws::Map<Aws::String, AttributeValue>& value) { SetKeys(value); return *this;}
    inline StreamRecord& WithKeys(Aws::Map<Aws::String, AttributeValue>&& value) { SetKeys(std::move(value)); return *this;}
    inline StreamRecord& AddKeys(const Aws::String& key, const AttributeValue& value) { m_keysHasBeenSet = true; m_keys.emplace(key, value); return *this; }
    inline StreamRecord& AddKeys(Aws::String&& key, const AttributeValue& value) { m_keysHasBeenSet = true; m_keys.emplace(std::move(key), value); return *this; }
    inline StreamRecord& AddKeys(const Aws::String& key, AttributeValue&& value) { m_keysHasBeenSet = true; m_keys.emplace(key, std::move(value)); return *this; }
    inline StreamRecord& AddKeys(Aws::String&& key, AttributeValue&& value) { m_keysHasBeenSet = true; m_keys.emplace(std::move(key), std::move(value)); return *this; }
    inline StreamRecord& AddKeys(const char* key, AttributeValue&& value) { m_keysHasBeenSet = true; m_keys.emplace(key, std::move(value)); return *this; }
    inline StreamRecord& AddKeys(const char* key, const AttributeValue& value) { m_keysHasBeenSet = true; m_keys.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The item in the DynamoDB table as it appeared after it was modified.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetNewImage() const{ return m_newImage; }
    inline bool NewImageHasBeenSet() const { return m_newImageHasBeenSet; }
    inline void SetNewImage(const Aws::Map<Aws::String, AttributeValue>& value) { m_newImageHasBeenSet = true; m_newImage = value; }
    inline void SetNewImage(Aws::Map<Aws::String, AttributeValue>&& value) { m_newImageHasBeenSet = true; m_newImage = std::move(value); }
    inline StreamRecord& WithNewImage(const Aws::Map<Aws::String, AttributeValue>& value) { SetNewImage(value); return *this;}
    inline StreamRecord& WithNewImage(Aws::Map<Aws::String, AttributeValue>&& value) { SetNewImage(std::move(value)); return *this;}
    inline StreamRecord& AddNewImage(const Aws::String& key, const AttributeValue& value) { m_newImageHasBeenSet = true; m_newImage.emplace(key, value); return *this; }
    inline StreamRecord& AddNewImage(Aws::String&& key, const AttributeValue& value) { m_newImageHasBeenSet = true; m_newImage.emplace(std::move(key), value); return *this; }
    inline StreamRecord& AddNewImage(const Aws::String& key, AttributeValue&& value) { m_newImageHasBeenSet = true; m_newImage.emplace(key, std::move(value)); return *this; }
    inline StreamRecord& AddNewImage(Aws::String&& key, AttributeValue&& value) { m_newImageHasBeenSet = true; m_newImage.emplace(std::move(key), std::move(value)); return *this; }
    inline StreamRecord& AddNewImage(const char* key, AttributeValue&& value) { m_newImageHasBeenSet = true; m_newImage.emplace(key, std::move(value)); return *this; }
    inline StreamRecord& AddNewImage(const char* key, const AttributeValue& value) { m_newImageHasBeenSet = true; m_newImage.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The item in the DynamoDB table as it appeared before it was modified.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOldImage() const{ return m_oldImage; }
    inline bool OldImageHasBeenSet() const { return m_oldImageHasBeenSet; }
    inline void SetOldImage(const Aws::Map<Aws::String, AttributeValue>& value) { m_oldImageHasBeenSet = true; m_oldImage = value; }
    inline void SetOldImage(Aws::Map<Aws::String, AttributeValue>&& value) { m_oldImageHasBeenSet = true; m_oldImage = std::move(value); }
    inline StreamRecord& WithOldImage(const Aws::Map<Aws::String, AttributeValue>& value) { SetOldImage(value); return *this;}
    inline StreamRecord& WithOldImage(Aws::Map<Aws::String, AttributeValue>&& value) { SetOldImage(std::move(value)); return *this;}
    inline StreamRecord& AddOldImage(const Aws::String& key, const AttributeValue& value) { m_oldImageHasBeenSet = true; m_oldImage.emplace(key, value); return *this; }
    inline StreamRecord& AddOldImage(Aws::String&& key, const AttributeValue& value) { m_oldImageHasBeenSet = true; m_oldImage.emplace(std::move(key), value); return *this; }
    inline StreamRecord& AddOldImage(const Aws::String& key, AttributeValue&& value) { m_oldImageHasBeenSet = true; m_oldImage.emplace(key, std::move(value)); return *this; }
    inline StreamRecord& AddOldImage(Aws::String&& key, AttributeValue&& value) { m_oldImageHasBeenSet = true; m_oldImage.emplace(std::move(key), std::move(value)); return *this; }
    inline StreamRecord& AddOldImage(const char* key, AttributeValue&& value) { m_oldImageHasBeenSet = true; m_oldImage.emplace(key, std::move(value)); return *this; }
    inline StreamRecord& AddOldImage(const char* key, const AttributeValue& value) { m_oldImageHasBeenSet = true; m_oldImage.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The sequence number of the stream record.</p>
     */
    inline const Aws::String& GetSequenceNumber() const{ return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    inline void SetSequenceNumber(const Aws::String& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = value; }
    inline void SetSequenceNumber(Aws::String&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::move(value); }
    inline void SetSequenceNumber(const char* value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber.assign(value); }
    inline StreamRecord& WithSequenceNumber(const Aws::String& value) { SetSequenceNumber(value); return *this;}
    inline StreamRecord& WithSequenceNumber(Aws::String&& value) { SetSequenceNumber(std::move(value)); return *this;}
    inline StreamRecord& WithSequenceNumber(const char* value) { SetSequenceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the stream record, in bytes.</p>
     */
    inline long long GetSizeBytes() const{ return m_sizeBytes; }
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
    inline const StreamViewType& GetStreamViewType() const{ return m_streamViewType; }
    inline bool StreamViewTypeHasBeenSet() const { return m_streamViewTypeHasBeenSet; }
    inline void SetStreamViewType(const StreamViewType& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }
    inline void SetStreamViewType(StreamViewType&& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = std::move(value); }
    inline StreamRecord& WithStreamViewType(const StreamViewType& value) { SetStreamViewType(value); return *this;}
    inline StreamRecord& WithStreamViewType(StreamViewType&& value) { SetStreamViewType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_approximateCreationDateTime;
    bool m_approximateCreationDateTimeHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_newImage;
    bool m_newImageHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_oldImage;
    bool m_oldImageHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;

    long long m_sizeBytes;
    bool m_sizeBytesHasBeenSet = false;

    StreamViewType m_streamViewType;
    bool m_streamViewTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
