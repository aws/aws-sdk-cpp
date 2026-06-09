/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/SessionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace SessionTypeMapper {

static const int LIVY_HASH = HashingUtils::HashString("LIVY");
static const int SPARK_CONNECT_HASH = HashingUtils::HashString("SPARK_CONNECT");

SessionType GetSessionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LIVY_HASH) {
    return SessionType::LIVY;
  } else if (hashCode == SPARK_CONNECT_HASH) {
    return SessionType::SPARK_CONNECT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SessionType>(hashCode);
  }

  return SessionType::NOT_SET;
}

Aws::String GetNameForSessionType(SessionType enumValue) {
  switch (enumValue) {
    case SessionType::NOT_SET:
      return {};
    case SessionType::LIVY:
      return "LIVY";
    case SessionType::SPARK_CONNECT:
      return "SPARK_CONNECT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SessionTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
