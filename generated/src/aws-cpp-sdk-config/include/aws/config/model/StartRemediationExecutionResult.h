/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ResourceKey.h>
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
namespace ConfigService
{
namespace Model
{
  class StartRemediationExecutionResult
  {
  public:
    AWS_CONFIGSERVICE_API StartRemediationExecutionResult();
    AWS_CONFIGSERVICE_API StartRemediationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API StartRemediationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline StartRemediationExecutionResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline StartRemediationExecutionResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline StartRemediationExecutionResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>For resources that have failed to start execution, the API returns a resource
     * key object.</p>
     */
    inline const Aws::Vector<ResourceKey>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>For resources that have failed to start execution, the API returns a resource
     * key object.</p>
     */
    inline void SetFailedItems(const Aws::Vector<ResourceKey>& value) { m_failedItems = value; }

    /**
     * <p>For resources that have failed to start execution, the API returns a resource
     * key object.</p>
     */
    inline void SetFailedItems(Aws::Vector<ResourceKey>&& value) { m_failedItems = std::move(value); }

    /**
     * <p>For resources that have failed to start execution, the API returns a resource
     * key object.</p>
     */
    inline StartRemediationExecutionResult& WithFailedItems(const Aws::Vector<ResourceKey>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>For resources that have failed to start execution, the API returns a resource
     * key object.</p>
     */
    inline StartRemediationExecutionResult& WithFailedItems(Aws::Vector<ResourceKey>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>For resources that have failed to start execution, the API returns a resource
     * key object.</p>
     */
    inline StartRemediationExecutionResult& AddFailedItems(const ResourceKey& value) { m_failedItems.push_back(value); return *this; }

    /**
     * <p>For resources that have failed to start execution, the API returns a resource
     * key object.</p>
     */
    inline StartRemediationExecutionResult& AddFailedItems(ResourceKey&& value) { m_failedItems.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartRemediationExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartRemediationExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartRemediationExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_failureMessage;

    Aws::Vector<ResourceKey> m_failedItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
