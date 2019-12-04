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

#include <aws/sagemaker/model/DataCaptureConfigSummary.h>
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

DataCaptureConfigSummary::DataCaptureConfigSummary() : 
    m_enableCapture(false),
    m_enableCaptureHasBeenSet(false),
    m_captureStatus(CaptureStatus::NOT_SET),
    m_captureStatusHasBeenSet(false),
    m_currentSamplingPercentage(0),
    m_currentSamplingPercentageHasBeenSet(false),
    m_destinationS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

DataCaptureConfigSummary::DataCaptureConfigSummary(JsonView jsonValue) : 
    m_enableCapture(false),
    m_enableCaptureHasBeenSet(false),
    m_captureStatus(CaptureStatus::NOT_SET),
    m_captureStatusHasBeenSet(false),
    m_currentSamplingPercentage(0),
    m_currentSamplingPercentageHasBeenSet(false),
    m_destinationS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

DataCaptureConfigSummary& DataCaptureConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableCapture"))
  {
    m_enableCapture = jsonValue.GetBool("EnableCapture");

    m_enableCaptureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptureStatus"))
  {
    m_captureStatus = CaptureStatusMapper::GetCaptureStatusForName(jsonValue.GetString("CaptureStatus"));

    m_captureStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentSamplingPercentage"))
  {
    m_currentSamplingPercentage = jsonValue.GetInteger("CurrentSamplingPercentage");

    m_currentSamplingPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationS3Uri"))
  {
    m_destinationS3Uri = jsonValue.GetString("DestinationS3Uri");

    m_destinationS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DataCaptureConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_enableCaptureHasBeenSet)
  {
   payload.WithBool("EnableCapture", m_enableCapture);

  }

  if(m_captureStatusHasBeenSet)
  {
   payload.WithString("CaptureStatus", CaptureStatusMapper::GetNameForCaptureStatus(m_captureStatus));
  }

  if(m_currentSamplingPercentageHasBeenSet)
  {
   payload.WithInteger("CurrentSamplingPercentage", m_currentSamplingPercentage);

  }

  if(m_destinationS3UriHasBeenSet)
  {
   payload.WithString("DestinationS3Uri", m_destinationS3Uri);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
