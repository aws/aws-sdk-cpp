/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class NotebookType { NOT_SET, DATA, SQL };

namespace NotebookTypeMapper {
AWS_DATAZONE_API NotebookType GetNotebookTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForNotebookType(NotebookType value);
}  // namespace NotebookTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
