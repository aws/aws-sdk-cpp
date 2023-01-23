/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DetectPHIResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API DetectPHIResult();
    AWS_COMPREHENDMEDICAL_API DetectPHIResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API DetectPHIResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical; has in its detection. </p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical; has in its detection. </p>
     */
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entities = value; }

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical; has in its detection. </p>
     */
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entities = std::move(value); }

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical; has in its detection. </p>
     */
    inline DetectPHIResult& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical; has in its detection. </p>
     */
    inline DetectPHIResult& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical; has in its detection. </p>
     */
    inline DetectPHIResult& AddEntities(const Entity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p> The collection of PHI entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence that Comprehend Medical; has in its detection. </p>
     */
    inline DetectPHIResult& AddEntities(Entity&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p> If the result of the previous request to <code>DetectPHI</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * PHI entities. </p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p> If the result of the previous request to <code>DetectPHI</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * PHI entities. </p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }

    /**
     * <p> If the result of the previous request to <code>DetectPHI</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * PHI entities. </p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }

    /**
     * <p> If the result of the previous request to <code>DetectPHI</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * PHI entities. </p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }

    /**
     * <p> If the result of the previous request to <code>DetectPHI</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * PHI entities. </p>
     */
    inline DetectPHIResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p> If the result of the previous request to <code>DetectPHI</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * PHI entities. </p>
     */
    inline DetectPHIResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p> If the result of the previous request to <code>DetectPHI</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * PHI entities. </p>
     */
    inline DetectPHIResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersion = value; }

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersion.assign(value); }

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline DetectPHIResult& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline DetectPHIResult& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline DetectPHIResult& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}

  private:

    Aws::Vector<Entity> m_entities;

    Aws::String m_paginationToken;

    Aws::String m_modelVersion;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
