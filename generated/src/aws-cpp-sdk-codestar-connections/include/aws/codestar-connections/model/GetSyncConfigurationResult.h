/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/model/SyncConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class GetSyncConfigurationResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetSyncConfigurationResult() = default;
    AWS_CODESTARCONNECTIONS_API GetSyncConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API GetSyncConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details about the sync configuration for which you want to retrieve
     * information.</p>
     */
    inline const SyncConfiguration& GetSyncConfiguration() const { return m_syncConfiguration; }
    template<typename SyncConfigurationT = SyncConfiguration>
    void SetSyncConfiguration(SyncConfigurationT&& value) { m_syncConfigurationHasBeenSet = true; m_syncConfiguration = std::forward<SyncConfigurationT>(value); }
    template<typename SyncConfigurationT = SyncConfiguration>
    GetSyncConfigurationResult& WithSyncConfiguration(SyncConfigurationT&& value) { SetSyncConfiguration(std::forward<SyncConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSyncConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SyncConfiguration m_syncConfiguration;
    bool m_syncConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
