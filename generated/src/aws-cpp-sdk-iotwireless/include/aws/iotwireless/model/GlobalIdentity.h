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
   * <p>Global identity information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GlobalIdentity">AWS
   * API Reference</a></p>
   */
  class GlobalIdentity
  {
  public:
    AWS_IOTWIRELESS_API GlobalIdentity() = default;
    AWS_IOTWIRELESS_API GlobalIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API GlobalIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Location area code of the global identity.</p>
     */
    inline int GetLac() const { return m_lac; }
    inline bool LacHasBeenSet() const { return m_lacHasBeenSet; }
    inline void SetLac(int value) { m_lacHasBeenSet = true; m_lac = value; }
    inline GlobalIdentity& WithLac(int value) { SetLac(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>GERAN (GSM EDGE Radio Access Network) cell global identifier.</p>
     */
    inline int GetGeranCid() const { return m_geranCid; }
    inline bool GeranCidHasBeenSet() const { return m_geranCidHasBeenSet; }
    inline void SetGeranCid(int value) { m_geranCidHasBeenSet = true; m_geranCid = value; }
    inline GlobalIdentity& WithGeranCid(int value) { SetGeranCid(value); return *this;}
    ///@}
  private:

    int m_lac{0};
    bool m_lacHasBeenSet = false;

    int m_geranCid{0};
    bool m_geranCidHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
