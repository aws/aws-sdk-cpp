/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EksMetadata.h>
#include <aws/batch/model/EksContainerOverride.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that contains overrides for the Kubernetes pod properties of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksPodPropertiesOverride">AWS
   * API Reference</a></p>
   */
  class EksPodPropertiesOverride
  {
  public:
    AWS_BATCH_API EksPodPropertiesOverride() = default;
    AWS_BATCH_API EksPodPropertiesOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksPodPropertiesOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline const Aws::Vector<EksContainerOverride>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<EksContainerOverride>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<EksContainerOverride>>
    EksPodPropertiesOverride& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = EksContainerOverride>
    EksPodPropertiesOverride& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The overrides for the <code>initContainers</code> defined in the Amazon EKS
     * pod. These containers run before application containers, always run to
     * completion, and must complete successfully before the next container starts.
     * These containers are registered with the Amazon EKS Connector agent and persists
     * the registration information in the Kubernetes backend data store. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/workloads/pods/init-containers/">Init
     * Containers</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::Vector<EksContainerOverride>& GetInitContainers() const { return m_initContainers; }
    inline bool InitContainersHasBeenSet() const { return m_initContainersHasBeenSet; }
    template<typename InitContainersT = Aws::Vector<EksContainerOverride>>
    void SetInitContainers(InitContainersT&& value) { m_initContainersHasBeenSet = true; m_initContainers = std::forward<InitContainersT>(value); }
    template<typename InitContainersT = Aws::Vector<EksContainerOverride>>
    EksPodPropertiesOverride& WithInitContainers(InitContainersT&& value) { SetInitContainers(std::forward<InitContainersT>(value)); return *this;}
    template<typename InitContainersT = EksContainerOverride>
    EksPodPropertiesOverride& AddInitContainers(InitContainersT&& value) { m_initContainersHasBeenSet = true; m_initContainers.emplace_back(std::forward<InitContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata about the overrides for the container that's used on the Amazon EKS
     * pod.</p>
     */
    inline const EksMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = EksMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = EksMetadata>
    EksPodPropertiesOverride& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EksContainerOverride> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<EksContainerOverride> m_initContainers;
    bool m_initContainersHasBeenSet = false;

    EksMetadata m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
