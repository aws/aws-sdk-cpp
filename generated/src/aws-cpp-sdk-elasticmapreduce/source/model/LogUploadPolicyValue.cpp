/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticmapreduce/model/LogUploadPolicyValue.h>

using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {
namespace LogUploadPolicyValueMapper {

static const int emr_managed_HASH = HashingUtils::HashString("emr-managed");
static const int on_customer_s3only_HASH = HashingUtils::HashString("on-customer-s3only");
static const int disabled_HASH = HashingUtils::HashString("disabled");

LogUploadPolicyValue GetLogUploadPolicyValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == emr_managed_HASH) {
    return LogUploadPolicyValue::emr_managed;
  } else if (hashCode == on_customer_s3only_HASH) {
    return LogUploadPolicyValue::on_customer_s3only;
  } else if (hashCode == disabled_HASH) {
    return LogUploadPolicyValue::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LogUploadPolicyValue>(hashCode);
  }

  return LogUploadPolicyValue::NOT_SET;
}

Aws::String GetNameForLogUploadPolicyValue(LogUploadPolicyValue enumValue) {
  switch (enumValue) {
    case LogUploadPolicyValue::NOT_SET:
      return {};
    case LogUploadPolicyValue::emr_managed:
      return "emr-managed";
    case LogUploadPolicyValue::on_customer_s3only:
      return "on-customer-s3only";
    case LogUploadPolicyValue::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LogUploadPolicyValueMapper
}  // namespace Model
}  // namespace EMR
}  // namespace Aws
