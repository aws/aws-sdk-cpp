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

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/EntityRecognizerDocuments.h>
#include <aws/comprehend/model/EntityRecognizerAnnotations.h>
#include <aws/comprehend/model/EntityRecognizerEntityList.h>
#include <aws/comprehend/model/EntityTypesListItem.h>
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
  class AWS_COMPREHEND_API EntityRecognizerInputDataConfig
  {
  public:
    EntityRecognizerInputDataConfig();
    EntityRecognizerInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    EntityRecognizerInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The entity types in the input data for an entity recognizer.</p>
     */
    inline const Aws::Vector<EntityTypesListItem>& GetEntityTypes() const{ return m_entityTypes; }

    /**
     * <p>The entity types in the input data for an entity recognizer.</p>
     */
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }

    /**
     * <p>The entity types in the input data for an entity recognizer.</p>
     */
    inline void SetEntityTypes(const Aws::Vector<EntityTypesListItem>& value) { m_entityTypesHasBeenSet = true; m_entityTypes = value; }

    /**
     * <p>The entity types in the input data for an entity recognizer.</p>
     */
    inline void SetEntityTypes(Aws::Vector<EntityTypesListItem>&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::move(value); }

    /**
     * <p>The entity types in the input data for an entity recognizer.</p>
     */
    inline EntityRecognizerInputDataConfig& WithEntityTypes(const Aws::Vector<EntityTypesListItem>& value) { SetEntityTypes(value); return *this;}

    /**
     * <p>The entity types in the input data for an entity recognizer.</p>
     */
    inline EntityRecognizerInputDataConfig& WithEntityTypes(Aws::Vector<EntityTypesListItem>&& value) { SetEntityTypes(std::move(value)); return *this;}

    /**
     * <p>The entity types in the input data for an entity recognizer.</p>
     */
    inline EntityRecognizerInputDataConfig& AddEntityTypes(const EntityTypesListItem& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }

    /**
     * <p>The entity types in the input data for an entity recognizer.</p>
     */
    inline EntityRecognizerInputDataConfig& AddEntityTypes(EntityTypesListItem&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>S3 location of the documents folder for an entity recognizer</p>
     */
    inline const EntityRecognizerDocuments& GetDocuments() const{ return m_documents; }

    /**
     * <p>S3 location of the documents folder for an entity recognizer</p>
     */
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }

    /**
     * <p>S3 location of the documents folder for an entity recognizer</p>
     */
    inline void SetDocuments(const EntityRecognizerDocuments& value) { m_documentsHasBeenSet = true; m_documents = value; }

    /**
     * <p>S3 location of the documents folder for an entity recognizer</p>
     */
    inline void SetDocuments(EntityRecognizerDocuments&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }

    /**
     * <p>S3 location of the documents folder for an entity recognizer</p>
     */
    inline EntityRecognizerInputDataConfig& WithDocuments(const EntityRecognizerDocuments& value) { SetDocuments(value); return *this;}

    /**
     * <p>S3 location of the documents folder for an entity recognizer</p>
     */
    inline EntityRecognizerInputDataConfig& WithDocuments(EntityRecognizerDocuments&& value) { SetDocuments(std::move(value)); return *this;}


    /**
     * <p>S3 location of the annotations file for an entity recognizer.</p>
     */
    inline const EntityRecognizerAnnotations& GetAnnotations() const{ return m_annotations; }

    /**
     * <p>S3 location of the annotations file for an entity recognizer.</p>
     */
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }

    /**
     * <p>S3 location of the annotations file for an entity recognizer.</p>
     */
    inline void SetAnnotations(const EntityRecognizerAnnotations& value) { m_annotationsHasBeenSet = true; m_annotations = value; }

    /**
     * <p>S3 location of the annotations file for an entity recognizer.</p>
     */
    inline void SetAnnotations(EntityRecognizerAnnotations&& value) { m_annotationsHasBeenSet = true; m_annotations = std::move(value); }

    /**
     * <p>S3 location of the annotations file for an entity recognizer.</p>
     */
    inline EntityRecognizerInputDataConfig& WithAnnotations(const EntityRecognizerAnnotations& value) { SetAnnotations(value); return *this;}

    /**
     * <p>S3 location of the annotations file for an entity recognizer.</p>
     */
    inline EntityRecognizerInputDataConfig& WithAnnotations(EntityRecognizerAnnotations&& value) { SetAnnotations(std::move(value)); return *this;}


    /**
     * <p>S3 location of the entity list for an entity recognizer.</p>
     */
    inline const EntityRecognizerEntityList& GetEntityList() const{ return m_entityList; }

    /**
     * <p>S3 location of the entity list for an entity recognizer.</p>
     */
    inline bool EntityListHasBeenSet() const { return m_entityListHasBeenSet; }

    /**
     * <p>S3 location of the entity list for an entity recognizer.</p>
     */
    inline void SetEntityList(const EntityRecognizerEntityList& value) { m_entityListHasBeenSet = true; m_entityList = value; }

    /**
     * <p>S3 location of the entity list for an entity recognizer.</p>
     */
    inline void SetEntityList(EntityRecognizerEntityList&& value) { m_entityListHasBeenSet = true; m_entityList = std::move(value); }

    /**
     * <p>S3 location of the entity list for an entity recognizer.</p>
     */
    inline EntityRecognizerInputDataConfig& WithEntityList(const EntityRecognizerEntityList& value) { SetEntityList(value); return *this;}

    /**
     * <p>S3 location of the entity list for an entity recognizer.</p>
     */
    inline EntityRecognizerInputDataConfig& WithEntityList(EntityRecognizerEntityList&& value) { SetEntityList(std::move(value)); return *this;}

  private:

    Aws::Vector<EntityTypesListItem> m_entityTypes;
    bool m_entityTypesHasBeenSet;

    EntityRecognizerDocuments m_documents;
    bool m_documentsHasBeenSet;

    EntityRecognizerAnnotations m_annotations;
    bool m_annotationsHasBeenSet;

    EntityRecognizerEntityList m_entityList;
    bool m_entityListHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
