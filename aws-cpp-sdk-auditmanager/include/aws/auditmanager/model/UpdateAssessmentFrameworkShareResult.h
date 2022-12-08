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
  class UpdateAssessmentFrameworkShareResult
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkShareResult();
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The updated share request that's returned by the
     * <code>UpdateAssessmentFrameworkShare</code> operation. </p>
     */
    inline const AssessmentFrameworkShareRequest& GetAssessmentFrameworkShareRequest() const{ return m_assessmentFrameworkShareRequest; }

    /**
     * <p> The updated share request that's returned by the
     * <code>UpdateAssessmentFrameworkShare</code> operation. </p>
     */
    inline void SetAssessmentFrameworkShareRequest(const AssessmentFrameworkShareRequest& value) { m_assessmentFrameworkShareRequest = value; }

    /**
     * <p> The updated share request that's returned by the
     * <code>UpdateAssessmentFrameworkShare</code> operation. </p>
     */
    inline void SetAssessmentFrameworkShareRequest(AssessmentFrameworkShareRequest&& value) { m_assessmentFrameworkShareRequest = std::move(value); }

    /**
     * <p> The updated share request that's returned by the
     * <code>UpdateAssessmentFrameworkShare</code> operation. </p>
     */
    inline UpdateAssessmentFrameworkShareResult& WithAssessmentFrameworkShareRequest(const AssessmentFrameworkShareRequest& value) { SetAssessmentFrameworkShareRequest(value); return *this;}

    /**
     * <p> The updated share request that's returned by the
     * <code>UpdateAssessmentFrameworkShare</code> operation. </p>
     */
    inline UpdateAssessmentFrameworkShareResult& WithAssessmentFrameworkShareRequest(AssessmentFrameworkShareRequest&& value) { SetAssessmentFrameworkShareRequest(std::move(value)); return *this;}

  private:

    AssessmentFrameworkShareRequest m_assessmentFrameworkShareRequest;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
