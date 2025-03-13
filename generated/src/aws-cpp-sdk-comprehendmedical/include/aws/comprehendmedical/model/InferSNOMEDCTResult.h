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
    AWS_COMPREHENDMEDICAL_API InferSNOMEDCTResult() = default;
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
    inline const Aws::Vector<SNOMEDCTEntity>& GetEntities() const { return m_entities; }
    template<typename EntitiesT = Aws::Vector<SNOMEDCTEntity>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<SNOMEDCTEntity>>
    InferSNOMEDCTResult& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = SNOMEDCTEntity>
    InferSNOMEDCTResult& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If the result of the request is truncated, the pagination token can be used
     * to fetch the next page of entities. </p>
     */
    inline const Aws::String& GetPaginationToken() const { return m_paginationToken; }
    template<typename PaginationTokenT = Aws::String>
    void SetPaginationToken(PaginationTokenT&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::forward<PaginationTokenT>(value); }
    template<typename PaginationTokenT = Aws::String>
    InferSNOMEDCTResult& WithPaginationToken(PaginationTokenT&& value) { SetPaginationToken(std::forward<PaginationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the model used to analyze the documents, in the format n.n.n
     * You can use this information to track the model used for a particular batch of
     * documents. </p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    InferSNOMEDCTResult& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the SNOMED-CT revision, including the edition, language, and
     * version date. </p>
     */
    inline const SNOMEDCTDetails& GetSNOMEDCTDetails() const { return m_sNOMEDCTDetails; }
    template<typename SNOMEDCTDetailsT = SNOMEDCTDetails>
    void SetSNOMEDCTDetails(SNOMEDCTDetailsT&& value) { m_sNOMEDCTDetailsHasBeenSet = true; m_sNOMEDCTDetails = std::forward<SNOMEDCTDetailsT>(value); }
    template<typename SNOMEDCTDetailsT = SNOMEDCTDetails>
    InferSNOMEDCTResult& WithSNOMEDCTDetails(SNOMEDCTDetailsT&& value) { SetSNOMEDCTDetails(std::forward<SNOMEDCTDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of characters in the input request documentation. </p>
     */
    inline const Characters& GetCharacters() const { return m_characters; }
    template<typename CharactersT = Characters>
    void SetCharacters(CharactersT&& value) { m_charactersHasBeenSet = true; m_characters = std::forward<CharactersT>(value); }
    template<typename CharactersT = Characters>
    InferSNOMEDCTResult& WithCharacters(CharactersT&& value) { SetCharacters(std::forward<CharactersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InferSNOMEDCTResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SNOMEDCTEntity> m_entities;
    bool m_entitiesHasBeenSet = false;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    SNOMEDCTDetails m_sNOMEDCTDetails;
    bool m_sNOMEDCTDetailsHasBeenSet = false;

    Characters m_characters;
    bool m_charactersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
