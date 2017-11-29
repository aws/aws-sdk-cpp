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
#include <aws/comprehend/model/Entity.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{
  class AWS_COMPREHEND_API DetectEntitiesResult
  {
  public:
    DetectEntitiesResult();
    DetectEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of entities identified in the input text. For each entity, the
     * response provides the entity text, entity type, where the entity text begins and
     * ends, and the level of confidence that Amazon Comprehend has in the detection.
     * For a list of entity types, see <a>how-entities</a>. </p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }

    /**
     * <p>A collection of entities identified in the input text. For each entity, the
     * response provides the entity text, entity type, where the entity text begins and
     * ends, and the level of confidence that Amazon Comprehend has in the detection.
     * For a list of entity types, see <a>how-entities</a>. </p>
     */
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entities = value; }

    /**
     * <p>A collection of entities identified in the input text. For each entity, the
     * response provides the entity text, entity type, where the entity text begins and
     * ends, and the level of confidence that Amazon Comprehend has in the detection.
     * For a list of entity types, see <a>how-entities</a>. </p>
     */
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entities = std::move(value); }

    /**
     * <p>A collection of entities identified in the input text. For each entity, the
     * response provides the entity text, entity type, where the entity text begins and
     * ends, and the level of confidence that Amazon Comprehend has in the detection.
     * For a list of entity types, see <a>how-entities</a>. </p>
     */
    inline DetectEntitiesResult& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}

    /**
     * <p>A collection of entities identified in the input text. For each entity, the
     * response provides the entity text, entity type, where the entity text begins and
     * ends, and the level of confidence that Amazon Comprehend has in the detection.
     * For a list of entity types, see <a>how-entities</a>. </p>
     */
    inline DetectEntitiesResult& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>A collection of entities identified in the input text. For each entity, the
     * response provides the entity text, entity type, where the entity text begins and
     * ends, and the level of confidence that Amazon Comprehend has in the detection.
     * For a list of entity types, see <a>how-entities</a>. </p>
     */
    inline DetectEntitiesResult& AddEntities(const Entity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>A collection of entities identified in the input text. For each entity, the
     * response provides the entity text, entity type, where the entity text begins and
     * ends, and the level of confidence that Amazon Comprehend has in the detection.
     * For a list of entity types, see <a>how-entities</a>. </p>
     */
    inline DetectEntitiesResult& AddEntities(Entity&& value) { m_entities.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Entity> m_entities;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
