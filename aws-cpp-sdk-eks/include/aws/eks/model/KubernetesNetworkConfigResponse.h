/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The Kubernetes network configuration for the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubernetesNetworkConfigResponse">AWS
   * API Reference</a></p>
   */
  class AWS_EKS_API KubernetesNetworkConfigResponse
  {
  public:
    KubernetesNetworkConfigResponse();
    KubernetesNetworkConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    KubernetesNetworkConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CIDR block that Kubernetes service IP addresses are assigned from. If you
     * didn't specify a CIDR block, then Kubernetes assigns addresses from either the
     * 10.100.0.0/16 or 172.20.0.0/16 CIDR blocks. If this was specified, then it was
     * specified when the cluster was created and it cannot be changed.</p>
     */
    inline const Aws::String& GetServiceIpv4Cidr() const{ return m_serviceIpv4Cidr; }

    /**
     * <p>The CIDR block that Kubernetes service IP addresses are assigned from. If you
     * didn't specify a CIDR block, then Kubernetes assigns addresses from either the
     * 10.100.0.0/16 or 172.20.0.0/16 CIDR blocks. If this was specified, then it was
     * specified when the cluster was created and it cannot be changed.</p>
     */
    inline bool ServiceIpv4CidrHasBeenSet() const { return m_serviceIpv4CidrHasBeenSet; }

    /**
     * <p>The CIDR block that Kubernetes service IP addresses are assigned from. If you
     * didn't specify a CIDR block, then Kubernetes assigns addresses from either the
     * 10.100.0.0/16 or 172.20.0.0/16 CIDR blocks. If this was specified, then it was
     * specified when the cluster was created and it cannot be changed.</p>
     */
    inline void SetServiceIpv4Cidr(const Aws::String& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = value; }

    /**
     * <p>The CIDR block that Kubernetes service IP addresses are assigned from. If you
     * didn't specify a CIDR block, then Kubernetes assigns addresses from either the
     * 10.100.0.0/16 or 172.20.0.0/16 CIDR blocks. If this was specified, then it was
     * specified when the cluster was created and it cannot be changed.</p>
     */
    inline void SetServiceIpv4Cidr(Aws::String&& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = std::move(value); }

    /**
     * <p>The CIDR block that Kubernetes service IP addresses are assigned from. If you
     * didn't specify a CIDR block, then Kubernetes assigns addresses from either the
     * 10.100.0.0/16 or 172.20.0.0/16 CIDR blocks. If this was specified, then it was
     * specified when the cluster was created and it cannot be changed.</p>
     */
    inline void SetServiceIpv4Cidr(const char* value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr.assign(value); }

    /**
     * <p>The CIDR block that Kubernetes service IP addresses are assigned from. If you
     * didn't specify a CIDR block, then Kubernetes assigns addresses from either the
     * 10.100.0.0/16 or 172.20.0.0/16 CIDR blocks. If this was specified, then it was
     * specified when the cluster was created and it cannot be changed.</p>
     */
    inline KubernetesNetworkConfigResponse& WithServiceIpv4Cidr(const Aws::String& value) { SetServiceIpv4Cidr(value); return *this;}

    /**
     * <p>The CIDR block that Kubernetes service IP addresses are assigned from. If you
     * didn't specify a CIDR block, then Kubernetes assigns addresses from either the
     * 10.100.0.0/16 or 172.20.0.0/16 CIDR blocks. If this was specified, then it was
     * specified when the cluster was created and it cannot be changed.</p>
     */
    inline KubernetesNetworkConfigResponse& WithServiceIpv4Cidr(Aws::String&& value) { SetServiceIpv4Cidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR block that Kubernetes service IP addresses are assigned from. If you
     * didn't specify a CIDR block, then Kubernetes assigns addresses from either the
     * 10.100.0.0/16 or 172.20.0.0/16 CIDR blocks. If this was specified, then it was
     * specified when the cluster was created and it cannot be changed.</p>
     */
    inline KubernetesNetworkConfigResponse& WithServiceIpv4Cidr(const char* value) { SetServiceIpv4Cidr(value); return *this;}

  private:

    Aws::String m_serviceIpv4Cidr;
    bool m_serviceIpv4CidrHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
