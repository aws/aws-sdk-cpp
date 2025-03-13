/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CONFIGSERVICE_API PutRemediationExceptionsResult() = default;
    AWS_CONFIGSERVICE_API PutRemediationExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutRemediationExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of failed remediation exceptions batch objects. Each object in
     * the batch consists of a list of failed items and failure messages.</p>
     */
    inline const Aws::Vector<FailedRemediationExceptionBatch>& GetFailedBatches() const { return m_failedBatches; }
    template<typename FailedBatchesT = Aws::Vector<FailedRemediationExceptionBatch>>
    void SetFailedBatches(FailedBatchesT&& value) { m_failedBatchesHasBeenSet = true; m_failedBatches = std::forward<FailedBatchesT>(value); }
    template<typename FailedBatchesT = Aws::Vector<FailedRemediationExceptionBatch>>
    PutRemediationExceptionsResult& WithFailedBatches(FailedBatchesT&& value) { SetFailedBatches(std::forward<FailedBatchesT>(value)); return *this;}
    template<typename FailedBatchesT = FailedRemediationExceptionBatch>
    PutRemediationExceptionsResult& AddFailedBatches(FailedBatchesT&& value) { m_failedBatchesHasBeenSet = true; m_failedBatches.emplace_back(std::forward<FailedBatchesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRemediationExceptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedRemediationExceptionBatch> m_failedBatches;
    bool m_failedBatchesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
