/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DatasetEntityRecognizerAnnotations.h>
#include <aws/comprehend/model/DatasetEntityRecognizerDocuments.h>
#include <aws/comprehend/model/DatasetEntityRecognizerEntityList.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Specifies the format and location of the input data. You must provide either
   * the <code>Annotations</code> parameter or the <code>EntityList</code>
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DatasetEntityRecognizerInputDataConfig">AWS
   * API Reference</a></p>
   */
  class DatasetEntityRecognizerInputDataConfig
  {
  public:
    AWS_COMPREHEND_API DatasetEntityRecognizerInputDataConfig();
    AWS_COMPREHEND_API DatasetEntityRecognizerInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetEntityRecognizerInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 location of the annotation documents for your custom entity
     * recognizer.</p>
     */
    inline const DatasetEntityRecognizerAnnotations& GetAnnotations() const{ return m_annotations; }

    /**
     * <p>The S3 location of the annotation documents for your custom entity
     * recognizer.</p>
     */
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }

    /**
     * <p>The S3 location of the annotation documents for your custom entity
     * recognizer.</p>
     */
    inline void SetAnnotations(const DatasetEntityRecognizerAnnotations& value) { m_annotationsHasBeenSet = true; m_annotations = value; }

    /**
     * <p>The S3 location of the annotation documents for your custom entity
     * recognizer.</p>
     */
    inline void SetAnnotations(DatasetEntityRecognizerAnnotations&& value) { m_annotationsHasBeenSet = true; m_annotations = std::move(value); }

    /**
     * <p>The S3 location of the annotation documents for your custom entity
     * recognizer.</p>
     */
    inline DatasetEntityRecognizerInputDataConfig& WithAnnotations(const DatasetEntityRecognizerAnnotations& value) { SetAnnotations(value); return *this;}

    /**
     * <p>The S3 location of the annotation documents for your custom entity
     * recognizer.</p>
     */
    inline DatasetEntityRecognizerInputDataConfig& WithAnnotations(DatasetEntityRecognizerAnnotations&& value) { SetAnnotations(std::move(value)); return *this;}


    /**
     * <p>The format and location of the training documents for your custom entity
     * recognizer.</p>
     */
    inline const DatasetEntityRecognizerDocuments& GetDocuments() const{ return m_documents; }

    /**
     * <p>The format and location of the training documents for your custom entity
     * recognizer.</p>
     */
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }

    /**
     * <p>The format and location of the training documents for your custom entity
     * recognizer.</p>
     */
    inline void SetDocuments(const DatasetEntityRecognizerDocuments& value) { m_documentsHasBeenSet = true; m_documents = value; }

    /**
     * <p>The format and location of the training documents for your custom entity
     * recognizer.</p>
     */
    inline void SetDocuments(DatasetEntityRecognizerDocuments&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }

    /**
     * <p>The format and location of the training documents for your custom entity
     * recognizer.</p>
     */
    inline DatasetEntityRecognizerInputDataConfig& WithDocuments(const DatasetEntityRecognizerDocuments& value) { SetDocuments(value); return *this;}

    /**
     * <p>The format and location of the training documents for your custom entity
     * recognizer.</p>
     */
    inline DatasetEntityRecognizerInputDataConfig& WithDocuments(DatasetEntityRecognizerDocuments&& value) { SetDocuments(std::move(value)); return *this;}


    /**
     * <p>The S3 location of the entity list for your custom entity recognizer.</p>
     */
    inline const DatasetEntityRecognizerEntityList& GetEntityList() const{ return m_entityList; }

    /**
     * <p>The S3 location of the entity list for your custom entity recognizer.</p>
     */
    inline bool EntityListHasBeenSet() const { return m_entityListHasBeenSet; }

    /**
     * <p>The S3 location of the entity list for your custom entity recognizer.</p>
     */
    inline void SetEntityList(const DatasetEntityRecognizerEntityList& value) { m_entityListHasBeenSet = true; m_entityList = value; }

    /**
     * <p>The S3 location of the entity list for your custom entity recognizer.</p>
     */
    inline void SetEntityList(DatasetEntityRecognizerEntityList&& value) { m_entityListHasBeenSet = true; m_entityList = std::move(value); }

    /**
     * <p>The S3 location of the entity list for your custom entity recognizer.</p>
     */
    inline DatasetEntityRecognizerInputDataConfig& WithEntityList(const DatasetEntityRecognizerEntityList& value) { SetEntityList(value); return *this;}

    /**
     * <p>The S3 location of the entity list for your custom entity recognizer.</p>
     */
    inline DatasetEntityRecognizerInputDataConfig& WithEntityList(DatasetEntityRecognizerEntityList&& value) { SetEntityList(std::move(value)); return *this;}

  private:

    DatasetEntityRecognizerAnnotations m_annotations;
    bool m_annotationsHasBeenSet = false;

    DatasetEntityRecognizerDocuments m_documents;
    bool m_documentsHasBeenSet = false;

    DatasetEntityRecognizerEntityList m_entityList;
    bool m_entityListHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
