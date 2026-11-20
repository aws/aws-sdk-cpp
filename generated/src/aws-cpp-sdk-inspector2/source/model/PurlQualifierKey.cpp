/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/PurlQualifierKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace PurlQualifierKeyMapper {

static const int arch_HASH = HashingUtils::HashString("arch");
static const int collector_HASH = HashingUtils::HashString("collector");
static const int dev_dependency_HASH = HashingUtils::HashString("dev_dependency");
static const int distro_HASH = HashingUtils::HashString("distro");
static const int epoch_HASH = HashingUtils::HashString("epoch");
static const int go_toolchain_HASH = HashingUtils::HashString("go_toolchain");
static const int hardened_HASH = HashingUtils::HashString("hardened");
static const int private__HASH = HashingUtils::HashString("private");
static const int rust_toolchain_HASH = HashingUtils::HashString("rust_toolchain");
static const int scope_HASH = HashingUtils::HashString("scope");
static const int skip_chromium_download_HASH = HashingUtils::HashString("skip_chromium_download");
static const int source_HASH = HashingUtils::HashString("source");
static const int stream_HASH = HashingUtils::HashString("stream");
static const int transitive_dependency_HASH = HashingUtils::HashString("transitive_dependency");
static const int unresolved_HASH = HashingUtils::HashString("unresolved");
static const int vendor_HASH = HashingUtils::HashString("vendor");

PurlQualifierKey GetPurlQualifierKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == arch_HASH) {
    return PurlQualifierKey::arch;
  } else if (hashCode == collector_HASH) {
    return PurlQualifierKey::collector;
  } else if (hashCode == dev_dependency_HASH) {
    return PurlQualifierKey::dev_dependency;
  } else if (hashCode == distro_HASH) {
    return PurlQualifierKey::distro;
  } else if (hashCode == epoch_HASH) {
    return PurlQualifierKey::epoch;
  } else if (hashCode == go_toolchain_HASH) {
    return PurlQualifierKey::go_toolchain;
  } else if (hashCode == hardened_HASH) {
    return PurlQualifierKey::hardened;
  } else if (hashCode == private__HASH) {
    return PurlQualifierKey::private_;
  } else if (hashCode == rust_toolchain_HASH) {
    return PurlQualifierKey::rust_toolchain;
  } else if (hashCode == scope_HASH) {
    return PurlQualifierKey::scope;
  } else if (hashCode == skip_chromium_download_HASH) {
    return PurlQualifierKey::skip_chromium_download;
  } else if (hashCode == source_HASH) {
    return PurlQualifierKey::source;
  } else if (hashCode == stream_HASH) {
    return PurlQualifierKey::stream;
  } else if (hashCode == transitive_dependency_HASH) {
    return PurlQualifierKey::transitive_dependency;
  } else if (hashCode == unresolved_HASH) {
    return PurlQualifierKey::unresolved;
  } else if (hashCode == vendor_HASH) {
    return PurlQualifierKey::vendor;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PurlQualifierKey>(hashCode);
  }

  return PurlQualifierKey::NOT_SET;
}

Aws::String GetNameForPurlQualifierKey(PurlQualifierKey enumValue) {
  switch (enumValue) {
    case PurlQualifierKey::NOT_SET:
      return {};
    case PurlQualifierKey::arch:
      return "arch";
    case PurlQualifierKey::collector:
      return "collector";
    case PurlQualifierKey::dev_dependency:
      return "dev_dependency";
    case PurlQualifierKey::distro:
      return "distro";
    case PurlQualifierKey::epoch:
      return "epoch";
    case PurlQualifierKey::go_toolchain:
      return "go_toolchain";
    case PurlQualifierKey::hardened:
      return "hardened";
    case PurlQualifierKey::private_:
      return "private";
    case PurlQualifierKey::rust_toolchain:
      return "rust_toolchain";
    case PurlQualifierKey::scope:
      return "scope";
    case PurlQualifierKey::skip_chromium_download:
      return "skip_chromium_download";
    case PurlQualifierKey::source:
      return "source";
    case PurlQualifierKey::stream:
      return "stream";
    case PurlQualifierKey::transitive_dependency:
      return "transitive_dependency";
    case PurlQualifierKey::unresolved:
      return "unresolved";
    case PurlQualifierKey::vendor:
      return "vendor";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PurlQualifierKeyMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
