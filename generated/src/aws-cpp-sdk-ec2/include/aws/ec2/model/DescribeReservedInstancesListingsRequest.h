/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeReservedInstancesListings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesListingsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesListingsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeReservedInstancesListingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedInstancesListings"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>One or more Reserved Instance IDs.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const { return m_reservedInstancesId; }
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
    template<typename ReservedInstancesIdT = Aws::String>
    void SetReservedInstancesId(ReservedInstancesIdT&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::forward<ReservedInstancesIdT>(value); }
    template<typename ReservedInstancesIdT = Aws::String>
    DescribeReservedInstancesListingsRequest& WithReservedInstancesId(ReservedInstancesIdT&& value) { SetReservedInstancesId(std::forward<ReservedInstancesIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more Reserved Instance listing IDs.</p>
     */
    inline const Aws::String& GetReservedInstancesListingId() const { return m_reservedInstancesListingId; }
    inline bool ReservedInstancesListingIdHasBeenSet() const { return m_reservedInstancesListingIdHasBeenSet; }
    template<typename ReservedInstancesListingIdT = Aws::String>
    void SetReservedInstancesListingId(ReservedInstancesListingIdT&& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = std::forward<ReservedInstancesListingIdT>(value); }
    template<typename ReservedInstancesListingIdT = Aws::String>
    DescribeReservedInstancesListingsRequest& WithReservedInstancesListingId(ReservedInstancesListingIdT&& value) { SetReservedInstancesListingId(std::forward<ReservedInstancesListingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-listing-id</code> - The ID of the Reserved Instances
     * listing.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instance listing (<code>pending</code> | <code>active</code> |
     * <code>cancelled</code> | <code>closed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeReservedInstancesListingsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeReservedInstancesListingsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;

    Aws::String m_reservedInstancesListingId;
    bool m_reservedInstancesListingIdHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
