/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/MappingParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

MappingParameters::MappingParameters() : 
    m_jSONMappingParametersHasBeenSet(false),
    m_cSVMappingParametersHasBeenSet(false)
{
}

MappingParameters::MappingParameters(JsonView jsonValue) : 
    m_jSONMappingParametersHasBeenSet(false),
    m_cSVMappingParametersHasBeenSet(false)
{
  *this = jsonValue;
}

MappingParameters& MappingParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JSONMappingParameters"))
  {
    m_jSONMappingParameters = jsonValue.GetObject("JSONMappingParameters");

    m_jSONMappingParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CSVMappingParameters"))
  {
    m_cSVMappingParameters = jsonValue.GetObject("CSVMappingParameters");

    m_cSVMappingParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue MappingParameters::Jsonize() const
{
  JsonValue payload;

  if(m_jSONMappingParametersHasBeenSet)
  {
   payload.WithObject("JSONMappingParameters", m_jSONMappingParameters.Jsonize());

  }

  if(m_cSVMappingParametersHasBeenSet)
  {
   payload.WithObject("CSVMappingParameters", m_cSVMappingParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
