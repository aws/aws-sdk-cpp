/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/UpdateStatus.h>
#include <aws/application-insights/model/Visibility.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class UpdateProblemRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API UpdateProblemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProblem"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the problem.</p>
     */
    inline const Aws::String& GetProblemId() const{ return m_problemId; }
    inline bool ProblemIdHasBeenSet() const { return m_problemIdHasBeenSet; }
    inline void SetProblemId(const Aws::String& value) { m_problemIdHasBeenSet = true; m_problemId = value; }
    inline void SetProblemId(Aws::String&& value) { m_problemIdHasBeenSet = true; m_problemId = std::move(value); }
    inline void SetProblemId(const char* value) { m_problemIdHasBeenSet = true; m_problemId.assign(value); }
    inline UpdateProblemRequest& WithProblemId(const Aws::String& value) { SetProblemId(value); return *this;}
    inline UpdateProblemRequest& WithProblemId(Aws::String&& value) { SetProblemId(std::move(value)); return *this;}
    inline UpdateProblemRequest& WithProblemId(const char* value) { SetProblemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the problem. Arguments can be passed for only problems that
     * show a status of <code>RECOVERING</code>.</p>
     */
    inline const UpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(const UpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline void SetUpdateStatus(UpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }
    inline UpdateProblemRequest& WithUpdateStatus(const UpdateStatus& value) { SetUpdateStatus(value); return *this;}
    inline UpdateProblemRequest& WithUpdateStatus(UpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of a problem. When you pass a value of <code>IGNORED</code>,
     * the problem is removed from the default view, and all notifications for the
     * problem are suspended. When <code>VISIBLE</code> is passed, the
     * <code>IGNORED</code> action is reversed.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline UpdateProblemRequest& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline UpdateProblemRequest& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_problemId;
    bool m_problemIdHasBeenSet = false;

    UpdateStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
