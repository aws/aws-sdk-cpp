/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>A resource is one of the following: the ARN for an Amazon Web Services
   * resource that is supported by Global Accelerator to be added as an endpoint, or
   * a CIDR range that specifies a bring your own IP (BYOIP) address
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_GLOBALACCELERATOR_API Resource();
    AWS_GLOBALACCELERATOR_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint ID for the endpoint that is specified as a Amazon Web Services
     * resource. </p> <p>An endpoint ID for the cross-account feature is the ARN of an
     * Amazon Web Services resource, such as a Network Load Balancer, that Global
     * Accelerator supports as an endpoint for an accelerator.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The endpoint ID for the endpoint that is specified as a Amazon Web Services
     * resource. </p> <p>An endpoint ID for the cross-account feature is the ARN of an
     * Amazon Web Services resource, such as a Network Load Balancer, that Global
     * Accelerator supports as an endpoint for an accelerator.</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>The endpoint ID for the endpoint that is specified as a Amazon Web Services
     * resource. </p> <p>An endpoint ID for the cross-account feature is the ARN of an
     * Amazon Web Services resource, such as a Network Load Balancer, that Global
     * Accelerator supports as an endpoint for an accelerator.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>The endpoint ID for the endpoint that is specified as a Amazon Web Services
     * resource. </p> <p>An endpoint ID for the cross-account feature is the ARN of an
     * Amazon Web Services resource, such as a Network Load Balancer, that Global
     * Accelerator supports as an endpoint for an accelerator.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>The endpoint ID for the endpoint that is specified as a Amazon Web Services
     * resource. </p> <p>An endpoint ID for the cross-account feature is the ARN of an
     * Amazon Web Services resource, such as a Network Load Balancer, that Global
     * Accelerator supports as an endpoint for an accelerator.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>The endpoint ID for the endpoint that is specified as a Amazon Web Services
     * resource. </p> <p>An endpoint ID for the cross-account feature is the ARN of an
     * Amazon Web Services resource, such as a Network Load Balancer, that Global
     * Accelerator supports as an endpoint for an accelerator.</p>
     */
    inline Resource& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The endpoint ID for the endpoint that is specified as a Amazon Web Services
     * resource. </p> <p>An endpoint ID for the cross-account feature is the ARN of an
     * Amazon Web Services resource, such as a Network Load Balancer, that Global
     * Accelerator supports as an endpoint for an accelerator.</p>
     */
    inline Resource& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The endpoint ID for the endpoint that is specified as a Amazon Web Services
     * resource. </p> <p>An endpoint ID for the cross-account feature is the ARN of an
     * Amazon Web Services resource, such as a Network Load Balancer, that Global
     * Accelerator supports as an endpoint for an accelerator.</p>
     */
    inline Resource& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>An IP address range, in CIDR format, that is specified as resource. The
     * address must be provisioned and advertised in Global Accelerator by following
     * the bring your own IP address (BYOIP) process for Global Accelerator</p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>An IP address range, in CIDR format, that is specified as resource. The
     * address must be provisioned and advertised in Global Accelerator by following
     * the bring your own IP address (BYOIP) process for Global Accelerator</p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>An IP address range, in CIDR format, that is specified as resource. The
     * address must be provisioned and advertised in Global Accelerator by following
     * the bring your own IP address (BYOIP) process for Global Accelerator</p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>An IP address range, in CIDR format, that is specified as resource. The
     * address must be provisioned and advertised in Global Accelerator by following
     * the bring your own IP address (BYOIP) process for Global Accelerator</p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>An IP address range, in CIDR format, that is specified as resource. The
     * address must be provisioned and advertised in Global Accelerator by following
     * the bring your own IP address (BYOIP) process for Global Accelerator</p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>An IP address range, in CIDR format, that is specified as resource. The
     * address must be provisioned and advertised in Global Accelerator by following
     * the bring your own IP address (BYOIP) process for Global Accelerator</p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline Resource& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>An IP address range, in CIDR format, that is specified as resource. The
     * address must be provisioned and advertised in Global Accelerator by following
     * the bring your own IP address (BYOIP) process for Global Accelerator</p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline Resource& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>An IP address range, in CIDR format, that is specified as resource. The
     * address must be provisioned and advertised in Global Accelerator by following
     * the bring your own IP address (BYOIP) process for Global Accelerator</p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline Resource& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The Amazon Web Services Region where a shared endpoint resource is
     * located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region where a shared endpoint resource is
     * located.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where a shared endpoint resource is
     * located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region where a shared endpoint resource is
     * located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where a shared endpoint resource is
     * located.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region where a shared endpoint resource is
     * located.</p>
     */
    inline Resource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where a shared endpoint resource is
     * located.</p>
     */
    inline Resource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where a shared endpoint resource is
     * located.</p>
     */
    inline Resource& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
