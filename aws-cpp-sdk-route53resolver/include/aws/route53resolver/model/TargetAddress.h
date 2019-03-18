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
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In a <a>CreateResolverRule</a> request, an array of the IPs that you want to
   * forward DNS queries to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/TargetAddress">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RESOLVER_API TargetAddress
  {
  public:
    TargetAddress();
    TargetAddress(Aws::Utils::Json::JsonView jsonValue);
    TargetAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline TargetAddress& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline TargetAddress& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline TargetAddress& WithIp(const char* value) { SetIp(value); return *this;}


    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline TargetAddress& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
