/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/BehaviorEnum.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the per-path cache behavior of an Amazon Lightsail content delivery
   * network (CDN) distribution.</p> <p>A per-path cache behavior is used to
   * override, or add an exception to, the default cache behavior of a distribution.
   * For example, if the <code>cacheBehavior</code> is set to <code>cache</code>,
   * then a per-path cache behavior can be used to specify a directory, file, or file
   * type that your distribution will cache. Alternately, if the distribution's
   * <code>cacheBehavior</code> is <code>dont-cache</code>, then a per-path cache
   * behavior can be used to specify a directory, file, or file type that your
   * distribution will not cache.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CacheBehaviorPerPath">AWS
   * API Reference</a></p>
   */
  class CacheBehaviorPerPath
  {
  public:
    AWS_LIGHTSAIL_API CacheBehaviorPerPath() = default;
    AWS_LIGHTSAIL_API CacheBehaviorPerPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CacheBehaviorPerPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to a directory or file to cached, or not cache. Use an asterisk
     * symbol to specify wildcard directories (<code>path/to/assets/ *</code>), and file
     * types (<code>*.html, *jpg, *js</code>). Directories and file paths are
     * case-sensitive.</p> <p>Examples:</p> <ul> <li> <p>Specify the following to cache
     * all files in the document root of an Apache web server running on a Lightsail
     * instance.</p> <p> <code>var/www/html/</code> </p> </li> <li> <p>Specify the
     * following file to cache only the index page in the document root of an Apache
     * web server.</p> <p> <code>var/www/html/index.html</code> </p> </li> <li>
     * <p>Specify the following to cache only the .html files in the document root of
     * an Apache web server.</p> <p> <code>var/www/html/ *.html</code> </p> </li> <li>
     * <p>Specify the following to cache only the .jpg, .png, and .gif files in the
     * images sub-directory of the document root of an Apache web server.</p> <p>
     * <code>var/www/html/images/ *.jpg</code> </p> <p>
     * <code>var/www/html/images/ *.png</code> </p> <p>
     * <code>var/www/html/images/ *.gif</code> </p> <p>Specify the following to cache
     * all files in the images sub-directory of the document root of an Apache web
     * server.</p> <p> <code>var/www/html/images/</code> </p> </li> </ul>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    CacheBehaviorPerPath& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache behavior for the specified path.</p> <p>You can specify one of the
     * following per-path cache behaviors:</p> <ul> <li> <p> <b> <code>cache</code>
     * </b> - This behavior caches the specified path. </p> </li> <li> <p> <b>
     * <code>dont-cache</code> </b> - This behavior doesn't cache the specified path.
     * </p> </li> </ul>
     */
    inline BehaviorEnum GetBehavior() const { return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    inline void SetBehavior(BehaviorEnum value) { m_behaviorHasBeenSet = true; m_behavior = value; }
    inline CacheBehaviorPerPath& WithBehavior(BehaviorEnum value) { SetBehavior(value); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    BehaviorEnum m_behavior{BehaviorEnum::NOT_SET};
    bool m_behaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
