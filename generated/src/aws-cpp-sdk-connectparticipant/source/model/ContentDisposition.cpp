/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/ContentDisposition.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectParticipant {
namespace Model {
namespace ContentDispositionMapper {

static const int INLINE_HASH = HashingUtils::HashString("INLINE");
static const int ATTACHMENT_HASH = HashingUtils::HashString("ATTACHMENT");

ContentDisposition GetContentDispositionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INLINE_HASH) {
    return ContentDisposition::INLINE;
  } else if (hashCode == ATTACHMENT_HASH) {
    return ContentDisposition::ATTACHMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContentDisposition>(hashCode);
  }

  return ContentDisposition::NOT_SET;
}

Aws::String GetNameForContentDisposition(ContentDisposition enumValue) {
  switch (enumValue) {
    case ContentDisposition::NOT_SET:
      return {};
    case ContentDisposition::INLINE:
      return "INLINE";
    case ContentDisposition::ATTACHMENT:
      return "ATTACHMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContentDispositionMapper
}  // namespace Model
}  // namespace ConnectParticipant
}  // namespace Aws
