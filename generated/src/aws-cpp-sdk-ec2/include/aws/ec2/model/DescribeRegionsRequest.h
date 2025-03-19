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
   */
  class DescribeRegionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeRegionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRegions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The names of the Regions. You can specify any Regions, whether they are
     * enabled and disabled for your account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionNames() const { return m_regionNames; }
    inline bool RegionNamesHasBeenSet() const { return m_regionNamesHasBeenSet; }
    template<typename RegionNamesT = Aws::Vector<Aws::String>>
    void SetRegionNames(RegionNamesT&& value) { m_regionNamesHasBeenSet = true; m_regionNames = std::forward<RegionNamesT>(value); }
    template<typename RegionNamesT = Aws::Vector<Aws::String>>
    DescribeRegionsRequest& WithRegionNames(RegionNamesT&& value) { SetRegionNames(std::forward<RegionNamesT>(value)); return *this;}
    template<typename RegionNamesT = Aws::String>
    DescribeRegionsRequest& AddRegionNames(RegionNamesT&& value) { m_regionNamesHasBeenSet = true; m_regionNames.emplace_back(std::forward<RegionNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to display all Regions, including Regions that are disabled
     * for your account.</p>
     */
    inline bool GetAllRegions() const { return m_allRegions; }
    inline bool AllRegionsHasBeenSet() const { return m_allRegionsHasBeenSet; }
    inline void SetAllRegions(bool value) { m_allRegionsHasBeenSet = true; m_allRegions = value; }
    inline DescribeRegionsRequest& WithAllRegions(bool value) { SetAllRegions(value); return *this;}
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
    inline DescribeRegionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>endpoint</code> - The endpoint of the
     * Region (for example, <code>ec2.us-east-1.amazonaws.com</code>).</p> </li> <li>
     * <p> <code>opt-in-status</code> - The opt-in status of the Region
     * (<code>opt-in-not-required</code> | <code>opted-in</code> |
     * <code>not-opted-in</code>).</p> </li> <li> <p> <code>region-name</code> - The
     * name of the Region (for example, <code>us-east-1</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeRegionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeRegionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_regionNames;
    bool m_regionNamesHasBeenSet = false;

    bool m_allRegions{false};
    bool m_allRegionsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
