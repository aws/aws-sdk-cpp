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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/FailedRemediationExceptionBatch.h>
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
  class AWS_CONFIGSERVICE_API PutRemediationExceptionsResult
  {
  public:
    PutRemediationExceptionsResult();
    PutRemediationExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutRemediationExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of failed remediation exceptions batch objects. Each object in
     * the batch consists of a list of failed items and failure messages.</p>
     */
    inline const Aws::Vector<FailedRemediationExceptionBatch>& GetFailedBatches() const{ return m_failedBatches; }

    /**
     * <p>Returns a list of failed remediation exceptions batch objects. Each object in
     * the batch consists of a list of failed items and failure messages.</p>
     */
    inline void SetFailedBatches(const Aws::Vector<FailedRemediationExceptionBatch>& value) { m_failedBatches = value; }

    /**
     * <p>Returns a list of failed remediation exceptions batch objects. Each object in
     * the batch consists of a list of failed items and failure messages.</p>
     */
    inline void SetFailedBatches(Aws::Vector<FailedRemediationExceptionBatch>&& value) { m_failedBatches = std::move(value); }

    /**
     * <p>Returns a list of failed remediation exceptions batch objects. Each object in
     * the batch consists of a list of failed items and failure messages.</p>
     */
    inline PutRemediationExceptionsResult& WithFailedBatches(const Aws::Vector<FailedRemediationExceptionBatch>& value) { SetFailedBatches(value); return *this;}

    /**
     * <p>Returns a list of failed remediation exceptions batch objects. Each object in
     * the batch consists of a list of failed items and failure messages.</p>
     */
    inline PutRemediationExceptionsResult& WithFailedBatches(Aws::Vector<FailedRemediationExceptionBatch>&& value) { SetFailedBatches(std::move(value)); return *this;}

    /**
     * <p>Returns a list of failed remediation exceptions batch objects. Each object in
     * the batch consists of a list of failed items and failure messages.</p>
     */
    inline PutRemediationExceptionsResult& AddFailedBatches(const FailedRemediationExceptionBatch& value) { m_failedBatches.push_back(value); return *this; }

    /**
     * <p>Returns a list of failed remediation exceptions batch objects. Each object in
     * the batch consists of a list of failed items and failure messages.</p>
     */
    inline PutRemediationExceptionsResult& AddFailedBatches(FailedRemediationExceptionBatch&& value) { m_failedBatches.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedRemediationExceptionBatch> m_failedBatches;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
