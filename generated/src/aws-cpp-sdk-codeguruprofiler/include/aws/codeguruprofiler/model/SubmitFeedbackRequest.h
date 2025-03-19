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
    AWS_CODEGURUPROFILER_API SubmitFeedbackRequest() = default;

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
    inline const Aws::String& GetAnomalyInstanceId() const { return m_anomalyInstanceId; }
    inline bool AnomalyInstanceIdHasBeenSet() const { return m_anomalyInstanceIdHasBeenSet; }
    template<typename AnomalyInstanceIdT = Aws::String>
    void SetAnomalyInstanceId(AnomalyInstanceIdT&& value) { m_anomalyInstanceIdHasBeenSet = true; m_anomalyInstanceId = std::forward<AnomalyInstanceIdT>(value); }
    template<typename AnomalyInstanceIdT = Aws::String>
    SubmitFeedbackRequest& WithAnomalyInstanceId(AnomalyInstanceIdT&& value) { SetAnomalyInstanceId(std::forward<AnomalyInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional feedback about this anomaly.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    SubmitFeedbackRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const { return m_profilingGroupName; }
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }
    template<typename ProfilingGroupNameT = Aws::String>
    void SetProfilingGroupName(ProfilingGroupNameT&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::forward<ProfilingGroupNameT>(value); }
    template<typename ProfilingGroupNameT = Aws::String>
    SubmitFeedbackRequest& WithProfilingGroupName(ProfilingGroupNameT&& value) { SetProfilingGroupName(std::forward<ProfilingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The feedback tpye. Thee are two valid values, <code>Positive</code> and
     * <code>Negative</code>. </p>
     */
    inline FeedbackType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FeedbackType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SubmitFeedbackRequest& WithType(FeedbackType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyInstanceId;
    bool m_anomalyInstanceIdHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    FeedbackType m_type{FeedbackType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
