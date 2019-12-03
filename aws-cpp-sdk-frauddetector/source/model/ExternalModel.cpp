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

#include <aws/frauddetector/model/ExternalModel.h>
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

ExternalModel::ExternalModel() : 
    m_modelEndpointHasBeenSet(false),
    m_modelSource(ModelSource::NOT_SET),
    m_modelSourceHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_inputConfigurationHasBeenSet(false),
    m_outputConfigurationHasBeenSet(false),
    m_modelEndpointStatus(ModelEndpointStatus::NOT_SET),
    m_modelEndpointStatusHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

ExternalModel::ExternalModel(JsonView jsonValue) : 
    m_modelEndpointHasBeenSet(false),
    m_modelSource(ModelSource::NOT_SET),
    m_modelSourceHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_inputConfigurationHasBeenSet(false),
    m_outputConfigurationHasBeenSet(false),
    m_modelEndpointStatus(ModelEndpointStatus::NOT_SET),
    m_modelEndpointStatusHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalModel& ExternalModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelEndpoint"))
  {
    m_modelEndpoint = jsonValue.GetString("modelEndpoint");

    m_modelEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelSource"))
  {
    m_modelSource = ModelSourceMapper::GetModelSourceForName(jsonValue.GetString("modelSource"));

    m_modelSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("role"))
  {
    m_role = jsonValue.GetObject("role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputConfiguration"))
  {
    m_inputConfiguration = jsonValue.GetObject("inputConfiguration");

    m_inputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputConfiguration"))
  {
    m_outputConfiguration = jsonValue.GetObject("outputConfiguration");

    m_outputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelEndpointStatus"))
  {
    m_modelEndpointStatus = ModelEndpointStatusMapper::GetModelEndpointStatusForName(jsonValue.GetString("modelEndpointStatus"));

    m_modelEndpointStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalModel::Jsonize() const
{
  JsonValue payload;

  if(m_modelEndpointHasBeenSet)
  {
   payload.WithString("modelEndpoint", m_modelEndpoint);

  }

  if(m_modelSourceHasBeenSet)
  {
   payload.WithString("modelSource", ModelSourceMapper::GetNameForModelSource(m_modelSource));
  }

  if(m_roleHasBeenSet)
  {
   payload.WithObject("role", m_role.Jsonize());

  }

  if(m_inputConfigurationHasBeenSet)
  {
   payload.WithObject("inputConfiguration", m_inputConfiguration.Jsonize());

  }

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  if(m_modelEndpointStatusHasBeenSet)
  {
   payload.WithString("modelEndpointStatus", ModelEndpointStatusMapper::GetNameForModelEndpointStatus(m_modelEndpointStatus));
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("createdTime", m_createdTime);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
