/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQLRequest.h>
#include <aws/dsql/DSQL_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DSQL {
namespace Model {

/**
 */
class DeleteStreamRequest : public DSQLRequest {
 public:
  AWS_DSQL_API DeleteStreamRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteStream"; }

  AWS_DSQL_API Aws::String SerializePayload() const override;

  AWS_DSQL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the cluster containing the stream to delete.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  DeleteStreamRequest& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the stream to delete.</p>
   */
  inline const Aws::String& GetStreamIdentifier() const { return m_streamIdentifier; }
  inline bool StreamIdentifierHasBeenSet() const { return m_streamIdentifierHasBeenSet; }
  template <typename StreamIdentifierT = Aws::String>
  void SetStreamIdentifier(StreamIdentifierT&& value) {
    m_streamIdentifierHasBeenSet = true;
    m_streamIdentifier = std::forward<StreamIdentifierT>(value);
  }
  template <typename StreamIdentifierT = Aws::String>
  DeleteStreamRequest& WithStreamIdentifier(StreamIdentifierT&& value) {
    SetStreamIdentifier(std::forward<StreamIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Idempotency ensures that an API request completes
   * only once. With an idempotent request, if the original request completes
   * successfully, the subsequent retries with the same client token return the
   * result from the original successful request and they have no additional
   * effect.</p> <p>If you don't specify a client token, the Amazon Web Services SDK
   * automatically generates one.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DeleteStreamRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterIdentifier;

  Aws::String m_streamIdentifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_streamIdentifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
