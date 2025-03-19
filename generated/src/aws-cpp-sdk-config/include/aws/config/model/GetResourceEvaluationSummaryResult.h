/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/EvaluationMode.h>
#include <aws/config/model/EvaluationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/ComplianceType.h>
#include <aws/config/model/EvaluationContext.h>
#include <aws/config/model/ResourceDetails.h>
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
  class GetResourceEvaluationSummaryResult
  {
  public:
    AWS_CONFIGSERVICE_API GetResourceEvaluationSummaryResult() = default;
    AWS_CONFIGSERVICE_API GetResourceEvaluationSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetResourceEvaluationSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const { return m_resourceEvaluationId; }
    template<typename ResourceEvaluationIdT = Aws::String>
    void SetResourceEvaluationId(ResourceEvaluationIdT&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::forward<ResourceEvaluationIdT>(value); }
    template<typename ResourceEvaluationIdT = Aws::String>
    GetResourceEvaluationSummaryResult& WithResourceEvaluationId(ResourceEvaluationIdT&& value) { SetResourceEvaluationId(std::forward<ResourceEvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists results of the mode that you requested to retrieve the resource
     * evaluation summary. The valid values are Detective or Proactive.</p>
     */
    inline EvaluationMode GetEvaluationMode() const { return m_evaluationMode; }
    inline void SetEvaluationMode(EvaluationMode value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = value; }
    inline GetResourceEvaluationSummaryResult& WithEvaluationMode(EvaluationMode value) { SetEvaluationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an <code>EvaluationStatus</code> object.</p>
     */
    inline const EvaluationStatus& GetEvaluationStatus() const { return m_evaluationStatus; }
    template<typename EvaluationStatusT = EvaluationStatus>
    void SetEvaluationStatus(EvaluationStatusT&& value) { m_evaluationStatusHasBeenSet = true; m_evaluationStatus = std::forward<EvaluationStatusT>(value); }
    template<typename EvaluationStatusT = EvaluationStatus>
    GetResourceEvaluationSummaryResult& WithEvaluationStatus(EvaluationStatusT&& value) { SetEvaluationStatus(std::forward<EvaluationStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start timestamp when Config rule starts evaluating compliance for the
     * provided resource details.</p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationStartTimestamp() const { return m_evaluationStartTimestamp; }
    template<typename EvaluationStartTimestampT = Aws::Utils::DateTime>
    void SetEvaluationStartTimestamp(EvaluationStartTimestampT&& value) { m_evaluationStartTimestampHasBeenSet = true; m_evaluationStartTimestamp = std::forward<EvaluationStartTimestampT>(value); }
    template<typename EvaluationStartTimestampT = Aws::Utils::DateTime>
    GetResourceEvaluationSummaryResult& WithEvaluationStartTimestamp(EvaluationStartTimestampT&& value) { SetEvaluationStartTimestamp(std::forward<EvaluationStartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance status of the resource evaluation summary.</p>
     */
    inline ComplianceType GetCompliance() const { return m_compliance; }
    inline void SetCompliance(ComplianceType value) { m_complianceHasBeenSet = true; m_compliance = value; }
    inline GetResourceEvaluationSummaryResult& WithCompliance(ComplianceType value) { SetCompliance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an <code>EvaluationContext</code> object.</p>
     */
    inline const EvaluationContext& GetEvaluationContext() const { return m_evaluationContext; }
    template<typename EvaluationContextT = EvaluationContext>
    void SetEvaluationContext(EvaluationContextT&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::forward<EvaluationContextT>(value); }
    template<typename EvaluationContextT = EvaluationContext>
    GetResourceEvaluationSummaryResult& WithEvaluationContext(EvaluationContextT&& value) { SetEvaluationContext(std::forward<EvaluationContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a <code>ResourceDetails</code> object.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
    template<typename ResourceDetailsT = ResourceDetails>
    void SetResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::forward<ResourceDetailsT>(value); }
    template<typename ResourceDetailsT = ResourceDetails>
    GetResourceEvaluationSummaryResult& WithResourceDetails(ResourceDetailsT&& value) { SetResourceDetails(std::forward<ResourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceEvaluationSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;

    EvaluationMode m_evaluationMode{EvaluationMode::NOT_SET};
    bool m_evaluationModeHasBeenSet = false;

    EvaluationStatus m_evaluationStatus;
    bool m_evaluationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationStartTimestamp{};
    bool m_evaluationStartTimestampHasBeenSet = false;

    ComplianceType m_compliance{ComplianceType::NOT_SET};
    bool m_complianceHasBeenSet = false;

    EvaluationContext m_evaluationContext;
    bool m_evaluationContextHasBeenSet = false;

    ResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
