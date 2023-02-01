/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input determines which cluster to describe.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeClusterInput">AWS
   * API Reference</a></p>
   */
  class DescribeClusterRequest : public EMRRequest
  {
  public:
    AWS_EMR_API DescribeClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCluster"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the cluster to describe.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier of the cluster to describe.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier of the cluster to describe.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier of the cluster to describe.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier of the cluster to describe.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier of the cluster to describe.</p>
     */
    inline DescribeClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier of the cluster to describe.</p>
     */
    inline DescribeClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster to describe.</p>
     */
    inline DescribeClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
