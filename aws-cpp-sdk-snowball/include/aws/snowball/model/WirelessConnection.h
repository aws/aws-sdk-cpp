/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>

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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Configures the wireless connection on an Snowcone device.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/WirelessConnection">AWS
   * API Reference</a></p>
   */
  class WirelessConnection
  {
  public:
    AWS_SNOWBALL_API WirelessConnection();
    AWS_SNOWBALL_API WirelessConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API WirelessConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables the Wi-Fi adapter on an Snowcone device.</p>
     */
    inline bool GetIsWifiEnabled() const{ return m_isWifiEnabled; }

    /**
     * <p>Enables the Wi-Fi adapter on an Snowcone device.</p>
     */
    inline bool IsWifiEnabledHasBeenSet() const { return m_isWifiEnabledHasBeenSet; }

    /**
     * <p>Enables the Wi-Fi adapter on an Snowcone device.</p>
     */
    inline void SetIsWifiEnabled(bool value) { m_isWifiEnabledHasBeenSet = true; m_isWifiEnabled = value; }

    /**
     * <p>Enables the Wi-Fi adapter on an Snowcone device.</p>
     */
    inline WirelessConnection& WithIsWifiEnabled(bool value) { SetIsWifiEnabled(value); return *this;}

  private:

    bool m_isWifiEnabled;
    bool m_isWifiEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
