/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/model/SyncConfiguration.h>
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
namespace CodeConnections
{
namespace Model
{
  class UpdateSyncConfigurationResult
  {
  public:
    AWS_CODECONNECTIONS_API UpdateSyncConfigurationResult() = default;
    AWS_CODECONNECTIONS_API UpdateSyncConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API UpdateSyncConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information returned for the sync configuration to be updated.</p>
     */
    inline const SyncConfiguration& GetSyncConfiguration() const { return m_syncConfiguration; }
    template<typename SyncConfigurationT = SyncConfiguration>
    void SetSyncConfiguration(SyncConfigurationT&& value) { m_syncConfigurationHasBeenSet = true; m_syncConfiguration = std::forward<SyncConfigurationT>(value); }
    template<typename SyncConfigurationT = SyncConfiguration>
    UpdateSyncConfigurationResult& WithSyncConfiguration(SyncConfigurationT&& value) { SetSyncConfiguration(std::forward<SyncConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSyncConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SyncConfiguration m_syncConfiguration;
    bool m_syncConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
