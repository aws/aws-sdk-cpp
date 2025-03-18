/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/SyncConfiguration.h>
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
namespace CodeConnections
{
namespace Model
{
  class ListSyncConfigurationsResult
  {
  public:
    AWS_CODECONNECTIONS_API ListSyncConfigurationsResult() = default;
    AWS_CODECONNECTIONS_API ListSyncConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API ListSyncConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of repository sync definitions returned by the request.</p>
     */
    inline const Aws::Vector<SyncConfiguration>& GetSyncConfigurations() const { return m_syncConfigurations; }
    template<typename SyncConfigurationsT = Aws::Vector<SyncConfiguration>>
    void SetSyncConfigurations(SyncConfigurationsT&& value) { m_syncConfigurationsHasBeenSet = true; m_syncConfigurations = std::forward<SyncConfigurationsT>(value); }
    template<typename SyncConfigurationsT = Aws::Vector<SyncConfiguration>>
    ListSyncConfigurationsResult& WithSyncConfigurations(SyncConfigurationsT&& value) { SetSyncConfigurations(std::forward<SyncConfigurationsT>(value)); return *this;}
    template<typename SyncConfigurationsT = SyncConfiguration>
    ListSyncConfigurationsResult& AddSyncConfigurations(SyncConfigurationsT&& value) { m_syncConfigurationsHasBeenSet = true; m_syncConfigurations.emplace_back(std::forward<SyncConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSyncConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSyncConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SyncConfiguration> m_syncConfigurations;
    bool m_syncConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
