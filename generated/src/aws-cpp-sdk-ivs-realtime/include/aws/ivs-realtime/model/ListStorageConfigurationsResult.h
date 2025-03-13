/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/StorageConfigurationSummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListStorageConfigurationsResult
  {
  public:
    AWS_IVSREALTIME_API ListStorageConfigurationsResult() = default;
    AWS_IVSREALTIME_API ListStorageConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListStorageConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching storage configurations.</p>
     */
    inline const Aws::Vector<StorageConfigurationSummary>& GetStorageConfigurations() const { return m_storageConfigurations; }
    template<typename StorageConfigurationsT = Aws::Vector<StorageConfigurationSummary>>
    void SetStorageConfigurations(StorageConfigurationsT&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations = std::forward<StorageConfigurationsT>(value); }
    template<typename StorageConfigurationsT = Aws::Vector<StorageConfigurationSummary>>
    ListStorageConfigurationsResult& WithStorageConfigurations(StorageConfigurationsT&& value) { SetStorageConfigurations(std::forward<StorageConfigurationsT>(value)); return *this;}
    template<typename StorageConfigurationsT = StorageConfigurationSummary>
    ListStorageConfigurationsResult& AddStorageConfigurations(StorageConfigurationsT&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations.emplace_back(std::forward<StorageConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more storage configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStorageConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStorageConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StorageConfigurationSummary> m_storageConfigurations;
    bool m_storageConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
