/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/AudienceModelSummary.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class ListAudienceModelsResult
  {
  public:
    AWS_CLEANROOMSML_API ListAudienceModelsResult() = default;
    AWS_CLEANROOMSML_API ListAudienceModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListAudienceModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAudienceModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audience models that match the request.</p>
     */
    inline const Aws::Vector<AudienceModelSummary>& GetAudienceModels() const { return m_audienceModels; }
    template<typename AudienceModelsT = Aws::Vector<AudienceModelSummary>>
    void SetAudienceModels(AudienceModelsT&& value) { m_audienceModelsHasBeenSet = true; m_audienceModels = std::forward<AudienceModelsT>(value); }
    template<typename AudienceModelsT = Aws::Vector<AudienceModelSummary>>
    ListAudienceModelsResult& WithAudienceModels(AudienceModelsT&& value) { SetAudienceModels(std::forward<AudienceModelsT>(value)); return *this;}
    template<typename AudienceModelsT = AudienceModelSummary>
    ListAudienceModelsResult& AddAudienceModels(AudienceModelsT&& value) { m_audienceModelsHasBeenSet = true; m_audienceModels.emplace_back(std::forward<AudienceModelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAudienceModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AudienceModelSummary> m_audienceModels;
    bool m_audienceModelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
