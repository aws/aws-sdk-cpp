/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IntegrationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace IntegrationTypeMapper {

static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
static const int GITLAB_HASH = HashingUtils::HashString("GITLAB");
static const int S3_HASH = HashingUtils::HashString("S3");

IntegrationType GetIntegrationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GITHUB_HASH) {
    return IntegrationType::GITHUB;
  } else if (hashCode == GITLAB_HASH) {
    return IntegrationType::GITLAB;
  } else if (hashCode == S3_HASH) {
    return IntegrationType::S3;
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
    case IntegrationType::GITHUB:
      return "GITHUB";
    case IntegrationType::GITLAB:
      return "GITLAB";
    case IntegrationType::S3:
      return "S3";
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
}  // namespace Continuum
}  // namespace Aws
