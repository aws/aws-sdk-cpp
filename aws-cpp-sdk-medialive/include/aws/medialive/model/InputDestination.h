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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDestinationVpc.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The settings for a PUSH type input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDestination">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputDestination
  {
  public:
    InputDestination();
    InputDestination(Aws::Utils::Json::JsonView jsonValue);
    InputDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.

     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.

     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.

     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.

     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.

     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.

     */
    inline InputDestination& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.

     */
    inline InputDestination& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.

     */
    inline InputDestination& WithIp(const char* value) { SetIp(value); return *this;}


    /**
     * The port number for the input.
     */
    inline const Aws::String& GetPort() const{ return m_port; }

    /**
     * The port number for the input.
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * The port number for the input.
     */
    inline void SetPort(const Aws::String& value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * The port number for the input.
     */
    inline void SetPort(Aws::String&& value) { m_portHasBeenSet = true; m_port = std::move(value); }

    /**
     * The port number for the input.
     */
    inline void SetPort(const char* value) { m_portHasBeenSet = true; m_port.assign(value); }

    /**
     * The port number for the input.
     */
    inline InputDestination& WithPort(const Aws::String& value) { SetPort(value); return *this;}

    /**
     * The port number for the input.
     */
    inline InputDestination& WithPort(Aws::String&& value) { SetPort(std::move(value)); return *this;}

    /**
     * The port number for the input.
     */
    inline InputDestination& WithPort(const char* value) { SetPort(value); return *this;}


    /**
     * This represents the endpoint that the customer stream will be
pushed to.

     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * This represents the endpoint that the customer stream will be
pushed to.

     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * This represents the endpoint that the customer stream will be
pushed to.

     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * This represents the endpoint that the customer stream will be
pushed to.

     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * This represents the endpoint that the customer stream will be
pushed to.

     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * This represents the endpoint that the customer stream will be
pushed to.

     */
    inline InputDestination& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * This represents the endpoint that the customer stream will be
pushed to.

     */
    inline InputDestination& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * This represents the endpoint that the customer stream will be
pushed to.

     */
    inline InputDestination& WithUrl(const char* value) { SetUrl(value); return *this;}


    
    inline const InputDestinationVpc& GetVpc() const{ return m_vpc; }

    
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }

    
    inline void SetVpc(const InputDestinationVpc& value) { m_vpcHasBeenSet = true; m_vpc = value; }

    
    inline void SetVpc(InputDestinationVpc&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }

    
    inline InputDestination& WithVpc(const InputDestinationVpc& value) { SetVpc(value); return *this;}

    
    inline InputDestination& WithVpc(InputDestinationVpc&& value) { SetVpc(std::move(value)); return *this;}

  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet;

    Aws::String m_port;
    bool m_portHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;

    InputDestinationVpc m_vpc;
    bool m_vpcHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
