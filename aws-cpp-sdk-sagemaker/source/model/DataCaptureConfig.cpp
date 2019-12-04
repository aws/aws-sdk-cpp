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

#include <aws/sagemaker/model/DataCaptureConfig.h>
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

DataCaptureConfig::DataCaptureConfig() : 
    m_enableCapture(false),
    m_enableCaptureHasBeenSet(false),
    m_initialSamplingPercentage(0),
    m_initialSamplingPercentageHasBeenSet(false),
    m_destinationS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_captureOptionsHasBeenSet(false),
    m_captureContentTypeHeaderHasBeenSet(false)
{
}

DataCaptureConfig::DataCaptureConfig(JsonView jsonValue) : 
    m_enableCapture(false),
    m_enableCaptureHasBeenSet(false),
    m_initialSamplingPercentage(0),
    m_initialSamplingPercentageHasBeenSet(false),
    m_destinationS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_captureOptionsHasBeenSet(false),
    m_captureContentTypeHeaderHasBeenSet(false)
{
  *this = jsonValue;
}

DataCaptureConfig& DataCaptureConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableCapture"))
  {
    m_enableCapture = jsonValue.GetBool("EnableCapture");

    m_enableCaptureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialSamplingPercentage"))
  {
    m_initialSamplingPercentage = jsonValue.GetInteger("InitialSamplingPercentage");

    m_initialSamplingPercentageHasBeenSet = true;
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

  if(jsonValue.ValueExists("CaptureOptions"))
  {
    Array<JsonView> captureOptionsJsonList = jsonValue.GetArray("CaptureOptions");
    for(unsigned captureOptionsIndex = 0; captureOptionsIndex < captureOptionsJsonList.GetLength(); ++captureOptionsIndex)
    {
      m_captureOptions.push_back(captureOptionsJsonList[captureOptionsIndex].AsObject());
    }
    m_captureOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptureContentTypeHeader"))
  {
    m_captureContentTypeHeader = jsonValue.GetObject("CaptureContentTypeHeader");

    m_captureContentTypeHeaderHasBeenSet = true;
  }

  return *this;
}

JsonValue DataCaptureConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableCaptureHasBeenSet)
  {
   payload.WithBool("EnableCapture", m_enableCapture);

  }

  if(m_initialSamplingPercentageHasBeenSet)
  {
   payload.WithInteger("InitialSamplingPercentage", m_initialSamplingPercentage);

  }

  if(m_destinationS3UriHasBeenSet)
  {
   payload.WithString("DestinationS3Uri", m_destinationS3Uri);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_captureOptionsHasBeenSet)
  {
   Array<JsonValue> captureOptionsJsonList(m_captureOptions.size());
   for(unsigned captureOptionsIndex = 0; captureOptionsIndex < captureOptionsJsonList.GetLength(); ++captureOptionsIndex)
   {
     captureOptionsJsonList[captureOptionsIndex].AsObject(m_captureOptions[captureOptionsIndex].Jsonize());
   }
   payload.WithArray("CaptureOptions", std::move(captureOptionsJsonList));

  }

  if(m_captureContentTypeHeaderHasBeenSet)
  {
   payload.WithObject("CaptureContentTypeHeader", m_captureContentTypeHeader.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
