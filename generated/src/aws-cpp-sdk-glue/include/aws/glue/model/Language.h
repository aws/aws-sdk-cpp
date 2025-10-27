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
enum class Language { NOT_SET, PYTHON, SCALA };

namespace LanguageMapper {
AWS_GLUE_API Language GetLanguageForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForLanguage(Language value);
}  // namespace LanguageMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
