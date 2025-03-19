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
   * triggered the action to an Amazon SQS queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SqsAction">AWS
   * API Reference</a></p>
   */
  class SqsAction
  {
  public:
    AWS_IOTEVENTS_API SqsAction() = default;
    AWS_IOTEVENTS_API SqsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SqsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the SQS queue where the data is written.</p>
     */
    inline const Aws::String& GetQueueUrl() const { return m_queueUrl; }
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }
    template<typename QueueUrlT = Aws::String>
    void SetQueueUrl(QueueUrlT&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::forward<QueueUrlT>(value); }
    template<typename QueueUrlT = Aws::String>
    SqsAction& WithQueueUrl(QueueUrlT&& value) { SetQueueUrl(std::forward<QueueUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this to TRUE if you want the data to be base-64 encoded before it is
     * written to the queue. Otherwise, set this to FALSE.</p>
     */
    inline bool GetUseBase64() const { return m_useBase64; }
    inline bool UseBase64HasBeenSet() const { return m_useBase64HasBeenSet; }
    inline void SetUseBase64(bool value) { m_useBase64HasBeenSet = true; m_useBase64 = value; }
    inline SqsAction& WithUseBase64(bool value) { SetUseBase64(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can configure the action payload when you send a message to an Amazon SQS
     * queue.</p>
     */
    inline const Payload& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Payload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Payload>
    SqsAction& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    bool m_useBase64{false};
    bool m_useBase64HasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
