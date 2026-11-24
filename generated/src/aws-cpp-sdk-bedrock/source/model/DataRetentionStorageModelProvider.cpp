/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DataRetentionStorageModelProvider.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace DataRetentionStorageModelProviderMapper {

static const int anthropic_HASH = HashingUtils::HashString("anthropic");
static const int openai_HASH = HashingUtils::HashString("openai");

DataRetentionStorageModelProvider GetDataRetentionStorageModelProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == anthropic_HASH) {
    return DataRetentionStorageModelProvider::anthropic;
  } else if (hashCode == openai_HASH) {
    return DataRetentionStorageModelProvider::openai;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataRetentionStorageModelProvider>(hashCode);
  }

  return DataRetentionStorageModelProvider::NOT_SET;
}

Aws::String GetNameForDataRetentionStorageModelProvider(DataRetentionStorageModelProvider enumValue) {
  switch (enumValue) {
    case DataRetentionStorageModelProvider::NOT_SET:
      return {};
    case DataRetentionStorageModelProvider::anthropic:
      return "anthropic";
    case DataRetentionStorageModelProvider::openai:
      return "openai";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataRetentionStorageModelProviderMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
