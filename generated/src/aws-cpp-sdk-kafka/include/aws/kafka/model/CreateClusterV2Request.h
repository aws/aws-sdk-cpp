/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kafka/model/ProvisionedRequest.h>
#include <aws/kafka/model/ServerlessRequest.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class CreateClusterV2Request : public KafkaRequest
  {
  public:
    AWS_KAFKA_API CreateClusterV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClusterV2"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateClusterV2Request& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateClusterV2Request& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateClusterV2Request& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline const ProvisionedRequest& GetProvisioned() const { return m_provisioned; }
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }
    template<typename ProvisionedT = ProvisionedRequest>
    void SetProvisioned(ProvisionedT&& value) { m_provisionedHasBeenSet = true; m_provisioned = std::forward<ProvisionedT>(value); }
    template<typename ProvisionedT = ProvisionedRequest>
    CreateClusterV2Request& WithProvisioned(ProvisionedT&& value) { SetProvisioned(std::forward<ProvisionedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline const ServerlessRequest& GetServerless() const { return m_serverless; }
    inline bool ServerlessHasBeenSet() const { return m_serverlessHasBeenSet; }
    template<typename ServerlessT = ServerlessRequest>
    void SetServerless(ServerlessT&& value) { m_serverlessHasBeenSet = true; m_serverless = std::forward<ServerlessT>(value); }
    template<typename ServerlessT = ServerlessRequest>
    CreateClusterV2Request& WithServerless(ServerlessT&& value) { SetServerless(std::forward<ServerlessT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ProvisionedRequest m_provisioned;
    bool m_provisionedHasBeenSet = false;

    ServerlessRequest m_serverless;
    bool m_serverlessHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
