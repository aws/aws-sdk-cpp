﻿/**
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
    AWS_CODECONNECTIONS_API UpdateSyncConfigurationResult();
    AWS_CODECONNECTIONS_API UpdateSyncConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API UpdateSyncConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information returned for the sync configuration to be updated.</p>
     */
    inline const SyncConfiguration& GetSyncConfiguration() const{ return m_syncConfiguration; }
    inline void SetSyncConfiguration(const SyncConfiguration& value) { m_syncConfiguration = value; }
    inline void SetSyncConfiguration(SyncConfiguration&& value) { m_syncConfiguration = std::move(value); }
    inline UpdateSyncConfigurationResult& WithSyncConfiguration(const SyncConfiguration& value) { SetSyncConfiguration(value); return *this;}
    inline UpdateSyncConfigurationResult& WithSyncConfiguration(SyncConfiguration&& value) { SetSyncConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSyncConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSyncConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSyncConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SyncConfiguration m_syncConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
