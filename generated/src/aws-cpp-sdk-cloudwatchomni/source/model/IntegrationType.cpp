/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/IntegrationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace IntegrationTypeMapper {

static const int AWS_CONFIG_SLREC_HASH = HashingUtils::HashString("AWS_CONFIG_SLREC");
static const int SLACK_HASH = HashingUtils::HashString("SLACK");
static const int EXTERNAL_AGENT_HASH = HashingUtils::HashString("EXTERNAL_AGENT");
static const int AWS_INTEGRATION_HASH = HashingUtils::HashString("AWS_INTEGRATION");

IntegrationType GetIntegrationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_CONFIG_SLREC_HASH) {
    return IntegrationType::AWS_CONFIG_SLREC;
  } else if (hashCode == SLACK_HASH) {
    return IntegrationType::SLACK;
  } else if (hashCode == EXTERNAL_AGENT_HASH) {
    return IntegrationType::EXTERNAL_AGENT;
  } else if (hashCode == AWS_INTEGRATION_HASH) {
    return IntegrationType::AWS_INTEGRATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IntegrationType>(hashCode);
  }

  return IntegrationType::NOT_SET;
}

Aws::String GetNameForIntegrationType(IntegrationType enumValue) {
  switch (enumValue) {
    case IntegrationType::NOT_SET:
      return {};
    case IntegrationType::AWS_CONFIG_SLREC:
      return "AWS_CONFIG_SLREC";
    case IntegrationType::SLACK:
      return "SLACK";
    case IntegrationType::EXTERNAL_AGENT:
      return "EXTERNAL_AGENT";
    case IntegrationType::AWS_INTEGRATION:
      return "AWS_INTEGRATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntegrationTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
