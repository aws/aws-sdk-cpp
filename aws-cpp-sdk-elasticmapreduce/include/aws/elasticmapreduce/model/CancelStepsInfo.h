/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/CancelStepsRequestStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>Specification of the status of a CancelSteps request. Available only in
   * Amazon EMR version 4.8.0 and later, excluding version 5.0.0.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelStepsInfo">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API CancelStepsInfo
  {
  public:
    CancelStepsInfo();
    CancelStepsInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    CancelStepsInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The encrypted StepId of a step.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The encrypted StepId of a step.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }

    /**
     * <p>The encrypted StepId of a step.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = value; }

    /**
     * <p>The encrypted StepId of a step.</p>
     */
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }

    /**
     * <p>The encrypted StepId of a step.</p>
     */
    inline CancelStepsInfo& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The encrypted StepId of a step.</p>
     */
    inline CancelStepsInfo& WithStepId(Aws::String&& value) { SetStepId(value); return *this;}

    /**
     * <p>The encrypted StepId of a step.</p>
     */
    inline CancelStepsInfo& WithStepId(const char* value) { SetStepId(value); return *this;}

    /**
     * <p>The status of a CancelSteps Request. The value may be SUBMITTED or
     * FAILED.</p>
     */
    inline const CancelStepsRequestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a CancelSteps Request. The value may be SUBMITTED or
     * FAILED.</p>
     */
    inline void SetStatus(const CancelStepsRequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a CancelSteps Request. The value may be SUBMITTED or
     * FAILED.</p>
     */
    inline void SetStatus(CancelStepsRequestStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a CancelSteps Request. The value may be SUBMITTED or
     * FAILED.</p>
     */
    inline CancelStepsInfo& WithStatus(const CancelStepsRequestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a CancelSteps Request. The value may be SUBMITTED or
     * FAILED.</p>
     */
    inline CancelStepsInfo& WithStatus(CancelStepsRequestStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The reason for the failure if the CancelSteps request fails.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the failure if the CancelSteps request fails.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the failure if the CancelSteps request fails.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the failure if the CancelSteps request fails.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the failure if the CancelSteps request fails.</p>
     */
    inline CancelStepsInfo& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the failure if the CancelSteps request fails.</p>
     */
    inline CancelStepsInfo& WithReason(Aws::String&& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the failure if the CancelSteps request fails.</p>
     */
    inline CancelStepsInfo& WithReason(const char* value) { SetReason(value); return *this;}

  private:
    Aws::String m_stepId;
    bool m_stepIdHasBeenSet;
    CancelStepsRequestStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
