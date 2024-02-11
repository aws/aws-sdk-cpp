/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class StartBatchDeleteConfigurationTaskResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StartBatchDeleteConfigurationTaskResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API StartBatchDeleteConfigurationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StartBatchDeleteConfigurationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The unique identifier associated with the newly started deletion task. </p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p> The unique identifier associated with the newly started deletion task. </p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p> The unique identifier associated with the newly started deletion task. </p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p> The unique identifier associated with the newly started deletion task. </p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p> The unique identifier associated with the newly started deletion task. </p>
     */
    inline StartBatchDeleteConfigurationTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p> The unique identifier associated with the newly started deletion task. </p>
     */
    inline StartBatchDeleteConfigurationTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier associated with the newly started deletion task. </p>
     */
    inline StartBatchDeleteConfigurationTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartBatchDeleteConfigurationTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartBatchDeleteConfigurationTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartBatchDeleteConfigurationTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_taskId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
