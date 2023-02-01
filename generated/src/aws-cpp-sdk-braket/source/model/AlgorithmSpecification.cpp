/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/AlgorithmSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

AlgorithmSpecification::AlgorithmSpecification() : 
    m_containerImageHasBeenSet(false),
    m_scriptModeConfigHasBeenSet(false)
{
}

AlgorithmSpecification::AlgorithmSpecification(JsonView jsonValue) : 
    m_containerImageHasBeenSet(false),
    m_scriptModeConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmSpecification& AlgorithmSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerImage"))
  {
    m_containerImage = jsonValue.GetObject("containerImage");

    m_containerImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptModeConfig"))
  {
    m_scriptModeConfig = jsonValue.GetObject("scriptModeConfig");

    m_scriptModeConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AlgorithmSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_containerImageHasBeenSet)
  {
   payload.WithObject("containerImage", m_containerImage.Jsonize());

  }

  if(m_scriptModeConfigHasBeenSet)
  {
   payload.WithObject("scriptModeConfig", m_scriptModeConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
