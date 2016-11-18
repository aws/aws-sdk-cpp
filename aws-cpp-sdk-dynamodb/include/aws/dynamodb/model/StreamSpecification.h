/*
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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/StreamViewType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the DynamoDB Streams configuration for a table in DynamoDB.</p>
   */
  class AWS_DYNAMODB_API StreamSpecification
  {
  public:
    StreamSpecification();
    StreamSpecification(const Aws::Utils::Json::JsonValue& jsonValue);
    StreamSpecification& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Indicates whether DynamoDB Streams is enabled (true) or disabled (false) on
     * the table.</p>
     */
    inline bool GetStreamEnabled() const{ return m_streamEnabled; }

    /**
     * <p>Indicates whether DynamoDB Streams is enabled (true) or disabled (false) on
     * the table.</p>
     */
    inline void SetStreamEnabled(bool value) { m_streamEnabledHasBeenSet = true; m_streamEnabled = value; }

    /**
     * <p>Indicates whether DynamoDB Streams is enabled (true) or disabled (false) on
     * the table.</p>
     */
    inline StreamSpecification& WithStreamEnabled(bool value) { SetStreamEnabled(value); return *this;}

    /**
     * <p>The DynamoDB Streams settings for the table. These settings consist of:</p>
     * <ul> <li> <p> <i>StreamEnabled</i> - Indicates whether DynamoDB Streams is
     * enabled (true) or disabled (false) on the table.</p> </li> <li> <p>
     * <i>StreamViewType</i> - When an item in the table is modified,
     * <i>StreamViewType</i> determines what information is written to the stream for
     * this table. Valid values for <i>StreamViewType</i> are:</p> <ul> <li> <p>
     * <i>KEYS_ONLY</i> - Only the key attributes of the modified item are written to
     * the stream.</p> </li> <li> <p> <i>NEW_IMAGE</i> - The entire item, as it appears
     * after it was modified, is written to the stream.</p> </li> <li> <p>
     * <i>OLD_IMAGE</i> - The entire item, as it appeared before it was modified, is
     * written to the stream.</p> </li> <li> <p> <i>NEW_AND_OLD_IMAGES</i> - Both the
     * new and the old item images of the item are written to the stream.</p> </li>
     * </ul> </li> </ul>
     */
    inline const StreamViewType& GetStreamViewType() const{ return m_streamViewType; }

    /**
     * <p>The DynamoDB Streams settings for the table. These settings consist of:</p>
     * <ul> <li> <p> <i>StreamEnabled</i> - Indicates whether DynamoDB Streams is
     * enabled (true) or disabled (false) on the table.</p> </li> <li> <p>
     * <i>StreamViewType</i> - When an item in the table is modified,
     * <i>StreamViewType</i> determines what information is written to the stream for
     * this table. Valid values for <i>StreamViewType</i> are:</p> <ul> <li> <p>
     * <i>KEYS_ONLY</i> - Only the key attributes of the modified item are written to
     * the stream.</p> </li> <li> <p> <i>NEW_IMAGE</i> - The entire item, as it appears
     * after it was modified, is written to the stream.</p> </li> <li> <p>
     * <i>OLD_IMAGE</i> - The entire item, as it appeared before it was modified, is
     * written to the stream.</p> </li> <li> <p> <i>NEW_AND_OLD_IMAGES</i> - Both the
     * new and the old item images of the item are written to the stream.</p> </li>
     * </ul> </li> </ul>
     */
    inline void SetStreamViewType(const StreamViewType& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }

    /**
     * <p>The DynamoDB Streams settings for the table. These settings consist of:</p>
     * <ul> <li> <p> <i>StreamEnabled</i> - Indicates whether DynamoDB Streams is
     * enabled (true) or disabled (false) on the table.</p> </li> <li> <p>
     * <i>StreamViewType</i> - When an item in the table is modified,
     * <i>StreamViewType</i> determines what information is written to the stream for
     * this table. Valid values for <i>StreamViewType</i> are:</p> <ul> <li> <p>
     * <i>KEYS_ONLY</i> - Only the key attributes of the modified item are written to
     * the stream.</p> </li> <li> <p> <i>NEW_IMAGE</i> - The entire item, as it appears
     * after it was modified, is written to the stream.</p> </li> <li> <p>
     * <i>OLD_IMAGE</i> - The entire item, as it appeared before it was modified, is
     * written to the stream.</p> </li> <li> <p> <i>NEW_AND_OLD_IMAGES</i> - Both the
     * new and the old item images of the item are written to the stream.</p> </li>
     * </ul> </li> </ul>
     */
    inline void SetStreamViewType(StreamViewType&& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }

    /**
     * <p>The DynamoDB Streams settings for the table. These settings consist of:</p>
     * <ul> <li> <p> <i>StreamEnabled</i> - Indicates whether DynamoDB Streams is
     * enabled (true) or disabled (false) on the table.</p> </li> <li> <p>
     * <i>StreamViewType</i> - When an item in the table is modified,
     * <i>StreamViewType</i> determines what information is written to the stream for
     * this table. Valid values for <i>StreamViewType</i> are:</p> <ul> <li> <p>
     * <i>KEYS_ONLY</i> - Only the key attributes of the modified item are written to
     * the stream.</p> </li> <li> <p> <i>NEW_IMAGE</i> - The entire item, as it appears
     * after it was modified, is written to the stream.</p> </li> <li> <p>
     * <i>OLD_IMAGE</i> - The entire item, as it appeared before it was modified, is
     * written to the stream.</p> </li> <li> <p> <i>NEW_AND_OLD_IMAGES</i> - Both the
     * new and the old item images of the item are written to the stream.</p> </li>
     * </ul> </li> </ul>
     */
    inline StreamSpecification& WithStreamViewType(const StreamViewType& value) { SetStreamViewType(value); return *this;}

    /**
     * <p>The DynamoDB Streams settings for the table. These settings consist of:</p>
     * <ul> <li> <p> <i>StreamEnabled</i> - Indicates whether DynamoDB Streams is
     * enabled (true) or disabled (false) on the table.</p> </li> <li> <p>
     * <i>StreamViewType</i> - When an item in the table is modified,
     * <i>StreamViewType</i> determines what information is written to the stream for
     * this table. Valid values for <i>StreamViewType</i> are:</p> <ul> <li> <p>
     * <i>KEYS_ONLY</i> - Only the key attributes of the modified item are written to
     * the stream.</p> </li> <li> <p> <i>NEW_IMAGE</i> - The entire item, as it appears
     * after it was modified, is written to the stream.</p> </li> <li> <p>
     * <i>OLD_IMAGE</i> - The entire item, as it appeared before it was modified, is
     * written to the stream.</p> </li> <li> <p> <i>NEW_AND_OLD_IMAGES</i> - Both the
     * new and the old item images of the item are written to the stream.</p> </li>
     * </ul> </li> </ul>
     */
    inline StreamSpecification& WithStreamViewType(StreamViewType&& value) { SetStreamViewType(value); return *this;}

  private:
    bool m_streamEnabled;
    bool m_streamEnabledHasBeenSet;
    StreamViewType m_streamViewType;
    bool m_streamViewTypeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
