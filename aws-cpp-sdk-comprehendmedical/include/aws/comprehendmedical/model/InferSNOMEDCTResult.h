/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/SNOMEDCTDetails.h>
#include <aws/comprehendmedical/model/Characters.h>
#include <aws/comprehendmedical/model/SNOMEDCTEntity.h>
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
  class InferSNOMEDCTResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API InferSNOMEDCTResult();
    AWS_COMPREHENDMEDICAL_API InferSNOMEDCTResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API InferSNOMEDCTResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The collection of medical concept entities extracted from the input text and
     * their associated information. For each entity, the response provides the entity
     * text, the entity category, where the entity text begins and ends, and the level
     * of confidence that Comprehend Medical has in the detection and analysis.
     * Attributes and traits of the entity are also returned. </p>
     */
    inline const Aws::Vector<SNOMEDCTEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p> The collection of medical concept entities extracted from the input text and
     * their associated information. For each entity, the response provides the entity
     * text, the entity category, where the entity text begins and ends, and the level
     * of confidence that Comprehend Medical has in the detection and analysis.
     * Attributes and traits of the entity are also returned. </p>
     */
    inline void SetEntities(const Aws::Vector<SNOMEDCTEntity>& value) { m_entities = value; }

    /**
     * <p> The collection of medical concept entities extracted from the input text and
     * their associated information. For each entity, the response provides the entity
     * text, the entity category, where the entity text begins and ends, and the level
     * of confidence that Comprehend Medical has in the detection and analysis.
     * Attributes and traits of the entity are also returned. </p>
     */
    inline void SetEntities(Aws::Vector<SNOMEDCTEntity>&& value) { m_entities = std::move(value); }

    /**
     * <p> The collection of medical concept entities extracted from the input text and
     * their associated information. For each entity, the response provides the entity
     * text, the entity category, where the entity text begins and ends, and the level
     * of confidence that Comprehend Medical has in the detection and analysis.
     * Attributes and traits of the entity are also returned. </p>
     */
    inline InferSNOMEDCTResult& WithEntities(const Aws::Vector<SNOMEDCTEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p> The collection of medical concept entities extracted from the input text and
     * their associated information. For each entity, the response provides the entity
     * text, the entity category, where the entity text begins and ends, and the level
     * of confidence that Comprehend Medical has in the detection and analysis.
     * Attributes and traits of the entity are also returned. </p>
     */
    inline InferSNOMEDCTResult& WithEntities(Aws::Vector<SNOMEDCTEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p> The collection of medical concept entities extracted from the input text and
     * their associated information. For each entity, the response provides the entity
     * text, the entity category, where the entity text begins and ends, and the level
     * of confidence that Comprehend Medical has in the detection and analysis.
     * Attributes and traits of the entity are also returned. </p>
     */
    inline InferSNOMEDCTResult& AddEntities(const SNOMEDCTEntity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p> The collection of medical concept entities extracted from the input text and
     * their associated information. For each entity, the response provides the entity
     * text, the entity category, where the entity text begins and ends, and the level
     * of confidence that Comprehend Medical has in the detection and analysis.
     * Attributes and traits of the entity are also returned. </p>
     */
    inline InferSNOMEDCTResult& AddEntities(SNOMEDCTEntity&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p> If the result of the request is truncated, the pagination token can be used
     * to fetch the next page of entities. </p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p> If the result of the request is truncated, the pagination token can be used
     * to fetch the next page of entities. </p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }

    /**
     * <p> If the result of the request is truncated, the pagination token can be used
     * to fetch the next page of entities. </p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }

    /**
     * <p> If the result of the request is truncated, the pagination token can be used
     * to fetch the next page of entities. </p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }

    /**
     * <p> If the result of the request is truncated, the pagination token can be used
     * to fetch the next page of entities. </p>
     */
    inline InferSNOMEDCTResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p> If the result of the request is truncated, the pagination token can be used
     * to fetch the next page of entities. </p>
     */
    inline InferSNOMEDCTResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p> If the result of the request is truncated, the pagination token can be used
     * to fetch the next page of entities. </p>
     */
    inline InferSNOMEDCTResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    /**
     * <p> The version of the model used to analyze the documents, in the format n.n.n
     * You can use this information to track the model used for a particular batch of
     * documents. </p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p> The version of the model used to analyze the documents, in the format n.n.n
     * You can use this information to track the model used for a particular batch of
     * documents. </p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersion = value; }

    /**
     * <p> The version of the model used to analyze the documents, in the format n.n.n
     * You can use this information to track the model used for a particular batch of
     * documents. </p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersion = std::move(value); }

    /**
     * <p> The version of the model used to analyze the documents, in the format n.n.n
     * You can use this information to track the model used for a particular batch of
     * documents. </p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersion.assign(value); }

    /**
     * <p> The version of the model used to analyze the documents, in the format n.n.n
     * You can use this information to track the model used for a particular batch of
     * documents. </p>
     */
    inline InferSNOMEDCTResult& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p> The version of the model used to analyze the documents, in the format n.n.n
     * You can use this information to track the model used for a particular batch of
     * documents. </p>
     */
    inline InferSNOMEDCTResult& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p> The version of the model used to analyze the documents, in the format n.n.n
     * You can use this information to track the model used for a particular batch of
     * documents. </p>
     */
    inline InferSNOMEDCTResult& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p> The details of the SNOMED-CT revision, including the edition, language, and
     * version date. </p>
     */
    inline const SNOMEDCTDetails& GetSNOMEDCTDetails() const{ return m_sNOMEDCTDetails; }

    /**
     * <p> The details of the SNOMED-CT revision, including the edition, language, and
     * version date. </p>
     */
    inline void SetSNOMEDCTDetails(const SNOMEDCTDetails& value) { m_sNOMEDCTDetails = value; }

    /**
     * <p> The details of the SNOMED-CT revision, including the edition, language, and
     * version date. </p>
     */
    inline void SetSNOMEDCTDetails(SNOMEDCTDetails&& value) { m_sNOMEDCTDetails = std::move(value); }

    /**
     * <p> The details of the SNOMED-CT revision, including the edition, language, and
     * version date. </p>
     */
    inline InferSNOMEDCTResult& WithSNOMEDCTDetails(const SNOMEDCTDetails& value) { SetSNOMEDCTDetails(value); return *this;}

    /**
     * <p> The details of the SNOMED-CT revision, including the edition, language, and
     * version date. </p>
     */
    inline InferSNOMEDCTResult& WithSNOMEDCTDetails(SNOMEDCTDetails&& value) { SetSNOMEDCTDetails(std::move(value)); return *this;}


    /**
     * <p> The number of characters in the input request documentation. </p>
     */
    inline const Characters& GetCharacters() const{ return m_characters; }

    /**
     * <p> The number of characters in the input request documentation. </p>
     */
    inline void SetCharacters(const Characters& value) { m_characters = value; }

    /**
     * <p> The number of characters in the input request documentation. </p>
     */
    inline void SetCharacters(Characters&& value) { m_characters = std::move(value); }

    /**
     * <p> The number of characters in the input request documentation. </p>
     */
    inline InferSNOMEDCTResult& WithCharacters(const Characters& value) { SetCharacters(value); return *this;}

    /**
     * <p> The number of characters in the input request documentation. </p>
     */
    inline InferSNOMEDCTResult& WithCharacters(Characters&& value) { SetCharacters(std::move(value)); return *this;}

  private:

    Aws::Vector<SNOMEDCTEntity> m_entities;

    Aws::String m_paginationToken;

    Aws::String m_modelVersion;

    SNOMEDCTDetails m_sNOMEDCTDetails;

    Characters m_characters;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
