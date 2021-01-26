/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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

  private:

    int m_seq;
    bool m_seqHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
