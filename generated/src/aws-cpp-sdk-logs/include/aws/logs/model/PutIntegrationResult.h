/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/IntegrationStatus.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class PutIntegrationResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutIntegrationResult();
    AWS_CLOUDWATCHLOGS_API PutIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the integration that you just created.</p>
     */
    inline const Aws::String& GetIntegrationName() const{ return m_integrationName; }
    inline void SetIntegrationName(const Aws::String& value) { m_integrationName = value; }
    inline void SetIntegrationName(Aws::String&& value) { m_integrationName = std::move(value); }
    inline void SetIntegrationName(const char* value) { m_integrationName.assign(value); }
    inline PutIntegrationResult& WithIntegrationName(const Aws::String& value) { SetIntegrationName(value); return *this;}
    inline PutIntegrationResult& WithIntegrationName(Aws::String&& value) { SetIntegrationName(std::move(value)); return *this;}
    inline PutIntegrationResult& WithIntegrationName(const char* value) { SetIntegrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the integration that you just created.</p> <p>After you create
     * an integration, it takes a few minutes to complete. During this time, you'll see
     * the status as <code>PROVISIONING</code>.</p>
     */
    inline const IntegrationStatus& GetIntegrationStatus() const{ return m_integrationStatus; }
    inline void SetIntegrationStatus(const IntegrationStatus& value) { m_integrationStatus = value; }
    inline void SetIntegrationStatus(IntegrationStatus&& value) { m_integrationStatus = std::move(value); }
    inline PutIntegrationResult& WithIntegrationStatus(const IntegrationStatus& value) { SetIntegrationStatus(value); return *this;}
    inline PutIntegrationResult& WithIntegrationStatus(IntegrationStatus&& value) { SetIntegrationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutIntegrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutIntegrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutIntegrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_integrationName;

    IntegrationStatus m_integrationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
