/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningCheckNoTranslationsFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningCheckNoTranslationsFinding::AutomatedReasoningCheckNoTranslationsFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningCheckNoTranslationsFinding& AutomatedReasoningCheckNoTranslationsFinding::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue AutomatedReasoningCheckNoTranslationsFinding::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
