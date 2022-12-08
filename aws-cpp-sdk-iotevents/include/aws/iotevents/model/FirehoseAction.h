/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/Payload.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Sends information about the detector model instance and the event that
   * triggered the action to an Amazon Kinesis Data Firehose delivery
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/FirehoseAction">AWS
   * API Reference</a></p>
   */
  class FirehoseAction
  {
  public:
    AWS_IOTEVENTS_API FirehoseAction();
    AWS_IOTEVENTS_API FirehoseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API FirehoseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Kinesis Data Firehose delivery stream where the data is
     * written.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream where the data is
     * written.</p>
     */
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream where the data is
     * written.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream where the data is
     * written.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream where the data is
     * written.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream where the data is
     * written.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream where the data is
     * written.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream where the data is
     * written.</p>
     */
    inline FirehoseAction& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}


    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose delivery stream. Valid values are: '\n' (newline), '\t' (tab),
     * '\r\n' (Windows newline), ',' (comma).</p>
     */
    inline const Aws::String& GetSeparator() const{ return m_separator; }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose delivery stream. Valid values are: '\n' (newline), '\t' (tab),
     * '\r\n' (Windows newline), ',' (comma).</p>
     */
    inline bool SeparatorHasBeenSet() const { return m_separatorHasBeenSet; }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose delivery stream. Valid values are: '\n' (newline), '\t' (tab),
     * '\r\n' (Windows newline), ',' (comma).</p>
     */
    inline void SetSeparator(const Aws::String& value) { m_separatorHasBeenSet = true; m_separator = value; }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose delivery stream. Valid values are: '\n' (newline), '\t' (tab),
     * '\r\n' (Windows newline), ',' (comma).</p>
     */
    inline void SetSeparator(Aws::String&& value) { m_separatorHasBeenSet = true; m_separator = std::move(value); }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose delivery stream. Valid values are: '\n' (newline), '\t' (tab),
     * '\r\n' (Windows newline), ',' (comma).</p>
     */
    inline void SetSeparator(const char* value) { m_separatorHasBeenSet = true; m_separator.assign(value); }

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose delivery stream. Valid values are: '\n' (newline), '\t' (tab),
     * '\r\n' (Windows newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(const Aws::String& value) { SetSeparator(value); return *this;}

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose delivery stream. Valid values are: '\n' (newline), '\t' (tab),
     * '\r\n' (Windows newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(Aws::String&& value) { SetSeparator(std::move(value)); return *this;}

    /**
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose delivery stream. Valid values are: '\n' (newline), '\t' (tab),
     * '\r\n' (Windows newline), ',' (comma).</p>
     */
    inline FirehoseAction& WithSeparator(const char* value) { SetSeparator(value); return *this;}


    /**
     * <p>You can configure the action payload when you send a message to an Amazon
     * Kinesis Data Firehose delivery stream.</p>
     */
    inline const Payload& GetPayload() const{ return m_payload; }

    /**
     * <p>You can configure the action payload when you send a message to an Amazon
     * Kinesis Data Firehose delivery stream.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>You can configure the action payload when you send a message to an Amazon
     * Kinesis Data Firehose delivery stream.</p>
     */
    inline void SetPayload(const Payload& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>You can configure the action payload when you send a message to an Amazon
     * Kinesis Data Firehose delivery stream.</p>
     */
    inline void SetPayload(Payload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>You can configure the action payload when you send a message to an Amazon
     * Kinesis Data Firehose delivery stream.</p>
     */
    inline FirehoseAction& WithPayload(const Payload& value) { SetPayload(value); return *this;}

    /**
     * <p>You can configure the action payload when you send a message to an Amazon
     * Kinesis Data Firehose delivery stream.</p>
     */
    inline FirehoseAction& WithPayload(Payload&& value) { SetPayload(std::move(value)); return *this;}

  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::String m_separator;
    bool m_separatorHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
