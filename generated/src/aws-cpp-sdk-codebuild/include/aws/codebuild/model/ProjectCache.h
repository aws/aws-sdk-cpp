/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ProjectCache
  {
  public:
    AWS_CODEBUILD_API ProjectCache() = default;
    AWS_CODEBUILD_API ProjectCache(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectCache& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project does not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project reads and writes from and to
     * S3.</p> </li> <li> <p> <code>LOCAL</code>: The build project stores a cache
     * locally on a build host that is only available to that build host.</p> </li>
     * </ul>
     */
    inline CacheType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CacheType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProjectCache& WithType(CacheType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the cache location: </p> <ul> <li> <p>
     * <code>NO_CACHE</code> or <code>LOCAL</code>: This value is ignored.</p> </li>
     * <li> <p> <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    ProjectCache& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the local cache modes. You can use one or
     * more local cache modes at the same time. This is only used for
     * <code>LOCAL</code> cache types.</p> <p>Possible values are:</p> <dl>
     * <dt>LOCAL_SOURCE_CACHE</dt> <dd> <p>Caches Git metadata for primary and
     * secondary sources. After the cache is created, subsequent builds pull only the
     * change between commits. This mode is a good choice for projects with a clean
     * working directory and a source that is a large Git repository. If you choose
     * this option and your project does not use a Git repository (GitHub, GitHub
     * Enterprise, or Bitbucket), the option is ignored. </p> </dd>
     * <dt>LOCAL_DOCKER_LAYER_CACHE</dt> <dd> <p>Caches existing Docker layers. This
     * mode is a good choice for projects that build or pull large Docker images. It
     * can prevent the performance issues caused by pulling large Docker images down
     * from the network. </p>  <ul> <li> <p>You can use a Docker layer cache in
     * the Linux environment only. </p> </li> <li> <p>The <code>privileged</code> flag
     * must be set so that your project has the required Docker permissions. </p> </li>
     * <li> <p>You should consider the security implications before you use a Docker
     * layer cache. </p> </li> </ul>  </dd> <dt>LOCAL_CUSTOM_CACHE</dt> <dd>
     * <p>Caches directories you specify in the buildspec file. This mode is a good
     * choice if your build scenario is not suited to one of the other three local
     * cache modes. If you use a custom cache: </p> <ul> <li> <p>Only directories can
     * be specified for caching. You cannot specify individual files. </p> </li> <li>
     * <p>Symlinks are used to reference cached directories. </p> </li> <li> <p>Cached
     * directories are linked to your build before it downloads its project sources.
     * Cached items are overridden if a source item has the same name. Directories are
     * specified using cache paths in the buildspec file. </p> </li> </ul> </dd> </dl>
     */
    inline const Aws::Vector<CacheMode>& GetModes() const { return m_modes; }
    inline bool ModesHasBeenSet() const { return m_modesHasBeenSet; }
    template<typename ModesT = Aws::Vector<CacheMode>>
    void SetModes(ModesT&& value) { m_modesHasBeenSet = true; m_modes = std::forward<ModesT>(value); }
    template<typename ModesT = Aws::Vector<CacheMode>>
    ProjectCache& WithModes(ModesT&& value) { SetModes(std::forward<ModesT>(value)); return *this;}
    inline ProjectCache& AddModes(CacheMode value) { m_modesHasBeenSet = true; m_modes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the scope of the cache. You can use this namespace to share a cache
     * across multiple projects. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/caching-s3.html#caching-s3-sharing">Cache
     * sharing between projects</a> in the <i>CodeBuild User Guide</i>.</p>
     */
    inline const Aws::String& GetCacheNamespace() const { return m_cacheNamespace; }
    inline bool CacheNamespaceHasBeenSet() const { return m_cacheNamespaceHasBeenSet; }
    template<typename CacheNamespaceT = Aws::String>
    void SetCacheNamespace(CacheNamespaceT&& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = std::forward<CacheNamespaceT>(value); }
    template<typename CacheNamespaceT = Aws::String>
    ProjectCache& WithCacheNamespace(CacheNamespaceT&& value) { SetCacheNamespace(std::forward<CacheNamespaceT>(value)); return *this;}
    ///@}
  private:

    CacheType m_type{CacheType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::Vector<CacheMode> m_modes;
    bool m_modesHasBeenSet = false;

    Aws::String m_cacheNamespace;
    bool m_cacheNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
