﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EntityRecognizerProperties::EntityRecognizerProperties() : 
    m_entityRecognizerArnHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_trainingStartTimeHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_recognizerMetadataHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_modelKmsKeyIdHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_sourceModelArnHasBeenSet(false),
    m_flywheelArnHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false)
{
}

EntityRecognizerProperties::EntityRecognizerProperties(JsonView jsonValue) : 
    m_entityRecognizerArnHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_trainingStartTimeHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_recognizerMetadataHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_modelKmsKeyIdHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_sourceModelArnHasBeenSet(false),
    m_flywheelArnHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognizerProperties& EntityRecognizerProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityRecognizerArn"))
  {
    m_entityRecognizerArn = jsonValue.GetString("EntityRecognizerArn");

    m_entityRecognizerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTime"))
  {
    m_submitTime = jsonValue.GetDouble("SubmitTime");

    m_submitTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingStartTime"))
  {
    m_trainingStartTime = jsonValue.GetDouble("TrainingStartTime");

    m_trainingStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingEndTime"))
  {
    m_trainingEndTime = jsonValue.GetDouble("TrainingEndTime");

    m_trainingEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("InputDataConfig");

    m_inputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecognizerMetadata"))
  {
    m_recognizerMetadata = jsonValue.GetObject("RecognizerMetadata");

    m_recognizerMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeKmsKeyId"))
  {
    m_volumeKmsKeyId = jsonValue.GetString("VolumeKmsKeyId");

    m_volumeKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelKmsKeyId"))
  {
    m_modelKmsKeyId = jsonValue.GetString("ModelKmsKeyId");

    m_modelKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");

    m_versionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceModelArn"))
  {
    m_sourceModelArn = jsonValue.GetString("SourceModelArn");

    m_sourceModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlywheelArn"))
  {
    m_flywheelArn = jsonValue.GetString("FlywheelArn");

    m_flywheelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");

    m_outputDataConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognizerProperties::Jsonize() const
{
  JsonValue payload;

  if(m_entityRecognizerArnHasBeenSet)
  {
   payload.WithString("EntityRecognizerArn", m_entityRecognizerArn);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ModelStatusMapper::GetNameForModelStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_submitTimeHasBeenSet)
  {
   payload.WithDouble("SubmitTime", m_submitTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_trainingStartTimeHasBeenSet)
  {
   payload.WithDouble("TrainingStartTime", m_trainingStartTime.SecondsWithMSPrecision());
  }

  if(m_trainingEndTimeHasBeenSet)
  {
   payload.WithDouble("TrainingEndTime", m_trainingEndTime.SecondsWithMSPrecision());
  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_recognizerMetadataHasBeenSet)
  {
   payload.WithObject("RecognizerMetadata", m_recognizerMetadata.Jsonize());

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_modelKmsKeyIdHasBeenSet)
  {
   payload.WithString("ModelKmsKeyId", m_modelKmsKeyId);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_sourceModelArnHasBeenSet)
  {
   payload.WithString("SourceModelArn", m_sourceModelArn);

  }

  if(m_flywheelArnHasBeenSet)
  {
   payload.WithString("FlywheelArn", m_flywheelArn);

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
