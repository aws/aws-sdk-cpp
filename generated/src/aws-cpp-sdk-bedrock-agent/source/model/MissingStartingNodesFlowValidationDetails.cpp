/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MissingStartingNodesFlowValidationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

MissingStartingNodesFlowValidationDetails::MissingStartingNodesFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

MissingStartingNodesFlowValidationDetails& MissingStartingNodesFlowValidationDetails::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue MissingStartingNodesFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
