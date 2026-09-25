/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/VpcProtocol.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace VpcProtocolMapper {

static const int HTTP_HASH = HashingUtils::HashString("HTTP");
static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");

VpcProtocol GetVpcProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HTTP_HASH) {
    return VpcProtocol::HTTP;
  } else if (hashCode == HTTPS_HASH) {
    return VpcProtocol::HTTPS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VpcProtocol>(hashCode);
  }

  return VpcProtocol::NOT_SET;
}

Aws::String GetNameForVpcProtocol(VpcProtocol enumValue) {
  switch (enumValue) {
    case VpcProtocol::NOT_SET:
      return {};
    case VpcProtocol::HTTP:
      return "HTTP";
    case VpcProtocol::HTTPS:
      return "HTTPS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VpcProtocolMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
