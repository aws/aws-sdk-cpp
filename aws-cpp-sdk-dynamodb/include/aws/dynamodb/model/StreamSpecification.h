/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the DynamoDB Streams configuration for a table in
   * DynamoDB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/StreamSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API StreamSpecification
  {
  public:
    StreamSpecification();
    StreamSpecification(Aws::Utils::Json::JsonView jsonValue);
    StreamSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool StreamEnabledHasBeenSet() const { return m_streamEnabledHasBeenSet; }

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
     * <p> When an item in the table is modified, <code>StreamViewType</code>
     * determines what information is written to the stream for this table. Valid
     * values for <code>StreamViewType</code> are:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the key attributes of the modified item are
     * written to the stream.</p> </li> <li> <p> <code>NEW_IMAGE</code> - The entire
     * item, as it appears after it was modified, is written to the stream.</p> </li>
     * <li> <p> <code>OLD_IMAGE</code> - The entire item, as it appeared before it was
     * modified, is written to the stream.</p> </li> <li> <p>
     * <code>NEW_AND_OLD_IMAGES</code> - Both the new and the old item images of the
     * item are written to the stream.</p> </li> </ul>
     */
    inline const StreamViewType& GetStreamViewType() const{ return m_streamViewType; }

    /**
     * <p> When an item in the table is modified, <code>StreamViewType</code>
     * determines what information is written to the stream for this table. Valid
     * values for <code>StreamViewType</code> are:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the key attributes of the modified item are
     * written to the stream.</p> </li> <li> <p> <code>NEW_IMAGE</code> - The entire
     * item, as it appears after it was modified, is written to the stream.</p> </li>
     * <li> <p> <code>OLD_IMAGE</code> - The entire item, as it appeared before it was
     * modified, is written to the stream.</p> </li> <li> <p>
     * <code>NEW_AND_OLD_IMAGES</code> - Both the new and the old item images of the
     * item are written to the stream.</p> </li> </ul>
     */
    inline bool StreamViewTypeHasBeenSet() const { return m_streamViewTypeHasBeenSet; }

    /**
     * <p> When an item in the table is modified, <code>StreamViewType</code>
     * determines what information is written to the stream for this table. Valid
     * values for <code>StreamViewType</code> are:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the key attributes of the modified item are
     * written to the stream.</p> </li> <li> <p> <code>NEW_IMAGE</code> - The entire
     * item, as it appears after it was modified, is written to the stream.</p> </li>
     * <li> <p> <code>OLD_IMAGE</code> - The entire item, as it appeared before it was
     * modified, is written to the stream.</p> </li> <li> <p>
     * <code>NEW_AND_OLD_IMAGES</code> - Both the new and the old item images of the
     * item are written to the stream.</p> </li> </ul>
     */
    inline void SetStreamViewType(const StreamViewType& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }

    /**
     * <p> When an item in the table is modified, <code>StreamViewType</code>
     * determines what information is written to the stream for this table. Valid
     * values for <code>StreamViewType</code> are:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the key attributes of the modified item are
     * written to the stream.</p> </li> <li> <p> <code>NEW_IMAGE</code> - The entire
     * item, as it appears after it was modified, is written to the stream.</p> </li>
     * <li> <p> <code>OLD_IMAGE</code> - The entire item, as it appeared before it was
     * modified, is written to the stream.</p> </li> <li> <p>
     * <code>NEW_AND_OLD_IMAGES</code> - Both the new and the old item images of the
     * item are written to the stream.</p> </li> </ul>
     */
    inline void SetStreamViewType(StreamViewType&& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = std::move(value); }

    /**
     * <p> When an item in the table is modified, <code>StreamViewType</code>
     * determines what information is written to the stream for this table. Valid
     * values for <code>StreamViewType</code> are:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the key attributes of the modified item are
     * written to the stream.</p> </li> <li> <p> <code>NEW_IMAGE</code> - The entire
     * item, as it appears after it was modified, is written to the stream.</p> </li>
     * <li> <p> <code>OLD_IMAGE</code> - The entire item, as it appeared before it was
     * modified, is written to the stream.</p> </li> <li> <p>
     * <code>NEW_AND_OLD_IMAGES</code> - Both the new and the old item images of the
     * item are written to the stream.</p> </li> </ul>
     */
    inline StreamSpecification& WithStreamViewType(const StreamViewType& value) { SetStreamViewType(value); return *this;}

    /**
     * <p> When an item in the table is modified, <code>StreamViewType</code>
     * determines what information is written to the stream for this table. Valid
     * values for <code>StreamViewType</code> are:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the key attributes of the modified item are
     * written to the stream.</p> </li> <li> <p> <code>NEW_IMAGE</code> - The entire
     * item, as it appears after it was modified, is written to the stream.</p> </li>
     * <li> <p> <code>OLD_IMAGE</code> - The entire item, as it appeared before it was
     * modified, is written to the stream.</p> </li> <li> <p>
     * <code>NEW_AND_OLD_IMAGES</code> - Both the new and the old item images of the
     * item are written to the stream.</p> </li> </ul>
     */
    inline StreamSpecification& WithStreamViewType(StreamViewType&& value) { SetStreamViewType(std::move(value)); return *this;}

  private:

    bool m_streamEnabled;
    bool m_streamEnabledHasBeenSet;

    StreamViewType m_streamViewType;
    bool m_streamViewTypeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
