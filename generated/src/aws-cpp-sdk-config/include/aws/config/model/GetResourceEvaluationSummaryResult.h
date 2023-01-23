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
    AWS_CONFIGSERVICE_API GetResourceEvaluationSummaryResult();
    AWS_CONFIGSERVICE_API GetResourceEvaluationSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetResourceEvaluationSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const{ return m_resourceEvaluationId; }

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline void SetResourceEvaluationId(const Aws::String& value) { m_resourceEvaluationId = value; }

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline void SetResourceEvaluationId(Aws::String&& value) { m_resourceEvaluationId = std::move(value); }

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline void SetResourceEvaluationId(const char* value) { m_resourceEvaluationId.assign(value); }

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithResourceEvaluationId(const Aws::String& value) { SetResourceEvaluationId(value); return *this;}

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithResourceEvaluationId(Aws::String&& value) { SetResourceEvaluationId(std::move(value)); return *this;}

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithResourceEvaluationId(const char* value) { SetResourceEvaluationId(value); return *this;}


    /**
     * <p>Lists results of the mode that you requested to retrieve the resource
     * evaluation summary. The valid values are Detective or Proactive.</p>
     */
    inline const EvaluationMode& GetEvaluationMode() const{ return m_evaluationMode; }

    /**
     * <p>Lists results of the mode that you requested to retrieve the resource
     * evaluation summary. The valid values are Detective or Proactive.</p>
     */
    inline void SetEvaluationMode(const EvaluationMode& value) { m_evaluationMode = value; }

    /**
     * <p>Lists results of the mode that you requested to retrieve the resource
     * evaluation summary. The valid values are Detective or Proactive.</p>
     */
    inline void SetEvaluationMode(EvaluationMode&& value) { m_evaluationMode = std::move(value); }

    /**
     * <p>Lists results of the mode that you requested to retrieve the resource
     * evaluation summary. The valid values are Detective or Proactive.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithEvaluationMode(const EvaluationMode& value) { SetEvaluationMode(value); return *this;}

    /**
     * <p>Lists results of the mode that you requested to retrieve the resource
     * evaluation summary. The valid values are Detective or Proactive.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithEvaluationMode(EvaluationMode&& value) { SetEvaluationMode(std::move(value)); return *this;}


    /**
     * <p>Returns an <code>EvaluationStatus</code> object.</p>
     */
    inline const EvaluationStatus& GetEvaluationStatus() const{ return m_evaluationStatus; }

    /**
     * <p>Returns an <code>EvaluationStatus</code> object.</p>
     */
    inline void SetEvaluationStatus(const EvaluationStatus& value) { m_evaluationStatus = value; }

    /**
     * <p>Returns an <code>EvaluationStatus</code> object.</p>
     */
    inline void SetEvaluationStatus(EvaluationStatus&& value) { m_evaluationStatus = std::move(value); }

    /**
     * <p>Returns an <code>EvaluationStatus</code> object.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithEvaluationStatus(const EvaluationStatus& value) { SetEvaluationStatus(value); return *this;}

    /**
     * <p>Returns an <code>EvaluationStatus</code> object.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithEvaluationStatus(EvaluationStatus&& value) { SetEvaluationStatus(std::move(value)); return *this;}


    /**
     * <p>The start timestamp when Config rule starts evaluating compliance for the
     * provided resource details.</p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationStartTimestamp() const{ return m_evaluationStartTimestamp; }

    /**
     * <p>The start timestamp when Config rule starts evaluating compliance for the
     * provided resource details.</p>
     */
    inline void SetEvaluationStartTimestamp(const Aws::Utils::DateTime& value) { m_evaluationStartTimestamp = value; }

    /**
     * <p>The start timestamp when Config rule starts evaluating compliance for the
     * provided resource details.</p>
     */
    inline void SetEvaluationStartTimestamp(Aws::Utils::DateTime&& value) { m_evaluationStartTimestamp = std::move(value); }

    /**
     * <p>The start timestamp when Config rule starts evaluating compliance for the
     * provided resource details.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithEvaluationStartTimestamp(const Aws::Utils::DateTime& value) { SetEvaluationStartTimestamp(value); return *this;}

    /**
     * <p>The start timestamp when Config rule starts evaluating compliance for the
     * provided resource details.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithEvaluationStartTimestamp(Aws::Utils::DateTime&& value) { SetEvaluationStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>The compliance status of the resource evaluation summary.</p>
     */
    inline const ComplianceType& GetCompliance() const{ return m_compliance; }

    /**
     * <p>The compliance status of the resource evaluation summary.</p>
     */
    inline void SetCompliance(const ComplianceType& value) { m_compliance = value; }

    /**
     * <p>The compliance status of the resource evaluation summary.</p>
     */
    inline void SetCompliance(ComplianceType&& value) { m_compliance = std::move(value); }

    /**
     * <p>The compliance status of the resource evaluation summary.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithCompliance(const ComplianceType& value) { SetCompliance(value); return *this;}

    /**
     * <p>The compliance status of the resource evaluation summary.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithCompliance(ComplianceType&& value) { SetCompliance(std::move(value)); return *this;}


    /**
     * <p>Returns an <code>EvaluationContext</code> object.</p>
     */
    inline const EvaluationContext& GetEvaluationContext() const{ return m_evaluationContext; }

    /**
     * <p>Returns an <code>EvaluationContext</code> object.</p>
     */
    inline void SetEvaluationContext(const EvaluationContext& value) { m_evaluationContext = value; }

    /**
     * <p>Returns an <code>EvaluationContext</code> object.</p>
     */
    inline void SetEvaluationContext(EvaluationContext&& value) { m_evaluationContext = std::move(value); }

    /**
     * <p>Returns an <code>EvaluationContext</code> object.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithEvaluationContext(const EvaluationContext& value) { SetEvaluationContext(value); return *this;}

    /**
     * <p>Returns an <code>EvaluationContext</code> object.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithEvaluationContext(EvaluationContext&& value) { SetEvaluationContext(std::move(value)); return *this;}


    /**
     * <p>Returns a <code>ResourceDetails</code> object.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }

    /**
     * <p>Returns a <code>ResourceDetails</code> object.</p>
     */
    inline void SetResourceDetails(const ResourceDetails& value) { m_resourceDetails = value; }

    /**
     * <p>Returns a <code>ResourceDetails</code> object.</p>
     */
    inline void SetResourceDetails(ResourceDetails&& value) { m_resourceDetails = std::move(value); }

    /**
     * <p>Returns a <code>ResourceDetails</code> object.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithResourceDetails(const ResourceDetails& value) { SetResourceDetails(value); return *this;}

    /**
     * <p>Returns a <code>ResourceDetails</code> object.</p>
     */
    inline GetResourceEvaluationSummaryResult& WithResourceDetails(ResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}

  private:

    Aws::String m_resourceEvaluationId;

    EvaluationMode m_evaluationMode;

    EvaluationStatus m_evaluationStatus;

    Aws::Utils::DateTime m_evaluationStartTimestamp;

    ComplianceType m_compliance;

    EvaluationContext m_evaluationContext;

    ResourceDetails m_resourceDetails;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
