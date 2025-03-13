/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Greengrass
{
namespace Model
{

  /**
   */
  class ListBulkDeploymentDetailedReportsRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API ListBulkDeploymentDetailedReportsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBulkDeploymentDetailedReports"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * The ID of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentId() const { return m_bulkDeploymentId; }
    inline bool BulkDeploymentIdHasBeenSet() const { return m_bulkDeploymentIdHasBeenSet; }
    template<typename BulkDeploymentIdT = Aws::String>
    void SetBulkDeploymentId(BulkDeploymentIdT&& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = std::forward<BulkDeploymentIdT>(value); }
    template<typename BulkDeploymentIdT = Aws::String>
    ListBulkDeploymentDetailedReportsRequest& WithBulkDeploymentId(BulkDeploymentIdT&& value) { SetBulkDeploymentId(std::forward<BulkDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The maximum number of results to be returned per request.
     */
    inline const Aws::String& GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    template<typename MaxResultsT = Aws::String>
    void SetMaxResults(MaxResultsT&& value) { m_maxResultsHasBeenSet = true; m_maxResults = std::forward<MaxResultsT>(value); }
    template<typename MaxResultsT = Aws::String>
    ListBulkDeploymentDetailedReportsRequest& WithMaxResults(MaxResultsT&& value) { SetMaxResults(std::forward<MaxResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBulkDeploymentDetailedReportsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bulkDeploymentId;
    bool m_bulkDeploymentIdHasBeenSet = false;

    Aws::String m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
