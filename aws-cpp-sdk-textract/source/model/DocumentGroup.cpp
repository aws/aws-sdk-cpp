/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/DocumentGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

DocumentGroup::DocumentGroup() : 
    m_typeHasBeenSet(false),
    m_splitDocumentsHasBeenSet(false),
    m_detectedSignaturesHasBeenSet(false),
    m_undetectedSignaturesHasBeenSet(false)
{
}

DocumentGroup::DocumentGroup(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_splitDocumentsHasBeenSet(false),
    m_detectedSignaturesHasBeenSet(false),
    m_undetectedSignaturesHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentGroup& DocumentGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SplitDocuments"))
  {
    Aws::Utils::Array<JsonView> splitDocumentsJsonList = jsonValue.GetArray("SplitDocuments");
    for(unsigned splitDocumentsIndex = 0; splitDocumentsIndex < splitDocumentsJsonList.GetLength(); ++splitDocumentsIndex)
    {
      m_splitDocuments.push_back(splitDocumentsJsonList[splitDocumentsIndex].AsObject());
    }
    m_splitDocumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetectedSignatures"))
  {
    Aws::Utils::Array<JsonView> detectedSignaturesJsonList = jsonValue.GetArray("DetectedSignatures");
    for(unsigned detectedSignaturesIndex = 0; detectedSignaturesIndex < detectedSignaturesJsonList.GetLength(); ++detectedSignaturesIndex)
    {
      m_detectedSignatures.push_back(detectedSignaturesJsonList[detectedSignaturesIndex].AsObject());
    }
    m_detectedSignaturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UndetectedSignatures"))
  {
    Aws::Utils::Array<JsonView> undetectedSignaturesJsonList = jsonValue.GetArray("UndetectedSignatures");
    for(unsigned undetectedSignaturesIndex = 0; undetectedSignaturesIndex < undetectedSignaturesJsonList.GetLength(); ++undetectedSignaturesIndex)
    {
      m_undetectedSignatures.push_back(undetectedSignaturesJsonList[undetectedSignaturesIndex].AsObject());
    }
    m_undetectedSignaturesHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentGroup::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_splitDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> splitDocumentsJsonList(m_splitDocuments.size());
   for(unsigned splitDocumentsIndex = 0; splitDocumentsIndex < splitDocumentsJsonList.GetLength(); ++splitDocumentsIndex)
   {
     splitDocumentsJsonList[splitDocumentsIndex].AsObject(m_splitDocuments[splitDocumentsIndex].Jsonize());
   }
   payload.WithArray("SplitDocuments", std::move(splitDocumentsJsonList));

  }

  if(m_detectedSignaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detectedSignaturesJsonList(m_detectedSignatures.size());
   for(unsigned detectedSignaturesIndex = 0; detectedSignaturesIndex < detectedSignaturesJsonList.GetLength(); ++detectedSignaturesIndex)
   {
     detectedSignaturesJsonList[detectedSignaturesIndex].AsObject(m_detectedSignatures[detectedSignaturesIndex].Jsonize());
   }
   payload.WithArray("DetectedSignatures", std::move(detectedSignaturesJsonList));

  }

  if(m_undetectedSignaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> undetectedSignaturesJsonList(m_undetectedSignatures.size());
   for(unsigned undetectedSignaturesIndex = 0; undetectedSignaturesIndex < undetectedSignaturesJsonList.GetLength(); ++undetectedSignaturesIndex)
   {
     undetectedSignaturesJsonList[undetectedSignaturesIndex].AsObject(m_undetectedSignatures[undetectedSignaturesIndex].Jsonize());
   }
   payload.WithArray("UndetectedSignatures", std::move(undetectedSignaturesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
