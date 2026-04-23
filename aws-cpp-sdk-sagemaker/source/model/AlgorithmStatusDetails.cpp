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

#include <aws/sagemaker/model/AlgorithmStatusDetails.h>
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

AlgorithmStatusDetails::AlgorithmStatusDetails() : 
    m_validationStatusesHasBeenSet(false),
    m_imageScanStatusesHasBeenSet(false)
{
}

AlgorithmStatusDetails::AlgorithmStatusDetails(JsonView jsonValue) : 
    m_validationStatusesHasBeenSet(false),
    m_imageScanStatusesHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmStatusDetails& AlgorithmStatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValidationStatuses"))
  {
    Array<JsonView> validationStatusesJsonList = jsonValue.GetArray("ValidationStatuses");
    for(unsigned validationStatusesIndex = 0; validationStatusesIndex < validationStatusesJsonList.GetLength(); ++validationStatusesIndex)
    {
      m_validationStatuses.push_back(validationStatusesJsonList[validationStatusesIndex].AsObject());
    }
    m_validationStatusesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageScanStatuses"))
  {
    Array<JsonView> imageScanStatusesJsonList = jsonValue.GetArray("ImageScanStatuses");
    for(unsigned imageScanStatusesIndex = 0; imageScanStatusesIndex < imageScanStatusesJsonList.GetLength(); ++imageScanStatusesIndex)
    {
      m_imageScanStatuses.push_back(imageScanStatusesJsonList[imageScanStatusesIndex].AsObject());
    }
    m_imageScanStatusesHasBeenSet = true;
  }

  return *this;
}

JsonValue AlgorithmStatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_validationStatusesHasBeenSet)
  {
   Array<JsonValue> validationStatusesJsonList(m_validationStatuses.size());
   for(unsigned validationStatusesIndex = 0; validationStatusesIndex < validationStatusesJsonList.GetLength(); ++validationStatusesIndex)
   {
     validationStatusesJsonList[validationStatusesIndex].AsObject(m_validationStatuses[validationStatusesIndex].Jsonize());
   }
   payload.WithArray("ValidationStatuses", std::move(validationStatusesJsonList));

  }

  if(m_imageScanStatusesHasBeenSet)
  {
   Array<JsonValue> imageScanStatusesJsonList(m_imageScanStatuses.size());
   for(unsigned imageScanStatusesIndex = 0; imageScanStatusesIndex < imageScanStatusesJsonList.GetLength(); ++imageScanStatusesIndex)
   {
     imageScanStatusesJsonList[imageScanStatusesIndex].AsObject(m_imageScanStatuses[imageScanStatusesIndex].Jsonize());
   }
   payload.WithArray("ImageScanStatuses", std::move(imageScanStatusesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
