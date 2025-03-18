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
  class DescribeLaunchTemplatesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeLaunchTemplatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLaunchTemplates"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeLaunchTemplatesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more launch template IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchTemplateIds() const { return m_launchTemplateIds; }
    inline bool LaunchTemplateIdsHasBeenSet() const { return m_launchTemplateIdsHasBeenSet; }
    template<typename LaunchTemplateIdsT = Aws::Vector<Aws::String>>
    void SetLaunchTemplateIds(LaunchTemplateIdsT&& value) { m_launchTemplateIdsHasBeenSet = true; m_launchTemplateIds = std::forward<LaunchTemplateIdsT>(value); }
    template<typename LaunchTemplateIdsT = Aws::Vector<Aws::String>>
    DescribeLaunchTemplatesRequest& WithLaunchTemplateIds(LaunchTemplateIdsT&& value) { SetLaunchTemplateIds(std::forward<LaunchTemplateIdsT>(value)); return *this;}
    template<typename LaunchTemplateIdsT = Aws::String>
    DescribeLaunchTemplatesRequest& AddLaunchTemplateIds(LaunchTemplateIdsT&& value) { m_launchTemplateIdsHasBeenSet = true; m_launchTemplateIds.emplace_back(std::forward<LaunchTemplateIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more launch template names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchTemplateNames() const { return m_launchTemplateNames; }
    inline bool LaunchTemplateNamesHasBeenSet() const { return m_launchTemplateNamesHasBeenSet; }
    template<typename LaunchTemplateNamesT = Aws::Vector<Aws::String>>
    void SetLaunchTemplateNames(LaunchTemplateNamesT&& value) { m_launchTemplateNamesHasBeenSet = true; m_launchTemplateNames = std::forward<LaunchTemplateNamesT>(value); }
    template<typename LaunchTemplateNamesT = Aws::Vector<Aws::String>>
    DescribeLaunchTemplatesRequest& WithLaunchTemplateNames(LaunchTemplateNamesT&& value) { SetLaunchTemplateNames(std::forward<LaunchTemplateNamesT>(value)); return *this;}
    template<typename LaunchTemplateNamesT = Aws::String>
    DescribeLaunchTemplatesRequest& AddLaunchTemplateNames(LaunchTemplateNamesT&& value) { m_launchTemplateNamesHasBeenSet = true; m_launchTemplateNames.emplace_back(std::forward<LaunchTemplateNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template was created.</p> </li> <li> <p>
     * <code>launch-template-name</code> - The name of the launch template.</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeLaunchTemplatesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeLaunchTemplatesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLaunchTemplatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeLaunchTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_launchTemplateIds;
    bool m_launchTemplateIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_launchTemplateNames;
    bool m_launchTemplateNamesHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
