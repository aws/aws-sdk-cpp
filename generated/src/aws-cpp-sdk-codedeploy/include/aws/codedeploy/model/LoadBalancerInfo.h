/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/ELBInfo.h>
#include <aws/codedeploy/model/TargetGroupInfo.h>
#include <aws/codedeploy/model/TargetGroupPairInfo.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about the Elastic Load Balancing load balancer or target group
   * used in a deployment.</p> <p>You can use load balancers and target groups in
   * combination. For example, if you have two Classic Load Balancers, and five
   * target groups tied to an Application Load Balancer, you can specify the two
   * Classic Load Balancers in <code>elbInfoList</code>, and the five target groups
   * in <code>targetGroupInfoList</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/LoadBalancerInfo">AWS
   * API Reference</a></p>
   */
  class LoadBalancerInfo
  {
  public:
    AWS_CODEDEPLOY_API LoadBalancerInfo() = default;
    AWS_CODEDEPLOY_API LoadBalancerInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API LoadBalancerInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array that contains information about the load balancers to use for load
     * balancing in a deployment. If you're using Classic Load Balancers, specify those
     * load balancers in this array. </p>  <p>You can add up to 10 load balancers
     * to the array.</p>   <p>If you're using Application Load Balancers
     * or Network Load Balancers, use the <code>targetGroupInfoList</code> array
     * instead of this one.</p> 
     */
    inline const Aws::Vector<ELBInfo>& GetElbInfoList() const { return m_elbInfoList; }
    inline bool ElbInfoListHasBeenSet() const { return m_elbInfoListHasBeenSet; }
    template<typename ElbInfoListT = Aws::Vector<ELBInfo>>
    void SetElbInfoList(ElbInfoListT&& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList = std::forward<ElbInfoListT>(value); }
    template<typename ElbInfoListT = Aws::Vector<ELBInfo>>
    LoadBalancerInfo& WithElbInfoList(ElbInfoListT&& value) { SetElbInfoList(std::forward<ElbInfoListT>(value)); return *this;}
    template<typename ElbInfoListT = ELBInfo>
    LoadBalancerInfo& AddElbInfoList(ElbInfoListT&& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList.emplace_back(std::forward<ElbInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array that contains information about the target groups to use for load
     * balancing in a deployment. If you're using Application Load Balancers and
     * Network Load Balancers, specify their associated target groups in this
     * array.</p>  <p>You can add up to 10 target groups to the array.</p>
     *   <p>If you're using Classic Load Balancers, use the
     * <code>elbInfoList</code> array instead of this one.</p> 
     */
    inline const Aws::Vector<TargetGroupInfo>& GetTargetGroupInfoList() const { return m_targetGroupInfoList; }
    inline bool TargetGroupInfoListHasBeenSet() const { return m_targetGroupInfoListHasBeenSet; }
    template<typename TargetGroupInfoListT = Aws::Vector<TargetGroupInfo>>
    void SetTargetGroupInfoList(TargetGroupInfoListT&& value) { m_targetGroupInfoListHasBeenSet = true; m_targetGroupInfoList = std::forward<TargetGroupInfoListT>(value); }
    template<typename TargetGroupInfoListT = Aws::Vector<TargetGroupInfo>>
    LoadBalancerInfo& WithTargetGroupInfoList(TargetGroupInfoListT&& value) { SetTargetGroupInfoList(std::forward<TargetGroupInfoListT>(value)); return *this;}
    template<typename TargetGroupInfoListT = TargetGroupInfo>
    LoadBalancerInfo& AddTargetGroupInfoList(TargetGroupInfoListT&& value) { m_targetGroupInfoListHasBeenSet = true; m_targetGroupInfoList.emplace_back(std::forward<TargetGroupInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The target group pair information. This is an array of
     * <code>TargeGroupPairInfo</code> objects with a maximum size of one. </p>
     */
    inline const Aws::Vector<TargetGroupPairInfo>& GetTargetGroupPairInfoList() const { return m_targetGroupPairInfoList; }
    inline bool TargetGroupPairInfoListHasBeenSet() const { return m_targetGroupPairInfoListHasBeenSet; }
    template<typename TargetGroupPairInfoListT = Aws::Vector<TargetGroupPairInfo>>
    void SetTargetGroupPairInfoList(TargetGroupPairInfoListT&& value) { m_targetGroupPairInfoListHasBeenSet = true; m_targetGroupPairInfoList = std::forward<TargetGroupPairInfoListT>(value); }
    template<typename TargetGroupPairInfoListT = Aws::Vector<TargetGroupPairInfo>>
    LoadBalancerInfo& WithTargetGroupPairInfoList(TargetGroupPairInfoListT&& value) { SetTargetGroupPairInfoList(std::forward<TargetGroupPairInfoListT>(value)); return *this;}
    template<typename TargetGroupPairInfoListT = TargetGroupPairInfo>
    LoadBalancerInfo& AddTargetGroupPairInfoList(TargetGroupPairInfoListT&& value) { m_targetGroupPairInfoListHasBeenSet = true; m_targetGroupPairInfoList.emplace_back(std::forward<TargetGroupPairInfoListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ELBInfo> m_elbInfoList;
    bool m_elbInfoListHasBeenSet = false;

    Aws::Vector<TargetGroupInfo> m_targetGroupInfoList;
    bool m_targetGroupInfoListHasBeenSet = false;

    Aws::Vector<TargetGroupPairInfo> m_targetGroupPairInfoList;
    bool m_targetGroupPairInfoListHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
