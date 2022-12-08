/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline const Aws::Vector<EksContainerOverride>& GetContainers() const{ return m_containers; }

    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline void SetContainers(const Aws::Vector<EksContainerOverride>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline void SetContainers(Aws::Vector<EksContainerOverride>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodPropertiesOverride& WithContainers(const Aws::Vector<EksContainerOverride>& value) { SetContainers(value); return *this;}

    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodPropertiesOverride& WithContainers(Aws::Vector<EksContainerOverride>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodPropertiesOverride& AddContainers(const EksContainerOverride& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The overrides for the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodPropertiesOverride& AddContainers(EksContainerOverride&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EksContainerOverride> m_containers;
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
