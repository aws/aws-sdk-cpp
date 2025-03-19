/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsResult() = default;
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of failed delete remediation exceptions batch objects. Each
     * object in the batch consists of a list of failed items and failure messages.</p>
     */
    inline const Aws::Vector<FailedDeleteRemediationExceptionsBatch>& GetFailedBatches() const { return m_failedBatches; }
    template<typename FailedBatchesT = Aws::Vector<FailedDeleteRemediationExceptionsBatch>>
    void SetFailedBatches(FailedBatchesT&& value) { m_failedBatchesHasBeenSet = true; m_failedBatches = std::forward<FailedBatchesT>(value); }
    template<typename FailedBatchesT = Aws::Vector<FailedDeleteRemediationExceptionsBatch>>
    DeleteRemediationExceptionsResult& WithFailedBatches(FailedBatchesT&& value) { SetFailedBatches(std::forward<FailedBatchesT>(value)); return *this;}
    template<typename FailedBatchesT = FailedDeleteRemediationExceptionsBatch>
    DeleteRemediationExceptionsResult& AddFailedBatches(FailedBatchesT&& value) { m_failedBatchesHasBeenSet = true; m_failedBatches.emplace_back(std::forward<FailedBatchesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteRemediationExceptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedDeleteRemediationExceptionsBatch> m_failedBatches;
    bool m_failedBatchesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
