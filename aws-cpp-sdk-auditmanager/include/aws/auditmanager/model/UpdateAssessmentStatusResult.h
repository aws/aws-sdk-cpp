/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Assessment.h>
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
  class AWS_AUDITMANAGER_API UpdateAssessmentStatusResult
  {
  public:
    UpdateAssessmentStatusResult();
    UpdateAssessmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAssessmentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the updated assessment returned by the
     * <code>UpdateAssessmentStatus</code> API. </p>
     */
    inline const Assessment& GetAssessment() const{ return m_assessment; }

    /**
     * <p> The name of the updated assessment returned by the
     * <code>UpdateAssessmentStatus</code> API. </p>
     */
    inline void SetAssessment(const Assessment& value) { m_assessment = value; }

    /**
     * <p> The name of the updated assessment returned by the
     * <code>UpdateAssessmentStatus</code> API. </p>
     */
    inline void SetAssessment(Assessment&& value) { m_assessment = std::move(value); }

    /**
     * <p> The name of the updated assessment returned by the
     * <code>UpdateAssessmentStatus</code> API. </p>
     */
    inline UpdateAssessmentStatusResult& WithAssessment(const Assessment& value) { SetAssessment(value); return *this;}

    /**
     * <p> The name of the updated assessment returned by the
     * <code>UpdateAssessmentStatus</code> API. </p>
     */
    inline UpdateAssessmentStatusResult& WithAssessment(Assessment&& value) { SetAssessment(std::move(value)); return *this;}

  private:

    Assessment m_assessment;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
