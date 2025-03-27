/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ScanType.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListResourceScansRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListResourceScansRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceScans"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A string that identifies the next page of resource scan results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceScansRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the number of available results exceeds this maximum, the response
     * includes a <code>NextToken</code> value that you can use for the
     * <code>NextToken</code> parameter to get the next set of results. The default
     * value is 10. The maximum value is 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceScansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan type that you want to get summary information about. The default is
     * <code>FULL</code>.</p>
     */
    inline ScanType GetScanTypeFilter() const { return m_scanTypeFilter; }
    inline bool ScanTypeFilterHasBeenSet() const { return m_scanTypeFilterHasBeenSet; }
    inline void SetScanTypeFilter(ScanType value) { m_scanTypeFilterHasBeenSet = true; m_scanTypeFilter = value; }
    inline ListResourceScansRequest& WithScanTypeFilter(ScanType value) { SetScanTypeFilter(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ScanType m_scanTypeFilter{ScanType::NOT_SET};
    bool m_scanTypeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
