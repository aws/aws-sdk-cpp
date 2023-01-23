/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/JobFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes a filter that returns a more specific list of recommendation export
   * jobs. Use this filter with the <a>DescribeRecommendationExportJobs</a>
   * action.</p> <p>You can use <code>EBSFilter</code> with the
   * <a>GetEBSVolumeRecommendations</a> action,
   * <code>LambdaFunctionRecommendationFilter</code> with the
   * <a>GetLambdaFunctionRecommendations</a> action, and <code>Filter</code> with the
   * <a>GetAutoScalingGroupRecommendations</a> and
   * <a>GetEC2InstanceRecommendations</a> actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/JobFilter">AWS
   * API Reference</a></p>
   */
  class JobFilter
  {
  public:
    AWS_COMPUTEOPTIMIZER_API JobFilter();
    AWS_COMPUTEOPTIMIZER_API JobFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API JobFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p> <p>Specify <code>ResourceType</code> to return
     * export jobs of a specific resource type (for example,
     * <code>Ec2Instance</code>).</p> <p>Specify <code>JobStatus</code> to return
     * export jobs with a specific status (e.g, <code>Complete</code>).</p>
     */
    inline const JobFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>ResourceType</code> to return
     * export jobs of a specific resource type (for example,
     * <code>Ec2Instance</code>).</p> <p>Specify <code>JobStatus</code> to return
     * export jobs with a specific status (e.g, <code>Complete</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>ResourceType</code> to return
     * export jobs of a specific resource type (for example,
     * <code>Ec2Instance</code>).</p> <p>Specify <code>JobStatus</code> to return
     * export jobs with a specific status (e.g, <code>Complete</code>).</p>
     */
    inline void SetName(const JobFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>ResourceType</code> to return
     * export jobs of a specific resource type (for example,
     * <code>Ec2Instance</code>).</p> <p>Specify <code>JobStatus</code> to return
     * export jobs with a specific status (e.g, <code>Complete</code>).</p>
     */
    inline void SetName(JobFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>ResourceType</code> to return
     * export jobs of a specific resource type (for example,
     * <code>Ec2Instance</code>).</p> <p>Specify <code>JobStatus</code> to return
     * export jobs with a specific status (e.g, <code>Complete</code>).</p>
     */
    inline JobFilter& WithName(const JobFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>Specify <code>ResourceType</code> to return
     * export jobs of a specific resource type (for example,
     * <code>Ec2Instance</code>).</p> <p>Specify <code>JobStatus</code> to return
     * export jobs with a specific status (e.g, <code>Complete</code>).</p>
     */
    inline JobFilter& WithName(JobFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code>
     * if you specify the <code>name</code> parameter as <code>ResourceType</code>.
     * There is no filter for EBS volumes because volume recommendations cannot be
     * exported at this time.</p> </li> <li> <p>Specify <code>Queued</code>,
     * <code>InProgress</code>, <code>Complete</code>, or <code>Failed</code> if you
     * specify the <code>name</code> parameter as <code>JobStatus</code>.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code>
     * if you specify the <code>name</code> parameter as <code>ResourceType</code>.
     * There is no filter for EBS volumes because volume recommendations cannot be
     * exported at this time.</p> </li> <li> <p>Specify <code>Queued</code>,
     * <code>InProgress</code>, <code>Complete</code>, or <code>Failed</code> if you
     * specify the <code>name</code> parameter as <code>JobStatus</code>.</p> </li>
     * </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code>
     * if you specify the <code>name</code> parameter as <code>ResourceType</code>.
     * There is no filter for EBS volumes because volume recommendations cannot be
     * exported at this time.</p> </li> <li> <p>Specify <code>Queued</code>,
     * <code>InProgress</code>, <code>Complete</code>, or <code>Failed</code> if you
     * specify the <code>name</code> parameter as <code>JobStatus</code>.</p> </li>
     * </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code>
     * if you specify the <code>name</code> parameter as <code>ResourceType</code>.
     * There is no filter for EBS volumes because volume recommendations cannot be
     * exported at this time.</p> </li> <li> <p>Specify <code>Queued</code>,
     * <code>InProgress</code>, <code>Complete</code>, or <code>Failed</code> if you
     * specify the <code>name</code> parameter as <code>JobStatus</code>.</p> </li>
     * </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code>
     * if you specify the <code>name</code> parameter as <code>ResourceType</code>.
     * There is no filter for EBS volumes because volume recommendations cannot be
     * exported at this time.</p> </li> <li> <p>Specify <code>Queued</code>,
     * <code>InProgress</code>, <code>Complete</code>, or <code>Failed</code> if you
     * specify the <code>name</code> parameter as <code>JobStatus</code>.</p> </li>
     * </ul>
     */
    inline JobFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code>
     * if you specify the <code>name</code> parameter as <code>ResourceType</code>.
     * There is no filter for EBS volumes because volume recommendations cannot be
     * exported at this time.</p> </li> <li> <p>Specify <code>Queued</code>,
     * <code>InProgress</code>, <code>Complete</code>, or <code>Failed</code> if you
     * specify the <code>name</code> parameter as <code>JobStatus</code>.</p> </li>
     * </ul>
     */
    inline JobFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code>
     * if you specify the <code>name</code> parameter as <code>ResourceType</code>.
     * There is no filter for EBS volumes because volume recommendations cannot be
     * exported at this time.</p> </li> <li> <p>Specify <code>Queued</code>,
     * <code>InProgress</code>, <code>Complete</code>, or <code>Failed</code> if you
     * specify the <code>name</code> parameter as <code>JobStatus</code>.</p> </li>
     * </ul>
     */
    inline JobFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code>
     * if you specify the <code>name</code> parameter as <code>ResourceType</code>.
     * There is no filter for EBS volumes because volume recommendations cannot be
     * exported at this time.</p> </li> <li> <p>Specify <code>Queued</code>,
     * <code>InProgress</code>, <code>Complete</code>, or <code>Failed</code> if you
     * specify the <code>name</code> parameter as <code>JobStatus</code>.</p> </li>
     * </ul>
     */
    inline JobFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code>
     * if you specify the <code>name</code> parameter as <code>ResourceType</code>.
     * There is no filter for EBS volumes because volume recommendations cannot be
     * exported at this time.</p> </li> <li> <p>Specify <code>Queued</code>,
     * <code>InProgress</code>, <code>Complete</code>, or <code>Failed</code> if you
     * specify the <code>name</code> parameter as <code>JobStatus</code>.</p> </li>
     * </ul>
     */
    inline JobFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    JobFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
