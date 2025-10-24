﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/SourceAuthType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {
namespace SourceAuthTypeMapper {

static const int OAUTH_HASH = HashingUtils::HashString("OAUTH");
static const int CODECONNECTIONS_HASH = HashingUtils::HashString("CODECONNECTIONS");
static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");

SourceAuthType GetSourceAuthTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OAUTH_HASH) {
    return SourceAuthType::OAUTH;
  } else if (hashCode == CODECONNECTIONS_HASH) {
    return SourceAuthType::CODECONNECTIONS;
  } else if (hashCode == SECRETS_MANAGER_HASH) {
    return SourceAuthType::SECRETS_MANAGER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceAuthType>(hashCode);
  }

  return SourceAuthType::NOT_SET;
}

Aws::String GetNameForSourceAuthType(SourceAuthType enumValue) {
  switch (enumValue) {
    case SourceAuthType::NOT_SET:
      return {};
    case SourceAuthType::OAUTH:
      return "OAUTH";
    case SourceAuthType::CODECONNECTIONS:
      return "CODECONNECTIONS";
    case SourceAuthType::SECRETS_MANAGER:
      return "SECRETS_MANAGER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceAuthTypeMapper
}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
