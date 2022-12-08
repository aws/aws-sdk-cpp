/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action that writes data to an Amazon Kinesis Firehose
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/FirehoseAction">AWS
   * API Reference</a></p>
   */
  class FirehoseAction
  {
  public:
    AWS_IOT_API FirehoseAction();
    AWS_IOT_API FirehoseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API FirehoseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehose stream.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehose stream.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehose stream.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehose stream.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehose stream.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehose stream.</p>
     */
    inline FirehoseAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehose stream.</p>
     */
    inline FirehoseAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehose stream.</p>
     */
    inline FirehoseAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The delivery stream name.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The delivery stream name.</p>
     */
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }

    /**
     * <p>The delivery stream name.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The delivery stream name.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }

    /**
     * <p>The delivery stream name.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The delivery stream name.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The delivery stream name.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}

    /**
     * <p>The delivery stream name.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}


    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline const Aws::String& GetSeparator() const{ return m_separator; }

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline bool SeparatorHasBeenSet() const { return m_separatorHasBeenSet; }

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline void SetSeparator(const Aws::String& value) { m_separatorHasBeenSet = true; m_separator = value; }

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline void SetSeparator(Aws::String&& value) { m_separatorHasBeenSet = true; m_separator = std::move(value); }

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline void SetSeparator(const char* value) { m_separatorHasBeenSet = true; m_separator.assign(value); }

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(const Aws::String& value) { SetSeparator(value); return *this;}

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(Aws::String&& value) { SetSeparator(std::move(value)); return *this;}

    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(const char* value) { SetSeparator(value); return *this;}


    /**
     * <p>Whether to deliver the Kinesis Data Firehose stream as a batch by using <a
     * href="https://docs.aws.amazon.com/firehose/latest/APIReference/API_PutRecordBatch.html">
     * <code>PutRecordBatch</code> </a>. The default value is <code>false</code>.</p>
     * <p>When <code>batchMode</code> is <code>true</code> and the rule's SQL statement
     * evaluates to an Array, each Array element forms one record in the <a
     * href="https://docs.aws.amazon.com/firehose/latest/APIReference/API_PutRecordBatch.html">
     * <code>PutRecordBatch</code> </a> request. The resulting array can't have more
     * than 500 records.</p>
     */
    inline bool GetBatchMode() const{ return m_batchMode; }

    /**
     * <p>Whether to deliver the Kinesis Data Firehose stream as a batch by using <a
     * href="https://docs.aws.amazon.com/firehose/latest/APIReference/API_PutRecordBatch.html">
     * <code>PutRecordBatch</code> </a>. The default value is <code>false</code>.</p>
     * <p>When <code>batchMode</code> is <code>true</code> and the rule's SQL statement
     * evaluates to an Array, each Array element forms one record in the <a
     * href="https://docs.aws.amazon.com/firehose/latest/APIReference/API_PutRecordBatch.html">
     * <code>PutRecordBatch</code> </a> request. The resulting array can't have more
     * than 500 records.</p>
     */
    inline bool BatchModeHasBeenSet() const { return m_batchModeHasBeenSet; }

    /**
     * <p>Whether to deliver the Kinesis Data Firehose stream as a batch by using <a
     * href="https://docs.aws.amazon.com/firehose/latest/APIReference/API_PutRecordBatch.html">
     * <code>PutRecordBatch</code> </a>. The default value is <code>false</code>.</p>
     * <p>When <code>batchMode</code> is <code>true</code> and the rule's SQL statement
     * evaluates to an Array, each Array element forms one record in the <a
     * href="https://docs.aws.amazon.com/firehose/latest/APIReference/API_PutRecordBatch.html">
     * <code>PutRecordBatch</code> </a> request. The resulting array can't have more
     * than 500 records.</p>
     */
    inline void SetBatchMode(bool value) { m_batchModeHasBeenSet = true; m_batchMode = value; }

    /**
     * <p>Whether to deliver the Kinesis Data Firehose stream as a batch by using <a
     * href="https://docs.aws.amazon.com/firehose/latest/APIReference/API_PutRecordBatch.html">
     * <code>PutRecordBatch</code> </a>. The default value is <code>false</code>.</p>
     * <p>When <code>batchMode</code> is <code>true</code> and the rule's SQL statement
     * evaluates to an Array, each Array element forms one record in the <a
     * href="https://docs.aws.amazon.com/firehose/latest/APIReference/API_PutRecordBatch.html">
     * <code>PutRecordBatch</code> </a> request. The resulting array can't have more
     * than 500 records.</p>
     */
    inline FirehoseAction& WithBatchMode(bool value) { SetBatchMode(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::String m_separator;
    bool m_separatorHasBeenSet = false;

    bool m_batchMode;
    bool m_batchModeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
