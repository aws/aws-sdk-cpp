/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/Ec2InstanceSortBy.h>
#include <aws/inspector2/model/StringFilter.h>
#include <aws/inspector2/model/MapFilter.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The details that define an aggregation based on Amazon EC2
   * instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Ec2InstanceAggregation">AWS
   * API Reference</a></p>
   */
  class Ec2InstanceAggregation
  {
  public:
    AWS_INSPECTOR2_API Ec2InstanceAggregation() = default;
    AWS_INSPECTOR2_API Ec2InstanceAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Ec2InstanceAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AMI IDs associated with the Amazon EC2 instances to aggregate findings
     * for.</p>
     */
    inline const Aws::Vector<StringFilter>& GetAmis() const { return m_amis; }
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }
    template<typename AmisT = Aws::Vector<StringFilter>>
    void SetAmis(AmisT&& value) { m_amisHasBeenSet = true; m_amis = std::forward<AmisT>(value); }
    template<typename AmisT = Aws::Vector<StringFilter>>
    Ec2InstanceAggregation& WithAmis(AmisT&& value) { SetAmis(std::forward<AmisT>(value)); return *this;}
    template<typename AmisT = StringFilter>
    Ec2InstanceAggregation& AddAmis(AmisT&& value) { m_amisHasBeenSet = true; m_amis.emplace_back(std::forward<AmisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operating system types to aggregate findings for. Valid values must be
     * uppercase and underscore separated, examples are <code>ORACLE_LINUX_7</code> and
     * <code>ALPINE_LINUX_3_8</code>.</p>
     */
    inline const Aws::Vector<StringFilter>& GetOperatingSystems() const { return m_operatingSystems; }
    inline bool OperatingSystemsHasBeenSet() const { return m_operatingSystemsHasBeenSet; }
    template<typename OperatingSystemsT = Aws::Vector<StringFilter>>
    void SetOperatingSystems(OperatingSystemsT&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = std::forward<OperatingSystemsT>(value); }
    template<typename OperatingSystemsT = Aws::Vector<StringFilter>>
    Ec2InstanceAggregation& WithOperatingSystems(OperatingSystemsT&& value) { SetOperatingSystems(std::forward<OperatingSystemsT>(value)); return *this;}
    template<typename OperatingSystemsT = StringFilter>
    Ec2InstanceAggregation& AddOperatingSystems(OperatingSystemsT&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.emplace_back(std::forward<OperatingSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance IDs to aggregate findings for.</p>
     */
    inline const Aws::Vector<StringFilter>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<StringFilter>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<StringFilter>>
    Ec2InstanceAggregation& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = StringFilter>
    Ec2InstanceAggregation& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance tags to aggregate findings for.</p>
     */
    inline const Aws::Vector<MapFilter>& GetInstanceTags() const { return m_instanceTags; }
    inline bool InstanceTagsHasBeenSet() const { return m_instanceTagsHasBeenSet; }
    template<typename InstanceTagsT = Aws::Vector<MapFilter>>
    void SetInstanceTags(InstanceTagsT&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = std::forward<InstanceTagsT>(value); }
    template<typename InstanceTagsT = Aws::Vector<MapFilter>>
    Ec2InstanceAggregation& WithInstanceTags(InstanceTagsT&& value) { SetInstanceTags(std::forward<InstanceTagsT>(value)); return *this;}
    template<typename InstanceTagsT = MapFilter>
    Ec2InstanceAggregation& AddInstanceTags(InstanceTagsT&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace_back(std::forward<InstanceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline Ec2InstanceAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline Ec2InstanceSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(Ec2InstanceSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline Ec2InstanceAggregation& WithSortBy(Ec2InstanceSortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_amis;
    bool m_amisHasBeenSet = false;

    Aws::Vector<StringFilter> m_operatingSystems;
    bool m_operatingSystemsHasBeenSet = false;

    Aws::Vector<StringFilter> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<MapFilter> m_instanceTags;
    bool m_instanceTagsHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Ec2InstanceSortBy m_sortBy{Ec2InstanceSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
