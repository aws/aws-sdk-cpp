/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class SourceControlProvider { NOT_SET, GITHUB, GITLAB, BITBUCKET, AWS_CODE_COMMIT };

namespace SourceControlProviderMapper {
AWS_GLUE_API SourceControlProvider GetSourceControlProviderForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSourceControlProvider(SourceControlProvider value);
}  // namespace SourceControlProviderMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
