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
    AWS_CODESTARCONNECTIONS_API GetSyncConfigurationResult();
    AWS_CODESTARCONNECTIONS_API GetSyncConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API GetSyncConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details about the sync configuration for which you want to retrieve
     * information.</p>
     */
    inline const SyncConfiguration& GetSyncConfiguration() const{ return m_syncConfiguration; }

    /**
     * <p>The details about the sync configuration for which you want to retrieve
     * information.</p>
     */
    inline void SetSyncConfiguration(const SyncConfiguration& value) { m_syncConfiguration = value; }

    /**
     * <p>The details about the sync configuration for which you want to retrieve
     * information.</p>
     */
    inline void SetSyncConfiguration(SyncConfiguration&& value) { m_syncConfiguration = std::move(value); }

    /**
     * <p>The details about the sync configuration for which you want to retrieve
     * information.</p>
     */
    inline GetSyncConfigurationResult& WithSyncConfiguration(const SyncConfiguration& value) { SetSyncConfiguration(value); return *this;}

    /**
     * <p>The details about the sync configuration for which you want to retrieve
     * information.</p>
     */
    inline GetSyncConfigurationResult& WithSyncConfiguration(SyncConfiguration&& value) { SetSyncConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSyncConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSyncConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSyncConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SyncConfiguration m_syncConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
