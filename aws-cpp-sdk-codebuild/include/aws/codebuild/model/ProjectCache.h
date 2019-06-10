/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/CacheType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/CacheMode.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the cache for the build project.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectCache">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ProjectCache
  {
  public:
    ProjectCache();
    ProjectCache(Aws::Utils::Json::JsonView jsonValue);
    ProjectCache& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project does not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project reads and writes from and to
     * S3.</p> </li> <li> <p> <code>LOCAL</code>: The build project stores a cache
     * locally on a build host that is only available to that build host.</p> </li>
     * </ul>
     */
    inline const CacheType& GetType() const{ return m_type; }

    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project does not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project reads and writes from and to
     * S3.</p> </li> <li> <p> <code>LOCAL</code>: The build project stores a cache
     * locally on a build host that is only available to that build host.</p> </li>
     * </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project does not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project reads and writes from and to
     * S3.</p> </li> <li> <p> <code>LOCAL</code>: The build project stores a cache
     * locally on a build host that is only available to that build host.</p> </li>
     * </ul>
     */
    inline void SetType(const CacheType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project does not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project reads and writes from and to
     * S3.</p> </li> <li> <p> <code>LOCAL</code>: The build project stores a cache
     * locally on a build host that is only available to that build host.</p> </li>
     * </ul>
     */
    inline void SetType(CacheType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project does not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project reads and writes from and to
     * S3.</p> </li> <li> <p> <code>LOCAL</code>: The build project stores a cache
     * locally on a build host that is only available to that build host.</p> </li>
     * </ul>
     */
    inline ProjectCache& WithType(const CacheType& value) { SetType(value); return *this;}

    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project does not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project reads and writes from and to
     * S3.</p> </li> <li> <p> <code>LOCAL</code>: The build project stores a cache
     * locally on a build host that is only available to that build host.</p> </li>
     * </ul>
     */
    inline ProjectCache& WithType(CacheType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Information about the cache location: </p> <ul> <li> <p>
     * <code>NO_CACHE</code> or <code>LOCAL</code>: This value is ignored.</p> </li>
     * <li> <p> <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the cache location: </p> <ul> <li> <p>
     * <code>NO_CACHE</code> or <code>LOCAL</code>: This value is ignored.</p> </li>
     * <li> <p> <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Information about the cache location: </p> <ul> <li> <p>
     * <code>NO_CACHE</code> or <code>LOCAL</code>: This value is ignored.</p> </li>
     * <li> <p> <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the cache location: </p> <ul> <li> <p>
     * <code>NO_CACHE</code> or <code>LOCAL</code>: This value is ignored.</p> </li>
     * <li> <p> <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Information about the cache location: </p> <ul> <li> <p>
     * <code>NO_CACHE</code> or <code>LOCAL</code>: This value is ignored.</p> </li>
     * <li> <p> <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>Information about the cache location: </p> <ul> <li> <p>
     * <code>NO_CACHE</code> or <code>LOCAL</code>: This value is ignored.</p> </li>
     * <li> <p> <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline ProjectCache& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the cache location: </p> <ul> <li> <p>
     * <code>NO_CACHE</code> or <code>LOCAL</code>: This value is ignored.</p> </li>
     * <li> <p> <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline ProjectCache& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>Information about the cache location: </p> <ul> <li> <p>
     * <code>NO_CACHE</code> or <code>LOCAL</code>: This value is ignored.</p> </li>
     * <li> <p> <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline ProjectCache& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p> If you use a <code>LOCAL</code> cache, the local cache mode. You can use one
     * or more local cache modes at the same time. </p> <ul> <li> <p>
     * <code>LOCAL_SOURCE_CACHE</code> mode caches Git metadata for primary and
     * secondary sources. After the cache is created, subsequent builds pull only the
     * change between commits. This mode is a good choice for projects with a clean
     * working directory and a source that is a large Git repository. If you choose
     * this option and your project does not use a Git repository (GitHub, GitHub
     * Enterprise, or Bitbucket), the option is ignored. </p> </li> <li> <p>
     * <code>LOCAL_DOCKER_LAYER_CACHE</code> mode caches existing Docker layers. This
     * mode is a good choice for projects that build or pull large Docker images. It
     * can prevent the performance issues caused by pulling large Docker images down
     * from the network. </p> <note> <ul> <li> <p> You can use a Docker layer cache in
     * the Linux environment only. </p> </li> <li> <p> The <code>privileged</code> flag
     * must be set so that your project has the required Docker permissions. </p> </li>
     * <li> <p> You should consider the security implications before you use a Docker
     * layer cache. </p> </li> </ul> </note> </li> </ul> <ul> <li> <p>
     * <code>LOCAL_CUSTOM_CACHE</code> mode caches directories you specify in the
     * buildspec file. This mode is a good choice if your build scenario is not suited
     * to one of the other three local cache modes. If you use a custom cache: </p>
     * <ul> <li> <p> Only directories can be specified for caching. You cannot specify
     * individual files. </p> </li> <li> <p> Symlinks are used to reference cached
     * directories. </p> </li> <li> <p> Cached directories are linked to your build
     * before it downloads its project sources. Cached items are overriden if a source
     * item has the same name. Directories are specified using cache paths in the
     * buildspec file. </p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<CacheMode>& GetModes() const{ return m_modes; }

    /**
     * <p> If you use a <code>LOCAL</code> cache, the local cache mode. You can use one
     * or more local cache modes at the same time. </p> <ul> <li> <p>
     * <code>LOCAL_SOURCE_CACHE</code> mode caches Git metadata for primary and
     * secondary sources. After the cache is created, subsequent builds pull only the
     * change between commits. This mode is a good choice for projects with a clean
     * working directory and a source that is a large Git repository. If you choose
     * this option and your project does not use a Git repository (GitHub, GitHub
     * Enterprise, or Bitbucket), the option is ignored. </p> </li> <li> <p>
     * <code>LOCAL_DOCKER_LAYER_CACHE</code> mode caches existing Docker layers. This
     * mode is a good choice for projects that build or pull large Docker images. It
     * can prevent the performance issues caused by pulling large Docker images down
     * from the network. </p> <note> <ul> <li> <p> You can use a Docker layer cache in
     * the Linux environment only. </p> </li> <li> <p> The <code>privileged</code> flag
     * must be set so that your project has the required Docker permissions. </p> </li>
     * <li> <p> You should consider the security implications before you use a Docker
     * layer cache. </p> </li> </ul> </note> </li> </ul> <ul> <li> <p>
     * <code>LOCAL_CUSTOM_CACHE</code> mode caches directories you specify in the
     * buildspec file. This mode is a good choice if your build scenario is not suited
     * to one of the other three local cache modes. If you use a custom cache: </p>
     * <ul> <li> <p> Only directories can be specified for caching. You cannot specify
     * individual files. </p> </li> <li> <p> Symlinks are used to reference cached
     * directories. </p> </li> <li> <p> Cached directories are linked to your build
     * before it downloads its project sources. Cached items are overriden if a source
     * item has the same name. Directories are specified using cache paths in the
     * buildspec file. </p> </li> </ul> </li> </ul>
     */
    inline bool ModesHasBeenSet() const { return m_modesHasBeenSet; }

    /**
     * <p> If you use a <code>LOCAL</code> cache, the local cache mode. You can use one
     * or more local cache modes at the same time. </p> <ul> <li> <p>
     * <code>LOCAL_SOURCE_CACHE</code> mode caches Git metadata for primary and
     * secondary sources. After the cache is created, subsequent builds pull only the
     * change between commits. This mode is a good choice for projects with a clean
     * working directory and a source that is a large Git repository. If you choose
     * this option and your project does not use a Git repository (GitHub, GitHub
     * Enterprise, or Bitbucket), the option is ignored. </p> </li> <li> <p>
     * <code>LOCAL_DOCKER_LAYER_CACHE</code> mode caches existing Docker layers. This
     * mode is a good choice for projects that build or pull large Docker images. It
     * can prevent the performance issues caused by pulling large Docker images down
     * from the network. </p> <note> <ul> <li> <p> You can use a Docker layer cache in
     * the Linux environment only. </p> </li> <li> <p> The <code>privileged</code> flag
     * must be set so that your project has the required Docker permissions. </p> </li>
     * <li> <p> You should consider the security implications before you use a Docker
     * layer cache. </p> </li> </ul> </note> </li> </ul> <ul> <li> <p>
     * <code>LOCAL_CUSTOM_CACHE</code> mode caches directories you specify in the
     * buildspec file. This mode is a good choice if your build scenario is not suited
     * to one of the other three local cache modes. If you use a custom cache: </p>
     * <ul> <li> <p> Only directories can be specified for caching. You cannot specify
     * individual files. </p> </li> <li> <p> Symlinks are used to reference cached
     * directories. </p> </li> <li> <p> Cached directories are linked to your build
     * before it downloads its project sources. Cached items are overriden if a source
     * item has the same name. Directories are specified using cache paths in the
     * buildspec file. </p> </li> </ul> </li> </ul>
     */
    inline void SetModes(const Aws::Vector<CacheMode>& value) { m_modesHasBeenSet = true; m_modes = value; }

    /**
     * <p> If you use a <code>LOCAL</code> cache, the local cache mode. You can use one
     * or more local cache modes at the same time. </p> <ul> <li> <p>
     * <code>LOCAL_SOURCE_CACHE</code> mode caches Git metadata for primary and
     * secondary sources. After the cache is created, subsequent builds pull only the
     * change between commits. This mode is a good choice for projects with a clean
     * working directory and a source that is a large Git repository. If you choose
     * this option and your project does not use a Git repository (GitHub, GitHub
     * Enterprise, or Bitbucket), the option is ignored. </p> </li> <li> <p>
     * <code>LOCAL_DOCKER_LAYER_CACHE</code> mode caches existing Docker layers. This
     * mode is a good choice for projects that build or pull large Docker images. It
     * can prevent the performance issues caused by pulling large Docker images down
     * from the network. </p> <note> <ul> <li> <p> You can use a Docker layer cache in
     * the Linux environment only. </p> </li> <li> <p> The <code>privileged</code> flag
     * must be set so that your project has the required Docker permissions. </p> </li>
     * <li> <p> You should consider the security implications before you use a Docker
     * layer cache. </p> </li> </ul> </note> </li> </ul> <ul> <li> <p>
     * <code>LOCAL_CUSTOM_CACHE</code> mode caches directories you specify in the
     * buildspec file. This mode is a good choice if your build scenario is not suited
     * to one of the other three local cache modes. If you use a custom cache: </p>
     * <ul> <li> <p> Only directories can be specified for caching. You cannot specify
     * individual files. </p> </li> <li> <p> Symlinks are used to reference cached
     * directories. </p> </li> <li> <p> Cached directories are linked to your build
     * before it downloads its project sources. Cached items are overriden if a source
     * item has the same name. Directories are specified using cache paths in the
     * buildspec file. </p> </li> </ul> </li> </ul>
     */
    inline void SetModes(Aws::Vector<CacheMode>&& value) { m_modesHasBeenSet = true; m_modes = std::move(value); }

    /**
     * <p> If you use a <code>LOCAL</code> cache, the local cache mode. You can use one
     * or more local cache modes at the same time. </p> <ul> <li> <p>
     * <code>LOCAL_SOURCE_CACHE</code> mode caches Git metadata for primary and
     * secondary sources. After the cache is created, subsequent builds pull only the
     * change between commits. This mode is a good choice for projects with a clean
     * working directory and a source that is a large Git repository. If you choose
     * this option and your project does not use a Git repository (GitHub, GitHub
     * Enterprise, or Bitbucket), the option is ignored. </p> </li> <li> <p>
     * <code>LOCAL_DOCKER_LAYER_CACHE</code> mode caches existing Docker layers. This
     * mode is a good choice for projects that build or pull large Docker images. It
     * can prevent the performance issues caused by pulling large Docker images down
     * from the network. </p> <note> <ul> <li> <p> You can use a Docker layer cache in
     * the Linux environment only. </p> </li> <li> <p> The <code>privileged</code> flag
     * must be set so that your project has the required Docker permissions. </p> </li>
     * <li> <p> You should consider the security implications before you use a Docker
     * layer cache. </p> </li> </ul> </note> </li> </ul> <ul> <li> <p>
     * <code>LOCAL_CUSTOM_CACHE</code> mode caches directories you specify in the
     * buildspec file. This mode is a good choice if your build scenario is not suited
     * to one of the other three local cache modes. If you use a custom cache: </p>
     * <ul> <li> <p> Only directories can be specified for caching. You cannot specify
     * individual files. </p> </li> <li> <p> Symlinks are used to reference cached
     * directories. </p> </li> <li> <p> Cached directories are linked to your build
     * before it downloads its project sources. Cached items are overriden if a source
     * item has the same name. Directories are specified using cache paths in the
     * buildspec file. </p> </li> </ul> </li> </ul>
     */
    inline ProjectCache& WithModes(const Aws::Vector<CacheMode>& value) { SetModes(value); return *this;}

    /**
     * <p> If you use a <code>LOCAL</code> cache, the local cache mode. You can use one
     * or more local cache modes at the same time. </p> <ul> <li> <p>
     * <code>LOCAL_SOURCE_CACHE</code> mode caches Git metadata for primary and
     * secondary sources. After the cache is created, subsequent builds pull only the
     * change between commits. This mode is a good choice for projects with a clean
     * working directory and a source that is a large Git repository. If you choose
     * this option and your project does not use a Git repository (GitHub, GitHub
     * Enterprise, or Bitbucket), the option is ignored. </p> </li> <li> <p>
     * <code>LOCAL_DOCKER_LAYER_CACHE</code> mode caches existing Docker layers. This
     * mode is a good choice for projects that build or pull large Docker images. It
     * can prevent the performance issues caused by pulling large Docker images down
     * from the network. </p> <note> <ul> <li> <p> You can use a Docker layer cache in
     * the Linux environment only. </p> </li> <li> <p> The <code>privileged</code> flag
     * must be set so that your project has the required Docker permissions. </p> </li>
     * <li> <p> You should consider the security implications before you use a Docker
     * layer cache. </p> </li> </ul> </note> </li> </ul> <ul> <li> <p>
     * <code>LOCAL_CUSTOM_CACHE</code> mode caches directories you specify in the
     * buildspec file. This mode is a good choice if your build scenario is not suited
     * to one of the other three local cache modes. If you use a custom cache: </p>
     * <ul> <li> <p> Only directories can be specified for caching. You cannot specify
     * individual files. </p> </li> <li> <p> Symlinks are used to reference cached
     * directories. </p> </li> <li> <p> Cached directories are linked to your build
     * before it downloads its project sources. Cached items are overriden if a source
     * item has the same name. Directories are specified using cache paths in the
     * buildspec file. </p> </li> </ul> </li> </ul>
     */
    inline ProjectCache& WithModes(Aws::Vector<CacheMode>&& value) { SetModes(std::move(value)); return *this;}

    /**
     * <p> If you use a <code>LOCAL</code> cache, the local cache mode. You can use one
     * or more local cache modes at the same time. </p> <ul> <li> <p>
     * <code>LOCAL_SOURCE_CACHE</code> mode caches Git metadata for primary and
     * secondary sources. After the cache is created, subsequent builds pull only the
     * change between commits. This mode is a good choice for projects with a clean
     * working directory and a source that is a large Git repository. If you choose
     * this option and your project does not use a Git repository (GitHub, GitHub
     * Enterprise, or Bitbucket), the option is ignored. </p> </li> <li> <p>
     * <code>LOCAL_DOCKER_LAYER_CACHE</code> mode caches existing Docker layers. This
     * mode is a good choice for projects that build or pull large Docker images. It
     * can prevent the performance issues caused by pulling large Docker images down
     * from the network. </p> <note> <ul> <li> <p> You can use a Docker layer cache in
     * the Linux environment only. </p> </li> <li> <p> The <code>privileged</code> flag
     * must be set so that your project has the required Docker permissions. </p> </li>
     * <li> <p> You should consider the security implications before you use a Docker
     * layer cache. </p> </li> </ul> </note> </li> </ul> <ul> <li> <p>
     * <code>LOCAL_CUSTOM_CACHE</code> mode caches directories you specify in the
     * buildspec file. This mode is a good choice if your build scenario is not suited
     * to one of the other three local cache modes. If you use a custom cache: </p>
     * <ul> <li> <p> Only directories can be specified for caching. You cannot specify
     * individual files. </p> </li> <li> <p> Symlinks are used to reference cached
     * directories. </p> </li> <li> <p> Cached directories are linked to your build
     * before it downloads its project sources. Cached items are overriden if a source
     * item has the same name. Directories are specified using cache paths in the
     * buildspec file. </p> </li> </ul> </li> </ul>
     */
    inline ProjectCache& AddModes(const CacheMode& value) { m_modesHasBeenSet = true; m_modes.push_back(value); return *this; }

    /**
     * <p> If you use a <code>LOCAL</code> cache, the local cache mode. You can use one
     * or more local cache modes at the same time. </p> <ul> <li> <p>
     * <code>LOCAL_SOURCE_CACHE</code> mode caches Git metadata for primary and
     * secondary sources. After the cache is created, subsequent builds pull only the
     * change between commits. This mode is a good choice for projects with a clean
     * working directory and a source that is a large Git repository. If you choose
     * this option and your project does not use a Git repository (GitHub, GitHub
     * Enterprise, or Bitbucket), the option is ignored. </p> </li> <li> <p>
     * <code>LOCAL_DOCKER_LAYER_CACHE</code> mode caches existing Docker layers. This
     * mode is a good choice for projects that build or pull large Docker images. It
     * can prevent the performance issues caused by pulling large Docker images down
     * from the network. </p> <note> <ul> <li> <p> You can use a Docker layer cache in
     * the Linux environment only. </p> </li> <li> <p> The <code>privileged</code> flag
     * must be set so that your project has the required Docker permissions. </p> </li>
     * <li> <p> You should consider the security implications before you use a Docker
     * layer cache. </p> </li> </ul> </note> </li> </ul> <ul> <li> <p>
     * <code>LOCAL_CUSTOM_CACHE</code> mode caches directories you specify in the
     * buildspec file. This mode is a good choice if your build scenario is not suited
     * to one of the other three local cache modes. If you use a custom cache: </p>
     * <ul> <li> <p> Only directories can be specified for caching. You cannot specify
     * individual files. </p> </li> <li> <p> Symlinks are used to reference cached
     * directories. </p> </li> <li> <p> Cached directories are linked to your build
     * before it downloads its project sources. Cached items are overriden if a source
     * item has the same name. Directories are specified using cache paths in the
     * buildspec file. </p> </li> </ul> </li> </ul>
     */
    inline ProjectCache& AddModes(CacheMode&& value) { m_modesHasBeenSet = true; m_modes.push_back(std::move(value)); return *this; }

  private:

    CacheType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    Aws::Vector<CacheMode> m_modes;
    bool m_modesHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
