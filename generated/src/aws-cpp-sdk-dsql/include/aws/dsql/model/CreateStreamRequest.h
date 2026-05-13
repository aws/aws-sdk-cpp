/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQLRequest.h>
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/StreamFormat.h>
#include <aws/dsql/model/StreamOrdering.h>
#include <aws/dsql/model/TargetDefinition.h>

#include <utility>

namespace Aws {
namespace DSQL {
namespace Model {

/**
 */
class CreateStreamRequest : public DSQLRequest {
 public:
  AWS_DSQL_API CreateStreamRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateStream"; }

  AWS_DSQL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the cluster for which to create the stream.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  CreateStreamRequest& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target destination configuration for the stream. Contains Kinesis stream
   * configuration including stream ARN and IAM role ARN.</p>
   */
  inline const TargetDefinition& GetTargetDefinition() const { return m_targetDefinition; }
  inline bool TargetDefinitionHasBeenSet() const { return m_targetDefinitionHasBeenSet; }
  template <typename TargetDefinitionT = TargetDefinition>
  void SetTargetDefinition(TargetDefinitionT&& value) {
    m_targetDefinitionHasBeenSet = true;
    m_targetDefinition = std::forward<TargetDefinitionT>(value);
  }
  template <typename TargetDefinitionT = TargetDefinition>
  CreateStreamRequest& WithTargetDefinition(TargetDefinitionT&& value) {
    SetTargetDefinition(std::forward<TargetDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordering mode for the stream. Determines how change events are ordered
   * when delivered to the target.</p>
   */
  inline StreamOrdering GetOrdering() const { return m_ordering; }
  inline bool OrderingHasBeenSet() const { return m_orderingHasBeenSet; }
  inline void SetOrdering(StreamOrdering value) {
    m_orderingHasBeenSet = true;
    m_ordering = value;
  }
  inline CreateStreamRequest& WithOrdering(StreamOrdering value) {
    SetOrdering(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the stream records.</p>
   */
  inline StreamFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(StreamFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline CreateStreamRequest& WithFormat(StreamFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of key and value pairs to use to tag your stream.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateStreamRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateStreamRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  CreateStreamRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterIdentifier;

  TargetDefinition m_targetDefinition;

  StreamOrdering m_ordering{StreamOrdering::NOT_SET};

  StreamFormat m_format{StreamFormat::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_targetDefinitionHasBeenSet = false;
  bool m_orderingHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
