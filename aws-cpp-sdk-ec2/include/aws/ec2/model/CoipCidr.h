/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p> Information about a customer-owned IP address range. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CoipCidr">AWS API
   * Reference</a></p>
   */
  class CoipCidr
  {
  public:
    AWS_EC2_API CoipCidr();
    AWS_EC2_API CoipCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CoipCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> An address range in a customer-owned IP address space. </p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p> An address range in a customer-owned IP address space. </p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p> An address range in a customer-owned IP address space. </p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p> An address range in a customer-owned IP address space. </p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p> An address range in a customer-owned IP address space. </p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p> An address range in a customer-owned IP address space. </p>
     */
    inline CoipCidr& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p> An address range in a customer-owned IP address space. </p>
     */
    inline CoipCidr& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p> An address range in a customer-owned IP address space. </p>
     */
    inline CoipCidr& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p> The ID of the address pool. </p>
     */
    inline const Aws::String& GetCoipPoolId() const{ return m_coipPoolId; }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline bool CoipPoolIdHasBeenSet() const { return m_coipPoolIdHasBeenSet; }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline void SetCoipPoolId(const Aws::String& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = value; }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline void SetCoipPoolId(Aws::String&& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = std::move(value); }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline void SetCoipPoolId(const char* value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId.assign(value); }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline CoipCidr& WithCoipPoolId(const Aws::String& value) { SetCoipPoolId(value); return *this;}

    /**
     * <p> The ID of the address pool. </p>
     */
    inline CoipCidr& WithCoipPoolId(Aws::String&& value) { SetCoipPoolId(std::move(value)); return *this;}

    /**
     * <p> The ID of the address pool. </p>
     */
    inline CoipCidr& WithCoipPoolId(const char* value) { SetCoipPoolId(value); return *this;}


    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = value; }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::move(value); }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId.assign(value); }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline CoipCidr& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline CoipCidr& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline CoipCidr& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_coipPoolId;
    bool m_coipPoolIdHasBeenSet = false;

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
