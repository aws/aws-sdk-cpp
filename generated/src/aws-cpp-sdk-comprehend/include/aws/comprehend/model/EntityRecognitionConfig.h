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
    AWS_COMPREHEND_API EntityRecognitionConfig() = default;
    AWS_COMPREHEND_API EntityRecognitionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognitionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Up to 25 entity types that the model is trained to recognize.</p>
     */
    inline const Aws::Vector<EntityTypesListItem>& GetEntityTypes() const { return m_entityTypes; }
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }
    template<typename EntityTypesT = Aws::Vector<EntityTypesListItem>>
    void SetEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::forward<EntityTypesT>(value); }
    template<typename EntityTypesT = Aws::Vector<EntityTypesListItem>>
    EntityRecognitionConfig& WithEntityTypes(EntityTypesT&& value) { SetEntityTypes(std::forward<EntityTypesT>(value)); return *this;}
    template<typename EntityTypesT = EntityTypesListItem>
    EntityRecognitionConfig& AddEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.emplace_back(std::forward<EntityTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EntityTypesListItem> m_entityTypes;
    bool m_entityTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
