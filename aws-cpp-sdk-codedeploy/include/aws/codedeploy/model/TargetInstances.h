/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEDEPLOY_API TargetInstances
  {
  public:
    TargetInstances();
    TargetInstances(Aws::Utils::Json::JsonView jsonValue);
    TargetInstances& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as ec2TagSet.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetTagFilters() const{ return m_tagFilters; }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as ec2TagSet.</p>
     */
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as ec2TagSet.</p>
     */
    inline void SetTagFilters(const Aws::Vector<EC2TagFilter>& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = value; }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as ec2TagSet.</p>
     */
    inline void SetTagFilters(Aws::Vector<EC2TagFilter>&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::move(value); }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as ec2TagSet.</p>
     */
    inline TargetInstances& WithTagFilters(const Aws::Vector<EC2TagFilter>& value) { SetTagFilters(value); return *this;}

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as ec2TagSet.</p>
     */
    inline TargetInstances& WithTagFilters(Aws::Vector<EC2TagFilter>&& value) { SetTagFilters(std::move(value)); return *this;}

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as ec2TagSet.</p>
     */
    inline TargetInstances& AddTagFilters(const EC2TagFilter& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(value); return *this; }

    /**
     * <p>The tag filter key, type, and value used to identify Amazon EC2 instances in
     * a replacement environment for a blue/green deployment. Cannot be used in the
     * same call as ec2TagSet.</p>
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
     * <p>Information about the groups of EC2 instance tags that an instance must be
     * identified by in order for it to be included in the replacement environment for
     * a blue/green deployment. Cannot be used in the same call as tagFilters.</p>
     */
    inline const EC2TagSet& GetEc2TagSet() const{ return m_ec2TagSet; }

    /**
     * <p>Information about the groups of EC2 instance tags that an instance must be
     * identified by in order for it to be included in the replacement environment for
     * a blue/green deployment. Cannot be used in the same call as tagFilters.</p>
     */
    inline bool Ec2TagSetHasBeenSet() const { return m_ec2TagSetHasBeenSet; }

    /**
     * <p>Information about the groups of EC2 instance tags that an instance must be
     * identified by in order for it to be included in the replacement environment for
     * a blue/green deployment. Cannot be used in the same call as tagFilters.</p>
     */
    inline void SetEc2TagSet(const EC2TagSet& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = value; }

    /**
     * <p>Information about the groups of EC2 instance tags that an instance must be
     * identified by in order for it to be included in the replacement environment for
     * a blue/green deployment. Cannot be used in the same call as tagFilters.</p>
     */
    inline void SetEc2TagSet(EC2TagSet&& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = std::move(value); }

    /**
     * <p>Information about the groups of EC2 instance tags that an instance must be
     * identified by in order for it to be included in the replacement environment for
     * a blue/green deployment. Cannot be used in the same call as tagFilters.</p>
     */
    inline TargetInstances& WithEc2TagSet(const EC2TagSet& value) { SetEc2TagSet(value); return *this;}

    /**
     * <p>Information about the groups of EC2 instance tags that an instance must be
     * identified by in order for it to be included in the replacement environment for
     * a blue/green deployment. Cannot be used in the same call as tagFilters.</p>
     */
    inline TargetInstances& WithEc2TagSet(EC2TagSet&& value) { SetEc2TagSet(std::move(value)); return *this;}

  private:

    Aws::Vector<EC2TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet;

    Aws::Vector<Aws::String> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet;

    EC2TagSet m_ec2TagSet;
    bool m_ec2TagSetHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
