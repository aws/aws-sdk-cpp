﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FileUseCaseType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace FileUseCaseTypeMapper {

static const int EMAIL_MESSAGE_HASH = HashingUtils::HashString("EMAIL_MESSAGE");
static const int ATTACHMENT_HASH = HashingUtils::HashString("ATTACHMENT");

FileUseCaseType GetFileUseCaseTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMAIL_MESSAGE_HASH) {
    return FileUseCaseType::EMAIL_MESSAGE;
  } else if (hashCode == ATTACHMENT_HASH) {
    return FileUseCaseType::ATTACHMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FileUseCaseType>(hashCode);
  }

  return FileUseCaseType::NOT_SET;
}

Aws::String GetNameForFileUseCaseType(FileUseCaseType enumValue) {
  switch (enumValue) {
    case FileUseCaseType::NOT_SET:
      return {};
    case FileUseCaseType::EMAIL_MESSAGE:
      return "EMAIL_MESSAGE";
    case FileUseCaseType::ATTACHMENT:
      return "ATTACHMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FileUseCaseTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
