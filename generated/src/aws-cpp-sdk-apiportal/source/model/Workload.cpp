/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/Workload.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace WorkloadMapper {

static const int MCP_HASH = HashingUtils::HashString("MCP");
static const int LLM_HASH = HashingUtils::HashString("LLM");
static const int A2A_HASH = HashingUtils::HashString("A2A");

Workload GetWorkloadForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MCP_HASH) {
    return Workload::MCP;
  } else if (hashCode == LLM_HASH) {
    return Workload::LLM;
  } else if (hashCode == A2A_HASH) {
    return Workload::A2A;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Workload>(hashCode);
  }

  return Workload::NOT_SET;
}

Aws::String GetNameForWorkload(Workload enumValue) {
  switch (enumValue) {
    case Workload::NOT_SET:
      return {};
    case Workload::MCP:
      return "MCP";
    case Workload::LLM:
      return "LLM";
    case Workload::A2A:
      return "A2A";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WorkloadMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
