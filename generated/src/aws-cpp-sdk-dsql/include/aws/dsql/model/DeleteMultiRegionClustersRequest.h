/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/DSQLRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DSQL
{
namespace Model
{

  /**
   */
  class DeleteMultiRegionClustersRequest : public DSQLRequest
  {
  public:
    AWS_DSQL_API DeleteMultiRegionClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMultiRegionClusters"; }

    AWS_DSQL_API Aws::String SerializePayload() const override;

    AWS_DSQL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ARNs of the clusters linked to the cluster you want to delete. also
     * deletes these clusters as part of the operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedClusterArns() const{ return m_linkedClusterArns; }
    inline bool LinkedClusterArnsHasBeenSet() const { return m_linkedClusterArnsHasBeenSet; }
    inline void SetLinkedClusterArns(const Aws::Vector<Aws::String>& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns = value; }
    inline void SetLinkedClusterArns(Aws::Vector<Aws::String>&& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns = std::move(value); }
    inline DeleteMultiRegionClustersRequest& WithLinkedClusterArns(const Aws::Vector<Aws::String>& value) { SetLinkedClusterArns(value); return *this;}
    inline DeleteMultiRegionClustersRequest& WithLinkedClusterArns(Aws::Vector<Aws::String>&& value) { SetLinkedClusterArns(std::move(value)); return *this;}
    inline DeleteMultiRegionClustersRequest& AddLinkedClusterArns(const Aws::String& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns.push_back(value); return *this; }
    inline DeleteMultiRegionClustersRequest& AddLinkedClusterArns(Aws::String&& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns.push_back(std::move(value)); return *this; }
    inline DeleteMultiRegionClustersRequest& AddLinkedClusterArns(const char* value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you don't specify a client token, the Amazon Web Services SDK
     * automatically generates one.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline DeleteMultiRegionClustersRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DeleteMultiRegionClustersRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DeleteMultiRegionClustersRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_linkedClusterArns;
    bool m_linkedClusterArnsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
