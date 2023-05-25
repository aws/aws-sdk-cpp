/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Configuration required for an entity recognition model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognitionConfig">AWS
   * API Reference</a></p>
   */
  class EntityRecognitionConfig
  {
  public:
    AWS_COMPREHEND_API EntityRecognitionConfig();
    AWS_COMPREHEND_API EntityRecognitionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognitionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Up to 25 entity types that the model is trained to recognize.</p>
     */
    inline const Aws::Vector<EntityTypesListItem>& GetEntityTypes() const{ return m_entityTypes; }

    /**
     * <p>Up to 25 entity types that the model is trained to recognize.</p>
     */
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }

    /**
     * <p>Up to 25 entity types that the model is trained to recognize.</p>
     */
    inline void SetEntityTypes(const Aws::Vector<EntityTypesListItem>& value) { m_entityTypesHasBeenSet = true; m_entityTypes = value; }

    /**
     * <p>Up to 25 entity types that the model is trained to recognize.</p>
     */
    inline void SetEntityTypes(Aws::Vector<EntityTypesListItem>&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::move(value); }

    /**
     * <p>Up to 25 entity types that the model is trained to recognize.</p>
     */
    inline EntityRecognitionConfig& WithEntityTypes(const Aws::Vector<EntityTypesListItem>& value) { SetEntityTypes(value); return *this;}

    /**
     * <p>Up to 25 entity types that the model is trained to recognize.</p>
     */
    inline EntityRecognitionConfig& WithEntityTypes(Aws::Vector<EntityTypesListItem>&& value) { SetEntityTypes(std::move(value)); return *this;}

    /**
     * <p>Up to 25 entity types that the model is trained to recognize.</p>
     */
    inline EntityRecognitionConfig& AddEntityTypes(const EntityTypesListItem& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }

    /**
     * <p>Up to 25 entity types that the model is trained to recognize.</p>
     */
    inline EntityRecognitionConfig& AddEntityTypes(EntityTypesListItem&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EntityTypesListItem> m_entityTypes;
    bool m_entityTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
