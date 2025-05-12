/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains the parameters for
   * DescribeReservedInstancesModifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesModificationsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesModificationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeReservedInstancesModificationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedInstancesModifications"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>IDs for the submitted modification request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReservedInstancesModificationIds() const { return m_reservedInstancesModificationIds; }
    inline bool ReservedInstancesModificationIdsHasBeenSet() const { return m_reservedInstancesModificationIdsHasBeenSet; }
    template<typename ReservedInstancesModificationIdsT = Aws::Vector<Aws::String>>
    void SetReservedInstancesModificationIds(ReservedInstancesModificationIdsT&& value) { m_reservedInstancesModificationIdsHasBeenSet = true; m_reservedInstancesModificationIds = std::forward<ReservedInstancesModificationIdsT>(value); }
    template<typename ReservedInstancesModificationIdsT = Aws::Vector<Aws::String>>
    DescribeReservedInstancesModificationsRequest& WithReservedInstancesModificationIds(ReservedInstancesModificationIdsT&& value) { SetReservedInstancesModificationIds(std::forward<ReservedInstancesModificationIdsT>(value)); return *this;}
    template<typename ReservedInstancesModificationIdsT = Aws::String>
    DescribeReservedInstancesModificationsRequest& AddReservedInstancesModificationIds(ReservedInstancesModificationIdsT&& value) { m_reservedInstancesModificationIdsHasBeenSet = true; m_reservedInstancesModificationIds.emplace_back(std::forward<ReservedInstancesModificationIdsT>(value)); return *this; }
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
    DescribeReservedInstancesModificationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>client-token</code> - The
     * idempotency token for the modification request.</p> </li> <li> <p>
     * <code>create-date</code> - The time when the modification request was
     * created.</p> </li> <li> <p> <code>effective-date</code> - The time when the
     * modification becomes effective.</p> </li> <li> <p>
     * <code>modification-result.reserved-instances-id</code> - The ID for the Reserved
     * Instances created as part of the modification request. This ID is only available
     * when the status of the modification is <code>fulfilled</code>.</p> </li> <li>
     * <p> <code>modification-result.target-configuration.availability-zone</code> -
     * The Availability Zone for the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.availability-zone-id</code> - The
     * ID of the Availability Zone for the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-count </code> - The
     * number of new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-type</code> - The
     * instance type of the new Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-id</code> - The ID of the Reserved Instances
     * modified.</p> </li> <li> <p> <code>reserved-instances-modification-id</code> -
     * The ID of the modification request.</p> </li> <li> <p> <code>status</code> - The
     * status of the Reserved Instances modification request (<code>processing</code> |
     * <code>fulfilled</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> <li> <p>
     * <code>update-date</code> - The time when the modification request was last
     * updated.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeReservedInstancesModificationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeReservedInstancesModificationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_reservedInstancesModificationIds;
    bool m_reservedInstancesModificationIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
