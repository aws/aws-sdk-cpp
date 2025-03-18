/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredTableSummary.h>
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
  class ListConfiguredTablesResult
  {
  public:
    AWS_CLEANROOMS_API ListConfiguredTablesResult() = default;
    AWS_CLEANROOMS_API ListConfiguredTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListConfiguredTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configured tables listed by the request.</p>
     */
    inline const Aws::Vector<ConfiguredTableSummary>& GetConfiguredTableSummaries() const { return m_configuredTableSummaries; }
    template<typename ConfiguredTableSummariesT = Aws::Vector<ConfiguredTableSummary>>
    void SetConfiguredTableSummaries(ConfiguredTableSummariesT&& value) { m_configuredTableSummariesHasBeenSet = true; m_configuredTableSummaries = std::forward<ConfiguredTableSummariesT>(value); }
    template<typename ConfiguredTableSummariesT = Aws::Vector<ConfiguredTableSummary>>
    ListConfiguredTablesResult& WithConfiguredTableSummaries(ConfiguredTableSummariesT&& value) { SetConfiguredTableSummaries(std::forward<ConfiguredTableSummariesT>(value)); return *this;}
    template<typename ConfiguredTableSummariesT = ConfiguredTableSummary>
    ListConfiguredTablesResult& AddConfiguredTableSummaries(ConfiguredTableSummariesT&& value) { m_configuredTableSummariesHasBeenSet = true; m_configuredTableSummaries.emplace_back(std::forward<ConfiguredTableSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfiguredTablesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfiguredTablesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfiguredTableSummary> m_configuredTableSummaries;
    bool m_configuredTableSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
