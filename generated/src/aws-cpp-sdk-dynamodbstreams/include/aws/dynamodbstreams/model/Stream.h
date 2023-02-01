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
    AWS_DYNAMODBSTREAMS_API Stream();
    AWS_DYNAMODBSTREAMS_API Stream(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Stream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline Stream& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline Stream& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline Stream& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline Stream& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline Stream& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline Stream& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name</p> </li> <li> <p>the <code>StreamLabel</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetStreamLabel() const{ return m_streamLabel; }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name</p> </li> <li> <p>the <code>StreamLabel</code> </p> </li>
     * </ul>
     */
    inline bool StreamLabelHasBeenSet() const { return m_streamLabelHasBeenSet; }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name</p> </li> <li> <p>the <code>StreamLabel</code> </p> </li>
     * </ul>
     */
    inline void SetStreamLabel(const Aws::String& value) { m_streamLabelHasBeenSet = true; m_streamLabel = value; }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name</p> </li> <li> <p>the <code>StreamLabel</code> </p> </li>
     * </ul>
     */
    inline void SetStreamLabel(Aws::String&& value) { m_streamLabelHasBeenSet = true; m_streamLabel = std::move(value); }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name</p> </li> <li> <p>the <code>StreamLabel</code> </p> </li>
     * </ul>
     */
    inline void SetStreamLabel(const char* value) { m_streamLabelHasBeenSet = true; m_streamLabel.assign(value); }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name</p> </li> <li> <p>the <code>StreamLabel</code> </p> </li>
     * </ul>
     */
    inline Stream& WithStreamLabel(const Aws::String& value) { SetStreamLabel(value); return *this;}

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name</p> </li> <li> <p>the <code>StreamLabel</code> </p> </li>
     * </ul>
     */
    inline Stream& WithStreamLabel(Aws::String&& value) { SetStreamLabel(std::move(value)); return *this;}

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name</p> </li> <li> <p>the <code>StreamLabel</code> </p> </li>
     * </ul>
     */
    inline Stream& WithStreamLabel(const char* value) { SetStreamLabel(value); return *this;}

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
