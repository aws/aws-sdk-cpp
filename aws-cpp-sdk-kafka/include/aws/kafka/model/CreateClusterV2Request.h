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
    AWS_KAFKA_API CreateClusterV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClusterV2"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline CreateClusterV2Request& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline CreateClusterV2Request& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline CreateClusterV2Request& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline CreateClusterV2Request& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline CreateClusterV2Request& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline CreateClusterV2Request& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline CreateClusterV2Request& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline CreateClusterV2Request& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline CreateClusterV2Request& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline CreateClusterV2Request& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline CreateClusterV2Request& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * 
            <p>A map of tags that you want the cluster to have.</p>
         
     */
    inline CreateClusterV2Request& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline const ProvisionedRequest& GetProvisioned() const{ return m_provisioned; }

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline void SetProvisioned(const ProvisionedRequest& value) { m_provisionedHasBeenSet = true; m_provisioned = value; }

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline void SetProvisioned(ProvisionedRequest&& value) { m_provisionedHasBeenSet = true; m_provisioned = std::move(value); }

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline CreateClusterV2Request& WithProvisioned(const ProvisionedRequest& value) { SetProvisioned(value); return *this;}

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline CreateClusterV2Request& WithProvisioned(ProvisionedRequest&& value) { SetProvisioned(std::move(value)); return *this;}


    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline const ServerlessRequest& GetServerless() const{ return m_serverless; }

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline bool ServerlessHasBeenSet() const { return m_serverlessHasBeenSet; }

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline void SetServerless(const ServerlessRequest& value) { m_serverlessHasBeenSet = true; m_serverless = value; }

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline void SetServerless(ServerlessRequest&& value) { m_serverlessHasBeenSet = true; m_serverless = std::move(value); }

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline CreateClusterV2Request& WithServerless(const ServerlessRequest& value) { SetServerless(value); return *this;}

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline CreateClusterV2Request& WithServerless(ServerlessRequest&& value) { SetServerless(std::move(value)); return *this;}

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
