/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class PurlQualifierKey {
  NOT_SET,
  arch,
  collector,
  dev_dependency,
  distro,
  epoch,
  go_toolchain,
  hardened,
  private_,
  rust_toolchain,
  scope,
  skip_chromium_download,
  source,
  stream,
  transitive_dependency,
  unresolved,
  vendor
};

namespace PurlQualifierKeyMapper {
AWS_INSPECTOR2_API PurlQualifierKey GetPurlQualifierKeyForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForPurlQualifierKey(PurlQualifierKey value);
}  // namespace PurlQualifierKeyMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
