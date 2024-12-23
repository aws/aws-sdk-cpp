/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/ClusterVersionStatus.h>
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
    AWS_EKS_API DescribeClusterVersionsRequest();

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
    inline const Aws::String& GetClusterType() const{ return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(const Aws::String& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline void SetClusterType(Aws::String&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }
    inline void SetClusterType(const char* value) { m_clusterTypeHasBeenSet = true; m_clusterType.assign(value); }
    inline DescribeClusterVersionsRequest& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}
    inline DescribeClusterVersionsRequest& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}
    inline DescribeClusterVersionsRequest& WithClusterType(const char* value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeClusterVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeClusterVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeClusterVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeClusterVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to show only default versions.</p>
     */
    inline bool GetDefaultOnly() const{ return m_defaultOnly; }
    inline bool DefaultOnlyHasBeenSet() const { return m_defaultOnlyHasBeenSet; }
    inline void SetDefaultOnly(bool value) { m_defaultOnlyHasBeenSet = true; m_defaultOnly = value; }
    inline DescribeClusterVersionsRequest& WithDefaultOnly(bool value) { SetDefaultOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include all available versions in the response.</p>
     */
    inline bool GetIncludeAll() const{ return m_includeAll; }
    inline bool IncludeAllHasBeenSet() const { return m_includeAllHasBeenSet; }
    inline void SetIncludeAll(bool value) { m_includeAllHasBeenSet = true; m_includeAll = value; }
    inline DescribeClusterVersionsRequest& WithIncludeAll(bool value) { SetIncludeAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of specific cluster versions to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterVersions() const{ return m_clusterVersions; }
    inline bool ClusterVersionsHasBeenSet() const { return m_clusterVersionsHasBeenSet; }
    inline void SetClusterVersions(const Aws::Vector<Aws::String>& value) { m_clusterVersionsHasBeenSet = true; m_clusterVersions = value; }
    inline void SetClusterVersions(Aws::Vector<Aws::String>&& value) { m_clusterVersionsHasBeenSet = true; m_clusterVersions = std::move(value); }
    inline DescribeClusterVersionsRequest& WithClusterVersions(const Aws::Vector<Aws::String>& value) { SetClusterVersions(value); return *this;}
    inline DescribeClusterVersionsRequest& WithClusterVersions(Aws::Vector<Aws::String>&& value) { SetClusterVersions(std::move(value)); return *this;}
    inline DescribeClusterVersionsRequest& AddClusterVersions(const Aws::String& value) { m_clusterVersionsHasBeenSet = true; m_clusterVersions.push_back(value); return *this; }
    inline DescribeClusterVersionsRequest& AddClusterVersions(Aws::String&& value) { m_clusterVersionsHasBeenSet = true; m_clusterVersions.push_back(std::move(value)); return *this; }
    inline DescribeClusterVersionsRequest& AddClusterVersions(const char* value) { m_clusterVersionsHasBeenSet = true; m_clusterVersions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter versions by their current status.</p>
     */
    inline const ClusterVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClusterVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClusterVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DescribeClusterVersionsRequest& WithStatus(const ClusterVersionStatus& value) { SetStatus(value); return *this;}
    inline DescribeClusterVersionsRequest& WithStatus(ClusterVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_defaultOnly;
    bool m_defaultOnlyHasBeenSet = false;

    bool m_includeAll;
    bool m_includeAllHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusterVersions;
    bool m_clusterVersionsHasBeenSet = false;

    ClusterVersionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
