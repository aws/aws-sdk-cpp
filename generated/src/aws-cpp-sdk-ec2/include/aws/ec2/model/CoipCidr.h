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


    ///@{
    /**
     * <p> An address range in a customer-owned IP address space. </p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline CoipCidr& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline CoipCidr& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline CoipCidr& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the address pool. </p>
     */
    inline const Aws::String& GetCoipPoolId() const{ return m_coipPoolId; }
    inline bool CoipPoolIdHasBeenSet() const { return m_coipPoolIdHasBeenSet; }
    inline void SetCoipPoolId(const Aws::String& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = value; }
    inline void SetCoipPoolId(Aws::String&& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = std::move(value); }
    inline void SetCoipPoolId(const char* value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId.assign(value); }
    inline CoipCidr& WithCoipPoolId(const Aws::String& value) { SetCoipPoolId(value); return *this;}
    inline CoipCidr& WithCoipPoolId(Aws::String&& value) { SetCoipPoolId(std::move(value)); return *this;}
    inline CoipCidr& WithCoipPoolId(const char* value) { SetCoipPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = value; }
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::move(value); }
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId.assign(value); }
    inline CoipCidr& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}
    inline CoipCidr& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}
    inline CoipCidr& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}
    ///@}
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
