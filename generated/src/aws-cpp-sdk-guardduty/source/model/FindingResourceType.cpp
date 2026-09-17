/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/FindingResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace FindingResourceTypeMapper {

static const int EC2_INSTANCE_HASH = HashingUtils::HashString("EC2_INSTANCE");
static const int EC2_NETWORK_INTERFACE_HASH = HashingUtils::HashString("EC2_NETWORK_INTERFACE");
static const int S3_BUCKET_HASH = HashingUtils::HashString("S3_BUCKET");
static const int S3_OBJECT_HASH = HashingUtils::HashString("S3_OBJECT");
static const int ACCESS_KEY_HASH = HashingUtils::HashString("ACCESS_KEY");
static const int EKS_CLUSTER_HASH = HashingUtils::HashString("EKS_CLUSTER");
static const int KUBERNETES_WORKLOAD_HASH = HashingUtils::HashString("KUBERNETES_WORKLOAD");
static const int CONTAINER_HASH = HashingUtils::HashString("CONTAINER");
static const int ECS_CLUSTER_HASH = HashingUtils::HashString("ECS_CLUSTER");
static const int ECS_TASK_HASH = HashingUtils::HashString("ECS_TASK");
static const int AUTOSCALING_AUTO_SCALING_GROUP_HASH = HashingUtils::HashString("AUTOSCALING_AUTO_SCALING_GROUP");
static const int IAM_INSTANCE_PROFILE_HASH = HashingUtils::HashString("IAM_INSTANCE_PROFILE");
static const int CLOUDFORMATION_STACK_HASH = HashingUtils::HashString("CLOUDFORMATION_STACK");
static const int EC2_LAUNCH_TEMPLATE_HASH = HashingUtils::HashString("EC2_LAUNCH_TEMPLATE");
static const int EC2_VPC_HASH = HashingUtils::HashString("EC2_VPC");
static const int EC2_IMAGE_HASH = HashingUtils::HashString("EC2_IMAGE");
static const int BEDROCK_CUSTOM_MODEL_HASH = HashingUtils::HashString("BEDROCK_CUSTOM_MODEL");
static const int BEDROCK_IMPORTED_MODEL_HASH = HashingUtils::HashString("BEDROCK_IMPORTED_MODEL");
static const int BEDROCK_PROVISIONED_MODEL_HASH = HashingUtils::HashString("BEDROCK_PROVISIONED_MODEL");
static const int BEDROCK_CUSTOM_MODEL_DEPLOYMENT_HASH = HashingUtils::HashString("BEDROCK_CUSTOM_MODEL_DEPLOYMENT");
static const int BEDROCK_INFERENCE_PROFILE_HASH = HashingUtils::HashString("BEDROCK_INFERENCE_PROFILE");
static const int BEDROCK_APPLICATION_INFERENCE_PROFILE_HASH = HashingUtils::HashString("BEDROCK_APPLICATION_INFERENCE_PROFILE");
static const int BEDROCK_PROMPT_HASH = HashingUtils::HashString("BEDROCK_PROMPT");
static const int BEDROCK_PROMPT_ROUTER_HASH = HashingUtils::HashString("BEDROCK_PROMPT_ROUTER");
static const int BEDROCK_GUARDRAIL_HASH = HashingUtils::HashString("BEDROCK_GUARDRAIL");
static const int SAGEMAKER_ENDPOINT_HASH = HashingUtils::HashString("SAGEMAKER_ENDPOINT");

FindingResourceType GetFindingResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EC2_INSTANCE_HASH) {
    return FindingResourceType::EC2_INSTANCE;
  } else if (hashCode == EC2_NETWORK_INTERFACE_HASH) {
    return FindingResourceType::EC2_NETWORK_INTERFACE;
  } else if (hashCode == S3_BUCKET_HASH) {
    return FindingResourceType::S3_BUCKET;
  } else if (hashCode == S3_OBJECT_HASH) {
    return FindingResourceType::S3_OBJECT;
  } else if (hashCode == ACCESS_KEY_HASH) {
    return FindingResourceType::ACCESS_KEY;
  } else if (hashCode == EKS_CLUSTER_HASH) {
    return FindingResourceType::EKS_CLUSTER;
  } else if (hashCode == KUBERNETES_WORKLOAD_HASH) {
    return FindingResourceType::KUBERNETES_WORKLOAD;
  } else if (hashCode == CONTAINER_HASH) {
    return FindingResourceType::CONTAINER;
  } else if (hashCode == ECS_CLUSTER_HASH) {
    return FindingResourceType::ECS_CLUSTER;
  } else if (hashCode == ECS_TASK_HASH) {
    return FindingResourceType::ECS_TASK;
  } else if (hashCode == AUTOSCALING_AUTO_SCALING_GROUP_HASH) {
    return FindingResourceType::AUTOSCALING_AUTO_SCALING_GROUP;
  } else if (hashCode == IAM_INSTANCE_PROFILE_HASH) {
    return FindingResourceType::IAM_INSTANCE_PROFILE;
  } else if (hashCode == CLOUDFORMATION_STACK_HASH) {
    return FindingResourceType::CLOUDFORMATION_STACK;
  } else if (hashCode == EC2_LAUNCH_TEMPLATE_HASH) {
    return FindingResourceType::EC2_LAUNCH_TEMPLATE;
  } else if (hashCode == EC2_VPC_HASH) {
    return FindingResourceType::EC2_VPC;
  } else if (hashCode == EC2_IMAGE_HASH) {
    return FindingResourceType::EC2_IMAGE;
  } else if (hashCode == BEDROCK_CUSTOM_MODEL_HASH) {
    return FindingResourceType::BEDROCK_CUSTOM_MODEL;
  } else if (hashCode == BEDROCK_IMPORTED_MODEL_HASH) {
    return FindingResourceType::BEDROCK_IMPORTED_MODEL;
  } else if (hashCode == BEDROCK_PROVISIONED_MODEL_HASH) {
    return FindingResourceType::BEDROCK_PROVISIONED_MODEL;
  } else if (hashCode == BEDROCK_CUSTOM_MODEL_DEPLOYMENT_HASH) {
    return FindingResourceType::BEDROCK_CUSTOM_MODEL_DEPLOYMENT;
  } else if (hashCode == BEDROCK_INFERENCE_PROFILE_HASH) {
    return FindingResourceType::BEDROCK_INFERENCE_PROFILE;
  } else if (hashCode == BEDROCK_APPLICATION_INFERENCE_PROFILE_HASH) {
    return FindingResourceType::BEDROCK_APPLICATION_INFERENCE_PROFILE;
  } else if (hashCode == BEDROCK_PROMPT_HASH) {
    return FindingResourceType::BEDROCK_PROMPT;
  } else if (hashCode == BEDROCK_PROMPT_ROUTER_HASH) {
    return FindingResourceType::BEDROCK_PROMPT_ROUTER;
  } else if (hashCode == BEDROCK_GUARDRAIL_HASH) {
    return FindingResourceType::BEDROCK_GUARDRAIL;
  } else if (hashCode == SAGEMAKER_ENDPOINT_HASH) {
    return FindingResourceType::SAGEMAKER_ENDPOINT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingResourceType>(hashCode);
  }

  return FindingResourceType::NOT_SET;
}

Aws::String GetNameForFindingResourceType(FindingResourceType enumValue) {
  switch (enumValue) {
    case FindingResourceType::NOT_SET:
      return {};
    case FindingResourceType::EC2_INSTANCE:
      return "EC2_INSTANCE";
    case FindingResourceType::EC2_NETWORK_INTERFACE:
      return "EC2_NETWORK_INTERFACE";
    case FindingResourceType::S3_BUCKET:
      return "S3_BUCKET";
    case FindingResourceType::S3_OBJECT:
      return "S3_OBJECT";
    case FindingResourceType::ACCESS_KEY:
      return "ACCESS_KEY";
    case FindingResourceType::EKS_CLUSTER:
      return "EKS_CLUSTER";
    case FindingResourceType::KUBERNETES_WORKLOAD:
      return "KUBERNETES_WORKLOAD";
    case FindingResourceType::CONTAINER:
      return "CONTAINER";
    case FindingResourceType::ECS_CLUSTER:
      return "ECS_CLUSTER";
    case FindingResourceType::ECS_TASK:
      return "ECS_TASK";
    case FindingResourceType::AUTOSCALING_AUTO_SCALING_GROUP:
      return "AUTOSCALING_AUTO_SCALING_GROUP";
    case FindingResourceType::IAM_INSTANCE_PROFILE:
      return "IAM_INSTANCE_PROFILE";
    case FindingResourceType::CLOUDFORMATION_STACK:
      return "CLOUDFORMATION_STACK";
    case FindingResourceType::EC2_LAUNCH_TEMPLATE:
      return "EC2_LAUNCH_TEMPLATE";
    case FindingResourceType::EC2_VPC:
      return "EC2_VPC";
    case FindingResourceType::EC2_IMAGE:
      return "EC2_IMAGE";
    case FindingResourceType::BEDROCK_CUSTOM_MODEL:
      return "BEDROCK_CUSTOM_MODEL";
    case FindingResourceType::BEDROCK_IMPORTED_MODEL:
      return "BEDROCK_IMPORTED_MODEL";
    case FindingResourceType::BEDROCK_PROVISIONED_MODEL:
      return "BEDROCK_PROVISIONED_MODEL";
    case FindingResourceType::BEDROCK_CUSTOM_MODEL_DEPLOYMENT:
      return "BEDROCK_CUSTOM_MODEL_DEPLOYMENT";
    case FindingResourceType::BEDROCK_INFERENCE_PROFILE:
      return "BEDROCK_INFERENCE_PROFILE";
    case FindingResourceType::BEDROCK_APPLICATION_INFERENCE_PROFILE:
      return "BEDROCK_APPLICATION_INFERENCE_PROFILE";
    case FindingResourceType::BEDROCK_PROMPT:
      return "BEDROCK_PROMPT";
    case FindingResourceType::BEDROCK_PROMPT_ROUTER:
      return "BEDROCK_PROMPT_ROUTER";
    case FindingResourceType::BEDROCK_GUARDRAIL:
      return "BEDROCK_GUARDRAIL";
    case FindingResourceType::SAGEMAKER_ENDPOINT:
      return "SAGEMAKER_ENDPOINT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingResourceTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
