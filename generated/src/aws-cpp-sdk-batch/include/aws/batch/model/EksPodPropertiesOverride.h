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
    AWS_BATCH_API EksPodPropertiesOverride();
    AWS_BATCH_API EksPodPropertiesOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksPodPropertiesOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline const Aws::Vector<EksContainerOverride>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Vector<EksContainerOverride>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Vector<EksContainerOverride>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline EksPodPropertiesOverride& WithContainers(const Aws::Vector<EksContainerOverride>& value) { SetContainers(value); return *this;}
    inline EksPodPropertiesOverride& WithContainers(Aws::Vector<EksContainerOverride>&& value) { SetContainers(std::move(value)); return *this;}
    inline EksPodPropertiesOverride& AddContainers(const EksContainerOverride& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }
    inline EksPodPropertiesOverride& AddContainers(EksContainerOverride&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The overrides for the <code>initContainers</code> defined in the Amazon EKS
     * pod. These containers run before application containers, always runs to
     * completion, and must complete successfully before the next container starts.
     * These containers are registered with the Amazon EKS Connector agent and persists
     * the registration information in the Kubernetes backend data store. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/workloads/pods/init-containers/">Init
     * Containers</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::Vector<EksContainerOverride>& GetInitContainers() const{ return m_initContainers; }
    inline bool InitContainersHasBeenSet() const { return m_initContainersHasBeenSet; }
    inline void SetInitContainers(const Aws::Vector<EksContainerOverride>& value) { m_initContainersHasBeenSet = true; m_initContainers = value; }
    inline void SetInitContainers(Aws::Vector<EksContainerOverride>&& value) { m_initContainersHasBeenSet = true; m_initContainers = std::move(value); }
    inline EksPodPropertiesOverride& WithInitContainers(const Aws::Vector<EksContainerOverride>& value) { SetInitContainers(value); return *this;}
    inline EksPodPropertiesOverride& WithInitContainers(Aws::Vector<EksContainerOverride>&& value) { SetInitContainers(std::move(value)); return *this;}
    inline EksPodPropertiesOverride& AddInitContainers(const EksContainerOverride& value) { m_initContainersHasBeenSet = true; m_initContainers.push_back(value); return *this; }
    inline EksPodPropertiesOverride& AddInitContainers(EksContainerOverride&& value) { m_initContainersHasBeenSet = true; m_initContainers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata about the overrides for the container that's used on the Amazon EKS
     * pod.</p>
     */
    inline const EksMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const EksMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(EksMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline EksPodPropertiesOverride& WithMetadata(const EksMetadata& value) { SetMetadata(value); return *this;}
    inline EksPodPropertiesOverride& WithMetadata(EksMetadata&& value) { SetMetadata(std::move(value)); return *this;}
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
