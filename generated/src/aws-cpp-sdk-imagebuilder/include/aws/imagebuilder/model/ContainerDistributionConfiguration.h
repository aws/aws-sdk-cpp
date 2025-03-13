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
    AWS_IMAGEBUILDER_API ContainerDistributionConfiguration() = default;
    AWS_IMAGEBUILDER_API ContainerDistributionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ContainerDistributionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the container distribution configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ContainerDistributionConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags that are attached to the container distribution configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerTags() const { return m_containerTags; }
    inline bool ContainerTagsHasBeenSet() const { return m_containerTagsHasBeenSet; }
    template<typename ContainerTagsT = Aws::Vector<Aws::String>>
    void SetContainerTags(ContainerTagsT&& value) { m_containerTagsHasBeenSet = true; m_containerTags = std::forward<ContainerTagsT>(value); }
    template<typename ContainerTagsT = Aws::Vector<Aws::String>>
    ContainerDistributionConfiguration& WithContainerTags(ContainerTagsT&& value) { SetContainerTags(std::forward<ContainerTagsT>(value)); return *this;}
    template<typename ContainerTagsT = Aws::String>
    ContainerDistributionConfiguration& AddContainerTags(ContainerTagsT&& value) { m_containerTagsHasBeenSet = true; m_containerTags.emplace_back(std::forward<ContainerTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination repository for the container distribution configuration.</p>
     */
    inline const TargetContainerRepository& GetTargetRepository() const { return m_targetRepository; }
    inline bool TargetRepositoryHasBeenSet() const { return m_targetRepositoryHasBeenSet; }
    template<typename TargetRepositoryT = TargetContainerRepository>
    void SetTargetRepository(TargetRepositoryT&& value) { m_targetRepositoryHasBeenSet = true; m_targetRepository = std::forward<TargetRepositoryT>(value); }
    template<typename TargetRepositoryT = TargetContainerRepository>
    ContainerDistributionConfiguration& WithTargetRepository(TargetRepositoryT&& value) { SetTargetRepository(std::forward<TargetRepositoryT>(value)); return *this;}
    ///@}
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
