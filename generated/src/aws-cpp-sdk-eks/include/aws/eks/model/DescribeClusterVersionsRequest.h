/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/VersionStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EKS
{
namespace Model
{

  /**
   */
  class DescribeClusterVersionsRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DescribeClusterVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterVersions"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The type of cluster to filter versions by.</p>
     */
    inline const Aws::String& GetClusterType() const { return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    template<typename ClusterTypeT = Aws::String>
    void SetClusterType(ClusterTypeT&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::forward<ClusterTypeT>(value); }
    template<typename ClusterTypeT = Aws::String>
    DescribeClusterVersionsRequest& WithClusterType(ClusterTypeT&& value) { SetClusterType(std::forward<ClusterTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeClusterVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeClusterVersionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to show only default versions.</p>
     */
    inline bool GetDefaultOnly() const { return m_defaultOnly; }
    inline bool DefaultOnlyHasBeenSet() const { return m_defaultOnlyHasBeenSet; }
    inline void SetDefaultOnly(bool value) { m_defaultOnlyHasBeenSet = true; m_defaultOnly = value; }
    inline DescribeClusterVersionsRequest& WithDefaultOnly(bool value) { SetDefaultOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include all available versions in the response.</p>
     */
    inline bool GetIncludeAll() const { return m_includeAll; }
    inline bool IncludeAllHasBeenSet() const { return m_includeAllHasBeenSet; }
    inline void SetIncludeAll(bool value) { m_includeAllHasBeenSet = true; m_includeAll = value; }
    inline DescribeClusterVersionsRequest& WithIncludeAll(bool value) { SetIncludeAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of specific cluster versions to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterVersions() const { return m_clusterVersions; }
    inline bool ClusterVersionsHasBeenSet() const { return m_clusterVersionsHasBeenSet; }
    template<typename ClusterVersionsT = Aws::Vector<Aws::String>>
    void SetClusterVersions(ClusterVersionsT&& value) { m_clusterVersionsHasBeenSet = true; m_clusterVersions = std::forward<ClusterVersionsT>(value); }
    template<typename ClusterVersionsT = Aws::Vector<Aws::String>>
    DescribeClusterVersionsRequest& WithClusterVersions(ClusterVersionsT&& value) { SetClusterVersions(std::forward<ClusterVersionsT>(value)); return *this;}
    template<typename ClusterVersionsT = Aws::String>
    DescribeClusterVersionsRequest& AddClusterVersions(ClusterVersionsT&& value) { m_clusterVersionsHasBeenSet = true; m_clusterVersions.emplace_back(std::forward<ClusterVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter versions by their current status.</p>
     */
    inline VersionStatus GetVersionStatus() const { return m_versionStatus; }
    inline bool VersionStatusHasBeenSet() const { return m_versionStatusHasBeenSet; }
    inline void SetVersionStatus(VersionStatus value) { m_versionStatusHasBeenSet = true; m_versionStatus = value; }
    inline DescribeClusterVersionsRequest& WithVersionStatus(VersionStatus value) { SetVersionStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_defaultOnly{false};
    bool m_defaultOnlyHasBeenSet = false;

    bool m_includeAll{false};
    bool m_includeAllHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusterVersions;
    bool m_clusterVersionsHasBeenSet = false;

    VersionStatus m_versionStatus{VersionStatus::NOT_SET};
    bool m_versionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
