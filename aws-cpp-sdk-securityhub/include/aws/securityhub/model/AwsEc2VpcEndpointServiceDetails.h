/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2VpcEndpointServiceServiceTypeDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains details about the service configuration for a VPC endpoint
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpcEndpointServiceDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpcEndpointServiceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceDetails();
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether requests from other Amazon Web Services accounts to create an
     * endpoint to the service must first be accepted.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>Whether requests from other Amazon Web Services accounts to create an
     * endpoint to the service must first be accepted.</p>
     */
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }

    /**
     * <p>Whether requests from other Amazon Web Services accounts to create an
     * endpoint to the service must first be accepted.</p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>Whether requests from other Amazon Web Services accounts to create an
     * endpoint to the service must first be accepted.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The DNS names for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBaseEndpointDnsNames() const{ return m_baseEndpointDnsNames; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline bool BaseEndpointDnsNamesHasBeenSet() const { return m_baseEndpointDnsNamesHasBeenSet; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline void SetBaseEndpointDnsNames(const Aws::Vector<Aws::String>& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = value; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline void SetBaseEndpointDnsNames(Aws::Vector<Aws::String>&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = std::move(value); }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithBaseEndpointDnsNames(const Aws::Vector<Aws::String>& value) { SetBaseEndpointDnsNames(value); return *this;}

    /**
     * <p>The DNS names for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithBaseEndpointDnsNames(Aws::Vector<Aws::String>&& value) { SetBaseEndpointDnsNames(std::move(value)); return *this;}

    /**
     * <p>The DNS names for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddBaseEndpointDnsNames(const Aws::String& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddBaseEndpointDnsNames(Aws::String&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddBaseEndpointDnsNames(const char* value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }


    /**
     * <p>Whether the service manages its VPC endpoints.</p>
     */
    inline bool GetManagesVpcEndpoints() const{ return m_managesVpcEndpoints; }

    /**
     * <p>Whether the service manages its VPC endpoints.</p>
     */
    inline bool ManagesVpcEndpointsHasBeenSet() const { return m_managesVpcEndpointsHasBeenSet; }

    /**
     * <p>Whether the service manages its VPC endpoints.</p>
     */
    inline void SetManagesVpcEndpoints(bool value) { m_managesVpcEndpointsHasBeenSet = true; m_managesVpcEndpoints = value; }

    /**
     * <p>Whether the service manages its VPC endpoints.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithManagesVpcEndpoints(bool value) { SetManagesVpcEndpoints(value); return *this;}


    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const{ return m_gatewayLoadBalancerArns; }

    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline void SetGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = value; }

    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline void SetGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::move(value); }

    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetGatewayLoadBalancerArns(value); return *this;}

    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetGatewayLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddGatewayLoadBalancerArns(const Aws::String& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddGatewayLoadBalancerArns(Aws::String&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddGatewayLoadBalancerArns(const char* value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const{ return m_networkLoadBalancerArns; }

    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline void SetNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = value; }

    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline void SetNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::move(value); }

    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetNetworkLoadBalancerArns(value); return *this;}

    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetNetworkLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddNetworkLoadBalancerArns(const Aws::String& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddNetworkLoadBalancerArns(Aws::String&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddNetworkLoadBalancerArns(const char* value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The private DNS name for the service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>The identifier of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The identifier of the service.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The identifier of the service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The identifier of the service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The identifier of the service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The identifier of the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The identifier of the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline const Aws::String& GetServiceState() const{ return m_serviceState; }

    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline bool ServiceStateHasBeenSet() const { return m_serviceStateHasBeenSet; }

    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline void SetServiceState(const Aws::String& value) { m_serviceStateHasBeenSet = true; m_serviceState = value; }

    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline void SetServiceState(Aws::String&& value) { m_serviceStateHasBeenSet = true; m_serviceState = std::move(value); }

    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline void SetServiceState(const char* value) { m_serviceStateHasBeenSet = true; m_serviceState.assign(value); }

    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceState(const Aws::String& value) { SetServiceState(value); return *this;}

    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceState(Aws::String&& value) { SetServiceState(std::move(value)); return *this;}

    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceState(const char* value) { SetServiceState(value); return *this;}


    /**
     * <p>The types for the service.</p>
     */
    inline const Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The types for the service.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The types for the service.</p>
     */
    inline void SetServiceType(const Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The types for the service.</p>
     */
    inline void SetServiceType(Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The types for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceType(const Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>& value) { SetServiceType(value); return *this;}

    /**
     * <p>The types for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& WithServiceType(Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>&& value) { SetServiceType(std::move(value)); return *this;}

    /**
     * <p>The types for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddServiceType(const AwsEc2VpcEndpointServiceServiceTypeDetails& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(value); return *this; }

    /**
     * <p>The types for the service.</p>
     */
    inline AwsEc2VpcEndpointServiceDetails& AddServiceType(AwsEc2VpcEndpointServiceServiceTypeDetails&& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(std::move(value)); return *this; }

  private:

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_baseEndpointDnsNames;
    bool m_baseEndpointDnsNamesHasBeenSet = false;

    bool m_managesVpcEndpoints;
    bool m_managesVpcEndpointsHasBeenSet = false;

    Aws::Vector<Aws::String> m_gatewayLoadBalancerArns;
    bool m_gatewayLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkLoadBalancerArns;
    bool m_networkLoadBalancerArnsHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceState;
    bool m_serviceStateHasBeenSet = false;

    Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails> m_serviceType;
    bool m_serviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
