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
   * <p>A complex type for an endpoint. Specifies information about the endpoint to
   * remove from the endpoint group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/EndpointIdentifier">AWS
   * API Reference</a></p>
   */
  class EndpointIdentifier
  {
  public:
    AWS_GLOBALACCELERATOR_API EndpointIdentifier();
    AWS_GLOBALACCELERATOR_API EndpointIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API EndpointIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID.
     * </p> <p>An Application Load Balancer can be either internal or
     * internet-facing.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID.
     * </p> <p>An Application Load Balancer can be either internal or
     * internet-facing.</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID.
     * </p> <p>An Application Load Balancer can be either internal or
     * internet-facing.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID.
     * </p> <p>An Application Load Balancer can be either internal or
     * internet-facing.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID.
     * </p> <p>An Application Load Balancer can be either internal or
     * internet-facing.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID.
     * </p> <p>An Application Load Balancer can be either internal or
     * internet-facing.</p>
     */
    inline EndpointIdentifier& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID.
     * </p> <p>An Application Load Balancer can be either internal or
     * internet-facing.</p>
     */
    inline EndpointIdentifier& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID.
     * </p> <p>An Application Load Balancer can be either internal or
     * internet-facing.</p>
     */
    inline EndpointIdentifier& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>Indicates whether client IP address preservation is enabled for an endpoint.
     * The value is true or false. </p> <p>If the value is set to true, the client's IP
     * address is preserved in the <code>X-Forwarded-For</code> request header as
     * traffic travels to applications on the endpoint fronted by the accelerator.</p>
     */
    inline bool GetClientIPPreservationEnabled() const{ return m_clientIPPreservationEnabled; }

    /**
     * <p>Indicates whether client IP address preservation is enabled for an endpoint.
     * The value is true or false. </p> <p>If the value is set to true, the client's IP
     * address is preserved in the <code>X-Forwarded-For</code> request header as
     * traffic travels to applications on the endpoint fronted by the accelerator.</p>
     */
    inline bool ClientIPPreservationEnabledHasBeenSet() const { return m_clientIPPreservationEnabledHasBeenSet; }

    /**
     * <p>Indicates whether client IP address preservation is enabled for an endpoint.
     * The value is true or false. </p> <p>If the value is set to true, the client's IP
     * address is preserved in the <code>X-Forwarded-For</code> request header as
     * traffic travels to applications on the endpoint fronted by the accelerator.</p>
     */
    inline void SetClientIPPreservationEnabled(bool value) { m_clientIPPreservationEnabledHasBeenSet = true; m_clientIPPreservationEnabled = value; }

    /**
     * <p>Indicates whether client IP address preservation is enabled for an endpoint.
     * The value is true or false. </p> <p>If the value is set to true, the client's IP
     * address is preserved in the <code>X-Forwarded-For</code> request header as
     * traffic travels to applications on the endpoint fronted by the accelerator.</p>
     */
    inline EndpointIdentifier& WithClientIPPreservationEnabled(bool value) { SetClientIPPreservationEnabled(value); return *this;}

  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    bool m_clientIPPreservationEnabled;
    bool m_clientIPPreservationEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
