/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents all of the data describing a particular stream.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/Stream">AWS
   * API Reference</a></p>
   */
  class Stream
  {
  public:
    AWS_DYNAMODBSTREAMS_API Stream() = default;
    AWS_DYNAMODBSTREAMS_API Stream(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Stream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    Stream& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    Stream& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the Amazon Web Services customer
     * ID.</p> </li> <li> <p>the table name</p> </li> <li> <p>the
     * <code>StreamLabel</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStreamLabel() const { return m_streamLabel; }
    inline bool StreamLabelHasBeenSet() const { return m_streamLabelHasBeenSet; }
    template<typename StreamLabelT = Aws::String>
    void SetStreamLabel(StreamLabelT&& value) { m_streamLabelHasBeenSet = true; m_streamLabel = std::forward<StreamLabelT>(value); }
    template<typename StreamLabelT = Aws::String>
    Stream& WithStreamLabel(StreamLabelT&& value) { SetStreamLabel(std::forward<StreamLabelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_streamLabel;
    bool m_streamLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
