/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/JobStepRestartMarker.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>An identifier for the <code>StartBatchJob</code> API to show that it is a
   * restart operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/RestartBatchJobIdentifier">AWS
   * API Reference</a></p>
   */
  class RestartBatchJobIdentifier
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API RestartBatchJobIdentifier();
    AWS_MAINFRAMEMODERNIZATION_API RestartBatchJobIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API RestartBatchJobIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>executionId</code> from the <code>StartBatchJob</code> response
     * when the job ran for the first time.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }
    inline RestartBatchJobIdentifier& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline RestartBatchJobIdentifier& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline RestartBatchJobIdentifier& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step/procedure step information for a restart batch job operation.</p>
     */
    inline const JobStepRestartMarker& GetJobStepRestartMarker() const{ return m_jobStepRestartMarker; }
    inline bool JobStepRestartMarkerHasBeenSet() const { return m_jobStepRestartMarkerHasBeenSet; }
    inline void SetJobStepRestartMarker(const JobStepRestartMarker& value) { m_jobStepRestartMarkerHasBeenSet = true; m_jobStepRestartMarker = value; }
    inline void SetJobStepRestartMarker(JobStepRestartMarker&& value) { m_jobStepRestartMarkerHasBeenSet = true; m_jobStepRestartMarker = std::move(value); }
    inline RestartBatchJobIdentifier& WithJobStepRestartMarker(const JobStepRestartMarker& value) { SetJobStepRestartMarker(value); return *this;}
    inline RestartBatchJobIdentifier& WithJobStepRestartMarker(JobStepRestartMarker&& value) { SetJobStepRestartMarker(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    JobStepRestartMarker m_jobStepRestartMarker;
    bool m_jobStepRestartMarkerHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
