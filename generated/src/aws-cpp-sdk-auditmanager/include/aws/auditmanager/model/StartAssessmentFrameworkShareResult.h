/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentFrameworkShareRequest.h>
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
namespace AuditManager
{
namespace Model
{
  class StartAssessmentFrameworkShareResult
  {
  public:
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareResult();
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The share request that's created by the
     * <code>StartAssessmentFrameworkShare</code> API. </p>
     */
    inline const AssessmentFrameworkShareRequest& GetAssessmentFrameworkShareRequest() const{ return m_assessmentFrameworkShareRequest; }

    /**
     * <p> The share request that's created by the
     * <code>StartAssessmentFrameworkShare</code> API. </p>
     */
    inline void SetAssessmentFrameworkShareRequest(const AssessmentFrameworkShareRequest& value) { m_assessmentFrameworkShareRequest = value; }

    /**
     * <p> The share request that's created by the
     * <code>StartAssessmentFrameworkShare</code> API. </p>
     */
    inline void SetAssessmentFrameworkShareRequest(AssessmentFrameworkShareRequest&& value) { m_assessmentFrameworkShareRequest = std::move(value); }

    /**
     * <p> The share request that's created by the
     * <code>StartAssessmentFrameworkShare</code> API. </p>
     */
    inline StartAssessmentFrameworkShareResult& WithAssessmentFrameworkShareRequest(const AssessmentFrameworkShareRequest& value) { SetAssessmentFrameworkShareRequest(value); return *this;}

    /**
     * <p> The share request that's created by the
     * <code>StartAssessmentFrameworkShare</code> API. </p>
     */
    inline StartAssessmentFrameworkShareResult& WithAssessmentFrameworkShareRequest(AssessmentFrameworkShareRequest&& value) { SetAssessmentFrameworkShareRequest(std::move(value)); return *this;}

  private:

    AssessmentFrameworkShareRequest m_assessmentFrameworkShareRequest;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
