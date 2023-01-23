/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Ec2InstanceSortBy.h>
#include <aws/inspector2/model/SortOrder.h>
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
    AWS_INSPECTOR2_API Ec2InstanceAggregation();
    AWS_INSPECTOR2_API Ec2InstanceAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Ec2InstanceAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AMI IDs associated with the Amazon EC2 instances to aggregate findings
     * for.</p>
     */
    inline const Aws::Vector<StringFilter>& GetAmis() const{ return m_amis; }

    /**
     * <p>The AMI IDs associated with the Amazon EC2 instances to aggregate findings
     * for.</p>
     */
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }

    /**
     * <p>The AMI IDs associated with the Amazon EC2 instances to aggregate findings
     * for.</p>
     */
    inline void SetAmis(const Aws::Vector<StringFilter>& value) { m_amisHasBeenSet = true; m_amis = value; }

    /**
     * <p>The AMI IDs associated with the Amazon EC2 instances to aggregate findings
     * for.</p>
     */
    inline void SetAmis(Aws::Vector<StringFilter>&& value) { m_amisHasBeenSet = true; m_amis = std::move(value); }

    /**
     * <p>The AMI IDs associated with the Amazon EC2 instances to aggregate findings
     * for.</p>
     */
    inline Ec2InstanceAggregation& WithAmis(const Aws::Vector<StringFilter>& value) { SetAmis(value); return *this;}

    /**
     * <p>The AMI IDs associated with the Amazon EC2 instances to aggregate findings
     * for.</p>
     */
    inline Ec2InstanceAggregation& WithAmis(Aws::Vector<StringFilter>&& value) { SetAmis(std::move(value)); return *this;}

    /**
     * <p>The AMI IDs associated with the Amazon EC2 instances to aggregate findings
     * for.</p>
     */
    inline Ec2InstanceAggregation& AddAmis(const StringFilter& value) { m_amisHasBeenSet = true; m_amis.push_back(value); return *this; }

    /**
     * <p>The AMI IDs associated with the Amazon EC2 instances to aggregate findings
     * for.</p>
     */
    inline Ec2InstanceAggregation& AddAmis(StringFilter&& value) { m_amisHasBeenSet = true; m_amis.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon EC2 instance IDs to aggregate findings for.</p>
     */
    inline const Aws::Vector<StringFilter>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The Amazon EC2 instance IDs to aggregate findings for.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance IDs to aggregate findings for.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<StringFilter>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The Amazon EC2 instance IDs to aggregate findings for.</p>
     */
    inline void SetInstanceIds(Aws::Vector<StringFilter>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The Amazon EC2 instance IDs to aggregate findings for.</p>
     */
    inline Ec2InstanceAggregation& WithInstanceIds(const Aws::Vector<StringFilter>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The Amazon EC2 instance IDs to aggregate findings for.</p>
     */
    inline Ec2InstanceAggregation& WithInstanceIds(Aws::Vector<StringFilter>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance IDs to aggregate findings for.</p>
     */
    inline Ec2InstanceAggregation& AddInstanceIds(const StringFilter& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 instance IDs to aggregate findings for.</p>
     */
    inline Ec2InstanceAggregation& AddInstanceIds(StringFilter&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon EC2 instance tags to aggregate findings for.</p>
     */
    inline const Aws::Vector<MapFilter>& GetInstanceTags() const{ return m_instanceTags; }

    /**
     * <p>The Amazon EC2 instance tags to aggregate findings for.</p>
     */
    inline bool InstanceTagsHasBeenSet() const { return m_instanceTagsHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance tags to aggregate findings for.</p>
     */
    inline void SetInstanceTags(const Aws::Vector<MapFilter>& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = value; }

    /**
     * <p>The Amazon EC2 instance tags to aggregate findings for.</p>
     */
    inline void SetInstanceTags(Aws::Vector<MapFilter>&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = std::move(value); }

    /**
     * <p>The Amazon EC2 instance tags to aggregate findings for.</p>
     */
    inline Ec2InstanceAggregation& WithInstanceTags(const Aws::Vector<MapFilter>& value) { SetInstanceTags(value); return *this;}

    /**
     * <p>The Amazon EC2 instance tags to aggregate findings for.</p>
     */
    inline Ec2InstanceAggregation& WithInstanceTags(Aws::Vector<MapFilter>&& value) { SetInstanceTags(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance tags to aggregate findings for.</p>
     */
    inline Ec2InstanceAggregation& AddInstanceTags(const MapFilter& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 instance tags to aggregate findings for.</p>
     */
    inline Ec2InstanceAggregation& AddInstanceTags(MapFilter&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The operating system types to aggregate findings for. Valid values must be
     * uppercase and underscore separated, examples are <code>ORACLE_LINUX_7</code> and
     * <code>ALPINE_LINUX_3_8</code>.</p>
     */
    inline const Aws::Vector<StringFilter>& GetOperatingSystems() const{ return m_operatingSystems; }

    /**
     * <p>The operating system types to aggregate findings for. Valid values must be
     * uppercase and underscore separated, examples are <code>ORACLE_LINUX_7</code> and
     * <code>ALPINE_LINUX_3_8</code>.</p>
     */
    inline bool OperatingSystemsHasBeenSet() const { return m_operatingSystemsHasBeenSet; }

    /**
     * <p>The operating system types to aggregate findings for. Valid values must be
     * uppercase and underscore separated, examples are <code>ORACLE_LINUX_7</code> and
     * <code>ALPINE_LINUX_3_8</code>.</p>
     */
    inline void SetOperatingSystems(const Aws::Vector<StringFilter>& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = value; }

    /**
     * <p>The operating system types to aggregate findings for. Valid values must be
     * uppercase and underscore separated, examples are <code>ORACLE_LINUX_7</code> and
     * <code>ALPINE_LINUX_3_8</code>.</p>
     */
    inline void SetOperatingSystems(Aws::Vector<StringFilter>&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = std::move(value); }

    /**
     * <p>The operating system types to aggregate findings for. Valid values must be
     * uppercase and underscore separated, examples are <code>ORACLE_LINUX_7</code> and
     * <code>ALPINE_LINUX_3_8</code>.</p>
     */
    inline Ec2InstanceAggregation& WithOperatingSystems(const Aws::Vector<StringFilter>& value) { SetOperatingSystems(value); return *this;}

    /**
     * <p>The operating system types to aggregate findings for. Valid values must be
     * uppercase and underscore separated, examples are <code>ORACLE_LINUX_7</code> and
     * <code>ALPINE_LINUX_3_8</code>.</p>
     */
    inline Ec2InstanceAggregation& WithOperatingSystems(Aws::Vector<StringFilter>&& value) { SetOperatingSystems(std::move(value)); return *this;}

    /**
     * <p>The operating system types to aggregate findings for. Valid values must be
     * uppercase and underscore separated, examples are <code>ORACLE_LINUX_7</code> and
     * <code>ALPINE_LINUX_3_8</code>.</p>
     */
    inline Ec2InstanceAggregation& AddOperatingSystems(const StringFilter& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.push_back(value); return *this; }

    /**
     * <p>The operating system types to aggregate findings for. Valid values must be
     * uppercase and underscore separated, examples are <code>ORACLE_LINUX_7</code> and
     * <code>ALPINE_LINUX_3_8</code>.</p>
     */
    inline Ec2InstanceAggregation& AddOperatingSystems(StringFilter&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.push_back(std::move(value)); return *this; }


    /**
     * <p>The value to sort results by.</p>
     */
    inline const Ec2InstanceSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(const Ec2InstanceSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(Ec2InstanceSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value to sort results by.</p>
     */
    inline Ec2InstanceAggregation& WithSortBy(const Ec2InstanceSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value to sort results by.</p>
     */
    inline Ec2InstanceAggregation& WithSortBy(Ec2InstanceSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The order to sort results by.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order to sort results by.</p>
     */
    inline Ec2InstanceAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to sort results by.</p>
     */
    inline Ec2InstanceAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Vector<StringFilter> m_amis;
    bool m_amisHasBeenSet = false;

    Aws::Vector<StringFilter> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<MapFilter> m_instanceTags;
    bool m_instanceTagsHasBeenSet = false;

    Aws::Vector<StringFilter> m_operatingSystems;
    bool m_operatingSystemsHasBeenSet = false;

    Ec2InstanceSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
