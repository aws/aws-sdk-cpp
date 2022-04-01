﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/MessageType.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Information about a Sidewalk router.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkSendDataToDevice">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API SidewalkSendDataToDevice
  {
  public:
    SidewalkSendDataToDevice();
    SidewalkSendDataToDevice(Aws::Utils::Json::JsonView jsonValue);
    SidewalkSendDataToDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sequence number.</p>
     */
    inline int GetSeq() const{ return m_seq; }

    /**
     * <p>The sequence number.</p>
     */
    inline bool SeqHasBeenSet() const { return m_seqHasBeenSet; }

    /**
     * <p>The sequence number.</p>
     */
    inline void SetSeq(int value) { m_seqHasBeenSet = true; m_seq = value; }

    /**
     * <p>The sequence number.</p>
     */
    inline SidewalkSendDataToDevice& WithSeq(int value) { SetSeq(value); return *this;}


    
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    
    inline SidewalkSendDataToDevice& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    
    inline SidewalkSendDataToDevice& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}

  private:

    int m_seq;
    bool m_seqHasBeenSet;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
