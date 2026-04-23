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
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/Entity.h>
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
namespace ComprehendMedical
{
namespace Model
{
  class AWS_COMPREHENDMEDICAL_API DetectPHIResult
  {
  public:
    DetectPHIResult();
    DetectPHIResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectPHIResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical has in its detection. </p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical has in its detection. </p>
     */
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entities = value; }

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical has in its detection. </p>
     */
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entities = std::move(value); }

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical has in its detection. </p>
     */
    inline DetectPHIResult& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical has in its detection. </p>
     */
    inline DetectPHIResult& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical has in its detection. </p>
     */
    inline DetectPHIResult& AddEntities(const Entity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical has in its detection. </p>
     */
    inline DetectPHIResult& AddEntities(Entity&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p> If the result of the previous request to DetectPHI was truncated, include
     * the Paginationtoken to fetch the next page of PHI entities. </p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p> If the result of the previous request to DetectPHI was truncated, include
     * the Paginationtoken to fetch the next page of PHI entities. </p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }

    /**
     * <p> If the result of the previous request to DetectPHI was truncated, include
     * the Paginationtoken to fetch the next page of PHI entities. </p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }

    /**
     * <p> If the result of the previous request to DetectPHI was truncated, include
     * the Paginationtoken to fetch the next page of PHI entities. </p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }

    /**
     * <p> If the result of the previous request to DetectPHI was truncated, include
     * the Paginationtoken to fetch the next page of PHI entities. </p>
     */
    inline DetectPHIResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p> If the result of the previous request to DetectPHI was truncated, include
     * the Paginationtoken to fetch the next page of PHI entities. </p>
     */
    inline DetectPHIResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p> If the result of the previous request to DetectPHI was truncated, include
     * the Paginationtoken to fetch the next page of PHI entities. </p>
     */
    inline DetectPHIResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}

  private:

    Aws::Vector<Entity> m_entities;

    Aws::String m_paginationToken;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
