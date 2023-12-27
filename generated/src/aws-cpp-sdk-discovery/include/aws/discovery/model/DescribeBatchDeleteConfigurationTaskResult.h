/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/BatchDeleteConfigurationTask.h>
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
  class DescribeBatchDeleteConfigurationTaskResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeBatchDeleteConfigurationTaskResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeBatchDeleteConfigurationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeBatchDeleteConfigurationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The <code>BatchDeleteConfigurationTask</code> that represents the deletion
     * task being executed. </p>
     */
    inline const BatchDeleteConfigurationTask& GetTask() const{ return m_task; }

    /**
     * <p> The <code>BatchDeleteConfigurationTask</code> that represents the deletion
     * task being executed. </p>
     */
    inline void SetTask(const BatchDeleteConfigurationTask& value) { m_task = value; }

    /**
     * <p> The <code>BatchDeleteConfigurationTask</code> that represents the deletion
     * task being executed. </p>
     */
    inline void SetTask(BatchDeleteConfigurationTask&& value) { m_task = std::move(value); }

    /**
     * <p> The <code>BatchDeleteConfigurationTask</code> that represents the deletion
     * task being executed. </p>
     */
    inline DescribeBatchDeleteConfigurationTaskResult& WithTask(const BatchDeleteConfigurationTask& value) { SetTask(value); return *this;}

    /**
     * <p> The <code>BatchDeleteConfigurationTask</code> that represents the deletion
     * task being executed. </p>
     */
    inline DescribeBatchDeleteConfigurationTaskResult& WithTask(BatchDeleteConfigurationTask&& value) { SetTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeBatchDeleteConfigurationTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeBatchDeleteConfigurationTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeBatchDeleteConfigurationTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BatchDeleteConfigurationTask m_task;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
