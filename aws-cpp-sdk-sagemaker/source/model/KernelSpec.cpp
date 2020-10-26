/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/KernelSpec.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

KernelSpec::KernelSpec() : 
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
}

KernelSpec::KernelSpec(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
  *this = jsonValue;
}

KernelSpec& KernelSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue KernelSpec::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
