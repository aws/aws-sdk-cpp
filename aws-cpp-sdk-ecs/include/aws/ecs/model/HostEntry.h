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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Hostnames and IP address entries that are added to the
   * <code>/etc/hosts</code> file of a container via the <code>extraHosts</code>
   * parameter of its <a>ContainerDefinition</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/HostEntry">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API HostEntry
  {
  public:
    HostEntry();
    HostEntry(Aws::Utils::Json::JsonView jsonValue);
    HostEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hostname to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The hostname to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The hostname to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The hostname to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The hostname to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The hostname to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline HostEntry& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The hostname to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline HostEntry& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The hostname to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline HostEntry& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The IP address to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline HostEntry& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline HostEntry& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address to use in the <code>/etc/hosts</code> entry.</p>
     */
    inline HostEntry& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
