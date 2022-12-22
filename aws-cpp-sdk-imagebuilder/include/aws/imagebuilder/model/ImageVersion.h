/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageType.h>
#include <aws/imagebuilder/model/Platform.h>
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
   * <p>The defining characteristics of a specific version of an Image Builder
   * image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageVersion">AWS
   * API Reference</a></p>
   */
  class ImageVersion
  {
  public:
    AWS_IMAGEBUILDER_API ImageVersion();
    AWS_IMAGEBUILDER_API ImageVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a specific version of an Image Builder
     * image.</p>  <p>Semantic versioning is included in each object's Amazon
     * Resource Name (ARN), at the level that applies to that object as follows:</p>
     * <ol> <li> <p>Versionless ARNs and Name ARNs do not include specific values in
     * any of the nodes. The nodes are either left off entirely, or they are specified
     * as wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific version of an Image Builder
     * image.</p>  <p>Semantic versioning is included in each object's Amazon
     * Resource Name (ARN), at the level that applies to that object as follows:</p>
     * <ol> <li> <p>Versionless ARNs and Name ARNs do not include specific values in
     * any of the nodes. The nodes are either left off entirely, or they are specified
     * as wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific version of an Image Builder
     * image.</p>  <p>Semantic versioning is included in each object's Amazon
     * Resource Name (ARN), at the level that applies to that object as follows:</p>
     * <ol> <li> <p>Versionless ARNs and Name ARNs do not include specific values in
     * any of the nodes. The nodes are either left off entirely, or they are specified
     * as wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific version of an Image Builder
     * image.</p>  <p>Semantic versioning is included in each object's Amazon
     * Resource Name (ARN), at the level that applies to that object as follows:</p>
     * <ol> <li> <p>Versionless ARNs and Name ARNs do not include specific values in
     * any of the nodes. The nodes are either left off entirely, or they are specified
     * as wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific version of an Image Builder
     * image.</p>  <p>Semantic versioning is included in each object's Amazon
     * Resource Name (ARN), at the level that applies to that object as follows:</p>
     * <ol> <li> <p>Versionless ARNs and Name ARNs do not include specific values in
     * any of the nodes. The nodes are either left off entirely, or they are specified
     * as wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific version of an Image Builder
     * image.</p>  <p>Semantic versioning is included in each object's Amazon
     * Resource Name (ARN), at the level that applies to that object as follows:</p>
     * <ol> <li> <p>Versionless ARNs and Name ARNs do not include specific values in
     * any of the nodes. The nodes are either left off entirely, or they are specified
     * as wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline ImageVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a specific version of an Image Builder
     * image.</p>  <p>Semantic versioning is included in each object's Amazon
     * Resource Name (ARN), at the level that applies to that object as follows:</p>
     * <ol> <li> <p>Versionless ARNs and Name ARNs do not include specific values in
     * any of the nodes. The nodes are either left off entirely, or they are specified
     * as wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline ImageVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a specific version of an Image Builder
     * image.</p>  <p>Semantic versioning is included in each object's Amazon
     * Resource Name (ARN), at the level that applies to that object as follows:</p>
     * <ol> <li> <p>Versionless ARNs and Name ARNs do not include specific values in
     * any of the nodes. The nodes are either left off entirely, or they are specified
     * as wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline ImageVersion& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of this specific version of an Image Builder image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this specific version of an Image Builder image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this specific version of an Image Builder image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this specific version of an Image Builder image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this specific version of an Image Builder image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this specific version of an Image Builder image.</p>
     */
    inline ImageVersion& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this specific version of an Image Builder image.</p>
     */
    inline ImageVersion& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this specific version of an Image Builder image.</p>
     */
    inline ImageVersion& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this image is an AMI or a container image.</p>
     */
    inline const ImageType& GetType() const{ return m_type; }

    /**
     * <p>Specifies whether this image is an AMI or a container image.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies whether this image is an AMI or a container image.</p>
     */
    inline void SetType(const ImageType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies whether this image is an AMI or a container image.</p>
     */
    inline void SetType(ImageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies whether this image is an AMI or a container image.</p>
     */
    inline ImageVersion& WithType(const ImageType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies whether this image is an AMI or a container image.</p>
     */
    inline ImageVersion& WithType(ImageType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Details for a specific version of an Image Builder image. This version
     * follows the semantic version syntax.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
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
     * <p>Details for a specific version of an Image Builder image. This version
     * follows the semantic version syntax.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
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
     * <p>Details for a specific version of an Image Builder image. This version
     * follows the semantic version syntax.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
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
     * <p>Details for a specific version of an Image Builder image. This version
     * follows the semantic version syntax.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
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
     * <p>Details for a specific version of an Image Builder image. This version
     * follows the semantic version syntax.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
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
     * <p>Details for a specific version of an Image Builder image. This version
     * follows the semantic version syntax.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
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
    inline ImageVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Details for a specific version of an Image Builder image. This version
     * follows the semantic version syntax.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
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
    inline ImageVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Details for a specific version of an Image Builder image. This version
     * follows the semantic version syntax.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
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
    inline ImageVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The platform of the image version, for example "Windows" or "Linux".</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the image version, for example "Windows" or "Linux".</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the image version, for example "Windows" or "Linux".</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the image version, for example "Windows" or "Linux".</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the image version, for example "Windows" or "Linux".</p>
     */
    inline ImageVersion& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the image version, for example "Windows" or "Linux".</p>
     */
    inline ImageVersion& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The operating system version of the Amazon EC2 build instance. For example,
     * Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline const Aws::String& GetOsVersion() const{ return m_osVersion; }

    /**
     * <p>The operating system version of the Amazon EC2 build instance. For example,
     * Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }

    /**
     * <p>The operating system version of the Amazon EC2 build instance. For example,
     * Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline void SetOsVersion(const Aws::String& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }

    /**
     * <p>The operating system version of the Amazon EC2 build instance. For example,
     * Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline void SetOsVersion(Aws::String&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }

    /**
     * <p>The operating system version of the Amazon EC2 build instance. For example,
     * Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline void SetOsVersion(const char* value) { m_osVersionHasBeenSet = true; m_osVersion.assign(value); }

    /**
     * <p>The operating system version of the Amazon EC2 build instance. For example,
     * Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline ImageVersion& WithOsVersion(const Aws::String& value) { SetOsVersion(value); return *this;}

    /**
     * <p>The operating system version of the Amazon EC2 build instance. For example,
     * Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline ImageVersion& WithOsVersion(Aws::String&& value) { SetOsVersion(std::move(value)); return *this;}

    /**
     * <p>The operating system version of the Amazon EC2 build instance. For example,
     * Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline ImageVersion& WithOsVersion(const char* value) { SetOsVersion(value); return *this;}


    /**
     * <p>The owner of the image version.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the image version.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the image version.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the image version.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the image version.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the image version.</p>
     */
    inline ImageVersion& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the image version.</p>
     */
    inline ImageVersion& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the image version.</p>
     */
    inline ImageVersion& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The date on which this specific version of the Image Builder image was
     * created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date on which this specific version of the Image Builder image was
     * created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date on which this specific version of the Image Builder image was
     * created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date on which this specific version of the Image Builder image was
     * created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date on which this specific version of the Image Builder image was
     * created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date on which this specific version of the Image Builder image was
     * created.</p>
     */
    inline ImageVersion& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date on which this specific version of the Image Builder image was
     * created.</p>
     */
    inline ImageVersion& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date on which this specific version of the Image Builder image was
     * created.</p>
     */
    inline ImageVersion& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


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
    inline ImageVersion& WithBuildType(const BuildType& value) { SetBuildType(value); return *this;}

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline ImageVersion& WithBuildType(BuildType&& value) { SetBuildType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ImageType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    BuildType m_buildType;
    bool m_buildTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
