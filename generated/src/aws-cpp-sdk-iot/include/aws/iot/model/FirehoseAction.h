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
    AWS_IOT_API FirehoseAction() = default;
    AWS_IOT_API FirehoseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API FirehoseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM role that grants access to the Amazon Kinesis Firehose stream.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    FirehoseAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery stream name.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const { return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    template<typename DeliveryStreamNameT = Aws::String>
    void SetDeliveryStreamName(DeliveryStreamNameT&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::forward<DeliveryStreamNameT>(value); }
    template<typename DeliveryStreamNameT = Aws::String>
    FirehoseAction& WithDeliveryStreamName(DeliveryStreamNameT&& value) { SetDeliveryStreamName(std::forward<DeliveryStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A character separator that will be used to separate records written to the
     * Firehose stream. Valid values are: '\n' (newline), '\t' (tab), '\r\n' (Windows
     * newline), ',' (comma).</p>
     */
    inline const Aws::String& GetSeparator() const { return m_separator; }
    inline bool SeparatorHasBeenSet() const { return m_separatorHasBeenSet; }
    template<typename SeparatorT = Aws::String>
    void SetSeparator(SeparatorT&& value) { m_separatorHasBeenSet = true; m_separator = std::forward<SeparatorT>(value); }
    template<typename SeparatorT = Aws::String>
    FirehoseAction& WithSeparator(SeparatorT&& value) { SetSeparator(std::forward<SeparatorT>(value)); return *this;}
    ///@}

    ///@{
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
    inline bool GetBatchMode() const { return m_batchMode; }
    inline bool BatchModeHasBeenSet() const { return m_batchModeHasBeenSet; }
    inline void SetBatchMode(bool value) { m_batchModeHasBeenSet = true; m_batchMode = value; }
    inline FirehoseAction& WithBatchMode(bool value) { SetBatchMode(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::String m_separator;
    bool m_separatorHasBeenSet = false;

    bool m_batchMode{false};
    bool m_batchModeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
