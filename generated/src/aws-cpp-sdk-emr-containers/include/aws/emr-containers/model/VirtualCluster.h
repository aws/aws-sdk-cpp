/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/VirtualClusterState.h>
#include <aws/emr-containers/model/ContainerProvider.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>This entity describes a virtual cluster. A virtual cluster is a Kubernetes
   * namespace that Amazon EMR is registered with. Amazon EMR uses virtual clusters
   * to run jobs and host endpoints. Multiple virtual clusters can be backed by the
   * same physical cluster. However, each virtual cluster maps to one namespace on an
   * EKS cluster. Virtual clusters do not create any active resources that contribute
   * to your bill or that require lifecycle management outside the
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/VirtualCluster">AWS
   * API Reference</a></p>
   */
  class VirtualCluster
  {
  public:
    AWS_EMRCONTAINERS_API VirtualCluster();
    AWS_EMRCONTAINERS_API VirtualCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API VirtualCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline VirtualCluster& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline VirtualCluster& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline VirtualCluster& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the virtual cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the virtual cluster.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the virtual cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the virtual cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the virtual cluster.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the virtual cluster.</p>
     */
    inline VirtualCluster& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the virtual cluster.</p>
     */
    inline VirtualCluster& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual cluster.</p>
     */
    inline VirtualCluster& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the virtual cluster.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the virtual cluster.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the virtual cluster.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the virtual cluster.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the virtual cluster.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the virtual cluster.</p>
     */
    inline VirtualCluster& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the virtual cluster.</p>
     */
    inline VirtualCluster& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the virtual cluster.</p>
     */
    inline VirtualCluster& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The state of the virtual cluster.</p>
     */
    inline const VirtualClusterState& GetState() const{ return m_state; }

    /**
     * <p>The state of the virtual cluster.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the virtual cluster.</p>
     */
    inline void SetState(const VirtualClusterState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the virtual cluster.</p>
     */
    inline void SetState(VirtualClusterState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the virtual cluster.</p>
     */
    inline VirtualCluster& WithState(const VirtualClusterState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the virtual cluster.</p>
     */
    inline VirtualCluster& WithState(VirtualClusterState&& value) { SetState(std::move(value)); return *this;}


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
    inline VirtualCluster& WithContainerProvider(const ContainerProvider& value) { SetContainerProvider(value); return *this;}

    /**
     * <p>The container provider of the virtual cluster.</p>
     */
    inline VirtualCluster& WithContainerProvider(ContainerProvider&& value) { SetContainerProvider(std::move(value)); return *this;}


    /**
     * <p>The date and time when the virtual cluster is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the virtual cluster is created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when the virtual cluster is created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when the virtual cluster is created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the virtual cluster is created.</p>
     */
    inline VirtualCluster& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the virtual cluster is created.</p>
     */
    inline VirtualCluster& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline VirtualCluster& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline VirtualCluster& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline VirtualCluster& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline VirtualCluster& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline VirtualCluster& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline VirtualCluster& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline VirtualCluster& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline VirtualCluster& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline VirtualCluster& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    VirtualClusterState m_state;
    bool m_stateHasBeenSet = false;

    ContainerProvider m_containerProvider;
    bool m_containerProviderHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
