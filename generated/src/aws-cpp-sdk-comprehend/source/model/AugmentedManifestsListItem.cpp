/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/AugmentedManifestsListItem.h>
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

AugmentedManifestsListItem::AugmentedManifestsListItem() : 
    m_s3UriHasBeenSet(false),
    m_split(Split::NOT_SET),
    m_splitHasBeenSet(false),
    m_attributeNamesHasBeenSet(false),
    m_annotationDataS3UriHasBeenSet(false),
    m_sourceDocumentsS3UriHasBeenSet(false),
    m_documentType(AugmentedManifestsDocumentTypeFormat::NOT_SET),
    m_documentTypeHasBeenSet(false)
{
}

AugmentedManifestsListItem::AugmentedManifestsListItem(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_split(Split::NOT_SET),
    m_splitHasBeenSet(false),
    m_attributeNamesHasBeenSet(false),
    m_annotationDataS3UriHasBeenSet(false),
    m_sourceDocumentsS3UriHasBeenSet(false),
    m_documentType(AugmentedManifestsDocumentTypeFormat::NOT_SET),
    m_documentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AugmentedManifestsListItem& AugmentedManifestsListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Split"))
  {
    m_split = SplitMapper::GetSplitForName(jsonValue.GetString("Split"));

    m_splitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeNames"))
  {
    Aws::Utils::Array<JsonView> attributeNamesJsonList = jsonValue.GetArray("AttributeNames");
    for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
    {
      m_attributeNames.push_back(attributeNamesJsonList[attributeNamesIndex].AsString());
    }
    m_attributeNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnnotationDataS3Uri"))
  {
    m_annotationDataS3Uri = jsonValue.GetString("AnnotationDataS3Uri");

    m_annotationDataS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDocumentsS3Uri"))
  {
    m_sourceDocumentsS3Uri = jsonValue.GetString("SourceDocumentsS3Uri");

    m_sourceDocumentsS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentType"))
  {
    m_documentType = AugmentedManifestsDocumentTypeFormatMapper::GetAugmentedManifestsDocumentTypeFormatForName(jsonValue.GetString("DocumentType"));

    m_documentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AugmentedManifestsListItem::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_splitHasBeenSet)
  {
   payload.WithString("Split", SplitMapper::GetNameForSplit(m_split));
  }

  if(m_attributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeNamesJsonList(m_attributeNames.size());
   for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
   {
     attributeNamesJsonList[attributeNamesIndex].AsString(m_attributeNames[attributeNamesIndex]);
   }
   payload.WithArray("AttributeNames", std::move(attributeNamesJsonList));

  }

  if(m_annotationDataS3UriHasBeenSet)
  {
   payload.WithString("AnnotationDataS3Uri", m_annotationDataS3Uri);

  }

  if(m_sourceDocumentsS3UriHasBeenSet)
  {
   payload.WithString("SourceDocumentsS3Uri", m_sourceDocumentsS3Uri);

  }

  if(m_documentTypeHasBeenSet)
  {
   payload.WithString("DocumentType", AugmentedManifestsDocumentTypeFormatMapper::GetNameForAugmentedManifestsDocumentTypeFormat(m_documentType));
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
