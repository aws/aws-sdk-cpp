/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/FeedbackType.h>
#include <utility>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the SubmitFeedbackRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/SubmitFeedbackRequest">AWS
   * API Reference</a></p>
   */
  class SubmitFeedbackRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API SubmitFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitFeedback"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The universally unique identifier (UUID) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AnomalyInstance.html">
     * <code>AnomalyInstance</code> </a> object that is included in the analysis
     * data.</p>
     */
    inline const Aws::String& GetAnomalyInstanceId() const{ return m_anomalyInstanceId; }
    inline bool AnomalyInstanceIdHasBeenSet() const { return m_anomalyInstanceIdHasBeenSet; }
    inline void SetAnomalyInstanceId(const Aws::String& value) { m_anomalyInstanceIdHasBeenSet = true; m_anomalyInstanceId = value; }
    inline void SetAnomalyInstanceId(Aws::String&& value) { m_anomalyInstanceIdHasBeenSet = true; m_anomalyInstanceId = std::move(value); }
    inline void SetAnomalyInstanceId(const char* value) { m_anomalyInstanceIdHasBeenSet = true; m_anomalyInstanceId.assign(value); }
    inline SubmitFeedbackRequest& WithAnomalyInstanceId(const Aws::String& value) { SetAnomalyInstanceId(value); return *this;}
    inline SubmitFeedbackRequest& WithAnomalyInstanceId(Aws::String&& value) { SetAnomalyInstanceId(std::move(value)); return *this;}
    inline SubmitFeedbackRequest& WithAnomalyInstanceId(const char* value) { SetAnomalyInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional feedback about this anomaly.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline SubmitFeedbackRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline SubmitFeedbackRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline SubmitFeedbackRequest& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }
    inline SubmitFeedbackRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}
    inline SubmitFeedbackRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}
    inline SubmitFeedbackRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The feedback tpye. Thee are two valid values, <code>Positive</code> and
     * <code>Negative</code>. </p>
     */
    inline const FeedbackType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FeedbackType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FeedbackType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SubmitFeedbackRequest& WithType(const FeedbackType& value) { SetType(value); return *this;}
    inline SubmitFeedbackRequest& WithType(FeedbackType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_anomalyInstanceId;
    bool m_anomalyInstanceIdHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    FeedbackType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
