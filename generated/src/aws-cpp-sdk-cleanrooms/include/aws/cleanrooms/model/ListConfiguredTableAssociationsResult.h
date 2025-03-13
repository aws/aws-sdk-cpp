/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationSummary.h>
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
  class ListConfiguredTableAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListConfiguredTableAssociationsResult() = default;
    AWS_CLEANROOMS_API ListConfiguredTableAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListConfiguredTableAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retrieved list of configured table associations.</p>
     */
    inline const Aws::Vector<ConfiguredTableAssociationSummary>& GetConfiguredTableAssociationSummaries() const { return m_configuredTableAssociationSummaries; }
    template<typename ConfiguredTableAssociationSummariesT = Aws::Vector<ConfiguredTableAssociationSummary>>
    void SetConfiguredTableAssociationSummaries(ConfiguredTableAssociationSummariesT&& value) { m_configuredTableAssociationSummariesHasBeenSet = true; m_configuredTableAssociationSummaries = std::forward<ConfiguredTableAssociationSummariesT>(value); }
    template<typename ConfiguredTableAssociationSummariesT = Aws::Vector<ConfiguredTableAssociationSummary>>
    ListConfiguredTableAssociationsResult& WithConfiguredTableAssociationSummaries(ConfiguredTableAssociationSummariesT&& value) { SetConfiguredTableAssociationSummaries(std::forward<ConfiguredTableAssociationSummariesT>(value)); return *this;}
    template<typename ConfiguredTableAssociationSummariesT = ConfiguredTableAssociationSummary>
    ListConfiguredTableAssociationsResult& AddConfiguredTableAssociationSummaries(ConfiguredTableAssociationSummariesT&& value) { m_configuredTableAssociationSummariesHasBeenSet = true; m_configuredTableAssociationSummaries.emplace_back(std::forward<ConfiguredTableAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfiguredTableAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfiguredTableAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfiguredTableAssociationSummary> m_configuredTableAssociationSummaries;
    bool m_configuredTableAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
