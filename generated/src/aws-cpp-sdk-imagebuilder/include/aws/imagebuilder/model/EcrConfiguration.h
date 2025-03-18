/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Settings that Image Builder uses to configure the ECR repository and the
   * output container images that Amazon Inspector scans.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/EcrConfiguration">AWS
   * API Reference</a></p>
   */
  class EcrConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API EcrConfiguration() = default;
    AWS_IMAGEBUILDER_API EcrConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API EcrConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container repository that Amazon Inspector scans to identify
     * findings for your container images. The name includes the path for the
     * repository location. If you don’t provide this information, Image Builder
     * creates a repository in your account named
     * <code>image-builder-image-scanning-repository</code> for vulnerability scans of
     * your output container images.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    EcrConfiguration& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for Image Builder to apply to the output container image that Amazon
     * Inspector scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerTags() const { return m_containerTags; }
    inline bool ContainerTagsHasBeenSet() const { return m_containerTagsHasBeenSet; }
    template<typename ContainerTagsT = Aws::Vector<Aws::String>>
    void SetContainerTags(ContainerTagsT&& value) { m_containerTagsHasBeenSet = true; m_containerTags = std::forward<ContainerTagsT>(value); }
    template<typename ContainerTagsT = Aws::Vector<Aws::String>>
    EcrConfiguration& WithContainerTags(ContainerTagsT&& value) { SetContainerTags(std::forward<ContainerTagsT>(value)); return *this;}
    template<typename ContainerTagsT = Aws::String>
    EcrConfiguration& AddContainerTags(ContainerTagsT&& value) { m_containerTagsHasBeenSet = true; m_containerTags.emplace_back(std::forward<ContainerTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerTags;
    bool m_containerTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
