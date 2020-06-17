/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Configures the wireless connection on an AWS Snowcone device.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/WirelessConnection">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API WirelessConnection
  {
  public:
    WirelessConnection();
    WirelessConnection(Aws::Utils::Json::JsonView jsonValue);
    WirelessConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables the Wi-Fi adapter on an AWS Snowcone device.</p>
     */
    inline bool GetIsWifiEnabled() const{ return m_isWifiEnabled; }

    /**
     * <p>Enables the Wi-Fi adapter on an AWS Snowcone device.</p>
     */
    inline bool IsWifiEnabledHasBeenSet() const { return m_isWifiEnabledHasBeenSet; }

    /**
     * <p>Enables the Wi-Fi adapter on an AWS Snowcone device.</p>
     */
    inline void SetIsWifiEnabled(bool value) { m_isWifiEnabledHasBeenSet = true; m_isWifiEnabled = value; }

    /**
     * <p>Enables the Wi-Fi adapter on an AWS Snowcone device.</p>
     */
    inline WirelessConnection& WithIsWifiEnabled(bool value) { SetIsWifiEnabled(value); return *this;}

  private:

    bool m_isWifiEnabled;
    bool m_isWifiEnabledHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
