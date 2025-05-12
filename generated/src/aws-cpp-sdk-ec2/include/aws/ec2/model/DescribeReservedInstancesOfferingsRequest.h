/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/OfferingClassType.h>
#include <aws/ec2/model/RIProductDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tenancy.h>
#include <aws/ec2/model/OfferingTypeValues.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeReservedInstancesOfferings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesOfferingsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesOfferingsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeReservedInstancesOfferingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedInstancesOfferings"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     * <p>Either <code>AvailabilityZone</code> or <code>AvailabilityZoneId</code> can
     * be specified, but not both.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    DescribeReservedInstancesOfferingsRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include Reserved Instance Marketplace offerings in the response.</p>
     */
    inline bool GetIncludeMarketplace() const { return m_includeMarketplace; }
    inline bool IncludeMarketplaceHasBeenSet() const { return m_includeMarketplaceHasBeenSet; }
    inline void SetIncludeMarketplace(bool value) { m_includeMarketplaceHasBeenSet = true; m_includeMarketplace = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithIncludeMarketplace(bool value) { SetIncludeMarketplace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type that the reservation will cover (for example,
     * <code>m1.small</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Amazon
     * EC2 instance types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration (in seconds) to filter when searching for offerings.</p>
     * <p>Default: 94608000 (3 years)</p>
     */
    inline long long GetMaxDuration() const { return m_maxDuration; }
    inline bool MaxDurationHasBeenSet() const { return m_maxDurationHasBeenSet; }
    inline void SetMaxDuration(long long value) { m_maxDurationHasBeenSet = true; m_maxDuration = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithMaxDuration(long long value) { SetMaxDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances to filter when searching for offerings.</p>
     * <p>Default: 20</p>
     */
    inline int GetMaxInstanceCount() const { return m_maxInstanceCount; }
    inline bool MaxInstanceCountHasBeenSet() const { return m_maxInstanceCountHasBeenSet; }
    inline void SetMaxInstanceCount(int value) { m_maxInstanceCountHasBeenSet = true; m_maxInstanceCount = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithMaxInstanceCount(int value) { SetMaxInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum duration (in seconds) to filter when searching for offerings.</p>
     * <p>Default: 2592000 (1 month)</p>
     */
    inline long long GetMinDuration() const { return m_minDuration; }
    inline bool MinDurationHasBeenSet() const { return m_minDurationHasBeenSet; }
    inline void SetMinDuration(long long value) { m_minDurationHasBeenSet = true; m_minDuration = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithMinDuration(long long value) { SetMinDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering class of the Reserved Instance. Can be <code>standard</code> or
     * <code>convertible</code>.</p>
     */
    inline OfferingClassType GetOfferingClass() const { return m_offeringClass; }
    inline bool OfferingClassHasBeenSet() const { return m_offeringClassHasBeenSet; }
    inline void SetOfferingClass(OfferingClassType value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithOfferingClass(OfferingClassType value) { SetOfferingClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reserved Instance product platform description. Instances that include
     * <code>(Amazon VPC)</code> in the description are for use with Amazon VPC.</p>
     */
    inline RIProductDescription GetProductDescription() const { return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(RIProductDescription value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithProductDescription(RIProductDescription value) { SetProductDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more Reserved Instances offering IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReservedInstancesOfferingIds() const { return m_reservedInstancesOfferingIds; }
    inline bool ReservedInstancesOfferingIdsHasBeenSet() const { return m_reservedInstancesOfferingIdsHasBeenSet; }
    template<typename ReservedInstancesOfferingIdsT = Aws::Vector<Aws::String>>
    void SetReservedInstancesOfferingIds(ReservedInstancesOfferingIdsT&& value) { m_reservedInstancesOfferingIdsHasBeenSet = true; m_reservedInstancesOfferingIds = std::forward<ReservedInstancesOfferingIdsT>(value); }
    template<typename ReservedInstancesOfferingIdsT = Aws::Vector<Aws::String>>
    DescribeReservedInstancesOfferingsRequest& WithReservedInstancesOfferingIds(ReservedInstancesOfferingIdsT&& value) { SetReservedInstancesOfferingIds(std::forward<ReservedInstancesOfferingIdsT>(value)); return *this;}
    template<typename ReservedInstancesOfferingIdsT = Aws::String>
    DescribeReservedInstancesOfferingsRequest& AddReservedInstancesOfferingIds(ReservedInstancesOfferingIdsT&& value) { m_reservedInstancesOfferingIdsHasBeenSet = true; m_reservedInstancesOfferingIds.emplace_back(std::forward<ReservedInstancesOfferingIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone.</p> <p>Either <code>AvailabilityZone</code>
     * or <code>AvailabilityZoneId</code> can be specified, but not both.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    DescribeReservedInstancesOfferingsRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
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
    inline DescribeReservedInstancesOfferingsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone where the Reserved Instance can be used.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The ID of the Availability Zone where the
     * Reserved Instance can be used.</p> </li> <li> <p> <code>duration</code> - The
     * duration of the Reserved Instance (for example, one year or three years), in
     * seconds (<code>31536000</code> | <code>94608000</code>).</p> </li> <li> <p>
     * <code>fixed-price</code> - The purchase price of the Reserved Instance (for
     * example, 9800.0).</p> </li> <li> <p> <code>instance-type</code> - The instance
     * type that is covered by the reservation.</p> </li> <li> <p>
     * <code>marketplace</code> - Set to <code>true</code> to show only Reserved
     * Instance Marketplace offerings. When this filter is not used, which is the
     * default behavior, all offerings from both Amazon Web Services and the Reserved
     * Instance Marketplace are listed.</p> </li> <li> <p>
     * <code>product-description</code> - The Reserved Instance product platform
     * description (<code>Linux/UNIX</code> | <code>Linux with SQL Server
     * Standard</code> | <code>Linux with SQL Server Web</code> | <code>Linux with SQL
     * Server Enterprise</code> | <code>SUSE Linux</code> | <code>Red Hat Enterprise
     * Linux</code> | <code>Red Hat Enterprise Linux with HA</code> |
     * <code>Windows</code> | <code>Windows with SQL Server Standard</code> |
     * <code>Windows with SQL Server Web</code> | <code>Windows with SQL Server
     * Enterprise</code>).</p> </li> <li> <p>
     * <code>reserved-instances-offering-id</code> - The Reserved Instances offering
     * ID.</p> </li> <li> <p> <code>scope</code> - The scope of the Reserved Instance
     * (<code>Availability Zone</code> or <code>Region</code>).</p> </li> <li> <p>
     * <code>usage-price</code> - The usage price of the Reserved Instance, per hour
     * (for example, 0.84).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeReservedInstancesOfferingsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeReservedInstancesOfferingsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instances covered by the reservation. A Reserved Instance
     * with a tenancy of <code>dedicated</code> is applied to instances that run in a
     * VPC on single-tenant hardware (i.e., Dedicated Instances).</p> <p>
     * <b>Important:</b> The <code>host</code> value cannot be used with this
     * parameter. Use the <code>default</code> or <code>dedicated</code> values
     * only.</p> <p>Default: <code>default</code> </p>
     */
    inline Tenancy GetInstanceTenancy() const { return m_instanceTenancy; }
    inline bool InstanceTenancyHasBeenSet() const { return m_instanceTenancyHasBeenSet; }
    inline void SetInstanceTenancy(Tenancy value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithInstanceTenancy(Tenancy value) { SetInstanceTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reserved Instance offering type. If you are using tools that predate the
     * 2011-11-01 API version, you only have access to the <code>Medium
     * Utilization</code> Reserved Instance offering type. </p>
     */
    inline OfferingTypeValues GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(OfferingTypeValues value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithOfferingType(OfferingTypeValues value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReservedInstancesOfferingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. The maximum is 100.</p>
     * <p>Default: 100</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeReservedInstancesOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_includeMarketplace{false};
    bool m_includeMarketplaceHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    long long m_maxDuration{0};
    bool m_maxDurationHasBeenSet = false;

    int m_maxInstanceCount{0};
    bool m_maxInstanceCountHasBeenSet = false;

    long long m_minDuration{0};
    bool m_minDurationHasBeenSet = false;

    OfferingClassType m_offeringClass{OfferingClassType::NOT_SET};
    bool m_offeringClassHasBeenSet = false;

    RIProductDescription m_productDescription{RIProductDescription::NOT_SET};
    bool m_productDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_reservedInstancesOfferingIds;
    bool m_reservedInstancesOfferingIdsHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Tenancy m_instanceTenancy{Tenancy::NOT_SET};
    bool m_instanceTenancyHasBeenSet = false;

    OfferingTypeValues m_offeringType{OfferingTypeValues::NOT_SET};
    bool m_offeringTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
