/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/ContainerProvider.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class CreateVirtualClusterRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API CreateVirtualClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVirtualCluster"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;


    /**
     * <p>The specified name of the virtual cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The specified name of the virtual cluster.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The specified name of the virtual cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The specified name of the virtual cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The specified name of the virtual cluster.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The specified name of the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The specified name of the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The specified name of the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The container provider of the virtual cluster.</p>
     */
    inline const ContainerProvider& GetContainerProvider() const{ return m_containerProvider; }

    /**
     * <p>The container provider of the virtual cluster.</p>
     */
    inline bool ContainerProviderHasBeenSet() const { return m_containerProviderHasBeenSet; }

    /**
     * <p>The container provider of the virtual cluster.</p>
     */
    inline void SetContainerProvider(const ContainerProvider& value) { m_containerProviderHasBeenSet = true; m_containerProvider = value; }

    /**
     * <p>The container provider of the virtual cluster.</p>
     */
    inline void SetContainerProvider(ContainerProvider&& value) { m_containerProviderHasBeenSet = true; m_containerProvider = std::move(value); }

    /**
     * <p>The container provider of the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithContainerProvider(const ContainerProvider& value) { SetContainerProvider(value); return *this;}

    /**
     * <p>The container provider of the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithContainerProvider(ContainerProvider&& value) { SetContainerProvider(std::move(value)); return *this;}


    /**
     * <p>The client token of the virtual cluster.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token of the virtual cluster.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token of the virtual cluster.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token of the virtual cluster.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token of the virtual cluster.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token of the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token of the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token of the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline CreateVirtualClusterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContainerProvider m_containerProvider;
    bool m_containerProviderHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
