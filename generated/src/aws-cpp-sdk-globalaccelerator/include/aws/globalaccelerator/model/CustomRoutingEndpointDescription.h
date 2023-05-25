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
   * <p>A complex type for an endpoint for a custom routing accelerator. Each
   * endpoint group can include one or more endpoints, which are virtual private
   * cloud (VPC) subnets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CustomRoutingEndpointDescription">AWS
   * API Reference</a></p>
   */
  class CustomRoutingEndpointDescription
  {
  public:
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointDescription();
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline CustomRoutingEndpointDescription& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline CustomRoutingEndpointDescription& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline CustomRoutingEndpointDescription& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}

  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
