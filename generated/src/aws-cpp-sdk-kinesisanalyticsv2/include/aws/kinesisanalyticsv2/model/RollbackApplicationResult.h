/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class RollbackApplicationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API RollbackApplicationResult() = default;
    AWS_KINESISANALYTICSV2_API RollbackApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API RollbackApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ApplicationDetail& GetApplicationDetail() const { return m_applicationDetail; }
    template<typename ApplicationDetailT = ApplicationDetail>
    void SetApplicationDetail(ApplicationDetailT&& value) { m_applicationDetailHasBeenSet = true; m_applicationDetail = std::forward<ApplicationDetailT>(value); }
    template<typename ApplicationDetailT = ApplicationDetail>
    RollbackApplicationResult& WithApplicationDetail(ApplicationDetailT&& value) { SetApplicationDetail(std::forward<ApplicationDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation ID that can be used to track the request.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    RollbackApplicationResult& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RollbackApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationDetail m_applicationDetail;
    bool m_applicationDetailHasBeenSet = false;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
