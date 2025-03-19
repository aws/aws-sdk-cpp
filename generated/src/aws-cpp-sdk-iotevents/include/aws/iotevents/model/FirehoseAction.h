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
    AWS_IOTEVENTS_API FirehoseAction() = default;
    AWS_IOTEVENTS_API FirehoseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API FirehoseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Kinesis Data Firehose delivery stream where the data is
     * written.</p>
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
     * <p>A character separator that is used to separate records written to the Kinesis
     * Data Firehose delivery stream. Valid values are: '\n' (newline), '\t' (tab),
     * '\r\n' (Windows newline), ',' (comma).</p>
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
     * <p>You can configure the action payload when you send a message to an Amazon
     * Kinesis Data Firehose delivery stream.</p>
     */
    inline const Payload& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Payload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Payload>
    FirehoseAction& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}
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
