/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>The input to the SetVisibleToAllUsers action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsersInput">AWS
   * API Reference</a></p>
   */
  class SetVisibleToAllUsersRequest : public EMRRequest
  {
  public:
    AWS_EMR_API SetVisibleToAllUsersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetVisibleToAllUsers"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobFlowIds() const { return m_jobFlowIds; }
    inline bool JobFlowIdsHasBeenSet() const { return m_jobFlowIdsHasBeenSet; }
    template<typename JobFlowIdsT = Aws::Vector<Aws::String>>
    void SetJobFlowIds(JobFlowIdsT&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds = std::forward<JobFlowIdsT>(value); }
    template<typename JobFlowIdsT = Aws::Vector<Aws::String>>
    SetVisibleToAllUsersRequest& WithJobFlowIds(JobFlowIdsT&& value) { SetJobFlowIds(std::forward<JobFlowIdsT>(value)); return *this;}
    template<typename JobFlowIdsT = Aws::String>
    SetVisibleToAllUsersRequest& AddJobFlowIds(JobFlowIdsT&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.emplace_back(std::forward<JobFlowIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value of <code>true</code> indicates that an IAM principal in the Amazon
     * Web Services account can perform Amazon EMR actions on the cluster that the IAM
     * policies attached to the principal allow. A value of <code>false</code>
     * indicates that only the IAM principal that created the cluster and the Amazon
     * Web Services root user can perform Amazon EMR actions on the cluster.</p>
     */
    inline bool GetVisibleToAllUsers() const { return m_visibleToAllUsers; }
    inline bool VisibleToAllUsersHasBeenSet() const { return m_visibleToAllUsersHasBeenSet; }
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }
    inline SetVisibleToAllUsersRequest& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobFlowIds;
    bool m_jobFlowIdsHasBeenSet = false;

    bool m_visibleToAllUsers{false};
    bool m_visibleToAllUsersHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
