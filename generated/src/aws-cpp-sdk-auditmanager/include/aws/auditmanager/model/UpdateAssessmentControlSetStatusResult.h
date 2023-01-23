/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentControlSet.h>
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
  class UpdateAssessmentControlSetStatusResult
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentControlSetStatusResult();
    AWS_AUDITMANAGER_API UpdateAssessmentControlSetStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API UpdateAssessmentControlSetStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControlSetStatus</code> API returned. </p>
     */
    inline const AssessmentControlSet& GetControlSet() const{ return m_controlSet; }

    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControlSetStatus</code> API returned. </p>
     */
    inline void SetControlSet(const AssessmentControlSet& value) { m_controlSet = value; }

    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControlSetStatus</code> API returned. </p>
     */
    inline void SetControlSet(AssessmentControlSet&& value) { m_controlSet = std::move(value); }

    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControlSetStatus</code> API returned. </p>
     */
    inline UpdateAssessmentControlSetStatusResult& WithControlSet(const AssessmentControlSet& value) { SetControlSet(value); return *this;}

    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControlSetStatus</code> API returned. </p>
     */
    inline UpdateAssessmentControlSetStatusResult& WithControlSet(AssessmentControlSet&& value) { SetControlSet(std::move(value)); return *this;}

  private:

    AssessmentControlSet m_controlSet;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
