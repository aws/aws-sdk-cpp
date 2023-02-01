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
    AWS_CODEDEPLOY_API TargetInstances();
    AWS_CODEDEPLOY_API TargetInstances(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TargetInstances& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as <code>ec2TagSet</code>.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetTagFilters() const{ return m_tagFilters; }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as <code>ec2TagSet</code>.</p>
     */
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as <code>ec2TagSet</code>.</p>
     */
    inline void SetTagFilters(const Aws::Vector<EC2TagFilter>& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = value; }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as <code>ec2TagSet</code>.</p>
     */
    inline void SetTagFilters(Aws::Vector<EC2TagFilter>&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::move(value); }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as <code>ec2TagSet</code>.</p>
     */
    inline TargetInstances& WithTagFilters(const Aws::Vector<EC2TagFilter>& value) { SetTagFilters(value); return *this;}

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as <code>ec2TagSet</code>.</p>
     */
    inline TargetInstances& WithTagFilters(Aws::Vector<EC2TagFilter>&& value) { SetTagFilters(std::move(value)); return *this;}

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as <code>ec2TagSet</code>.</p>
     */
    inline TargetInstances& AddTagFilters(const EC2TagFilter& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(value); return *this; }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as <code>ec2TagSet</code>.</p>
     */
    inline TargetInstances& AddTagFilters(EC2TagFilter&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }

    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline void SetAutoScalingGroups(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline void SetAutoScalingGroups(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::move(value); }

    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline TargetInstances& WithAutoScalingGroups(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline TargetInstances& WithAutoScalingGroups(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroups(std::move(value)); return *this;}

    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline TargetInstances& AddAutoScalingGroups(const Aws::String& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline TargetInstances& AddAutoScalingGroups(Aws::String&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of one or more Auto Scaling groups to identify a replacement
     * environment for a blue/green deployment.</p>
     */
    inline TargetInstances& AddAutoScalingGroups(const char* value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }


    /**
     * <p>Information about the groups of Amazon EC2 instance tags that an instance
     * must be identified by in order for it to be included in the replacement
     * environment for a blue/green deployment. Cannot be used in the same call as
     * <code>tagFilters</code>.</p>
     */
    inline const EC2TagSet& GetEc2TagSet() const{ return m_ec2TagSet; }

    /**
     * <p>Information about the groups of Amazon EC2 instance tags that an instance
     * must be identified by in order for it to be included in the replacement
     * environment for a blue/green deployment. Cannot be used in the same call as
     * <code>tagFilters</code>.</p>
     */
    inline bool Ec2TagSetHasBeenSet() const { return m_ec2TagSetHasBeenSet; }

    /**
     * <p>Information about the groups of Amazon EC2 instance tags that an instance
     * must be identified by in order for it to be included in the replacement
     * environment for a blue/green deployment. Cannot be used in the same call as
     * <code>tagFilters</code>.</p>
     */
    inline void SetEc2TagSet(const EC2TagSet& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = value; }

    /**
     * <p>Information about the groups of Amazon EC2 instance tags that an instance
     * must be identified by in order for it to be included in the replacement
     * environment for a blue/green deployment. Cannot be used in the same call as
     * <code>tagFilters</code>.</p>
     */
    inline void SetEc2TagSet(EC2TagSet&& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = std::move(value); }

    /**
     * <p>Information about the groups of Amazon EC2 instance tags that an instance
     * must be identified by in order for it to be included in the replacement
     * environment for a blue/green deployment. Cannot be used in the same call as
     * <code>tagFilters</code>.</p>
     */
    inline TargetInstances& WithEc2TagSet(const EC2TagSet& value) { SetEc2TagSet(value); return *this;}

    /**
     * <p>Information about the groups of Amazon EC2 instance tags that an instance
     * must be identified by in order for it to be included in the replacement
     * environment for a blue/green deployment. Cannot be used in the same call as
     * <code>tagFilters</code>.</p>
     */
    inline TargetInstances& WithEc2TagSet(EC2TagSet&& value) { SetEc2TagSet(std::move(value)); return *this;}

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
