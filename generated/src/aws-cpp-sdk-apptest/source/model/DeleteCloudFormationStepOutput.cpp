/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/DeleteCloudFormationStepOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

DeleteCloudFormationStepOutput::DeleteCloudFormationStepOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

DeleteCloudFormationStepOutput& DeleteCloudFormationStepOutput::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue DeleteCloudFormationStepOutput::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
