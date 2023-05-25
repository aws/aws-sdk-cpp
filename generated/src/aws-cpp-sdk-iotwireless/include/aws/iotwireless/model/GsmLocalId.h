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
   * <p>GSM local ID information, which corresponds to the local identification
   * parameters of a GSM cell.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GsmLocalId">AWS
   * API Reference</a></p>
   */
  class GsmLocalId
  {
  public:
    AWS_IOTWIRELESS_API GsmLocalId();
    AWS_IOTWIRELESS_API GsmLocalId(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API GsmLocalId& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline GsmLocalId& WithBsic(int value) { SetBsic(value); return *this;}


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
    inline GsmLocalId& WithBcch(int value) { SetBcch(value); return *this;}

  private:

    int m_bsic;
    bool m_bsicHasBeenSet = false;

    int m_bcch;
    bool m_bcchHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
