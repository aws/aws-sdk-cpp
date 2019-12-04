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

#include <aws/sagemaker/model/CaptureContentTypeHeader.h>
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

CaptureContentTypeHeader::CaptureContentTypeHeader() : 
    m_csvContentTypesHasBeenSet(false),
    m_jsonContentTypesHasBeenSet(false)
{
}

CaptureContentTypeHeader::CaptureContentTypeHeader(JsonView jsonValue) : 
    m_csvContentTypesHasBeenSet(false),
    m_jsonContentTypesHasBeenSet(false)
{
  *this = jsonValue;
}

CaptureContentTypeHeader& CaptureContentTypeHeader::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CsvContentTypes"))
  {
    Array<JsonView> csvContentTypesJsonList = jsonValue.GetArray("CsvContentTypes");
    for(unsigned csvContentTypesIndex = 0; csvContentTypesIndex < csvContentTypesJsonList.GetLength(); ++csvContentTypesIndex)
    {
      m_csvContentTypes.push_back(csvContentTypesJsonList[csvContentTypesIndex].AsString());
    }
    m_csvContentTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JsonContentTypes"))
  {
    Array<JsonView> jsonContentTypesJsonList = jsonValue.GetArray("JsonContentTypes");
    for(unsigned jsonContentTypesIndex = 0; jsonContentTypesIndex < jsonContentTypesJsonList.GetLength(); ++jsonContentTypesIndex)
    {
      m_jsonContentTypes.push_back(jsonContentTypesJsonList[jsonContentTypesIndex].AsString());
    }
    m_jsonContentTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptureContentTypeHeader::Jsonize() const
{
  JsonValue payload;

  if(m_csvContentTypesHasBeenSet)
  {
   Array<JsonValue> csvContentTypesJsonList(m_csvContentTypes.size());
   for(unsigned csvContentTypesIndex = 0; csvContentTypesIndex < csvContentTypesJsonList.GetLength(); ++csvContentTypesIndex)
   {
     csvContentTypesJsonList[csvContentTypesIndex].AsString(m_csvContentTypes[csvContentTypesIndex]);
   }
   payload.WithArray("CsvContentTypes", std::move(csvContentTypesJsonList));

  }

  if(m_jsonContentTypesHasBeenSet)
  {
   Array<JsonValue> jsonContentTypesJsonList(m_jsonContentTypes.size());
   for(unsigned jsonContentTypesIndex = 0; jsonContentTypesIndex < jsonContentTypesJsonList.GetLength(); ++jsonContentTypesIndex)
   {
     jsonContentTypesJsonList[jsonContentTypesIndex].AsString(m_jsonContentTypes[jsonContentTypesIndex]);
   }
   payload.WithArray("JsonContentTypes", std::move(jsonContentTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
