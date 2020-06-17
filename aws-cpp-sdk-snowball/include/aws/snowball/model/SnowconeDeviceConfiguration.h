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
#include <aws/snowball/model/WirelessConnection.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Specifies the device configuration for an AWS Snowcone job. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/SnowconeDeviceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API SnowconeDeviceConfiguration
  {
  public:
    SnowconeDeviceConfiguration();
    SnowconeDeviceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SnowconeDeviceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures the wireless connection for the AWS Snowcone device.</p>
     */
    inline const WirelessConnection& GetWirelessConnection() const{ return m_wirelessConnection; }

    /**
     * <p>Configures the wireless connection for the AWS Snowcone device.</p>
     */
    inline bool WirelessConnectionHasBeenSet() const { return m_wirelessConnectionHasBeenSet; }

    /**
     * <p>Configures the wireless connection for the AWS Snowcone device.</p>
     */
    inline void SetWirelessConnection(const WirelessConnection& value) { m_wirelessConnectionHasBeenSet = true; m_wirelessConnection = value; }

    /**
     * <p>Configures the wireless connection for the AWS Snowcone device.</p>
     */
    inline void SetWirelessConnection(WirelessConnection&& value) { m_wirelessConnectionHasBeenSet = true; m_wirelessConnection = std::move(value); }

    /**
     * <p>Configures the wireless connection for the AWS Snowcone device.</p>
     */
    inline SnowconeDeviceConfiguration& WithWirelessConnection(const WirelessConnection& value) { SetWirelessConnection(value); return *this;}

    /**
     * <p>Configures the wireless connection for the AWS Snowcone device.</p>
     */
    inline SnowconeDeviceConfiguration& WithWirelessConnection(WirelessConnection&& value) { SetWirelessConnection(std::move(value)); return *this;}

  private:

    WirelessConnection m_wirelessConnection;
    bool m_wirelessConnectionHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
