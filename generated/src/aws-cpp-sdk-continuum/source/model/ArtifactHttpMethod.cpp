/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ArtifactHttpMethod.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace ArtifactHttpMethodMapper {

static const int GET__HASH = HashingUtils::HashString("GET");
static const int HEAD_HASH = HashingUtils::HashString("HEAD");
static const int POST_HASH = HashingUtils::HashString("POST");
static const int PUT_HASH = HashingUtils::HashString("PUT");
static const int PATCH_HASH = HashingUtils::HashString("PATCH");
static const int DELETE__HASH = HashingUtils::HashString("DELETE");
static const int OPTIONS_HASH = HashingUtils::HashString("OPTIONS");

ArtifactHttpMethod GetArtifactHttpMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GET__HASH) {
    return ArtifactHttpMethod::GET_;
  } else if (hashCode == HEAD_HASH) {
    return ArtifactHttpMethod::HEAD;
  } else if (hashCode == POST_HASH) {
    return ArtifactHttpMethod::POST;
  } else if (hashCode == PUT_HASH) {
    return ArtifactHttpMethod::PUT;
  } else if (hashCode == PATCH_HASH) {
    return ArtifactHttpMethod::PATCH;
  } else if (hashCode == DELETE__HASH) {
    return ArtifactHttpMethod::DELETE_;
  } else if (hashCode == OPTIONS_HASH) {
    return ArtifactHttpMethod::OPTIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ArtifactHttpMethod>(hashCode);
  }

  return ArtifactHttpMethod::NOT_SET;
}

Aws::String GetNameForArtifactHttpMethod(ArtifactHttpMethod enumValue) {
  switch (enumValue) {
    case ArtifactHttpMethod::NOT_SET:
      return {};
    case ArtifactHttpMethod::GET_:
      return "GET";
    case ArtifactHttpMethod::HEAD:
      return "HEAD";
    case ArtifactHttpMethod::POST:
      return "POST";
    case ArtifactHttpMethod::PUT:
      return "PUT";
    case ArtifactHttpMethod::PATCH:
      return "PATCH";
    case ArtifactHttpMethod::DELETE_:
      return "DELETE";
    case ArtifactHttpMethod::OPTIONS:
      return "OPTIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ArtifactHttpMethodMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
