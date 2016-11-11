/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/kinesisanalytics/model/MappingParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

MappingParameters::MappingParameters() : 
    m_jSONMappingParametersHasBeenSet(false),
    m_cSVMappingParametersHasBeenSet(false)
{
}

MappingParameters::MappingParameters(const JsonValue& jsonValue) : 
    m_jSONMappingParametersHasBeenSet(false),
    m_cSVMappingParametersHasBeenSet(false)
{
  *this = jsonValue;
}

MappingParameters& MappingParameters::operator =(const JsonValue& jsonValue)
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
} // namespace KinesisAnalytics
} // namespace Aws