/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/frauddetector/model/ModelVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

ModelVersion::ModelVersion() : 
    m_modelIdHasBeenSet(false),
    m_modelType(ModelTypeEnum::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_modelVersionNumberHasBeenSet(false)
{
}

ModelVersion::ModelVersion(JsonView jsonValue) : 
    m_modelIdHasBeenSet(false),
    m_modelType(ModelTypeEnum::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_modelVersionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

ModelVersion& ModelVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");

    m_modelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelType"))
  {
    m_modelType = ModelTypeEnumMapper::GetModelTypeEnumForName(jsonValue.GetString("modelType"));

    m_modelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelVersionNumber"))
  {
    m_modelVersionNumber = jsonValue.GetString("modelVersionNumber");

    m_modelVersionNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelVersion::Jsonize() const
{
  JsonValue payload;

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_modelTypeHasBeenSet)
  {
   payload.WithString("modelType", ModelTypeEnumMapper::GetNameForModelTypeEnum(m_modelType));
  }

  if(m_modelVersionNumberHasBeenSet)
  {
   payload.WithString("modelVersionNumber", m_modelVersionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
