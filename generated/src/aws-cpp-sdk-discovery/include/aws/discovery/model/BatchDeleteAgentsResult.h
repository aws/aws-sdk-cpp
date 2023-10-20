/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/BatchDeleteAgentError.h>
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
  class BatchDeleteAgentsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteAgentsResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of agent IDs that failed to delete during the deletion task, each
     * paired with an error message. </p>
     */
    inline const Aws::Vector<BatchDeleteAgentError>& GetErrors() const{ return m_errors; }

    /**
     * <p> A list of agent IDs that failed to delete during the deletion task, each
     * paired with an error message. </p>
     */
    inline void SetErrors(const Aws::Vector<BatchDeleteAgentError>& value) { m_errors = value; }

    /**
     * <p> A list of agent IDs that failed to delete during the deletion task, each
     * paired with an error message. </p>
     */
    inline void SetErrors(Aws::Vector<BatchDeleteAgentError>&& value) { m_errors = std::move(value); }

    /**
     * <p> A list of agent IDs that failed to delete during the deletion task, each
     * paired with an error message. </p>
     */
    inline BatchDeleteAgentsResult& WithErrors(const Aws::Vector<BatchDeleteAgentError>& value) { SetErrors(value); return *this;}

    /**
     * <p> A list of agent IDs that failed to delete during the deletion task, each
     * paired with an error message. </p>
     */
    inline BatchDeleteAgentsResult& WithErrors(Aws::Vector<BatchDeleteAgentError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p> A list of agent IDs that failed to delete during the deletion task, each
     * paired with an error message. </p>
     */
    inline BatchDeleteAgentsResult& AddErrors(const BatchDeleteAgentError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p> A list of agent IDs that failed to delete during the deletion task, each
     * paired with an error message. </p>
     */
    inline BatchDeleteAgentsResult& AddErrors(BatchDeleteAgentError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchDeleteAgentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchDeleteAgentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchDeleteAgentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchDeleteAgentError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
