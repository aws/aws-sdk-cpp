/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyShapConfig.h>
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

ClarifyShapConfig::ClarifyShapConfig() : 
    m_shapBaselineConfigHasBeenSet(false),
    m_numberOfSamples(0),
    m_numberOfSamplesHasBeenSet(false),
    m_useLogit(false),
    m_useLogitHasBeenSet(false),
    m_seed(0),
    m_seedHasBeenSet(false),
    m_textConfigHasBeenSet(false)
{
}

ClarifyShapConfig::ClarifyShapConfig(JsonView jsonValue) : 
    m_shapBaselineConfigHasBeenSet(false),
    m_numberOfSamples(0),
    m_numberOfSamplesHasBeenSet(false),
    m_useLogit(false),
    m_useLogitHasBeenSet(false),
    m_seed(0),
    m_seedHasBeenSet(false),
    m_textConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ClarifyShapConfig& ClarifyShapConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShapBaselineConfig"))
  {
    m_shapBaselineConfig = jsonValue.GetObject("ShapBaselineConfig");

    m_shapBaselineConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfSamples"))
  {
    m_numberOfSamples = jsonValue.GetInteger("NumberOfSamples");

    m_numberOfSamplesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseLogit"))
  {
    m_useLogit = jsonValue.GetBool("UseLogit");

    m_useLogitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Seed"))
  {
    m_seed = jsonValue.GetInteger("Seed");

    m_seedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextConfig"))
  {
    m_textConfig = jsonValue.GetObject("TextConfig");

    m_textConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ClarifyShapConfig::Jsonize() const
{
  JsonValue payload;

  if(m_shapBaselineConfigHasBeenSet)
  {
   payload.WithObject("ShapBaselineConfig", m_shapBaselineConfig.Jsonize());

  }

  if(m_numberOfSamplesHasBeenSet)
  {
   payload.WithInteger("NumberOfSamples", m_numberOfSamples);

  }

  if(m_useLogitHasBeenSet)
  {
   payload.WithBool("UseLogit", m_useLogit);

  }

  if(m_seedHasBeenSet)
  {
   payload.WithInteger("Seed", m_seed);

  }

  if(m_textConfigHasBeenSet)
  {
   payload.WithObject("TextConfig", m_textConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
