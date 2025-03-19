/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>

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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about the deployment status of the instances in the
   * deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeploymentOverview">AWS
   * API Reference</a></p>
   */
  class DeploymentOverview
  {
  public:
    AWS_CODEDEPLOY_API DeploymentOverview() = default;
    AWS_CODEDEPLOY_API DeploymentOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of instances in the deployment in a pending state.</p>
     */
    inline long long GetPending() const { return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    inline void SetPending(long long value) { m_pendingHasBeenSet = true; m_pending = value; }
    inline DeploymentOverview& WithPending(long long value) { SetPending(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in which the deployment is in progress.</p>
     */
    inline long long GetInProgress() const { return m_inProgress; }
    inline bool InProgressHasBeenSet() const { return m_inProgressHasBeenSet; }
    inline void SetInProgress(long long value) { m_inProgressHasBeenSet = true; m_inProgress = value; }
    inline DeploymentOverview& WithInProgress(long long value) { SetInProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the deployment to which revisions have been
     * successfully deployed.</p>
     */
    inline long long GetSucceeded() const { return m_succeeded; }
    inline bool SucceededHasBeenSet() const { return m_succeededHasBeenSet; }
    inline void SetSucceeded(long long value) { m_succeededHasBeenSet = true; m_succeeded = value; }
    inline DeploymentOverview& WithSucceeded(long long value) { SetSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the deployment in a failed state.</p>
     */
    inline long long GetFailed() const { return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(long long value) { m_failedHasBeenSet = true; m_failed = value; }
    inline DeploymentOverview& WithFailed(long long value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the deployment in a skipped state.</p>
     */
    inline long long GetSkipped() const { return m_skipped; }
    inline bool SkippedHasBeenSet() const { return m_skippedHasBeenSet; }
    inline void SetSkipped(long long value) { m_skippedHasBeenSet = true; m_skipped = value; }
    inline DeploymentOverview& WithSkipped(long long value) { SetSkipped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in a replacement environment ready to receive traffic
     * in a blue/green deployment.</p>
     */
    inline long long GetReady() const { return m_ready; }
    inline bool ReadyHasBeenSet() const { return m_readyHasBeenSet; }
    inline void SetReady(long long value) { m_readyHasBeenSet = true; m_ready = value; }
    inline DeploymentOverview& WithReady(long long value) { SetReady(value); return *this;}
    ///@}
  private:

    long long m_pending{0};
    bool m_pendingHasBeenSet = false;

    long long m_inProgress{0};
    bool m_inProgressHasBeenSet = false;

    long long m_succeeded{0};
    bool m_succeededHasBeenSet = false;

    long long m_failed{0};
    bool m_failedHasBeenSet = false;

    long long m_skipped{0};
    bool m_skippedHasBeenSet = false;

    long long m_ready{0};
    bool m_readyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
