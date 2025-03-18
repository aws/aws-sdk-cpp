/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StreamSpecification
  {
  public:
    AWS_DYNAMODB_API StreamSpecification() = default;
    AWS_DYNAMODB_API StreamSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API StreamSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether DynamoDB Streams is enabled (true) or disabled (false) on
     * the table.</p>
     */
    inline bool GetStreamEnabled() const { return m_streamEnabled; }
    inline bool StreamEnabledHasBeenSet() const { return m_streamEnabledHasBeenSet; }
    inline void SetStreamEnabled(bool value) { m_streamEnabledHasBeenSet = true; m_streamEnabled = value; }
    inline StreamSpecification& WithStreamEnabled(bool value) { SetStreamEnabled(value); return *this;}
    ///@}

    ///@{
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
    inline StreamViewType GetStreamViewType() const { return m_streamViewType; }
    inline bool StreamViewTypeHasBeenSet() const { return m_streamViewTypeHasBeenSet; }
    inline void SetStreamViewType(StreamViewType value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }
    inline StreamSpecification& WithStreamViewType(StreamViewType value) { SetStreamViewType(value); return *this;}
    ///@}
  private:

    bool m_streamEnabled{false};
    bool m_streamEnabledHasBeenSet = false;

    StreamViewType m_streamViewType{StreamViewType::NOT_SET};
    bool m_streamViewTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
