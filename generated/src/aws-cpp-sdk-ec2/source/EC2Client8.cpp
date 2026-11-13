/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/EC2EndpointProvider.h>
#include <aws/ec2/EC2ErrorMarshaller.h>
#include <aws/ec2/model/StopInstancesRequest.h>
#include <aws/ec2/model/TerminateClientVpnConnectionsRequest.h>
#include <aws/ec2/model/TerminateInstancesRequest.h>
#include <aws/ec2/model/UnassignIpv6AddressesRequest.h>
#include <aws/ec2/model/UnassignPrivateIpAddressesRequest.h>
#include <aws/ec2/model/UnassignPrivateNatGatewayAddressRequest.h>
#include <aws/ec2/model/UnlockSnapshotRequest.h>
#include <aws/ec2/model/UnmonitorInstancesRequest.h>
#include <aws/ec2/model/UpdateCapacityManagerMonitoredTagKeysRequest.h>
#include <aws/ec2/model/UpdateCapacityManagerOrganizationsAccessRequest.h>
#include <aws/ec2/model/UpdateInterruptibleCapacityReservationAllocationRequest.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsEgressRequest.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsIngressRequest.h>
#include <aws/ec2/model/ValidateSecurityGroupQuotasForInterfaceRequest.h>
#include <aws/ec2/model/WithdrawByoipCidrRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2;
using namespace Aws::EC2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

StopInstancesOutcome EC2Client::StopInstances(const StopInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopInstancesOutcome(result.GetResultWithOwnership()) : StopInstancesOutcome(std::move(result.GetError()));
}

TerminateClientVpnConnectionsOutcome EC2Client::TerminateClientVpnConnections(const TerminateClientVpnConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateClientVpnConnectionsOutcome(result.GetResultWithOwnership())
                            : TerminateClientVpnConnectionsOutcome(std::move(result.GetError()));
}

TerminateInstancesOutcome EC2Client::TerminateInstances(const TerminateInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateInstancesOutcome(result.GetResultWithOwnership())
                            : TerminateInstancesOutcome(std::move(result.GetError()));
}

UnassignIpv6AddressesOutcome EC2Client::UnassignIpv6Addresses(const UnassignIpv6AddressesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnassignIpv6AddressesOutcome(result.GetResultWithOwnership())
                            : UnassignIpv6AddressesOutcome(std::move(result.GetError()));
}

UnassignPrivateIpAddressesOutcome EC2Client::UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnassignPrivateIpAddressesOutcome(result.GetResultWithOwnership())
                            : UnassignPrivateIpAddressesOutcome(std::move(result.GetError()));
}

UnassignPrivateNatGatewayAddressOutcome EC2Client::UnassignPrivateNatGatewayAddress(
    const UnassignPrivateNatGatewayAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnassignPrivateNatGatewayAddressOutcome(result.GetResultWithOwnership())
                            : UnassignPrivateNatGatewayAddressOutcome(std::move(result.GetError()));
}

UnlockSnapshotOutcome EC2Client::UnlockSnapshot(const UnlockSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnlockSnapshotOutcome(result.GetResultWithOwnership()) : UnlockSnapshotOutcome(std::move(result.GetError()));
}

UnmonitorInstancesOutcome EC2Client::UnmonitorInstances(const UnmonitorInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnmonitorInstancesOutcome(result.GetResultWithOwnership())
                            : UnmonitorInstancesOutcome(std::move(result.GetError()));
}

UpdateCapacityManagerMonitoredTagKeysOutcome EC2Client::UpdateCapacityManagerMonitoredTagKeys(
    const UpdateCapacityManagerMonitoredTagKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCapacityManagerMonitoredTagKeysOutcome(result.GetResultWithOwnership())
                            : UpdateCapacityManagerMonitoredTagKeysOutcome(std::move(result.GetError()));
}

UpdateCapacityManagerOrganizationsAccessOutcome EC2Client::UpdateCapacityManagerOrganizationsAccess(
    const UpdateCapacityManagerOrganizationsAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCapacityManagerOrganizationsAccessOutcome(result.GetResultWithOwnership())
                            : UpdateCapacityManagerOrganizationsAccessOutcome(std::move(result.GetError()));
}

UpdateInterruptibleCapacityReservationAllocationOutcome EC2Client::UpdateInterruptibleCapacityReservationAllocation(
    const UpdateInterruptibleCapacityReservationAllocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInterruptibleCapacityReservationAllocationOutcome(result.GetResultWithOwnership())
                            : UpdateInterruptibleCapacityReservationAllocationOutcome(std::move(result.GetError()));
}

UpdateSecurityGroupRuleDescriptionsEgressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsEgress(
    const UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSecurityGroupRuleDescriptionsEgressOutcome(result.GetResultWithOwnership())
                            : UpdateSecurityGroupRuleDescriptionsEgressOutcome(std::move(result.GetError()));
}

UpdateSecurityGroupRuleDescriptionsIngressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsIngress(
    const UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSecurityGroupRuleDescriptionsIngressOutcome(result.GetResultWithOwnership())
                            : UpdateSecurityGroupRuleDescriptionsIngressOutcome(std::move(result.GetError()));
}

ValidateSecurityGroupQuotasForInterfaceOutcome EC2Client::ValidateSecurityGroupQuotasForInterface(
    const ValidateSecurityGroupQuotasForInterfaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidateSecurityGroupQuotasForInterfaceOutcome(result.GetResultWithOwnership())
                            : ValidateSecurityGroupQuotasForInterfaceOutcome(std::move(result.GetError()));
}

WithdrawByoipCidrOutcome EC2Client::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? WithdrawByoipCidrOutcome(result.GetResultWithOwnership())
                            : WithdrawByoipCidrOutcome(std::move(result.GetError()));
}
