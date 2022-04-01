/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_invokeModelEndpointRoleArnHasBeenSet(false),
    m_inputConfigurationHasBeenSet(false),
    m_outputConfigurationHasBeenSet(false),
    m_modelEndpointStatus(ModelEndpointStatus::NOT_SET),
    m_modelEndpointStatusHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

ExternalModel::ExternalModel(JsonView jsonValue) : 
    m_modelEndpointHasBeenSet(false),
    m_modelSource(ModelSource::NOT_SET),
    m_modelSourceHasBeenSet(false),
    m_invokeModelEndpointRoleArnHasBeenSet(false),
    m_inputConfigurationHasBeenSet(false),
    m_outputConfigurationHasBeenSet(false),
    m_modelEndpointStatus(ModelEndpointStatus::NOT_SET),
    m_modelEndpointStatusHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_arnHasBeenSet(false)
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

  if(jsonValue.ValueExists("invokeModelEndpointRoleArn"))
  {
    m_invokeModelEndpointRoleArn = jsonValue.GetString("invokeModelEndpointRoleArn");

    m_invokeModelEndpointRoleArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
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

  if(m_invokeModelEndpointRoleArnHasBeenSet)
  {
   payload.WithString("invokeModelEndpointRoleArn", m_invokeModelEndpointRoleArn);

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

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
