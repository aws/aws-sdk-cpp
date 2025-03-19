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
    AWS_COMPREHEND_API EntityRecognizerInputDataConfig() = default;
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
    inline EntityRecognizerDataFormat GetDataFormat() const { return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(EntityRecognizerDataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline EntityRecognizerInputDataConfig& WithDataFormat(EntityRecognizerDataFormat value) { SetDataFormat(value); return *this;}
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
    inline const Aws::Vector<EntityTypesListItem>& GetEntityTypes() const { return m_entityTypes; }
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }
    template<typename EntityTypesT = Aws::Vector<EntityTypesListItem>>
    void SetEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::forward<EntityTypesT>(value); }
    template<typename EntityTypesT = Aws::Vector<EntityTypesListItem>>
    EntityRecognizerInputDataConfig& WithEntityTypes(EntityTypesT&& value) { SetEntityTypes(std::forward<EntityTypesT>(value)); return *this;}
    template<typename EntityTypesT = EntityTypesListItem>
    EntityRecognizerInputDataConfig& AddEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.emplace_back(std::forward<EntityTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 location of the folder that contains the training documents for your
     * custom entity recognizer.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>COMPREHEND_CSV</code>.</p>
     */
    inline const EntityRecognizerDocuments& GetDocuments() const { return m_documents; }
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
    template<typename DocumentsT = EntityRecognizerDocuments>
    void SetDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents = std::forward<DocumentsT>(value); }
    template<typename DocumentsT = EntityRecognizerDocuments>
    EntityRecognizerInputDataConfig& WithDocuments(DocumentsT&& value) { SetDocuments(std::forward<DocumentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the CSV file that annotates your training documents.</p>
     */
    inline const EntityRecognizerAnnotations& GetAnnotations() const { return m_annotations; }
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }
    template<typename AnnotationsT = EntityRecognizerAnnotations>
    void SetAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations = std::forward<AnnotationsT>(value); }
    template<typename AnnotationsT = EntityRecognizerAnnotations>
    EntityRecognizerInputDataConfig& WithAnnotations(AnnotationsT&& value) { SetAnnotations(std::forward<AnnotationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the CSV file that has the entity list for your custom
     * entity recognizer.</p>
     */
    inline const EntityRecognizerEntityList& GetEntityList() const { return m_entityList; }
    inline bool EntityListHasBeenSet() const { return m_entityListHasBeenSet; }
    template<typename EntityListT = EntityRecognizerEntityList>
    void SetEntityList(EntityListT&& value) { m_entityListHasBeenSet = true; m_entityList = std::forward<EntityListT>(value); }
    template<typename EntityListT = EntityRecognizerEntityList>
    EntityRecognizerInputDataConfig& WithEntityList(EntityListT&& value) { SetEntityList(std::forward<EntityListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline const Aws::Vector<AugmentedManifestsListItem>& GetAugmentedManifests() const { return m_augmentedManifests; }
    inline bool AugmentedManifestsHasBeenSet() const { return m_augmentedManifestsHasBeenSet; }
    template<typename AugmentedManifestsT = Aws::Vector<AugmentedManifestsListItem>>
    void SetAugmentedManifests(AugmentedManifestsT&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests = std::forward<AugmentedManifestsT>(value); }
    template<typename AugmentedManifestsT = Aws::Vector<AugmentedManifestsListItem>>
    EntityRecognizerInputDataConfig& WithAugmentedManifests(AugmentedManifestsT&& value) { SetAugmentedManifests(std::forward<AugmentedManifestsT>(value)); return *this;}
    template<typename AugmentedManifestsT = AugmentedManifestsListItem>
    EntityRecognizerInputDataConfig& AddAugmentedManifests(AugmentedManifestsT&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests.emplace_back(std::forward<AugmentedManifestsT>(value)); return *this; }
    ///@}
  private:

    EntityRecognizerDataFormat m_dataFormat{EntityRecognizerDataFormat::NOT_SET};
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
