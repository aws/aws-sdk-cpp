/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The settings for delivering logs to Amazon Kinesis Data
   * Firehose.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/FirehoseLogDelivery">AWS
   * API Reference</a></p>
   */
  class FirehoseLogDelivery
  {
  public:
    AWS_KAFKACONNECT_API FirehoseLogDelivery();
    AWS_KAFKACONNECT_API FirehoseLogDelivery(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API FirehoseLogDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Kinesis Data Firehose delivery stream that is the destination
     * for log delivery.</p>
     */
    inline const Aws::String& GetDeliveryStream() const{ return m_deliveryStream; }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream that is the destination
     * for log delivery.</p>
     */
    inline bool DeliveryStreamHasBeenSet() const { return m_deliveryStreamHasBeenSet; }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream that is the destination
     * for log delivery.</p>
     */
    inline void SetDeliveryStream(const Aws::String& value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream = value; }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream that is the destination
     * for log delivery.</p>
     */
    inline void SetDeliveryStream(Aws::String&& value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream = std::move(value); }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream that is the destination
     * for log delivery.</p>
     */
    inline void SetDeliveryStream(const char* value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream.assign(value); }

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream that is the destination
     * for log delivery.</p>
     */
    inline FirehoseLogDelivery& WithDeliveryStream(const Aws::String& value) { SetDeliveryStream(value); return *this;}

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream that is the destination
     * for log delivery.</p>
     */
    inline FirehoseLogDelivery& WithDeliveryStream(Aws::String&& value) { SetDeliveryStream(std::move(value)); return *this;}

    /**
     * <p>The name of the Kinesis Data Firehose delivery stream that is the destination
     * for log delivery.</p>
     */
    inline FirehoseLogDelivery& WithDeliveryStream(const char* value) { SetDeliveryStream(value); return *this;}


    /**
     * <p>Specifies whether connector logs get delivered to Amazon Kinesis Data
     * Firehose.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether connector logs get delivered to Amazon Kinesis Data
     * Firehose.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether connector logs get delivered to Amazon Kinesis Data
     * Firehose.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether connector logs get delivered to Amazon Kinesis Data
     * Firehose.</p>
     */
    inline FirehoseLogDelivery& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_deliveryStream;
    bool m_deliveryStreamHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
