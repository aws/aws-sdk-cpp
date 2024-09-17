/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EntityRecognizerDataFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/EntityRecognizerDocuments.h>
#include <aws/comprehend/model/EntityRecognizerAnnotations.h>
#include <aws/comprehend/model/EntityRecognizerEntityList.h>
#include <aws/comprehend/model/EntityTypesListItem.h>
#include <aws/comprehend/model/AugmentedManifestsListItem.h>
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
   * <p>Specifies the format and location of the input data.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerInputDataConfig">AWS
   * API Reference</a></p>
   */
  class EntityRecognizerInputDataConfig
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerInputDataConfig();
    AWS_COMPREHEND_API EntityRecognizerInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of your training data:</p> <ul> <li> <p>
     * <code>COMPREHEND_CSV</code>: A CSV file that supplements your training
     * documents. The CSV file contains information about the custom entities that your
     * trained model will detect. The required format of the file depends on whether
     * you are providing annotations or an entity list.</p> <p>If you use this value,
     * you must provide your CSV file by using either the <code>Annotations</code> or
     * <code>EntityList</code> parameters. You must provide your training documents by
     * using the <code>Documents</code> parameter.</p> </li> <li> <p>
     * <code>AUGMENTED_MANIFEST</code>: A labeled dataset that is produced by Amazon
     * SageMaker Ground Truth. This file is in JSON lines format. Each line is a
     * complete JSON object that contains a training document and its labels. Each
     * label annotates a named entity in the training document. </p> <p>If you use this
     * value, you must provide the <code>AugmentedManifests</code> parameter in your
     * request.</p> </li> </ul> <p>If you don't specify a value, Amazon Comprehend uses
     * <code>COMPREHEND_CSV</code> as the default.</p>
     */
    inline const EntityRecognizerDataFormat& GetDataFormat() const{ return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(const EntityRecognizerDataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline void SetDataFormat(EntityRecognizerDataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }
    inline EntityRecognizerInputDataConfig& WithDataFormat(const EntityRecognizerDataFormat& value) { SetDataFormat(value); return *this;}
    inline EntityRecognizerInputDataConfig& WithDataFormat(EntityRecognizerDataFormat&& value) { SetDataFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity types in the labeled training data that Amazon Comprehend uses to
     * train the custom entity recognizer. Any entity types that you don't specify are
     * ignored.</p> <p>A maximum of 25 entity types can be used at one time to train an
     * entity recognizer. Entity types must not contain the following invalid
     * characters: \n (line break), \\n (escaped line break), \r (carriage return), \\r
     * (escaped carriage return), \t (tab), \\t (escaped tab), space, and , (comma).
     * </p>
     */
    inline const Aws::Vector<EntityTypesListItem>& GetEntityTypes() const{ return m_entityTypes; }
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }
    inline void SetEntityTypes(const Aws::Vector<EntityTypesListItem>& value) { m_entityTypesHasBeenSet = true; m_entityTypes = value; }
    inline void SetEntityTypes(Aws::Vector<EntityTypesListItem>&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::move(value); }
    inline EntityRecognizerInputDataConfig& WithEntityTypes(const Aws::Vector<EntityTypesListItem>& value) { SetEntityTypes(value); return *this;}
    inline EntityRecognizerInputDataConfig& WithEntityTypes(Aws::Vector<EntityTypesListItem>&& value) { SetEntityTypes(std::move(value)); return *this;}
    inline EntityRecognizerInputDataConfig& AddEntityTypes(const EntityTypesListItem& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }
    inline EntityRecognizerInputDataConfig& AddEntityTypes(EntityTypesListItem&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 location of the folder that contains the training documents for your
     * custom entity recognizer.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>COMPREHEND_CSV</code>.</p>
     */
    inline const EntityRecognizerDocuments& GetDocuments() const{ return m_documents; }
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
    inline void SetDocuments(const EntityRecognizerDocuments& value) { m_documentsHasBeenSet = true; m_documents = value; }
    inline void SetDocuments(EntityRecognizerDocuments&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }
    inline EntityRecognizerInputDataConfig& WithDocuments(const EntityRecognizerDocuments& value) { SetDocuments(value); return *this;}
    inline EntityRecognizerInputDataConfig& WithDocuments(EntityRecognizerDocuments&& value) { SetDocuments(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the CSV file that annotates your training documents.</p>
     */
    inline const EntityRecognizerAnnotations& GetAnnotations() const{ return m_annotations; }
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }
    inline void SetAnnotations(const EntityRecognizerAnnotations& value) { m_annotationsHasBeenSet = true; m_annotations = value; }
    inline void SetAnnotations(EntityRecognizerAnnotations&& value) { m_annotationsHasBeenSet = true; m_annotations = std::move(value); }
    inline EntityRecognizerInputDataConfig& WithAnnotations(const EntityRecognizerAnnotations& value) { SetAnnotations(value); return *this;}
    inline EntityRecognizerInputDataConfig& WithAnnotations(EntityRecognizerAnnotations&& value) { SetAnnotations(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the CSV file that has the entity list for your custom
     * entity recognizer.</p>
     */
    inline const EntityRecognizerEntityList& GetEntityList() const{ return m_entityList; }
    inline bool EntityListHasBeenSet() const { return m_entityListHasBeenSet; }
    inline void SetEntityList(const EntityRecognizerEntityList& value) { m_entityListHasBeenSet = true; m_entityList = value; }
    inline void SetEntityList(EntityRecognizerEntityList&& value) { m_entityListHasBeenSet = true; m_entityList = std::move(value); }
    inline EntityRecognizerInputDataConfig& WithEntityList(const EntityRecognizerEntityList& value) { SetEntityList(value); return *this;}
    inline EntityRecognizerInputDataConfig& WithEntityList(EntityRecognizerEntityList&& value) { SetEntityList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline const Aws::Vector<AugmentedManifestsListItem>& GetAugmentedManifests() const{ return m_augmentedManifests; }
    inline bool AugmentedManifestsHasBeenSet() const { return m_augmentedManifestsHasBeenSet; }
    inline void SetAugmentedManifests(const Aws::Vector<AugmentedManifestsListItem>& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests = value; }
    inline void SetAugmentedManifests(Aws::Vector<AugmentedManifestsListItem>&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests = std::move(value); }
    inline EntityRecognizerInputDataConfig& WithAugmentedManifests(const Aws::Vector<AugmentedManifestsListItem>& value) { SetAugmentedManifests(value); return *this;}
    inline EntityRecognizerInputDataConfig& WithAugmentedManifests(Aws::Vector<AugmentedManifestsListItem>&& value) { SetAugmentedManifests(std::move(value)); return *this;}
    inline EntityRecognizerInputDataConfig& AddAugmentedManifests(const AugmentedManifestsListItem& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests.push_back(value); return *this; }
    inline EntityRecognizerInputDataConfig& AddAugmentedManifests(AugmentedManifestsListItem&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests.push_back(std::move(value)); return *this; }
    ///@}
  private:

    EntityRecognizerDataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    Aws::Vector<EntityTypesListItem> m_entityTypes;
    bool m_entityTypesHasBeenSet = false;

    EntityRecognizerDocuments m_documents;
    bool m_documentsHasBeenSet = false;

    EntityRecognizerAnnotations m_annotations;
    bool m_annotationsHasBeenSet = false;

    EntityRecognizerEntityList m_entityList;
    bool m_entityListHasBeenSet = false;

    Aws::Vector<AugmentedManifestsListItem> m_augmentedManifests;
    bool m_augmentedManifestsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
