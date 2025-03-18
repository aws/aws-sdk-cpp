/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceGroupConfig.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>Input to an AddInstanceGroups call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceGroupsInput">AWS
   * API Reference</a></p>
   */
  class AddInstanceGroupsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API AddInstanceGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddInstanceGroups"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Instance groups to add.</p>
     */
    inline const Aws::Vector<InstanceGroupConfig>& GetInstanceGroups() const { return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    template<typename InstanceGroupsT = Aws::Vector<InstanceGroupConfig>>
    void SetInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::forward<InstanceGroupsT>(value); }
    template<typename InstanceGroupsT = Aws::Vector<InstanceGroupConfig>>
    AddInstanceGroupsRequest& WithInstanceGroups(InstanceGroupsT&& value) { SetInstanceGroups(std::forward<InstanceGroupsT>(value)); return *this;}
    template<typename InstanceGroupsT = InstanceGroupConfig>
    AddInstanceGroupsRequest& AddInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.emplace_back(std::forward<InstanceGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Job flow in which to add the instance groups.</p>
     */
    inline const Aws::String& GetJobFlowId() const { return m_jobFlowId; }
    inline bool JobFlowIdHasBeenSet() const { return m_jobFlowIdHasBeenSet; }
    template<typename JobFlowIdT = Aws::String>
    void SetJobFlowId(JobFlowIdT&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = std::forward<JobFlowIdT>(value); }
    template<typename JobFlowIdT = Aws::String>
    AddInstanceGroupsRequest& WithJobFlowId(JobFlowIdT&& value) { SetJobFlowId(std::forward<JobFlowIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceGroupConfig> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    Aws::String m_jobFlowId;
    bool m_jobFlowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
