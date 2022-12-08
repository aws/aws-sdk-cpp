/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/GlobalIdentity.h>
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
   * <p>GSM object for network measurement reports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GsmNmrObj">AWS
   * API Reference</a></p>
   */
  class GsmNmrObj
  {
  public:
    AWS_IOTWIRELESS_API GsmNmrObj();
    AWS_IOTWIRELESS_API GsmNmrObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API GsmNmrObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>GSM base station identity code (BSIC).</p>
     */
    inline int GetBsic() const{ return m_bsic; }

    /**
     * <p>GSM base station identity code (BSIC).</p>
     */
    inline bool BsicHasBeenSet() const { return m_bsicHasBeenSet; }

    /**
     * <p>GSM base station identity code (BSIC).</p>
     */
    inline void SetBsic(int value) { m_bsicHasBeenSet = true; m_bsic = value; }

    /**
     * <p>GSM base station identity code (BSIC).</p>
     */
    inline GsmNmrObj& WithBsic(int value) { SetBsic(value); return *this;}


    /**
     * <p>GSM broadcast control channel.</p>
     */
    inline int GetBcch() const{ return m_bcch; }

    /**
     * <p>GSM broadcast control channel.</p>
     */
    inline bool BcchHasBeenSet() const { return m_bcchHasBeenSet; }

    /**
     * <p>GSM broadcast control channel.</p>
     */
    inline void SetBcch(int value) { m_bcchHasBeenSet = true; m_bcch = value; }

    /**
     * <p>GSM broadcast control channel.</p>
     */
    inline GsmNmrObj& WithBcch(int value) { SetBcch(value); return *this;}


    /**
     * <p>Rx level, which is the received signal power, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline int GetRxLevel() const{ return m_rxLevel; }

    /**
     * <p>Rx level, which is the received signal power, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline bool RxLevelHasBeenSet() const { return m_rxLevelHasBeenSet; }

    /**
     * <p>Rx level, which is the received signal power, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline void SetRxLevel(int value) { m_rxLevelHasBeenSet = true; m_rxLevel = value; }

    /**
     * <p>Rx level, which is the received signal power, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline GsmNmrObj& WithRxLevel(int value) { SetRxLevel(value); return *this;}


    /**
     * <p>Global identity information of the GSM object.</p>
     */
    inline const GlobalIdentity& GetGlobalIdentity() const{ return m_globalIdentity; }

    /**
     * <p>Global identity information of the GSM object.</p>
     */
    inline bool GlobalIdentityHasBeenSet() const { return m_globalIdentityHasBeenSet; }

    /**
     * <p>Global identity information of the GSM object.</p>
     */
    inline void SetGlobalIdentity(const GlobalIdentity& value) { m_globalIdentityHasBeenSet = true; m_globalIdentity = value; }

    /**
     * <p>Global identity information of the GSM object.</p>
     */
    inline void SetGlobalIdentity(GlobalIdentity&& value) { m_globalIdentityHasBeenSet = true; m_globalIdentity = std::move(value); }

    /**
     * <p>Global identity information of the GSM object.</p>
     */
    inline GsmNmrObj& WithGlobalIdentity(const GlobalIdentity& value) { SetGlobalIdentity(value); return *this;}

    /**
     * <p>Global identity information of the GSM object.</p>
     */
    inline GsmNmrObj& WithGlobalIdentity(GlobalIdentity&& value) { SetGlobalIdentity(std::move(value)); return *this;}

  private:

    int m_bsic;
    bool m_bsicHasBeenSet = false;

    int m_bcch;
    bool m_bcchHasBeenSet = false;

    int m_rxLevel;
    bool m_rxLevelHasBeenSet = false;

    GlobalIdentity m_globalIdentity;
    bool m_globalIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
