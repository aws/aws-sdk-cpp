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
  class AWS_CONFIGSERVICE_API PutRemediationConfigurationsResult
  {
  public:
    PutRemediationConfigurationsResult();
    PutRemediationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutRemediationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
