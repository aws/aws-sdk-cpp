/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dax/DAXErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DAX;

namespace Aws
{
namespace DAX
{
namespace DAXErrorMapper
{

static constexpr uint32_t TAG_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("TagNotFoundFault");
static constexpr uint32_t SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetGroupAlreadyExistsFault");
static constexpr uint32_t INVALID_A_R_N_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidARNFault");
static constexpr uint32_t INVALID_CLUSTER_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterStateFault");
static constexpr uint32_t NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("NodeQuotaForClusterExceededFault");
static constexpr uint32_t CLUSTER_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterNotFoundFault");
static constexpr uint32_t SUBNET_IN_USE_HASH = ConstExprHashingUtils::HashString("SubnetInUse");
static constexpr uint32_t PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ParameterGroupQuotaExceededFault");
static constexpr uint32_t CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterQuotaForCustomerExceededFault");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t SUBNET_GROUP_IN_USE_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetGroupInUseFault");
static constexpr uint32_t SUBNET_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetQuotaExceededFault");
static constexpr uint32_t INVALID_SUBNET_HASH = ConstExprHashingUtils::HashString("InvalidSubnet");
static constexpr uint32_t SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetGroupQuotaExceededFault");
static constexpr uint32_t NODE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("NodeNotFoundFault");
static constexpr uint32_t INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH = ConstExprHashingUtils::HashString("InsufficientClusterCapacityFault");
static constexpr uint32_t PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ParameterGroupNotFoundFault");
static constexpr uint32_t PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ParameterGroupAlreadyExistsFault");
static constexpr uint32_t SUBNET_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetGroupNotFoundFault");
static constexpr uint32_t INVALID_PARAMETER_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidParameterGroupStateFault");
static constexpr uint32_t INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidVPCNetworkStateFault");
static constexpr uint32_t SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ServiceLinkedRoleNotFoundFault");
static constexpr uint32_t TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagQuotaPerResourceExceeded");
static constexpr uint32_t NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("NodeQuotaForCustomerExceededFault");
static constexpr uint32_t CLUSTER_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterAlreadyExistsFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TAG_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::TAG_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SUBNET_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_A_R_N_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::INVALID_A_R_N_FAULT), false);
  }
  else if (hashCode == INVALID_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::INVALID_CLUSTER_STATE_FAULT), false);
  }
  else if (hashCode == NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::CLUSTER_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SUBNET_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SUBNET_IN_USE), false);
  }
  else if (hashCode == PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == SUBNET_GROUP_IN_USE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SUBNET_GROUP_IN_USE_FAULT), false);
  }
  else if (hashCode == SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SUBNET_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::INVALID_SUBNET), false);
  }
  else if (hashCode == SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == NODE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::NODE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::INSUFFICIENT_CLUSTER_CAPACITY_FAULT), false);
  }
  else if (hashCode == PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::PARAMETER_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::PARAMETER_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SUBNET_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::INVALID_PARAMETER_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), false);
  }
  else if (hashCode == SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SERVICE_LINKED_ROLE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::TAG_QUOTA_PER_RESOURCE_EXCEEDED), false);
  }
  else if (hashCode == NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::CLUSTER_ALREADY_EXISTS_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DAXErrorMapper
} // namespace DAX
} // namespace Aws
