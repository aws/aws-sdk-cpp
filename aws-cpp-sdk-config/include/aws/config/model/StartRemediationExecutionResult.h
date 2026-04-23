/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API StartRemediationExecutionResult
  {
  public:
    StartRemediationExecutionResult();
    StartRemediationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartRemediationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::String m_failureMessage;

    Aws::Vector<ResourceKey> m_failedItems;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
