/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentControl.h>
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
  class UpdateAssessmentControlResult
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentControlResult();
    AWS_AUDITMANAGER_API UpdateAssessmentControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API UpdateAssessmentControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControl</code> API returned. </p>
     */
    inline const AssessmentControl& GetControl() const{ return m_control; }

    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControl</code> API returned. </p>
     */
    inline void SetControl(const AssessmentControl& value) { m_control = value; }

    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControl</code> API returned. </p>
     */
    inline void SetControl(AssessmentControl&& value) { m_control = std::move(value); }

    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControl</code> API returned. </p>
     */
    inline UpdateAssessmentControlResult& WithControl(const AssessmentControl& value) { SetControl(value); return *this;}

    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControl</code> API returned. </p>
     */
    inline UpdateAssessmentControlResult& WithControl(AssessmentControl&& value) { SetControl(std::move(value)); return *this;}

  private:

    AssessmentControl m_control;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
