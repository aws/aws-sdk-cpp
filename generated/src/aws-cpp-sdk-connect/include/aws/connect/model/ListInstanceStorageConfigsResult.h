/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceStorageConfig.h>
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
namespace Connect
{
namespace Model
{
  class ListInstanceStorageConfigsResult
  {
  public:
    AWS_CONNECT_API ListInstanceStorageConfigsResult() = default;
    AWS_CONNECT_API ListInstanceStorageConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListInstanceStorageConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A valid storage type.</p>
     */
    inline const Aws::Vector<InstanceStorageConfig>& GetStorageConfigs() const { return m_storageConfigs; }
    template<typename StorageConfigsT = Aws::Vector<InstanceStorageConfig>>
    void SetStorageConfigs(StorageConfigsT&& value) { m_storageConfigsHasBeenSet = true; m_storageConfigs = std::forward<StorageConfigsT>(value); }
    template<typename StorageConfigsT = Aws::Vector<InstanceStorageConfig>>
    ListInstanceStorageConfigsResult& WithStorageConfigs(StorageConfigsT&& value) { SetStorageConfigs(std::forward<StorageConfigsT>(value)); return *this;}
    template<typename StorageConfigsT = InstanceStorageConfig>
    ListInstanceStorageConfigsResult& AddStorageConfigs(StorageConfigsT&& value) { m_storageConfigsHasBeenSet = true; m_storageConfigs.emplace_back(std::forward<StorageConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInstanceStorageConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInstanceStorageConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceStorageConfig> m_storageConfigs;
    bool m_storageConfigsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
