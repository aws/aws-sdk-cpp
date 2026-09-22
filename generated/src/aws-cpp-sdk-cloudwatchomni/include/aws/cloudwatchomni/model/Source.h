/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class Source {
  NOT_SET,
  VPC_FLOW_LOG,
  CLOUDTRAIL,
  IAM_POLICY,
  CODE_SEMANTICS,
  TELEMETRY,
  AZURE_VNET_FLOW_LOG,
  ELB_ACCESS_LOG,
  CLOUDFRONT_ACCESS_LOG,
  S3_ACCESS_LOG,
  WAF_ACCESS_LOG,
  AWS_INTEGRATION,
  CONFIG
};

namespace SourceMapper {
AWS_CLOUDWATCHOMNI_API Source GetSourceForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForSource(Source value);
}  // namespace SourceMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
