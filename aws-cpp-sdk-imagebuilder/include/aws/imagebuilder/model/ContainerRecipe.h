/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ContainerType.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/InstanceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/TargetContainerRepository.h>
#include <aws/imagebuilder/model/ComponentConfiguration.h>
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
   * <p>A container recipe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ContainerRecipe">AWS
   * API Reference</a></p>
   */
  class ContainerRecipe
  {
  public:
    AWS_IMAGEBUILDER_API ContainerRecipe();
    AWS_IMAGEBUILDER_API ContainerRecipe(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ContainerRecipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p> 
     * <p>Semantic versioning is included in each object's Amazon Resource Name (ARN),
     * at the level that applies to that object as follows:</p> <ol> <li>
     * <p>Versionless ARNs and Name ARNs do not include specific values in any of the
     * nodes. The nodes are either left off entirely, or they are specified as
     * wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p> 
     * <p>Semantic versioning is included in each object's Amazon Resource Name (ARN),
     * at the level that applies to that object as follows:</p> <ol> <li>
     * <p>Versionless ARNs and Name ARNs do not include specific values in any of the
     * nodes. The nodes are either left off entirely, or they are specified as
     * wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p> 
     * <p>Semantic versioning is included in each object's Amazon Resource Name (ARN),
     * at the level that applies to that object as follows:</p> <ol> <li>
     * <p>Versionless ARNs and Name ARNs do not include specific values in any of the
     * nodes. The nodes are either left off entirely, or they are specified as
     * wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p> 
     * <p>Semantic versioning is included in each object's Amazon Resource Name (ARN),
     * at the level that applies to that object as follows:</p> <ol> <li>
     * <p>Versionless ARNs and Name ARNs do not include specific values in any of the
     * nodes. The nodes are either left off entirely, or they are specified as
     * wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p> 
     * <p>Semantic versioning is included in each object's Amazon Resource Name (ARN),
     * at the level that applies to that object as follows:</p> <ol> <li>
     * <p>Versionless ARNs and Name ARNs do not include specific values in any of the
     * nodes. The nodes are either left off entirely, or they are specified as
     * wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p> 
     * <p>Semantic versioning is included in each object's Amazon Resource Name (ARN),
     * at the level that applies to that object as follows:</p> <ol> <li>
     * <p>Versionless ARNs and Name ARNs do not include specific values in any of the
     * nodes. The nodes are either left off entirely, or they are specified as
     * wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline ContainerRecipe& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p> 
     * <p>Semantic versioning is included in each object's Amazon Resource Name (ARN),
     * at the level that applies to that object as follows:</p> <ol> <li>
     * <p>Versionless ARNs and Name ARNs do not include specific values in any of the
     * nodes. The nodes are either left off entirely, or they are specified as
     * wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline ContainerRecipe& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p> 
     * <p>Semantic versioning is included in each object's Amazon Resource Name (ARN),
     * at the level that applies to that object as follows:</p> <ol> <li>
     * <p>Versionless ARNs and Name ARNs do not include specific values in any of the
     * nodes. The nodes are either left off entirely, or they are specified as
     * wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline ContainerRecipe& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the type of container, such as Docker.</p>
     */
    inline const ContainerType& GetContainerType() const{ return m_containerType; }

    /**
     * <p>Specifies the type of container, such as Docker.</p>
     */
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }

    /**
     * <p>Specifies the type of container, such as Docker.</p>
     */
    inline void SetContainerType(const ContainerType& value) { m_containerTypeHasBeenSet = true; m_containerType = value; }

    /**
     * <p>Specifies the type of container, such as Docker.</p>
     */
    inline void SetContainerType(ContainerType&& value) { m_containerTypeHasBeenSet = true; m_containerType = std::move(value); }

    /**
     * <p>Specifies the type of container, such as Docker.</p>
     */
    inline ContainerRecipe& WithContainerType(const ContainerType& value) { SetContainerType(value); return *this;}

    /**
     * <p>Specifies the type of container, such as Docker.</p>
     */
    inline ContainerRecipe& WithContainerType(ContainerType&& value) { SetContainerType(std::move(value)); return *this;}


    /**
     * <p>The name of the container recipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline ContainerRecipe& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container recipe.</p>
     */
    inline ContainerRecipe& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container recipe.</p>
     */
    inline ContainerRecipe& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the container recipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline ContainerRecipe& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the container recipe.</p>
     */
    inline ContainerRecipe& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the container recipe.</p>
     */
    inline ContainerRecipe& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline ContainerRecipe& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline ContainerRecipe& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The owner of the container recipe.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline ContainerRecipe& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline ContainerRecipe& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline ContainerRecipe& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The semantic version of the container recipe.</p>  <p>The semantic
     * version has four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;.
     * You can assign values for the first three, and can filter on all of them.</p>
     * <p> <b>Assignment:</b> For the first three nodes you can assign any positive
     * integer value, including zero, with an upper limit of 2^30-1, or 1073741823 for
     * each node. Image Builder automatically assigns the build number to the fourth
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
     * <p>The semantic version of the container recipe.</p>  <p>The semantic
     * version has four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;.
     * You can assign values for the first three, and can filter on all of them.</p>
     * <p> <b>Assignment:</b> For the first three nodes you can assign any positive
     * integer value, including zero, with an upper limit of 2^30-1, or 1073741823 for
     * each node. Image Builder automatically assigns the build number to the fourth
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
     * <p>The semantic version of the container recipe.</p>  <p>The semantic
     * version has four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;.
     * You can assign values for the first three, and can filter on all of them.</p>
     * <p> <b>Assignment:</b> For the first three nodes you can assign any positive
     * integer value, including zero, with an upper limit of 2^30-1, or 1073741823 for
     * each node. Image Builder automatically assigns the build number to the fourth
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
     * <p>The semantic version of the container recipe.</p>  <p>The semantic
     * version has four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;.
     * You can assign values for the first three, and can filter on all of them.</p>
     * <p> <b>Assignment:</b> For the first three nodes you can assign any positive
     * integer value, including zero, with an upper limit of 2^30-1, or 1073741823 for
     * each node. Image Builder automatically assigns the build number to the fourth
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
     * <p>The semantic version of the container recipe.</p>  <p>The semantic
     * version has four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;.
     * You can assign values for the first three, and can filter on all of them.</p>
     * <p> <b>Assignment:</b> For the first three nodes you can assign any positive
     * integer value, including zero, with an upper limit of 2^30-1, or 1073741823 for
     * each node. Image Builder automatically assigns the build number to the fourth
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
     * <p>The semantic version of the container recipe.</p>  <p>The semantic
     * version has four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;.
     * You can assign values for the first three, and can filter on all of them.</p>
     * <p> <b>Assignment:</b> For the first three nodes you can assign any positive
     * integer value, including zero, with an upper limit of 2^30-1, or 1073741823 for
     * each node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline ContainerRecipe& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The semantic version of the container recipe.</p>  <p>The semantic
     * version has four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;.
     * You can assign values for the first three, and can filter on all of them.</p>
     * <p> <b>Assignment:</b> For the first three nodes you can assign any positive
     * integer value, including zero, with an upper limit of 2^30-1, or 1073741823 for
     * each node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline ContainerRecipe& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the container recipe.</p>  <p>The semantic
     * version has four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;.
     * You can assign values for the first three, and can filter on all of them.</p>
     * <p> <b>Assignment:</b> For the first three nodes you can assign any positive
     * integer value, including zero, with an upper limit of 2^30-1, or 1073741823 for
     * each node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline ContainerRecipe& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline const Aws::Vector<ComponentConfiguration>& GetComponents() const{ return m_components; }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline void SetComponents(const Aws::Vector<ComponentConfiguration>& value) { m_componentsHasBeenSet = true; m_components = value; }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline void SetComponents(Aws::Vector<ComponentConfiguration>&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline ContainerRecipe& WithComponents(const Aws::Vector<ComponentConfiguration>& value) { SetComponents(value); return *this;}

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline ContainerRecipe& WithComponents(Aws::Vector<ComponentConfiguration>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline ContainerRecipe& AddComponents(const ComponentConfiguration& value) { m_componentsHasBeenSet = true; m_components.push_back(value); return *this; }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline ContainerRecipe& AddComponents(ComponentConfiguration&& value) { m_componentsHasBeenSet = true; m_components.push_back(std::move(value)); return *this; }


    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const{ return m_instanceConfiguration; }

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline void SetInstanceConfiguration(const InstanceConfiguration& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = value; }

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline void SetInstanceConfiguration(InstanceConfiguration&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::move(value); }

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline ContainerRecipe& WithInstanceConfiguration(const InstanceConfiguration& value) { SetInstanceConfiguration(value); return *this;}

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline ContainerRecipe& WithInstanceConfiguration(InstanceConfiguration&& value) { SetInstanceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Dockerfiles are text documents that are used to build Docker containers, and
     * ensure that they contain all of the elements required by the application running
     * inside. The template data consists of contextual variables where Image Builder
     * places build information or scripts, based on your container image recipe.</p>
     */
    inline const Aws::String& GetDockerfileTemplateData() const{ return m_dockerfileTemplateData; }

    /**
     * <p>Dockerfiles are text documents that are used to build Docker containers, and
     * ensure that they contain all of the elements required by the application running
     * inside. The template data consists of contextual variables where Image Builder
     * places build information or scripts, based on your container image recipe.</p>
     */
    inline bool DockerfileTemplateDataHasBeenSet() const { return m_dockerfileTemplateDataHasBeenSet; }

    /**
     * <p>Dockerfiles are text documents that are used to build Docker containers, and
     * ensure that they contain all of the elements required by the application running
     * inside. The template data consists of contextual variables where Image Builder
     * places build information or scripts, based on your container image recipe.</p>
     */
    inline void SetDockerfileTemplateData(const Aws::String& value) { m_dockerfileTemplateDataHasBeenSet = true; m_dockerfileTemplateData = value; }

    /**
     * <p>Dockerfiles are text documents that are used to build Docker containers, and
     * ensure that they contain all of the elements required by the application running
     * inside. The template data consists of contextual variables where Image Builder
     * places build information or scripts, based on your container image recipe.</p>
     */
    inline void SetDockerfileTemplateData(Aws::String&& value) { m_dockerfileTemplateDataHasBeenSet = true; m_dockerfileTemplateData = std::move(value); }

    /**
     * <p>Dockerfiles are text documents that are used to build Docker containers, and
     * ensure that they contain all of the elements required by the application running
     * inside. The template data consists of contextual variables where Image Builder
     * places build information or scripts, based on your container image recipe.</p>
     */
    inline void SetDockerfileTemplateData(const char* value) { m_dockerfileTemplateDataHasBeenSet = true; m_dockerfileTemplateData.assign(value); }

    /**
     * <p>Dockerfiles are text documents that are used to build Docker containers, and
     * ensure that they contain all of the elements required by the application running
     * inside. The template data consists of contextual variables where Image Builder
     * places build information or scripts, based on your container image recipe.</p>
     */
    inline ContainerRecipe& WithDockerfileTemplateData(const Aws::String& value) { SetDockerfileTemplateData(value); return *this;}

    /**
     * <p>Dockerfiles are text documents that are used to build Docker containers, and
     * ensure that they contain all of the elements required by the application running
     * inside. The template data consists of contextual variables where Image Builder
     * places build information or scripts, based on your container image recipe.</p>
     */
    inline ContainerRecipe& WithDockerfileTemplateData(Aws::String&& value) { SetDockerfileTemplateData(std::move(value)); return *this;}

    /**
     * <p>Dockerfiles are text documents that are used to build Docker containers, and
     * ensure that they contain all of the elements required by the application running
     * inside. The template data consists of contextual variables where Image Builder
     * places build information or scripts, based on your container image recipe.</p>
     */
    inline ContainerRecipe& WithDockerfileTemplateData(const char* value) { SetDockerfileTemplateData(value); return *this;}


    /**
     * <p>Identifies which KMS key is used to encrypt the container image for
     * distribution to the target Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image for
     * distribution to the target Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image for
     * distribution to the target Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image for
     * distribution to the target Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image for
     * distribution to the target Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image for
     * distribution to the target Region.</p>
     */
    inline ContainerRecipe& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Identifies which KMS key is used to encrypt the container image for
     * distribution to the target Region.</p>
     */
    inline ContainerRecipe& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies which KMS key is used to encrypt the container image for
     * distribution to the target Region.</p>
     */
    inline ContainerRecipe& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A flag that indicates if the target container is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>A flag that indicates if the target container is encrypted.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>A flag that indicates if the target container is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>A flag that indicates if the target container is encrypted.</p>
     */
    inline ContainerRecipe& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The base image for the container recipe.</p>
     */
    inline const Aws::String& GetParentImage() const{ return m_parentImage; }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline bool ParentImageHasBeenSet() const { return m_parentImageHasBeenSet; }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline void SetParentImage(const Aws::String& value) { m_parentImageHasBeenSet = true; m_parentImage = value; }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline void SetParentImage(Aws::String&& value) { m_parentImageHasBeenSet = true; m_parentImage = std::move(value); }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline void SetParentImage(const char* value) { m_parentImageHasBeenSet = true; m_parentImage.assign(value); }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline ContainerRecipe& WithParentImage(const Aws::String& value) { SetParentImage(value); return *this;}

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline ContainerRecipe& WithParentImage(Aws::String&& value) { SetParentImage(std::move(value)); return *this;}

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline ContainerRecipe& WithParentImage(const char* value) { SetParentImage(value); return *this;}


    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline ContainerRecipe& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline ContainerRecipe& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline ContainerRecipe& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipe& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipe& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipe& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipe& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipe& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipe& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipe& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipe& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipe& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline ContainerRecipe& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline ContainerRecipe& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline ContainerRecipe& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>The destination repository for the container image.</p>
     */
    inline const TargetContainerRepository& GetTargetRepository() const{ return m_targetRepository; }

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline bool TargetRepositoryHasBeenSet() const { return m_targetRepositoryHasBeenSet; }

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline void SetTargetRepository(const TargetContainerRepository& value) { m_targetRepositoryHasBeenSet = true; m_targetRepository = value; }

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline void SetTargetRepository(TargetContainerRepository&& value) { m_targetRepositoryHasBeenSet = true; m_targetRepository = std::move(value); }

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline ContainerRecipe& WithTargetRepository(const TargetContainerRepository& value) { SetTargetRepository(value); return *this;}

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline ContainerRecipe& WithTargetRepository(TargetContainerRepository&& value) { SetTargetRepository(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ContainerType m_containerType;
    bool m_containerTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<ComponentConfiguration> m_components;
    bool m_componentsHasBeenSet = false;

    InstanceConfiguration m_instanceConfiguration;
    bool m_instanceConfigurationHasBeenSet = false;

    Aws::String m_dockerfileTemplateData;
    bool m_dockerfileTemplateDataHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_parentImage;
    bool m_parentImageHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    TargetContainerRepository m_targetRepository;
    bool m_targetRepositoryHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
