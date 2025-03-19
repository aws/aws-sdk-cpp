/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelSummary.h>
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
  class ListConfiguredAudienceModelsResult
  {
  public:
    AWS_CLEANROOMSML_API ListConfiguredAudienceModelsResult() = default;
    AWS_CLEANROOMSML_API ListConfiguredAudienceModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListConfiguredAudienceModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfiguredAudienceModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured audience models.</p>
     */
    inline const Aws::Vector<ConfiguredAudienceModelSummary>& GetConfiguredAudienceModels() const { return m_configuredAudienceModels; }
    template<typename ConfiguredAudienceModelsT = Aws::Vector<ConfiguredAudienceModelSummary>>
    void SetConfiguredAudienceModels(ConfiguredAudienceModelsT&& value) { m_configuredAudienceModelsHasBeenSet = true; m_configuredAudienceModels = std::forward<ConfiguredAudienceModelsT>(value); }
    template<typename ConfiguredAudienceModelsT = Aws::Vector<ConfiguredAudienceModelSummary>>
    ListConfiguredAudienceModelsResult& WithConfiguredAudienceModels(ConfiguredAudienceModelsT&& value) { SetConfiguredAudienceModels(std::forward<ConfiguredAudienceModelsT>(value)); return *this;}
    template<typename ConfiguredAudienceModelsT = ConfiguredAudienceModelSummary>
    ListConfiguredAudienceModelsResult& AddConfiguredAudienceModels(ConfiguredAudienceModelsT&& value) { m_configuredAudienceModelsHasBeenSet = true; m_configuredAudienceModels.emplace_back(std::forward<ConfiguredAudienceModelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfiguredAudienceModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ConfiguredAudienceModelSummary> m_configuredAudienceModels;
    bool m_configuredAudienceModelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
