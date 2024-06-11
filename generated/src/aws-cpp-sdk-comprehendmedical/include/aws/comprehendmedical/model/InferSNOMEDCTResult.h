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


    ///@{
    /**
     * <p> The collection of medical concept entities extracted from the input text and
     * their associated information. For each entity, the response provides the entity
     * text, the entity category, where the entity text begins and ends, and the level
     * of confidence that Amazon Comprehend Medical has in the detection and analysis.
     * Attributes and traits of the entity are also returned. </p>
     */
    inline const Aws::Vector<SNOMEDCTEntity>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<SNOMEDCTEntity>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<SNOMEDCTEntity>&& value) { m_entities = std::move(value); }
    inline InferSNOMEDCTResult& WithEntities(const Aws::Vector<SNOMEDCTEntity>& value) { SetEntities(value); return *this;}
    inline InferSNOMEDCTResult& WithEntities(Aws::Vector<SNOMEDCTEntity>&& value) { SetEntities(std::move(value)); return *this;}
    inline InferSNOMEDCTResult& AddEntities(const SNOMEDCTEntity& value) { m_entities.push_back(value); return *this; }
    inline InferSNOMEDCTResult& AddEntities(SNOMEDCTEntity&& value) { m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If the result of the request is truncated, the pagination token can be used
     * to fetch the next page of entities. </p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }
    inline InferSNOMEDCTResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}
    inline InferSNOMEDCTResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}
    inline InferSNOMEDCTResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the model used to analyze the documents, in the format n.n.n
     * You can use this information to track the model used for a particular batch of
     * documents. </p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }
    inline void SetModelVersion(const Aws::String& value) { m_modelVersion = value; }
    inline void SetModelVersion(Aws::String&& value) { m_modelVersion = std::move(value); }
    inline void SetModelVersion(const char* value) { m_modelVersion.assign(value); }
    inline InferSNOMEDCTResult& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}
    inline InferSNOMEDCTResult& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}
    inline InferSNOMEDCTResult& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the SNOMED-CT revision, including the edition, language, and
     * version date. </p>
     */
    inline const SNOMEDCTDetails& GetSNOMEDCTDetails() const{ return m_sNOMEDCTDetails; }
    inline void SetSNOMEDCTDetails(const SNOMEDCTDetails& value) { m_sNOMEDCTDetails = value; }
    inline void SetSNOMEDCTDetails(SNOMEDCTDetails&& value) { m_sNOMEDCTDetails = std::move(value); }
    inline InferSNOMEDCTResult& WithSNOMEDCTDetails(const SNOMEDCTDetails& value) { SetSNOMEDCTDetails(value); return *this;}
    inline InferSNOMEDCTResult& WithSNOMEDCTDetails(SNOMEDCTDetails&& value) { SetSNOMEDCTDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of characters in the input request documentation. </p>
     */
    inline const Characters& GetCharacters() const{ return m_characters; }
    inline void SetCharacters(const Characters& value) { m_characters = value; }
    inline void SetCharacters(Characters&& value) { m_characters = std::move(value); }
    inline InferSNOMEDCTResult& WithCharacters(const Characters& value) { SetCharacters(value); return *this;}
    inline InferSNOMEDCTResult& WithCharacters(Characters&& value) { SetCharacters(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InferSNOMEDCTResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InferSNOMEDCTResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InferSNOMEDCTResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SNOMEDCTEntity> m_entities;

    Aws::String m_paginationToken;

    Aws::String m_modelVersion;

    SNOMEDCTDetails m_sNOMEDCTDetails;

    Characters m_characters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
