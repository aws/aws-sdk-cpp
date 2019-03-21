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
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{

  /**
   * <p>The connectivity status of the thing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingConnectivity">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ThingConnectivity
  {
  public:
    ThingConnectivity();
    ThingConnectivity(Aws::Utils::Json::JsonView jsonValue);
    ThingConnectivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if the thing is connected to the AWS IoT service; false if it is not
     * connected.</p>
     */
    inline bool GetConnected() const{ return m_connected; }

    /**
     * <p>True if the thing is connected to the AWS IoT service; false if it is not
     * connected.</p>
     */
    inline bool ConnectedHasBeenSet() const { return m_connectedHasBeenSet; }

    /**
     * <p>True if the thing is connected to the AWS IoT service; false if it is not
     * connected.</p>
     */
    inline void SetConnected(bool value) { m_connectedHasBeenSet = true; m_connected = value; }

    /**
     * <p>True if the thing is connected to the AWS IoT service; false if it is not
     * connected.</p>
     */
    inline ThingConnectivity& WithConnected(bool value) { SetConnected(value); return *this;}


    /**
     * <p>The epoch time (in milliseconds) when the thing last connected or
     * disconnected. If the thing has been disconnected for more than a few weeks, the
     * time value might be missing.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The epoch time (in milliseconds) when the thing last connected or
     * disconnected. If the thing has been disconnected for more than a few weeks, the
     * time value might be missing.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The epoch time (in milliseconds) when the thing last connected or
     * disconnected. If the thing has been disconnected for more than a few weeks, the
     * time value might be missing.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The epoch time (in milliseconds) when the thing last connected or
     * disconnected. If the thing has been disconnected for more than a few weeks, the
     * time value might be missing.</p>
     */
    inline ThingConnectivity& WithTimestamp(long long value) { SetTimestamp(value); return *this;}

  private:

    bool m_connected;
    bool m_connectedHasBeenSet;

    long long m_timestamp;
    bool m_timestampHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
