/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CONFIGSERVICE_API PutRemediationConfigurationsResult() = default;
    AWS_CONFIGSERVICE_API PutRemediationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutRemediationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of failed remediation batch objects.</p>
     */
    inline const Aws::Vector<FailedRemediationBatch>& GetFailedBatches() const { return m_failedBatches; }
    template<typename FailedBatchesT = Aws::Vector<FailedRemediationBatch>>
    void SetFailedBatches(FailedBatchesT&& value) { m_failedBatchesHasBeenSet = true; m_failedBatches = std::forward<FailedBatchesT>(value); }
    template<typename FailedBatchesT = Aws::Vector<FailedRemediationBatch>>
    PutRemediationConfigurationsResult& WithFailedBatches(FailedBatchesT&& value) { SetFailedBatches(std::forward<FailedBatchesT>(value)); return *this;}
    template<typename FailedBatchesT = FailedRemediationBatch>
    PutRemediationConfigurationsResult& AddFailedBatches(FailedBatchesT&& value) { m_failedBatchesHasBeenSet = true; m_failedBatches.emplace_back(std::forward<FailedBatchesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRemediationConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedRemediationBatch> m_failedBatches;
    bool m_failedBatchesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
