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
    AWS_CODEDEPLOY_API LoadBalancerInfo();
    AWS_CODEDEPLOY_API LoadBalancerInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API LoadBalancerInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array that contains information about the load balancers to use for load
     * balancing in a deployment. If you're using Classic Load Balancers, specify those
     * load balancers in this array. </p>  <p>You can add up to 10 load balancers
     * to the array.</p>   <p>If you're using Application Load Balancers
     * or Network Load Balancers, use the <code>targetGroupInfoList</code> array
     * instead of this one.</p> 
     */
    inline const Aws::Vector<ELBInfo>& GetElbInfoList() const{ return m_elbInfoList; }

    /**
     * <p>An array that contains information about the load balancers to use for load
     * balancing in a deployment. If you're using Classic Load Balancers, specify those
     * load balancers in this array. </p>  <p>You can add up to 10 load balancers
     * to the array.</p>   <p>If you're using Application Load Balancers
     * or Network Load Balancers, use the <code>targetGroupInfoList</code> array
     * instead of this one.</p> 
     */
    inline bool ElbInfoListHasBeenSet() const { return m_elbInfoListHasBeenSet; }

    /**
     * <p>An array that contains information about the load balancers to use for load
     * balancing in a deployment. If you're using Classic Load Balancers, specify those
     * load balancers in this array. </p>  <p>You can add up to 10 load balancers
     * to the array.</p>   <p>If you're using Application Load Balancers
     * or Network Load Balancers, use the <code>targetGroupInfoList</code> array
     * instead of this one.</p> 
     */
    inline void SetElbInfoList(const Aws::Vector<ELBInfo>& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList = value; }

    /**
     * <p>An array that contains information about the load balancers to use for load
     * balancing in a deployment. If you're using Classic Load Balancers, specify those
     * load balancers in this array. </p>  <p>You can add up to 10 load balancers
     * to the array.</p>   <p>If you're using Application Load Balancers
     * or Network Load Balancers, use the <code>targetGroupInfoList</code> array
     * instead of this one.</p> 
     */
    inline void SetElbInfoList(Aws::Vector<ELBInfo>&& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList = std::move(value); }

    /**
     * <p>An array that contains information about the load balancers to use for load
     * balancing in a deployment. If you're using Classic Load Balancers, specify those
     * load balancers in this array. </p>  <p>You can add up to 10 load balancers
     * to the array.</p>   <p>If you're using Application Load Balancers
     * or Network Load Balancers, use the <code>targetGroupInfoList</code> array
     * instead of this one.</p> 
     */
    inline LoadBalancerInfo& WithElbInfoList(const Aws::Vector<ELBInfo>& value) { SetElbInfoList(value); return *this;}

    /**
     * <p>An array that contains information about the load balancers to use for load
     * balancing in a deployment. If you're using Classic Load Balancers, specify those
     * load balancers in this array. </p>  <p>You can add up to 10 load balancers
     * to the array.</p>   <p>If you're using Application Load Balancers
     * or Network Load Balancers, use the <code>targetGroupInfoList</code> array
     * instead of this one.</p> 
     */
    inline LoadBalancerInfo& WithElbInfoList(Aws::Vector<ELBInfo>&& value) { SetElbInfoList(std::move(value)); return *this;}

    /**
     * <p>An array that contains information about the load balancers to use for load
     * balancing in a deployment. If you're using Classic Load Balancers, specify those
     * load balancers in this array. </p>  <p>You can add up to 10 load balancers
     * to the array.</p>   <p>If you're using Application Load Balancers
     * or Network Load Balancers, use the <code>targetGroupInfoList</code> array
     * instead of this one.</p> 
     */
    inline LoadBalancerInfo& AddElbInfoList(const ELBInfo& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList.push_back(value); return *this; }

    /**
     * <p>An array that contains information about the load balancers to use for load
     * balancing in a deployment. If you're using Classic Load Balancers, specify those
     * load balancers in this array. </p>  <p>You can add up to 10 load balancers
     * to the array.</p>   <p>If you're using Application Load Balancers
     * or Network Load Balancers, use the <code>targetGroupInfoList</code> array
     * instead of this one.</p> 
     */
    inline LoadBalancerInfo& AddElbInfoList(ELBInfo&& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>An array that contains information about the target groups to use for load
     * balancing in a deployment. If you're using Application Load Balancers and
     * Network Load Balancers, specify their associated target groups in this
     * array.</p>  <p>You can add up to 10 target groups to the array.</p>
     *   <p>If you're using Classic Load Balancers, use the
     * <code>elbInfoList</code> array instead of this one.</p> 
     */
    inline const Aws::Vector<TargetGroupInfo>& GetTargetGroupInfoList() const{ return m_targetGroupInfoList; }

    /**
     * <p>An array that contains information about the target groups to use for load
     * balancing in a deployment. If you're using Application Load Balancers and
     * Network Load Balancers, specify their associated target groups in this
     * array.</p>  <p>You can add up to 10 target groups to the array.</p>
     *   <p>If you're using Classic Load Balancers, use the
     * <code>elbInfoList</code> array instead of this one.</p> 
     */
    inline bool TargetGroupInfoListHasBeenSet() const { return m_targetGroupInfoListHasBeenSet; }

    /**
     * <p>An array that contains information about the target groups to use for load
     * balancing in a deployment. If you're using Application Load Balancers and
     * Network Load Balancers, specify their associated target groups in this
     * array.</p>  <p>You can add up to 10 target groups to the array.</p>
     *   <p>If you're using Classic Load Balancers, use the
     * <code>elbInfoList</code> array instead of this one.</p> 
     */
    inline void SetTargetGroupInfoList(const Aws::Vector<TargetGroupInfo>& value) { m_targetGroupInfoListHasBeenSet = true; m_targetGroupInfoList = value; }

    /**
     * <p>An array that contains information about the target groups to use for load
     * balancing in a deployment. If you're using Application Load Balancers and
     * Network Load Balancers, specify their associated target groups in this
     * array.</p>  <p>You can add up to 10 target groups to the array.</p>
     *   <p>If you're using Classic Load Balancers, use the
     * <code>elbInfoList</code> array instead of this one.</p> 
     */
    inline void SetTargetGroupInfoList(Aws::Vector<TargetGroupInfo>&& value) { m_targetGroupInfoListHasBeenSet = true; m_targetGroupInfoList = std::move(value); }

    /**
     * <p>An array that contains information about the target groups to use for load
     * balancing in a deployment. If you're using Application Load Balancers and
     * Network Load Balancers, specify their associated target groups in this
     * array.</p>  <p>You can add up to 10 target groups to the array.</p>
     *   <p>If you're using Classic Load Balancers, use the
     * <code>elbInfoList</code> array instead of this one.</p> 
     */
    inline LoadBalancerInfo& WithTargetGroupInfoList(const Aws::Vector<TargetGroupInfo>& value) { SetTargetGroupInfoList(value); return *this;}

    /**
     * <p>An array that contains information about the target groups to use for load
     * balancing in a deployment. If you're using Application Load Balancers and
     * Network Load Balancers, specify their associated target groups in this
     * array.</p>  <p>You can add up to 10 target groups to the array.</p>
     *   <p>If you're using Classic Load Balancers, use the
     * <code>elbInfoList</code> array instead of this one.</p> 
     */
    inline LoadBalancerInfo& WithTargetGroupInfoList(Aws::Vector<TargetGroupInfo>&& value) { SetTargetGroupInfoList(std::move(value)); return *this;}

    /**
     * <p>An array that contains information about the target groups to use for load
     * balancing in a deployment. If you're using Application Load Balancers and
     * Network Load Balancers, specify their associated target groups in this
     * array.</p>  <p>You can add up to 10 target groups to the array.</p>
     *   <p>If you're using Classic Load Balancers, use the
     * <code>elbInfoList</code> array instead of this one.</p> 
     */
    inline LoadBalancerInfo& AddTargetGroupInfoList(const TargetGroupInfo& value) { m_targetGroupInfoListHasBeenSet = true; m_targetGroupInfoList.push_back(value); return *this; }

    /**
     * <p>An array that contains information about the target groups to use for load
     * balancing in a deployment. If you're using Application Load Balancers and
     * Network Load Balancers, specify their associated target groups in this
     * array.</p>  <p>You can add up to 10 target groups to the array.</p>
     *   <p>If you're using Classic Load Balancers, use the
     * <code>elbInfoList</code> array instead of this one.</p> 
     */
    inline LoadBalancerInfo& AddTargetGroupInfoList(TargetGroupInfo&& value) { m_targetGroupInfoListHasBeenSet = true; m_targetGroupInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p> The target group pair information. This is an array of
     * <code>TargeGroupPairInfo</code> objects with a maximum size of one. </p>
     */
    inline const Aws::Vector<TargetGroupPairInfo>& GetTargetGroupPairInfoList() const{ return m_targetGroupPairInfoList; }

    /**
     * <p> The target group pair information. This is an array of
     * <code>TargeGroupPairInfo</code> objects with a maximum size of one. </p>
     */
    inline bool TargetGroupPairInfoListHasBeenSet() const { return m_targetGroupPairInfoListHasBeenSet; }

    /**
     * <p> The target group pair information. This is an array of
     * <code>TargeGroupPairInfo</code> objects with a maximum size of one. </p>
     */
    inline void SetTargetGroupPairInfoList(const Aws::Vector<TargetGroupPairInfo>& value) { m_targetGroupPairInfoListHasBeenSet = true; m_targetGroupPairInfoList = value; }

    /**
     * <p> The target group pair information. This is an array of
     * <code>TargeGroupPairInfo</code> objects with a maximum size of one. </p>
     */
    inline void SetTargetGroupPairInfoList(Aws::Vector<TargetGroupPairInfo>&& value) { m_targetGroupPairInfoListHasBeenSet = true; m_targetGroupPairInfoList = std::move(value); }

    /**
     * <p> The target group pair information. This is an array of
     * <code>TargeGroupPairInfo</code> objects with a maximum size of one. </p>
     */
    inline LoadBalancerInfo& WithTargetGroupPairInfoList(const Aws::Vector<TargetGroupPairInfo>& value) { SetTargetGroupPairInfoList(value); return *this;}

    /**
     * <p> The target group pair information. This is an array of
     * <code>TargeGroupPairInfo</code> objects with a maximum size of one. </p>
     */
    inline LoadBalancerInfo& WithTargetGroupPairInfoList(Aws::Vector<TargetGroupPairInfo>&& value) { SetTargetGroupPairInfoList(std::move(value)); return *this;}

    /**
     * <p> The target group pair information. This is an array of
     * <code>TargeGroupPairInfo</code> objects with a maximum size of one. </p>
     */
    inline LoadBalancerInfo& AddTargetGroupPairInfoList(const TargetGroupPairInfo& value) { m_targetGroupPairInfoListHasBeenSet = true; m_targetGroupPairInfoList.push_back(value); return *this; }

    /**
     * <p> The target group pair information. This is an array of
     * <code>TargeGroupPairInfo</code> objects with a maximum size of one. </p>
     */
    inline LoadBalancerInfo& AddTargetGroupPairInfoList(TargetGroupPairInfo&& value) { m_targetGroupPairInfoListHasBeenSet = true; m_targetGroupPairInfoList.push_back(std::move(value)); return *this; }

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
