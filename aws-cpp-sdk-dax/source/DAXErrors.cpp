/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dax/DAXErrors.h>

using namespace Aws::Client;
using namespace Aws::DAX;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace DAXErrorMapper
{

static const int TAG_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("TagNotFoundFault");
static const int SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("SubnetGroupAlreadyExistsFault");
static const int INVALID_A_R_N_FAULT_HASH = HashingUtils::HashString("InvalidARNFault");
static const int INVALID_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidClusterStateFault");
static const int SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SubnetGroupQuotaExceededFault");
static const int NODE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("NodeNotFoundFault");
static const int NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("NodeQuotaForClusterExceededFault");
static const int CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ClusterNotFoundFault");
static const int SUBNET_IN_USE_HASH = HashingUtils::HashString("SubnetInUse");
static const int PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ParameterGroupQuotaExceededFault");
static const int INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientClusterCapacityFault");
static const int PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ParameterGroupNotFoundFault");
static const int PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ParameterGroupAlreadyExistsFault");
static const int SUBNET_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubnetGroupNotFoundFault");
static const int INVALID_PARAMETER_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidParameterGroupStateFault");
static const int CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ClusterQuotaForCustomerExceededFault");
static const int INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = HashingUtils::HashString("InvalidVPCNetworkStateFault");
static const int SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ServiceLinkedRoleNotFoundFault");
static const int SUBNET_GROUP_IN_USE_FAULT_HASH = HashingUtils::HashString("SubnetGroupInUseFault");
static const int SUBNET_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SubnetQuotaExceededFault");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH = HashingUtils::HashString("TagQuotaPerResourceExceeded");
static const int NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("NodeQuotaForCustomerExceededFault");
static const int CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ClusterAlreadyExistsFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
  else if (hashCode == SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == NODE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::NODE_NOT_FOUND_FAULT), false);
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
  else if (hashCode == CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), false);
  }
  else if (hashCode == SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DAXErrors::SERVICE_LINKED_ROLE_NOT_FOUND_FAULT), false);
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
