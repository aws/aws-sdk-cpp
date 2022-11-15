/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> csvContentTypesJsonList = jsonValue.GetArray("CsvContentTypes");
    for(unsigned csvContentTypesIndex = 0; csvContentTypesIndex < csvContentTypesJsonList.GetLength(); ++csvContentTypesIndex)
    {
      m_csvContentTypes.push_back(csvContentTypesJsonList[csvContentTypesIndex].AsString());
    }
    m_csvContentTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JsonContentTypes"))
  {
    Aws::Utils::Array<JsonView> jsonContentTypesJsonList = jsonValue.GetArray("JsonContentTypes");
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
   Aws::Utils::Array<JsonValue> csvContentTypesJsonList(m_csvContentTypes.size());
   for(unsigned csvContentTypesIndex = 0; csvContentTypesIndex < csvContentTypesJsonList.GetLength(); ++csvContentTypesIndex)
   {
     csvContentTypesJsonList[csvContentTypesIndex].AsString(m_csvContentTypes[csvContentTypesIndex]);
   }
   payload.WithArray("CsvContentTypes", std::move(csvContentTypesJsonList));

  }

  if(m_jsonContentTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jsonContentTypesJsonList(m_jsonContentTypes.size());
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
