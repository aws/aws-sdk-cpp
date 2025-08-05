/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningCheckTooComplexFinding.h>
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

AutomatedReasoningCheckTooComplexFinding::AutomatedReasoningCheckTooComplexFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningCheckTooComplexFinding& AutomatedReasoningCheckTooComplexFinding::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue AutomatedReasoningCheckTooComplexFinding::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
