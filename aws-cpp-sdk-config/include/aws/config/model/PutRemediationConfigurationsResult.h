/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/FailedRemediationBatch.h>
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
  class PutRemediationConfigurationsResult
  {
  public:
    AWS_CONFIGSERVICE_API PutRemediationConfigurationsResult();
    AWS_CONFIGSERVICE_API PutRemediationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutRemediationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of failed remediation batch objects.</p>
     */
    inline const Aws::Vector<FailedRemediationBatch>& GetFailedBatches() const{ return m_failedBatches; }

    /**
     * <p>Returns a list of failed remediation batch objects.</p>
     */
    inline void SetFailedBatches(const Aws::Vector<FailedRemediationBatch>& value) { m_failedBatches = value; }

    /**
     * <p>Returns a list of failed remediation batch objects.</p>
     */
    inline void SetFailedBatches(Aws::Vector<FailedRemediationBatch>&& value) { m_failedBatches = std::move(value); }

    /**
     * <p>Returns a list of failed remediation batch objects.</p>
     */
    inline PutRemediationConfigurationsResult& WithFailedBatches(const Aws::Vector<FailedRemediationBatch>& value) { SetFailedBatches(value); return *this;}

    /**
     * <p>Returns a list of failed remediation batch objects.</p>
     */
    inline PutRemediationConfigurationsResult& WithFailedBatches(Aws::Vector<FailedRemediationBatch>&& value) { SetFailedBatches(std::move(value)); return *this;}

    /**
     * <p>Returns a list of failed remediation batch objects.</p>
     */
    inline PutRemediationConfigurationsResult& AddFailedBatches(const FailedRemediationBatch& value) { m_failedBatches.push_back(value); return *this; }

    /**
     * <p>Returns a list of failed remediation batch objects.</p>
     */
    inline PutRemediationConfigurationsResult& AddFailedBatches(FailedRemediationBatch&& value) { m_failedBatches.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedRemediationBatch> m_failedBatches;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
