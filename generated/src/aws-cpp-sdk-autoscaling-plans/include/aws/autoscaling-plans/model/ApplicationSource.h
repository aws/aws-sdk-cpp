/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling-plans/model/TagFilter.h>
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
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Represents an application source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/ApplicationSource">AWS
   * API Reference</a></p>
   */
  class ApplicationSource
  {
  public:
    AWS_AUTOSCALINGPLANS_API ApplicationSource() = default;
    AWS_AUTOSCALINGPLANS_API ApplicationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API ApplicationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a AWS CloudFormation stack.</p>
     */
    inline const Aws::String& GetCloudFormationStackARN() const { return m_cloudFormationStackARN; }
    inline bool CloudFormationStackARNHasBeenSet() const { return m_cloudFormationStackARNHasBeenSet; }
    template<typename CloudFormationStackARNT = Aws::String>
    void SetCloudFormationStackARN(CloudFormationStackARNT&& value) { m_cloudFormationStackARNHasBeenSet = true; m_cloudFormationStackARN = std::forward<CloudFormationStackARNT>(value); }
    template<typename CloudFormationStackARNT = Aws::String>
    ApplicationSource& WithCloudFormationStackARN(CloudFormationStackARNT&& value) { SetCloudFormationStackARN(std::forward<CloudFormationStackARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags (up to 50).</p>
     */
    inline const Aws::Vector<TagFilter>& GetTagFilters() const { return m_tagFilters; }
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }
    template<typename TagFiltersT = Aws::Vector<TagFilter>>
    void SetTagFilters(TagFiltersT&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::forward<TagFiltersT>(value); }
    template<typename TagFiltersT = Aws::Vector<TagFilter>>
    ApplicationSource& WithTagFilters(TagFiltersT&& value) { SetTagFilters(std::forward<TagFiltersT>(value)); return *this;}
    template<typename TagFiltersT = TagFilter>
    ApplicationSource& AddTagFilters(TagFiltersT&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.emplace_back(std::forward<TagFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cloudFormationStackARN;
    bool m_cloudFormationStackARNHasBeenSet = false;

    Aws::Vector<TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
