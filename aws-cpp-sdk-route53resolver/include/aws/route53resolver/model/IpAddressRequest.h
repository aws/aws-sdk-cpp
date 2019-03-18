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
   * <p>In an <a>CreateResolverEndpoint</a> request, a subnet and IP address that you
   * want to use for DNS queries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/IpAddressRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RESOLVER_API IpAddressRequest
  {
  public:
    IpAddressRequest();
    IpAddressRequest(Aws::Utils::Json::JsonView jsonValue);
    IpAddressRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subnet that contains the IP address.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet that contains the IP address.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet that contains the IP address.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet that contains the IP address.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet that contains the IP address.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet that contains the IP address.</p>
     */
    inline IpAddressRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet that contains the IP address.</p>
     */
    inline IpAddressRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet that contains the IP address.</p>
     */
    inline IpAddressRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline IpAddressRequest& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline IpAddressRequest& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline IpAddressRequest& WithIp(const char* value) { SetIp(value); return *this;}

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_ip;
    bool m_ipHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
