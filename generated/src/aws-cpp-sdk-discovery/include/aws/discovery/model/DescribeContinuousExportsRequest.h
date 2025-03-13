/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class DescribeContinuousExportsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeContinuousExportsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeContinuousExports"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportIds() const { return m_exportIds; }
    inline bool ExportIdsHasBeenSet() const { return m_exportIdsHasBeenSet; }
    template<typename ExportIdsT = Aws::Vector<Aws::String>>
    void SetExportIds(ExportIdsT&& value) { m_exportIdsHasBeenSet = true; m_exportIds = std::forward<ExportIdsT>(value); }
    template<typename ExportIdsT = Aws::Vector<Aws::String>>
    DescribeContinuousExportsRequest& WithExportIds(ExportIdsT&& value) { SetExportIds(std::forward<ExportIdsT>(value)); return *this;}
    template<typename ExportIdsT = Aws::String>
    DescribeContinuousExportsRequest& AddExportIds(ExportIdsT&& value) { m_exportIdsHasBeenSet = true; m_exportIds.emplace_back(std::forward<ExportIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A number between 1 and 100 specifying the maximum number of continuous export
     * descriptions returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeContinuousExportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeContinuousExportsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_exportIds;
    bool m_exportIdsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
