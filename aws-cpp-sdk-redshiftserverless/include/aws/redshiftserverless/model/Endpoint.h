/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshiftserverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshiftserverless/model/VpcEndpoint.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The VPC endpoint object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshiftserverless-2021-04-21/Endpoint">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFTSERVERLESS_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(Aws::Utils::Json::JsonView jsonValue);
    Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS address of the VPC endpoint.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The DNS address of the VPC endpoint.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The DNS address of the VPC endpoint.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The DNS address of the VPC endpoint.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The DNS address of the VPC endpoint.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The DNS address of the VPC endpoint.</p>
     */
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The DNS address of the VPC endpoint.</p>
     */
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The DNS address of the VPC endpoint.</p>
     */
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The port that Amazon Redshift Serverless listens on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port that Amazon Redshift Serverless listens on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port that Amazon Redshift Serverless listens on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that Amazon Redshift Serverless listens on.</p>
     */
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>An array of <code>VpcEndpoint</code> objects.</p>
     */
    inline const Aws::Vector<VpcEndpoint>& GetVpcEndpoints() const{ return m_vpcEndpoints; }

    /**
     * <p>An array of <code>VpcEndpoint</code> objects.</p>
     */
    inline bool VpcEndpointsHasBeenSet() const { return m_vpcEndpointsHasBeenSet; }

    /**
     * <p>An array of <code>VpcEndpoint</code> objects.</p>
     */
    inline void SetVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints = value; }

    /**
     * <p>An array of <code>VpcEndpoint</code> objects.</p>
     */
    inline void SetVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints = std::move(value); }

    /**
     * <p>An array of <code>VpcEndpoint</code> objects.</p>
     */
    inline Endpoint& WithVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { SetVpcEndpoints(value); return *this;}

    /**
     * <p>An array of <code>VpcEndpoint</code> objects.</p>
     */
    inline Endpoint& WithVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { SetVpcEndpoints(std::move(value)); return *this;}

    /**
     * <p>An array of <code>VpcEndpoint</code> objects.</p>
     */
    inline Endpoint& AddVpcEndpoints(const VpcEndpoint& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints.push_back(value); return *this; }

    /**
     * <p>An array of <code>VpcEndpoint</code> objects.</p>
     */
    inline Endpoint& AddVpcEndpoints(VpcEndpoint&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::Vector<VpcEndpoint> m_vpcEndpoints;
    bool m_vpcEndpointsHasBeenSet;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
