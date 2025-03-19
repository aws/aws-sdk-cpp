/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/Entity.h>
#include <aws/comprehendmedical/model/UnmappedAttribute.h>
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
  class DetectEntitiesV2Result
  {
  public:
    AWS_COMPREHENDMEDICAL_API DetectEntitiesV2Result() = default;
    AWS_COMPREHENDMEDICAL_API DetectEntitiesV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API DetectEntitiesV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The collection of medical entities extracted from the input text and their
     * associated information. For each entity, the response provides the entity text,
     * the entity category, where the entity text begins and ends, and the level of
     * confidence in the detection and analysis. Attributes and traits of the entity
     * are also returned.</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const { return m_entities; }
    template<typename EntitiesT = Aws::Vector<Entity>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<Entity>>
    DetectEntitiesV2Result& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = Entity>
    DetectEntitiesV2Result& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes extracted from the input text that couldn't be related to an
     * entity.</p>
     */
    inline const Aws::Vector<UnmappedAttribute>& GetUnmappedAttributes() const { return m_unmappedAttributes; }
    template<typename UnmappedAttributesT = Aws::Vector<UnmappedAttribute>>
    void SetUnmappedAttributes(UnmappedAttributesT&& value) { m_unmappedAttributesHasBeenSet = true; m_unmappedAttributes = std::forward<UnmappedAttributesT>(value); }
    template<typename UnmappedAttributesT = Aws::Vector<UnmappedAttribute>>
    DetectEntitiesV2Result& WithUnmappedAttributes(UnmappedAttributesT&& value) { SetUnmappedAttributes(std::forward<UnmappedAttributesT>(value)); return *this;}
    template<typename UnmappedAttributesT = UnmappedAttribute>
    DetectEntitiesV2Result& AddUnmappedAttributes(UnmappedAttributesT&& value) { m_unmappedAttributesHasBeenSet = true; m_unmappedAttributes.emplace_back(std::forward<UnmappedAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result to the <code>DetectEntitiesV2</code> operation was truncated,
     * include the <code>PaginationToken</code> to fetch the next page of entities.</p>
     */
    inline const Aws::String& GetPaginationToken() const { return m_paginationToken; }
    template<typename PaginationTokenT = Aws::String>
    void SetPaginationToken(PaginationTokenT&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::forward<PaginationTokenT>(value); }
    template<typename PaginationTokenT = Aws::String>
    DetectEntitiesV2Result& WithPaginationToken(PaginationTokenT&& value) { SetPaginationToken(std::forward<PaginationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    DetectEntitiesV2Result& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectEntitiesV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Entity> m_entities;
    bool m_entitiesHasBeenSet = false;

    Aws::Vector<UnmappedAttribute> m_unmappedAttributes;
    bool m_unmappedAttributesHasBeenSet = false;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
