/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SchemaStatusReasonCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace SchemaStatusReasonCodeMapper {

static const int ANALYSIS_RULE_MISSING_HASH = HashingUtils::HashString("ANALYSIS_RULE_MISSING");
static const int ANALYSIS_TEMPLATES_NOT_CONFIGURED_HASH = HashingUtils::HashString("ANALYSIS_TEMPLATES_NOT_CONFIGURED");
static const int ANALYSIS_PROVIDERS_NOT_CONFIGURED_HASH = HashingUtils::HashString("ANALYSIS_PROVIDERS_NOT_CONFIGURED");
static const int DIFFERENTIAL_PRIVACY_POLICY_NOT_CONFIGURED_HASH = HashingUtils::HashString("DIFFERENTIAL_PRIVACY_POLICY_NOT_CONFIGURED");
static const int ID_MAPPING_TABLE_NOT_POPULATED_HASH = HashingUtils::HashString("ID_MAPPING_TABLE_NOT_POPULATED");
static const int COLLABORATION_ANALYSIS_RULE_NOT_CONFIGURED_HASH = HashingUtils::HashString("COLLABORATION_ANALYSIS_RULE_NOT_CONFIGURED");
static const int ADDITIONAL_ANALYSES_NOT_CONFIGURED_HASH = HashingUtils::HashString("ADDITIONAL_ANALYSES_NOT_CONFIGURED");
static const int RESULT_RECEIVERS_NOT_CONFIGURED_HASH = HashingUtils::HashString("RESULT_RECEIVERS_NOT_CONFIGURED");
static const int ADDITIONAL_ANALYSES_NOT_ALLOWED_HASH = HashingUtils::HashString("ADDITIONAL_ANALYSES_NOT_ALLOWED");
static const int RESULT_RECEIVERS_NOT_ALLOWED_HASH = HashingUtils::HashString("RESULT_RECEIVERS_NOT_ALLOWED");
static const int ANALYSIS_RULE_TYPES_NOT_COMPATIBLE_HASH = HashingUtils::HashString("ANALYSIS_RULE_TYPES_NOT_COMPATIBLE");
static const int INTERMEDIATE_TABLE_NOT_POPULATED_HASH = HashingUtils::HashString("INTERMEDIATE_TABLE_NOT_POPULATED");
static const int INTERMEDIATE_TABLE_ANALYSIS_RULE_MISSING_HASH = HashingUtils::HashString("INTERMEDIATE_TABLE_ANALYSIS_RULE_MISSING");
static const int INTERMEDIATE_TABLE_BASE_TABLE_REMOVED_HASH = HashingUtils::HashString("INTERMEDIATE_TABLE_BASE_TABLE_REMOVED");
static const int INTERMEDIATE_TABLE_INHERITED_CONSTRAINTS_VIOLATED_HASH =
    HashingUtils::HashString("INTERMEDIATE_TABLE_INHERITED_CONSTRAINTS_VIOLATED");
static const int INTERMEDIATE_TABLE_DISALLOWED_BY_DATA_PROVIDER_HASH =
    HashingUtils::HashString("INTERMEDIATE_TABLE_DISALLOWED_BY_DATA_PROVIDER");
static const int INTERMEDIATE_TABLE_RETENTION_PERIOD_EXPIRED_HASH = HashingUtils::HashString("INTERMEDIATE_TABLE_RETENTION_PERIOD_EXPIRED");

SchemaStatusReasonCode GetSchemaStatusReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ANALYSIS_RULE_MISSING_HASH) {
    return SchemaStatusReasonCode::ANALYSIS_RULE_MISSING;
  } else if (hashCode == ANALYSIS_TEMPLATES_NOT_CONFIGURED_HASH) {
    return SchemaStatusReasonCode::ANALYSIS_TEMPLATES_NOT_CONFIGURED;
  } else if (hashCode == ANALYSIS_PROVIDERS_NOT_CONFIGURED_HASH) {
    return SchemaStatusReasonCode::ANALYSIS_PROVIDERS_NOT_CONFIGURED;
  } else if (hashCode == DIFFERENTIAL_PRIVACY_POLICY_NOT_CONFIGURED_HASH) {
    return SchemaStatusReasonCode::DIFFERENTIAL_PRIVACY_POLICY_NOT_CONFIGURED;
  } else if (hashCode == ID_MAPPING_TABLE_NOT_POPULATED_HASH) {
    return SchemaStatusReasonCode::ID_MAPPING_TABLE_NOT_POPULATED;
  } else if (hashCode == COLLABORATION_ANALYSIS_RULE_NOT_CONFIGURED_HASH) {
    return SchemaStatusReasonCode::COLLABORATION_ANALYSIS_RULE_NOT_CONFIGURED;
  } else if (hashCode == ADDITIONAL_ANALYSES_NOT_CONFIGURED_HASH) {
    return SchemaStatusReasonCode::ADDITIONAL_ANALYSES_NOT_CONFIGURED;
  } else if (hashCode == RESULT_RECEIVERS_NOT_CONFIGURED_HASH) {
    return SchemaStatusReasonCode::RESULT_RECEIVERS_NOT_CONFIGURED;
  } else if (hashCode == ADDITIONAL_ANALYSES_NOT_ALLOWED_HASH) {
    return SchemaStatusReasonCode::ADDITIONAL_ANALYSES_NOT_ALLOWED;
  } else if (hashCode == RESULT_RECEIVERS_NOT_ALLOWED_HASH) {
    return SchemaStatusReasonCode::RESULT_RECEIVERS_NOT_ALLOWED;
  } else if (hashCode == ANALYSIS_RULE_TYPES_NOT_COMPATIBLE_HASH) {
    return SchemaStatusReasonCode::ANALYSIS_RULE_TYPES_NOT_COMPATIBLE;
  } else if (hashCode == INTERMEDIATE_TABLE_NOT_POPULATED_HASH) {
    return SchemaStatusReasonCode::INTERMEDIATE_TABLE_NOT_POPULATED;
  } else if (hashCode == INTERMEDIATE_TABLE_ANALYSIS_RULE_MISSING_HASH) {
    return SchemaStatusReasonCode::INTERMEDIATE_TABLE_ANALYSIS_RULE_MISSING;
  } else if (hashCode == INTERMEDIATE_TABLE_BASE_TABLE_REMOVED_HASH) {
    return SchemaStatusReasonCode::INTERMEDIATE_TABLE_BASE_TABLE_REMOVED;
  } else if (hashCode == INTERMEDIATE_TABLE_INHERITED_CONSTRAINTS_VIOLATED_HASH) {
    return SchemaStatusReasonCode::INTERMEDIATE_TABLE_INHERITED_CONSTRAINTS_VIOLATED;
  } else if (hashCode == INTERMEDIATE_TABLE_DISALLOWED_BY_DATA_PROVIDER_HASH) {
    return SchemaStatusReasonCode::INTERMEDIATE_TABLE_DISALLOWED_BY_DATA_PROVIDER;
  } else if (hashCode == INTERMEDIATE_TABLE_RETENTION_PERIOD_EXPIRED_HASH) {
    return SchemaStatusReasonCode::INTERMEDIATE_TABLE_RETENTION_PERIOD_EXPIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SchemaStatusReasonCode>(hashCode);
  }

  return SchemaStatusReasonCode::NOT_SET;
}

Aws::String GetNameForSchemaStatusReasonCode(SchemaStatusReasonCode enumValue) {
  switch (enumValue) {
    case SchemaStatusReasonCode::NOT_SET:
      return {};
    case SchemaStatusReasonCode::ANALYSIS_RULE_MISSING:
      return "ANALYSIS_RULE_MISSING";
    case SchemaStatusReasonCode::ANALYSIS_TEMPLATES_NOT_CONFIGURED:
      return "ANALYSIS_TEMPLATES_NOT_CONFIGURED";
    case SchemaStatusReasonCode::ANALYSIS_PROVIDERS_NOT_CONFIGURED:
      return "ANALYSIS_PROVIDERS_NOT_CONFIGURED";
    case SchemaStatusReasonCode::DIFFERENTIAL_PRIVACY_POLICY_NOT_CONFIGURED:
      return "DIFFERENTIAL_PRIVACY_POLICY_NOT_CONFIGURED";
    case SchemaStatusReasonCode::ID_MAPPING_TABLE_NOT_POPULATED:
      return "ID_MAPPING_TABLE_NOT_POPULATED";
    case SchemaStatusReasonCode::COLLABORATION_ANALYSIS_RULE_NOT_CONFIGURED:
      return "COLLABORATION_ANALYSIS_RULE_NOT_CONFIGURED";
    case SchemaStatusReasonCode::ADDITIONAL_ANALYSES_NOT_CONFIGURED:
      return "ADDITIONAL_ANALYSES_NOT_CONFIGURED";
    case SchemaStatusReasonCode::RESULT_RECEIVERS_NOT_CONFIGURED:
      return "RESULT_RECEIVERS_NOT_CONFIGURED";
    case SchemaStatusReasonCode::ADDITIONAL_ANALYSES_NOT_ALLOWED:
      return "ADDITIONAL_ANALYSES_NOT_ALLOWED";
    case SchemaStatusReasonCode::RESULT_RECEIVERS_NOT_ALLOWED:
      return "RESULT_RECEIVERS_NOT_ALLOWED";
    case SchemaStatusReasonCode::ANALYSIS_RULE_TYPES_NOT_COMPATIBLE:
      return "ANALYSIS_RULE_TYPES_NOT_COMPATIBLE";
    case SchemaStatusReasonCode::INTERMEDIATE_TABLE_NOT_POPULATED:
      return "INTERMEDIATE_TABLE_NOT_POPULATED";
    case SchemaStatusReasonCode::INTERMEDIATE_TABLE_ANALYSIS_RULE_MISSING:
      return "INTERMEDIATE_TABLE_ANALYSIS_RULE_MISSING";
    case SchemaStatusReasonCode::INTERMEDIATE_TABLE_BASE_TABLE_REMOVED:
      return "INTERMEDIATE_TABLE_BASE_TABLE_REMOVED";
    case SchemaStatusReasonCode::INTERMEDIATE_TABLE_INHERITED_CONSTRAINTS_VIOLATED:
      return "INTERMEDIATE_TABLE_INHERITED_CONSTRAINTS_VIOLATED";
    case SchemaStatusReasonCode::INTERMEDIATE_TABLE_DISALLOWED_BY_DATA_PROVIDER:
      return "INTERMEDIATE_TABLE_DISALLOWED_BY_DATA_PROVIDER";
    case SchemaStatusReasonCode::INTERMEDIATE_TABLE_RETENTION_PERIOD_EXPIRED:
      return "INTERMEDIATE_TABLE_RETENTION_PERIOD_EXPIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SchemaStatusReasonCodeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
