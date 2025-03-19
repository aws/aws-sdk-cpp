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
    AWS_DSQL_API DeleteMultiRegionClustersRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetLinkedClusterArns() const { return m_linkedClusterArns; }
    inline bool LinkedClusterArnsHasBeenSet() const { return m_linkedClusterArnsHasBeenSet; }
    template<typename LinkedClusterArnsT = Aws::Vector<Aws::String>>
    void SetLinkedClusterArns(LinkedClusterArnsT&& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns = std::forward<LinkedClusterArnsT>(value); }
    template<typename LinkedClusterArnsT = Aws::Vector<Aws::String>>
    DeleteMultiRegionClustersRequest& WithLinkedClusterArns(LinkedClusterArnsT&& value) { SetLinkedClusterArns(std::forward<LinkedClusterArnsT>(value)); return *this;}
    template<typename LinkedClusterArnsT = Aws::String>
    DeleteMultiRegionClustersRequest& AddLinkedClusterArns(LinkedClusterArnsT&& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns.emplace_back(std::forward<LinkedClusterArnsT>(value)); return *this; }
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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    DeleteMultiRegionClustersRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
