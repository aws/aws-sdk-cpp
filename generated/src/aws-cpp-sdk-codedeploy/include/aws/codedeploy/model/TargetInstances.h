/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/EC2TagSet.h>
#include <aws/codedeploy/model/EC2TagFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about the instances to be used in the replacement environment in
   * a blue/green deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TargetInstances">AWS
   * API Reference</a></p>
   */
  class TargetInstances
  {
  public:
    AWS_CODEDEPLOY_API TargetInstances() = default;
    AWS_CODEDEPLOY_API TargetInstances(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TargetInstances& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as <code>ec2TagSet</code>.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetTagFilters() const { return m_tagFilters; }
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }
    template<typename TagFiltersT = Aws::Vector<EC2TagFilter>>
    void SetTagFilters(TagFiltersT&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::forward<TagFiltersT>(value); }
    template<typename TagFiltersT = Aws::Vector<EC2TagFilter>>
    TargetInstances& WithTagFilters(TagFiltersT&& value) { SetTagFilters(std::forward<TagFiltersT>(value)); return *this;}
    template<typename TagFiltersT = EC2TagFilter>
    TargetInstances& AddTagFilters(TagFiltersT&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.emplace_back(std::forward<TagFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const { return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    template<typename AutoScalingGroupsT = Aws::Vector<Aws::String>>
    void SetAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::forward<AutoScalingGroupsT>(value); }
    template<typename AutoScalingGroupsT = Aws::Vector<Aws::String>>
    TargetInstances& WithAutoScalingGroups(AutoScalingGroupsT&& value) { SetAutoScalingGroups(std::forward<AutoScalingGroupsT>(value)); return *this;}
    template<typename AutoScalingGroupsT = Aws::String>
    TargetInstances& AddAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.emplace_back(std::forward<AutoScalingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the groups of Amazon EC2 instance tags that an instance
     * must be identified by in order for it to be included in the replacement
     * environment for a blue/green deployment. Cannot be used in the same call as
     * <code>tagFilters</code>.</p>
     */
    inline const EC2TagSet& GetEc2TagSet() const { return m_ec2TagSet; }
    inline bool Ec2TagSetHasBeenSet() const { return m_ec2TagSetHasBeenSet; }
    template<typename Ec2TagSetT = EC2TagSet>
    void SetEc2TagSet(Ec2TagSetT&& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = std::forward<Ec2TagSetT>(value); }
    template<typename Ec2TagSetT = EC2TagSet>
    TargetInstances& WithEc2TagSet(Ec2TagSetT&& value) { SetEc2TagSet(std::forward<Ec2TagSetT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EC2TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet = false;

    EC2TagSet m_ec2TagSet;
    bool m_ec2TagSetHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
