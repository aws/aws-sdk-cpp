/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageType.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/imagebuilder/model/ImageState.h>
#include <aws/imagebuilder/model/ImageRecipe.h>
#include <aws/imagebuilder/model/ContainerRecipe.h>
#include <aws/imagebuilder/model/InfrastructureConfiguration.h>
#include <aws/imagebuilder/model/DistributionConfiguration.h>
#include <aws/imagebuilder/model/ImageTestsConfiguration.h>
#include <aws/imagebuilder/model/OutputResources.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/BuildType.h>
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
   * <p>An Image Builder image. You must specify exactly one recipe for the image –
   * either a container recipe (<code>containerRecipe</code>), which creates a
   * container image, or an image recipe (<code>imageRecipe</code>), which creates an
   * AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Image">AWS
   * API Reference</a></p>
   */
  class Image
  {
  public:
    AWS_IMAGEBUILDER_API Image();
    AWS_IMAGEBUILDER_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline Image& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline Image& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline Image& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline const ImageType& GetType() const{ return m_type; }

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline void SetType(const ImageType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline void SetType(ImageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline Image& WithType(const ImageType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline Image& WithType(ImageType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline Image& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline Image& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline Image& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The semantic version of the image.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The semantic version of the image.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The semantic version of the image.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The semantic version of the image.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The semantic version of the image.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The semantic version of the image.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline Image& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The semantic version of the image.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline Image& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the image.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline Image& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The platform of the image.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the image.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the image.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the image.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the image.</p>
     */
    inline Image& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the image.</p>
     */
    inline Image& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p> Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline bool GetEnhancedImageMetadataEnabled() const{ return m_enhancedImageMetadataEnabled; }

    /**
     * <p> Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline bool EnhancedImageMetadataEnabledHasBeenSet() const { return m_enhancedImageMetadataEnabledHasBeenSet; }

    /**
     * <p> Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline void SetEnhancedImageMetadataEnabled(bool value) { m_enhancedImageMetadataEnabledHasBeenSet = true; m_enhancedImageMetadataEnabled = value; }

    /**
     * <p> Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline Image& WithEnhancedImageMetadataEnabled(bool value) { SetEnhancedImageMetadataEnabled(value); return *this;}


    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline const Aws::String& GetOsVersion() const{ return m_osVersion; }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline void SetOsVersion(const Aws::String& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline void SetOsVersion(Aws::String&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline void SetOsVersion(const char* value) { m_osVersionHasBeenSet = true; m_osVersion.assign(value); }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline Image& WithOsVersion(const Aws::String& value) { SetOsVersion(value); return *this;}

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline Image& WithOsVersion(Aws::String&& value) { SetOsVersion(std::move(value)); return *this;}

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline Image& WithOsVersion(const char* value) { SetOsVersion(value); return *this;}


    /**
     * <p>The state of the image.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }

    /**
     * <p>The state of the image.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the image.</p>
     */
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the image.</p>
     */
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the image.</p>
     */
    inline Image& WithState(const ImageState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the image.</p>
     */
    inline Image& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline const ImageRecipe& GetImageRecipe() const{ return m_imageRecipe; }

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline bool ImageRecipeHasBeenSet() const { return m_imageRecipeHasBeenSet; }

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline void SetImageRecipe(const ImageRecipe& value) { m_imageRecipeHasBeenSet = true; m_imageRecipe = value; }

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline void SetImageRecipe(ImageRecipe&& value) { m_imageRecipeHasBeenSet = true; m_imageRecipe = std::move(value); }

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline Image& WithImageRecipe(const ImageRecipe& value) { SetImageRecipe(value); return *this;}

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline Image& WithImageRecipe(ImageRecipe&& value) { SetImageRecipe(std::move(value)); return *this;}


    /**
     * <p>The recipe that is used to create an Image Builder container image.</p>
     */
    inline const ContainerRecipe& GetContainerRecipe() const{ return m_containerRecipe; }

    /**
     * <p>The recipe that is used to create an Image Builder container image.</p>
     */
    inline bool ContainerRecipeHasBeenSet() const { return m_containerRecipeHasBeenSet; }

    /**
     * <p>The recipe that is used to create an Image Builder container image.</p>
     */
    inline void SetContainerRecipe(const ContainerRecipe& value) { m_containerRecipeHasBeenSet = true; m_containerRecipe = value; }

    /**
     * <p>The recipe that is used to create an Image Builder container image.</p>
     */
    inline void SetContainerRecipe(ContainerRecipe&& value) { m_containerRecipeHasBeenSet = true; m_containerRecipe = std::move(value); }

    /**
     * <p>The recipe that is used to create an Image Builder container image.</p>
     */
    inline Image& WithContainerRecipe(const ContainerRecipe& value) { SetContainerRecipe(value); return *this;}

    /**
     * <p>The recipe that is used to create an Image Builder container image.</p>
     */
    inline Image& WithContainerRecipe(ContainerRecipe&& value) { SetContainerRecipe(std::move(value)); return *this;}


    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline const Aws::String& GetSourcePipelineName() const{ return m_sourcePipelineName; }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline bool SourcePipelineNameHasBeenSet() const { return m_sourcePipelineNameHasBeenSet; }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline void SetSourcePipelineName(const Aws::String& value) { m_sourcePipelineNameHasBeenSet = true; m_sourcePipelineName = value; }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline void SetSourcePipelineName(Aws::String&& value) { m_sourcePipelineNameHasBeenSet = true; m_sourcePipelineName = std::move(value); }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline void SetSourcePipelineName(const char* value) { m_sourcePipelineNameHasBeenSet = true; m_sourcePipelineName.assign(value); }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline Image& WithSourcePipelineName(const Aws::String& value) { SetSourcePipelineName(value); return *this;}

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline Image& WithSourcePipelineName(Aws::String&& value) { SetSourcePipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline Image& WithSourcePipelineName(const char* value) { SetSourcePipelineName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline const Aws::String& GetSourcePipelineArn() const{ return m_sourcePipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline bool SourcePipelineArnHasBeenSet() const { return m_sourcePipelineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline void SetSourcePipelineArn(const Aws::String& value) { m_sourcePipelineArnHasBeenSet = true; m_sourcePipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline void SetSourcePipelineArn(Aws::String&& value) { m_sourcePipelineArnHasBeenSet = true; m_sourcePipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline void SetSourcePipelineArn(const char* value) { m_sourcePipelineArnHasBeenSet = true; m_sourcePipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline Image& WithSourcePipelineArn(const Aws::String& value) { SetSourcePipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline Image& WithSourcePipelineArn(Aws::String&& value) { SetSourcePipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline Image& WithSourcePipelineArn(const char* value) { SetSourcePipelineArn(value); return *this;}


    /**
     * <p>The infrastructure used when creating this image.</p>
     */
    inline const InfrastructureConfiguration& GetInfrastructureConfiguration() const{ return m_infrastructureConfiguration; }

    /**
     * <p>The infrastructure used when creating this image.</p>
     */
    inline bool InfrastructureConfigurationHasBeenSet() const { return m_infrastructureConfigurationHasBeenSet; }

    /**
     * <p>The infrastructure used when creating this image.</p>
     */
    inline void SetInfrastructureConfiguration(const InfrastructureConfiguration& value) { m_infrastructureConfigurationHasBeenSet = true; m_infrastructureConfiguration = value; }

    /**
     * <p>The infrastructure used when creating this image.</p>
     */
    inline void SetInfrastructureConfiguration(InfrastructureConfiguration&& value) { m_infrastructureConfigurationHasBeenSet = true; m_infrastructureConfiguration = std::move(value); }

    /**
     * <p>The infrastructure used when creating this image.</p>
     */
    inline Image& WithInfrastructureConfiguration(const InfrastructureConfiguration& value) { SetInfrastructureConfiguration(value); return *this;}

    /**
     * <p>The infrastructure used when creating this image.</p>
     */
    inline Image& WithInfrastructureConfiguration(InfrastructureConfiguration&& value) { SetInfrastructureConfiguration(std::move(value)); return *this;}


    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline const DistributionConfiguration& GetDistributionConfiguration() const{ return m_distributionConfiguration; }

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline bool DistributionConfigurationHasBeenSet() const { return m_distributionConfigurationHasBeenSet; }

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline void SetDistributionConfiguration(const DistributionConfiguration& value) { m_distributionConfigurationHasBeenSet = true; m_distributionConfiguration = value; }

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline void SetDistributionConfiguration(DistributionConfiguration&& value) { m_distributionConfigurationHasBeenSet = true; m_distributionConfiguration = std::move(value); }

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline Image& WithDistributionConfiguration(const DistributionConfiguration& value) { SetDistributionConfiguration(value); return *this;}

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline Image& WithDistributionConfiguration(DistributionConfiguration&& value) { SetDistributionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const{ return m_imageTestsConfiguration; }

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline void SetImageTestsConfiguration(const ImageTestsConfiguration& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = value; }

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline void SetImageTestsConfiguration(ImageTestsConfiguration&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::move(value); }

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline Image& WithImageTestsConfiguration(const ImageTestsConfiguration& value) { SetImageTestsConfiguration(value); return *this;}

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline Image& WithImageTestsConfiguration(ImageTestsConfiguration&& value) { SetImageTestsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date on which this image was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline Image& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date on which this image was created.</p>
     */
    inline Image& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date on which this image was created.</p>
     */
    inline Image& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline const OutputResources& GetOutputResources() const{ return m_outputResources; }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline bool OutputResourcesHasBeenSet() const { return m_outputResourcesHasBeenSet; }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline void SetOutputResources(const OutputResources& value) { m_outputResourcesHasBeenSet = true; m_outputResources = value; }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline void SetOutputResources(OutputResources&& value) { m_outputResourcesHasBeenSet = true; m_outputResources = std::move(value); }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline Image& WithOutputResources(const OutputResources& value) { SetOutputResources(value); return *this;}

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline Image& WithOutputResources(OutputResources&& value) { SetOutputResources(std::move(value)); return *this;}


    /**
     * <p>The tags of the image.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the image.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the image.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the image.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline const BuildType& GetBuildType() const{ return m_buildType; }

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline bool BuildTypeHasBeenSet() const { return m_buildTypeHasBeenSet; }

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline void SetBuildType(const BuildType& value) { m_buildTypeHasBeenSet = true; m_buildType = value; }

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline void SetBuildType(BuildType&& value) { m_buildTypeHasBeenSet = true; m_buildType = std::move(value); }

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline Image& WithBuildType(const BuildType& value) { SetBuildType(value); return *this;}

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline Image& WithBuildType(BuildType&& value) { SetBuildType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ImageType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    bool m_enhancedImageMetadataEnabled;
    bool m_enhancedImageMetadataEnabledHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;

    ImageState m_state;
    bool m_stateHasBeenSet = false;

    ImageRecipe m_imageRecipe;
    bool m_imageRecipeHasBeenSet = false;

    ContainerRecipe m_containerRecipe;
    bool m_containerRecipeHasBeenSet = false;

    Aws::String m_sourcePipelineName;
    bool m_sourcePipelineNameHasBeenSet = false;

    Aws::String m_sourcePipelineArn;
    bool m_sourcePipelineArnHasBeenSet = false;

    InfrastructureConfiguration m_infrastructureConfiguration;
    bool m_infrastructureConfigurationHasBeenSet = false;

    DistributionConfiguration m_distributionConfiguration;
    bool m_distributionConfigurationHasBeenSet = false;

    ImageTestsConfiguration m_imageTestsConfiguration;
    bool m_imageTestsConfigurationHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    OutputResources m_outputResources;
    bool m_outputResourcesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    BuildType m_buildType;
    bool m_buildTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
