/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ContainerSchedulingStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerOperatingSystem.h>
#include <aws/gamelift/model/ContainerDefinitionInput.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreateContainerGroupDefinitionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateContainerGroupDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainerGroupDefinition"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * must be unique in an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateContainerGroupDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateContainerGroupDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateContainerGroupDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method for deploying the container group across fleet instances. A
     * replica container group might have multiple copies on each fleet instance. A
     * daemon container group has one copy per fleet instance. Default value is
     * <code>REPLICA</code>.</p>
     */
    inline const ContainerSchedulingStrategy& GetSchedulingStrategy() const{ return m_schedulingStrategy; }
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }
    inline void SetSchedulingStrategy(const ContainerSchedulingStrategy& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = value; }
    inline void SetSchedulingStrategy(ContainerSchedulingStrategy&& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = std::move(value); }
    inline CreateContainerGroupDefinitionRequest& WithSchedulingStrategy(const ContainerSchedulingStrategy& value) { SetSchedulingStrategy(value); return *this;}
    inline CreateContainerGroupDefinitionRequest& WithSchedulingStrategy(ContainerSchedulingStrategy&& value) { SetSchedulingStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of memory (in MiB) to allocate to the container group. All
     * containers in the group share this memory. If you specify memory limits for
     * individual containers, set this parameter based on the following guidelines. The
     * value must be (1) greater than the sum of the soft memory limits for all
     * containers in the group, and (2) greater than any individual container's hard
     * memory limit.</p>
     */
    inline int GetTotalMemoryLimit() const{ return m_totalMemoryLimit; }
    inline bool TotalMemoryLimitHasBeenSet() const { return m_totalMemoryLimitHasBeenSet; }
    inline void SetTotalMemoryLimit(int value) { m_totalMemoryLimitHasBeenSet = true; m_totalMemoryLimit = value; }
    inline CreateContainerGroupDefinitionRequest& WithTotalMemoryLimit(int value) { SetTotalMemoryLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of CPU units to allocate to the container group. Set this
     * parameter to an integer value in CPU units (1 vCPU is equal to 1024 CPU units).
     * All containers in the group share this memory. If you specify CPU limits for
     * individual containers, set this parameter based on the following guidelines. The
     * value must be equal to or greater than the sum of the CPU limits for all
     * containers in the group.</p>
     */
    inline int GetTotalCpuLimit() const{ return m_totalCpuLimit; }
    inline bool TotalCpuLimitHasBeenSet() const { return m_totalCpuLimitHasBeenSet; }
    inline void SetTotalCpuLimit(int value) { m_totalCpuLimitHasBeenSet = true; m_totalCpuLimit = value; }
    inline CreateContainerGroupDefinitionRequest& WithTotalCpuLimit(int value) { SetTotalCpuLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Definitions for all containers in this group. Each container definition
     * identifies the container image and specifies configuration settings for the
     * container. See the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-design-fleet.html">
     * Container fleet design guide</a> for container guidelines.</p>
     */
    inline const Aws::Vector<ContainerDefinitionInput>& GetContainerDefinitions() const{ return m_containerDefinitions; }
    inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }
    inline void SetContainerDefinitions(const Aws::Vector<ContainerDefinitionInput>& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }
    inline void SetContainerDefinitions(Aws::Vector<ContainerDefinitionInput>&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::move(value); }
    inline CreateContainerGroupDefinitionRequest& WithContainerDefinitions(const Aws::Vector<ContainerDefinitionInput>& value) { SetContainerDefinitions(value); return *this;}
    inline CreateContainerGroupDefinitionRequest& WithContainerDefinitions(Aws::Vector<ContainerDefinitionInput>&& value) { SetContainerDefinitions(std::move(value)); return *this;}
    inline CreateContainerGroupDefinitionRequest& AddContainerDefinitions(const ContainerDefinitionInput& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }
    inline CreateContainerGroupDefinitionRequest& AddContainerDefinitions(ContainerDefinitionInput&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform that is used by containers in the container group definition.
     * All containers in a group must run on the same operating system.</p>
     */
    inline const ContainerOperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const ContainerOperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(ContainerOperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline CreateContainerGroupDefinitionRequest& WithOperatingSystem(const ContainerOperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline CreateContainerGroupDefinitionRequest& WithOperatingSystem(ContainerOperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of labels to assign to the container group definition resource. Tags
     * are developer-defined key-value pairs. Tagging Amazon Web Services resources are
     * useful for resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateContainerGroupDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateContainerGroupDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateContainerGroupDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateContainerGroupDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContainerSchedulingStrategy m_schedulingStrategy;
    bool m_schedulingStrategyHasBeenSet = false;

    int m_totalMemoryLimit;
    bool m_totalMemoryLimitHasBeenSet = false;

    int m_totalCpuLimit;
    bool m_totalCpuLimitHasBeenSet = false;

    Aws::Vector<ContainerDefinitionInput> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet = false;

    ContainerOperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
