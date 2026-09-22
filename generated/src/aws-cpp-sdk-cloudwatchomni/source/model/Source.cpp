/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/Source.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace SourceMapper {

static const int VPC_FLOW_LOG_HASH = HashingUtils::HashString("VPC_FLOW_LOG");
static const int CLOUDTRAIL_HASH = HashingUtils::HashString("CLOUDTRAIL");
static const int IAM_POLICY_HASH = HashingUtils::HashString("IAM_POLICY");
static const int CODE_SEMANTICS_HASH = HashingUtils::HashString("CODE_SEMANTICS");
static const int TELEMETRY_HASH = HashingUtils::HashString("TELEMETRY");
static const int AZURE_VNET_FLOW_LOG_HASH = HashingUtils::HashString("AZURE_VNET_FLOW_LOG");
static const int ELB_ACCESS_LOG_HASH = HashingUtils::HashString("ELB_ACCESS_LOG");
static const int CLOUDFRONT_ACCESS_LOG_HASH = HashingUtils::HashString("CLOUDFRONT_ACCESS_LOG");
static const int S3_ACCESS_LOG_HASH = HashingUtils::HashString("S3_ACCESS_LOG");
static const int WAF_ACCESS_LOG_HASH = HashingUtils::HashString("WAF_ACCESS_LOG");
static const int AWS_INTEGRATION_HASH = HashingUtils::HashString("AWS_INTEGRATION");
static const int CONFIG_HASH = HashingUtils::HashString("CONFIG");

Source GetSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VPC_FLOW_LOG_HASH) {
    return Source::VPC_FLOW_LOG;
  } else if (hashCode == CLOUDTRAIL_HASH) {
    return Source::CLOUDTRAIL;
  } else if (hashCode == IAM_POLICY_HASH) {
    return Source::IAM_POLICY;
  } else if (hashCode == CODE_SEMANTICS_HASH) {
    return Source::CODE_SEMANTICS;
  } else if (hashCode == TELEMETRY_HASH) {
    return Source::TELEMETRY;
  } else if (hashCode == AZURE_VNET_FLOW_LOG_HASH) {
    return Source::AZURE_VNET_FLOW_LOG;
  } else if (hashCode == ELB_ACCESS_LOG_HASH) {
    return Source::ELB_ACCESS_LOG;
  } else if (hashCode == CLOUDFRONT_ACCESS_LOG_HASH) {
    return Source::CLOUDFRONT_ACCESS_LOG;
  } else if (hashCode == S3_ACCESS_LOG_HASH) {
    return Source::S3_ACCESS_LOG;
  } else if (hashCode == WAF_ACCESS_LOG_HASH) {
    return Source::WAF_ACCESS_LOG;
  } else if (hashCode == AWS_INTEGRATION_HASH) {
    return Source::AWS_INTEGRATION;
  } else if (hashCode == CONFIG_HASH) {
    return Source::CONFIG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Source>(hashCode);
  }

  return Source::NOT_SET;
}

Aws::String GetNameForSource(Source enumValue) {
  switch (enumValue) {
    case Source::NOT_SET:
      return {};
    case Source::VPC_FLOW_LOG:
      return "VPC_FLOW_LOG";
    case Source::CLOUDTRAIL:
      return "CLOUDTRAIL";
    case Source::IAM_POLICY:
      return "IAM_POLICY";
    case Source::CODE_SEMANTICS:
      return "CODE_SEMANTICS";
    case Source::TELEMETRY:
      return "TELEMETRY";
    case Source::AZURE_VNET_FLOW_LOG:
      return "AZURE_VNET_FLOW_LOG";
    case Source::ELB_ACCESS_LOG:
      return "ELB_ACCESS_LOG";
    case Source::CLOUDFRONT_ACCESS_LOG:
      return "CLOUDFRONT_ACCESS_LOG";
    case Source::S3_ACCESS_LOG:
      return "S3_ACCESS_LOG";
    case Source::WAF_ACCESS_LOG:
      return "WAF_ACCESS_LOG";
    case Source::AWS_INTEGRATION:
      return "AWS_INTEGRATION";
    case Source::CONFIG:
      return "CONFIG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
