﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClassifierInputDataConfig.h>
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

DocumentClassifierInputDataConfig::DocumentClassifierInputDataConfig() : 
    m_dataFormat(DocumentClassifierDataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_s3UriHasBeenSet(false),
    m_testS3UriHasBeenSet(false),
    m_labelDelimiterHasBeenSet(false),
    m_augmentedManifestsHasBeenSet(false),
    m_documentType(DocumentClassifierDocumentTypeFormat::NOT_SET),
    m_documentTypeHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_documentReaderConfigHasBeenSet(false)
{
}

DocumentClassifierInputDataConfig::DocumentClassifierInputDataConfig(JsonView jsonValue) : 
    m_dataFormat(DocumentClassifierDataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_s3UriHasBeenSet(false),
    m_testS3UriHasBeenSet(false),
    m_labelDelimiterHasBeenSet(false),
    m_augmentedManifestsHasBeenSet(false),
    m_documentType(DocumentClassifierDocumentTypeFormat::NOT_SET),
    m_documentTypeHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_documentReaderConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentClassifierInputDataConfig& DocumentClassifierInputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = DocumentClassifierDataFormatMapper::GetDocumentClassifierDataFormatForName(jsonValue.GetString("DataFormat"));

    m_dataFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TestS3Uri"))
  {
    m_testS3Uri = jsonValue.GetString("TestS3Uri");

    m_testS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelDelimiter"))
  {
    m_labelDelimiter = jsonValue.GetString("LabelDelimiter");

    m_labelDelimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AugmentedManifests"))
  {
    Aws::Utils::Array<JsonView> augmentedManifestsJsonList = jsonValue.GetArray("AugmentedManifests");
    for(unsigned augmentedManifestsIndex = 0; augmentedManifestsIndex < augmentedManifestsJsonList.GetLength(); ++augmentedManifestsIndex)
    {
      m_augmentedManifests.push_back(augmentedManifestsJsonList[augmentedManifestsIndex].AsObject());
    }
    m_augmentedManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentType"))
  {
    m_documentType = DocumentClassifierDocumentTypeFormatMapper::GetDocumentClassifierDocumentTypeFormatForName(jsonValue.GetString("DocumentType"));

    m_documentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Documents"))
  {
    m_documents = jsonValue.GetObject("Documents");

    m_documentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentReaderConfig"))
  {
    m_documentReaderConfig = jsonValue.GetObject("DocumentReaderConfig");

    m_documentReaderConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentClassifierInputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", DocumentClassifierDataFormatMapper::GetNameForDocumentClassifierDataFormat(m_dataFormat));
  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_testS3UriHasBeenSet)
  {
   payload.WithString("TestS3Uri", m_testS3Uri);

  }

  if(m_labelDelimiterHasBeenSet)
  {
   payload.WithString("LabelDelimiter", m_labelDelimiter);

  }

  if(m_augmentedManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> augmentedManifestsJsonList(m_augmentedManifests.size());
   for(unsigned augmentedManifestsIndex = 0; augmentedManifestsIndex < augmentedManifestsJsonList.GetLength(); ++augmentedManifestsIndex)
   {
     augmentedManifestsJsonList[augmentedManifestsIndex].AsObject(m_augmentedManifests[augmentedManifestsIndex].Jsonize());
   }
   payload.WithArray("AugmentedManifests", std::move(augmentedManifestsJsonList));

  }

  if(m_documentTypeHasBeenSet)
  {
   payload.WithString("DocumentType", DocumentClassifierDocumentTypeFormatMapper::GetNameForDocumentClassifierDocumentTypeFormat(m_documentType));
  }

  if(m_documentsHasBeenSet)
  {
   payload.WithObject("Documents", m_documents.Jsonize());

  }

  if(m_documentReaderConfigHasBeenSet)
  {
   payload.WithObject("DocumentReaderConfig", m_documentReaderConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
