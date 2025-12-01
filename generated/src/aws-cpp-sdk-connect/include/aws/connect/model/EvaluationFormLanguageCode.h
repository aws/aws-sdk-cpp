/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class EvaluationFormLanguageCode { NOT_SET, de_DE, en_US, es_ES, fr_FR, it_IT, pt_BR };

namespace EvaluationFormLanguageCodeMapper {
AWS_CONNECT_API EvaluationFormLanguageCode GetEvaluationFormLanguageCodeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormLanguageCode(EvaluationFormLanguageCode value);
}  // namespace EvaluationFormLanguageCodeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
