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
    AWS_IMAGEBUILDER_API EcrConfiguration();
    AWS_IMAGEBUILDER_API EcrConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API EcrConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the container repository that Amazon Inspector scans to identify
     * findings for your container images. The name includes the path for the
     * repository location. If you don’t provide this information, Image Builder
     * creates a repository in your account named
     * <code>image-builder-image-scanning-repository</code> for vulnerability scans of
     * your output container images.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the container repository that Amazon Inspector scans to identify
     * findings for your container images. The name includes the path for the
     * repository location. If you don’t provide this information, Image Builder
     * creates a repository in your account named
     * <code>image-builder-image-scanning-repository</code> for vulnerability scans of
     * your output container images.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the container repository that Amazon Inspector scans to identify
     * findings for your container images. The name includes the path for the
     * repository location. If you don’t provide this information, Image Builder
     * creates a repository in your account named
     * <code>image-builder-image-scanning-repository</code> for vulnerability scans of
     * your output container images.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the container repository that Amazon Inspector scans to identify
     * findings for your container images. The name includes the path for the
     * repository location. If you don’t provide this information, Image Builder
     * creates a repository in your account named
     * <code>image-builder-image-scanning-repository</code> for vulnerability scans of
     * your output container images.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the container repository that Amazon Inspector scans to identify
     * findings for your container images. The name includes the path for the
     * repository location. If you don’t provide this information, Image Builder
     * creates a repository in your account named
     * <code>image-builder-image-scanning-repository</code> for vulnerability scans of
     * your output container images.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the container repository that Amazon Inspector scans to identify
     * findings for your container images. The name includes the path for the
     * repository location. If you don’t provide this information, Image Builder
     * creates a repository in your account named
     * <code>image-builder-image-scanning-repository</code> for vulnerability scans of
     * your output container images.</p>
     */
    inline EcrConfiguration& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the container repository that Amazon Inspector scans to identify
     * findings for your container images. The name includes the path for the
     * repository location. If you don’t provide this information, Image Builder
     * creates a repository in your account named
     * <code>image-builder-image-scanning-repository</code> for vulnerability scans of
     * your output container images.</p>
     */
    inline EcrConfiguration& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the container repository that Amazon Inspector scans to identify
     * findings for your container images. The name includes the path for the
     * repository location. If you don’t provide this information, Image Builder
     * creates a repository in your account named
     * <code>image-builder-image-scanning-repository</code> for vulnerability scans of
     * your output container images.</p>
     */
    inline EcrConfiguration& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>Tags for Image Builder to apply to the output container image that &amp;INS;
     * scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerTags() const{ return m_containerTags; }

    /**
     * <p>Tags for Image Builder to apply to the output container image that &amp;INS;
     * scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline bool ContainerTagsHasBeenSet() const { return m_containerTagsHasBeenSet; }

    /**
     * <p>Tags for Image Builder to apply to the output container image that &amp;INS;
     * scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline void SetContainerTags(const Aws::Vector<Aws::String>& value) { m_containerTagsHasBeenSet = true; m_containerTags = value; }

    /**
     * <p>Tags for Image Builder to apply to the output container image that &amp;INS;
     * scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline void SetContainerTags(Aws::Vector<Aws::String>&& value) { m_containerTagsHasBeenSet = true; m_containerTags = std::move(value); }

    /**
     * <p>Tags for Image Builder to apply to the output container image that &amp;INS;
     * scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline EcrConfiguration& WithContainerTags(const Aws::Vector<Aws::String>& value) { SetContainerTags(value); return *this;}

    /**
     * <p>Tags for Image Builder to apply to the output container image that &amp;INS;
     * scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline EcrConfiguration& WithContainerTags(Aws::Vector<Aws::String>&& value) { SetContainerTags(std::move(value)); return *this;}

    /**
     * <p>Tags for Image Builder to apply to the output container image that &amp;INS;
     * scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline EcrConfiguration& AddContainerTags(const Aws::String& value) { m_containerTagsHasBeenSet = true; m_containerTags.push_back(value); return *this; }

    /**
     * <p>Tags for Image Builder to apply to the output container image that &amp;INS;
     * scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline EcrConfiguration& AddContainerTags(Aws::String&& value) { m_containerTagsHasBeenSet = true; m_containerTags.push_back(std::move(value)); return *this; }

    /**
     * <p>Tags for Image Builder to apply to the output container image that &amp;INS;
     * scans. Tags can help you identify and manage your scanned images.</p>
     */
    inline EcrConfiguration& AddContainerTags(const char* value) { m_containerTagsHasBeenSet = true; m_containerTags.push_back(value); return *this; }

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerTags;
    bool m_containerTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
