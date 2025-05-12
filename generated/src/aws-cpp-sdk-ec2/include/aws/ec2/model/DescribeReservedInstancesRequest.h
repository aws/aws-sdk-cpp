/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/OfferingClassType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/OfferingTypeValues.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeReservedInstances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesRequest">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeReservedInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedInstances"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Describes whether the Reserved Instance is Standard or Convertible.</p>
     */
    inline OfferingClassType GetOfferingClass() const { return m_offeringClass; }
    inline bool OfferingClassHasBeenSet() const { return m_offeringClassHasBeenSet; }
    inline void SetOfferingClass(OfferingClassType value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }
    inline DescribeReservedInstancesRequest& WithOfferingClass(OfferingClassType value) { SetOfferingClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more Reserved Instance IDs.</p> <p>Default: Describes all your
     * Reserved Instances, or only those otherwise specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReservedInstancesIds() const { return m_reservedInstancesIds; }
    inline bool ReservedInstancesIdsHasBeenSet() const { return m_reservedInstancesIdsHasBeenSet; }
    template<typename ReservedInstancesIdsT = Aws::Vector<Aws::String>>
    void SetReservedInstancesIds(ReservedInstancesIdsT&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = std::forward<ReservedInstancesIdsT>(value); }
    template<typename ReservedInstancesIdsT = Aws::Vector<Aws::String>>
    DescribeReservedInstancesRequest& WithReservedInstancesIds(ReservedInstancesIdsT&& value) { SetReservedInstancesIds(std::forward<ReservedInstancesIdsT>(value)); return *this;}
    template<typename ReservedInstancesIdsT = Aws::String>
    DescribeReservedInstancesRequest& AddReservedInstancesIds(ReservedInstancesIdsT&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.emplace_back(std::forward<ReservedInstancesIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeReservedInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone where the Reserved Instance can be used.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The ID of the Availability Zone where the
     * Reserved Instance can be used.</p> </li> <li> <p> <code>duration</code> - The
     * duration of the Reserved Instance (one year or three years), in seconds
     * (<code>31536000</code> | <code>94608000</code>).</p> </li> <li> <p>
     * <code>end</code> - The time when the Reserved Instance expires (for example,
     * 2015-08-07T11:54:42.000Z).</p> </li> <li> <p> <code>fixed-price</code> - The
     * purchase price of the Reserved Instance (for example, 9800.0).</p> </li> <li>
     * <p> <code>instance-type</code> - The instance type that is covered by the
     * reservation.</p> </li> <li> <p> <code>scope</code> - The scope of the Reserved
     * Instance (<code>Region</code> or <code>Availability Zone</code>).</p> </li> <li>
     * <p> <code>product-description</code> - The Reserved Instance product platform
     * description (<code>Linux/UNIX</code> | <code>Linux with SQL Server
     * Standard</code> | <code>Linux with SQL Server Web</code> | <code>Linux with SQL
     * Server Enterprise</code> | <code>SUSE Linux</code> | <code>Red Hat Enterprise
     * Linux</code> | <code>Red Hat Enterprise Linux with HA</code> |
     * <code>Windows</code> | <code>Windows with SQL Server Standard</code> |
     * <code>Windows with SQL Server Web</code> | <code>Windows with SQL Server
     * Enterprise</code>).</p> </li> <li> <p> <code>reserved-instances-id</code> - The
     * ID of the Reserved Instance.</p> </li> <li> <p> <code>start</code> - The time at
     * which the Reserved Instance purchase request was placed (for example,
     * 2014-08-07T11:54:42.000Z).</p> </li> <li> <p> <code>state</code> - The state of
     * the Reserved Instance (<code>payment-pending</code> | <code>active</code> |
     * <code>payment-failed</code> | <code>retired</code>).</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>usage-price</code> - The usage price of the Reserved Instance, per hour
     * (for example, 0.84).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeReservedInstancesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeReservedInstancesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Reserved Instance offering type. If you are using tools that predate the
     * 2011-11-01 API version, you only have access to the <code>Medium
     * Utilization</code> Reserved Instance offering type.</p>
     */
    inline OfferingTypeValues GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(OfferingTypeValues value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline DescribeReservedInstancesRequest& WithOfferingType(OfferingTypeValues value) { SetOfferingType(value); return *this;}
    ///@}
  private:

    OfferingClassType m_offeringClass{OfferingClassType::NOT_SET};
    bool m_offeringClassHasBeenSet = false;

    Aws::Vector<Aws::String> m_reservedInstancesIds;
    bool m_reservedInstancesIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    OfferingTypeValues m_offeringType{OfferingTypeValues::NOT_SET};
    bool m_offeringTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
