/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutRemediationExceptionsResult
  {
  public:
    AWS_CONFIGSERVICE_API PutRemediationExceptionsResult();
    AWS_CONFIGSERVICE_API PutRemediationExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutRemediationExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
