/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/TargetContainerRepository.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Container distribution settings for encryption, licensing, and sharing in a
   * specific Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ContainerDistributionConfiguration">AWS
   * API Reference</a></p>
   */
  class ContainerDistributionConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API ContainerDistributionConfiguration();
    AWS_IMAGEBUILDER_API ContainerDistributionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ContainerDistributionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the container distribution configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the container distribution configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the container distribution configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the container distribution configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the container distribution configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerTags() const{ return m_containerTags; }

    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline bool ContainerTagsHasBeenSet() const { return m_containerTagsHasBeenSet; }

    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline void SetContainerTags(const Aws::Vector<Aws::String>& value) { m_containerTagsHasBeenSet = true; m_containerTags = value; }

    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline void SetContainerTags(Aws::Vector<Aws::String>&& value) { m_containerTagsHasBeenSet = true; m_containerTags = std::move(value); }

    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& WithContainerTags(const Aws::Vector<Aws::String>& value) { SetContainerTags(value); return *this;}

    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& WithContainerTags(Aws::Vector<Aws::String>&& value) { SetContainerTags(std::move(value)); return *this;}

    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& AddContainerTags(const Aws::String& value) { m_containerTagsHasBeenSet = true; m_containerTags.push_back(value); return *this; }

    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& AddContainerTags(Aws::String&& value) { m_containerTagsHasBeenSet = true; m_containerTags.push_back(std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& AddContainerTags(const char* value) { m_containerTagsHasBeenSet = true; m_containerTags.push_back(value); return *this; }


    /**
     * <p>The destination repository for the container distribution configuration.</p>
     */
    inline const TargetContainerRepository& GetTargetRepository() const{ return m_targetRepository; }

    /**
     * <p>The destination repository for the container distribution configuration.</p>
     */
    inline bool TargetRepositoryHasBeenSet() const { return m_targetRepositoryHasBeenSet; }

    /**
     * <p>The destination repository for the container distribution configuration.</p>
     */
    inline void SetTargetRepository(const TargetContainerRepository& value) { m_targetRepositoryHasBeenSet = true; m_targetRepository = value; }

    /**
     * <p>The destination repository for the container distribution configuration.</p>
     */
    inline void SetTargetRepository(TargetContainerRepository&& value) { m_targetRepositoryHasBeenSet = true; m_targetRepository = std::move(value); }

    /**
     * <p>The destination repository for the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& WithTargetRepository(const TargetContainerRepository& value) { SetTargetRepository(value); return *this;}

    /**
     * <p>The destination repository for the container distribution configuration.</p>
     */
    inline ContainerDistributionConfiguration& WithTargetRepository(TargetContainerRepository&& value) { SetTargetRepository(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerTags;
    bool m_containerTagsHasBeenSet = false;

    TargetContainerRepository m_targetRepository;
    bool m_targetRepositoryHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
