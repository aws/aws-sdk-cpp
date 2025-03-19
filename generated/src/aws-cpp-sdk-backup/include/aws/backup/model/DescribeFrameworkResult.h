/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/FrameworkControl.h>
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
namespace Backup
{
namespace Model
{
  class DescribeFrameworkResult
  {
  public:
    AWS_BACKUP_API DescribeFrameworkResult() = default;
    AWS_BACKUP_API DescribeFrameworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeFrameworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of a framework.</p>
     */
    inline const Aws::String& GetFrameworkName() const { return m_frameworkName; }
    template<typename FrameworkNameT = Aws::String>
    void SetFrameworkName(FrameworkNameT&& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = std::forward<FrameworkNameT>(value); }
    template<typename FrameworkNameT = Aws::String>
    DescribeFrameworkResult& WithFrameworkName(FrameworkNameT&& value) { SetFrameworkName(std::forward<FrameworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetFrameworkArn() const { return m_frameworkArn; }
    template<typename FrameworkArnT = Aws::String>
    void SetFrameworkArn(FrameworkArnT&& value) { m_frameworkArnHasBeenSet = true; m_frameworkArn = std::forward<FrameworkArnT>(value); }
    template<typename FrameworkArnT = Aws::String>
    DescribeFrameworkResult& WithFrameworkArn(FrameworkArnT&& value) { SetFrameworkArn(std::forward<FrameworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the framework.</p>
     */
    inline const Aws::String& GetFrameworkDescription() const { return m_frameworkDescription; }
    template<typename FrameworkDescriptionT = Aws::String>
    void SetFrameworkDescription(FrameworkDescriptionT&& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = std::forward<FrameworkDescriptionT>(value); }
    template<typename FrameworkDescriptionT = Aws::String>
    DescribeFrameworkResult& WithFrameworkDescription(FrameworkDescriptionT&& value) { SetFrameworkDescription(std::forward<FrameworkDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The controls that make up the framework. Each control in the list has a name,
     * input parameters, and scope.</p>
     */
    inline const Aws::Vector<FrameworkControl>& GetFrameworkControls() const { return m_frameworkControls; }
    template<typename FrameworkControlsT = Aws::Vector<FrameworkControl>>
    void SetFrameworkControls(FrameworkControlsT&& value) { m_frameworkControlsHasBeenSet = true; m_frameworkControls = std::forward<FrameworkControlsT>(value); }
    template<typename FrameworkControlsT = Aws::Vector<FrameworkControl>>
    DescribeFrameworkResult& WithFrameworkControls(FrameworkControlsT&& value) { SetFrameworkControls(std::forward<FrameworkControlsT>(value)); return *this;}
    template<typename FrameworkControlsT = FrameworkControl>
    DescribeFrameworkResult& AddFrameworkControls(FrameworkControlsT&& value) { m_frameworkControlsHasBeenSet = true; m_frameworkControls.emplace_back(std::forward<FrameworkControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeFrameworkResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline const Aws::String& GetDeploymentStatus() const { return m_deploymentStatus; }
    template<typename DeploymentStatusT = Aws::String>
    void SetDeploymentStatus(DeploymentStatusT&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::forward<DeploymentStatusT>(value); }
    template<typename DeploymentStatusT = Aws::String>
    DescribeFrameworkResult& WithDeploymentStatus(DeploymentStatusT&& value) { SetDeploymentStatus(std::forward<DeploymentStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A framework consists of one or more controls. Each control governs a
     * resource, such as backup plans, backup selections, backup vaults, or recovery
     * points. You can also turn Config recording on or off for each resource. The
     * statuses are:</p> <ul> <li> <p> <code>ACTIVE</code> when recording is turned on
     * for all resources governed by the framework.</p> </li> <li> <p>
     * <code>PARTIALLY_ACTIVE</code> when recording is turned off for at least one
     * resource governed by the framework.</p> </li> <li> <p> <code>INACTIVE</code>
     * when recording is turned off for all resources governed by the framework.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> when Backup is unable to validate
     * recording status at this time.</p> </li> </ul>
     */
    inline const Aws::String& GetFrameworkStatus() const { return m_frameworkStatus; }
    template<typename FrameworkStatusT = Aws::String>
    void SetFrameworkStatus(FrameworkStatusT&& value) { m_frameworkStatusHasBeenSet = true; m_frameworkStatus = std::forward<FrameworkStatusT>(value); }
    template<typename FrameworkStatusT = Aws::String>
    DescribeFrameworkResult& WithFrameworkStatus(FrameworkStatusT&& value) { SetFrameworkStatus(std::forward<FrameworkStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>DescribeFrameworkOutput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    DescribeFrameworkResult& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFrameworkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_frameworkName;
    bool m_frameworkNameHasBeenSet = false;

    Aws::String m_frameworkArn;
    bool m_frameworkArnHasBeenSet = false;

    Aws::String m_frameworkDescription;
    bool m_frameworkDescriptionHasBeenSet = false;

    Aws::Vector<FrameworkControl> m_frameworkControls;
    bool m_frameworkControlsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_frameworkStatus;
    bool m_frameworkStatusHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
