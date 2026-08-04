/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

namespace Aws {
namespace ImportExport {
template <typename ClientType>
class ImportExportPaginationBase {
 public:
  virtual ~ImportExportPaginationBase() = default;
};
}  // namespace ImportExport
}  // namespace Aws
