/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredAudienceModelAssociationSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListConfiguredAudienceModelAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListConfiguredAudienceModelAssociationsResult() = default;
    AWS_CLEANROOMS_API ListConfiguredAudienceModelAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListConfiguredAudienceModelAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summaries of the configured audience model associations that you
     * requested.</p>
     */
    inline const Aws::Vector<ConfiguredAudienceModelAssociationSummary>& GetConfiguredAudienceModelAssociationSummaries() const { return m_configuredAudienceModelAssociationSummaries; }
    template<typename ConfiguredAudienceModelAssociationSummariesT = Aws::Vector<ConfiguredAudienceModelAssociationSummary>>
    void SetConfiguredAudienceModelAssociationSummaries(ConfiguredAudienceModelAssociationSummariesT&& value) { m_configuredAudienceModelAssociationSummariesHasBeenSet = true; m_configuredAudienceModelAssociationSummaries = std::forward<ConfiguredAudienceModelAssociationSummariesT>(value); }
    template<typename ConfiguredAudienceModelAssociationSummariesT = Aws::Vector<ConfiguredAudienceModelAssociationSummary>>
    ListConfiguredAudienceModelAssociationsResult& WithConfiguredAudienceModelAssociationSummaries(ConfiguredAudienceModelAssociationSummariesT&& value) { SetConfiguredAudienceModelAssociationSummaries(std::forward<ConfiguredAudienceModelAssociationSummariesT>(value)); return *this;}
    template<typename ConfiguredAudienceModelAssociationSummariesT = ConfiguredAudienceModelAssociationSummary>
    ListConfiguredAudienceModelAssociationsResult& AddConfiguredAudienceModelAssociationSummaries(ConfiguredAudienceModelAssociationSummariesT&& value) { m_configuredAudienceModelAssociationSummariesHasBeenSet = true; m_configuredAudienceModelAssociationSummaries.emplace_back(std::forward<ConfiguredAudienceModelAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfiguredAudienceModelAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfiguredAudienceModelAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfiguredAudienceModelAssociationSummary> m_configuredAudienceModelAssociationSummaries;
    bool m_configuredAudienceModelAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
