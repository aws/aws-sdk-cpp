/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ResourceEvaluationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Returns status details of an evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/EvaluationStatus">AWS
   * API Reference</a></p>
   */
  class EvaluationStatus
  {
  public:
    AWS_CONFIGSERVICE_API EvaluationStatus();
    AWS_CONFIGSERVICE_API EvaluationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API EvaluationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of an execution. The valid values are In_Progress, Succeeded or
     * Failed. </p>
     */
    inline const ResourceEvaluationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceEvaluationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceEvaluationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EvaluationStatus& WithStatus(const ResourceEvaluationStatus& value) { SetStatus(value); return *this;}
    inline EvaluationStatus& WithStatus(ResourceEvaluationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation for failed execution status.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline EvaluationStatus& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline EvaluationStatus& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline EvaluationStatus& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    ResourceEvaluationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
