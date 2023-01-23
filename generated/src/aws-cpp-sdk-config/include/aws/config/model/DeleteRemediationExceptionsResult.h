/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/FailedDeleteRemediationExceptionsBatch.h>
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
  class DeleteRemediationExceptionsResult
  {
  public:
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsResult();
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of failed delete remediation exceptions batch objects. Each
     * object in the batch consists of a list of failed items and failure messages.</p>
     */
    inline const Aws::Vector<FailedDeleteRemediationExceptionsBatch>& GetFailedBatches() const{ return m_failedBatches; }

    /**
     * <p>Returns a list of failed delete remediation exceptions batch objects. Each
     * object in the batch consists of a list of failed items and failure messages.</p>
     */
    inline void SetFailedBatches(const Aws::Vector<FailedDeleteRemediationExceptionsBatch>& value) { m_failedBatches = value; }

    /**
     * <p>Returns a list of failed delete remediation exceptions batch objects. Each
     * object in the batch consists of a list of failed items and failure messages.</p>
     */
    inline void SetFailedBatches(Aws::Vector<FailedDeleteRemediationExceptionsBatch>&& value) { m_failedBatches = std::move(value); }

    /**
     * <p>Returns a list of failed delete remediation exceptions batch objects. Each
     * object in the batch consists of a list of failed items and failure messages.</p>
     */
    inline DeleteRemediationExceptionsResult& WithFailedBatches(const Aws::Vector<FailedDeleteRemediationExceptionsBatch>& value) { SetFailedBatches(value); return *this;}

    /**
     * <p>Returns a list of failed delete remediation exceptions batch objects. Each
     * object in the batch consists of a list of failed items and failure messages.</p>
     */
    inline DeleteRemediationExceptionsResult& WithFailedBatches(Aws::Vector<FailedDeleteRemediationExceptionsBatch>&& value) { SetFailedBatches(std::move(value)); return *this;}

    /**
     * <p>Returns a list of failed delete remediation exceptions batch objects. Each
     * object in the batch consists of a list of failed items and failure messages.</p>
     */
    inline DeleteRemediationExceptionsResult& AddFailedBatches(const FailedDeleteRemediationExceptionsBatch& value) { m_failedBatches.push_back(value); return *this; }

    /**
     * <p>Returns a list of failed delete remediation exceptions batch objects. Each
     * object in the batch consists of a list of failed items and failure messages.</p>
     */
    inline DeleteRemediationExceptionsResult& AddFailedBatches(FailedDeleteRemediationExceptionsBatch&& value) { m_failedBatches.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedDeleteRemediationExceptionsBatch> m_failedBatches;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
