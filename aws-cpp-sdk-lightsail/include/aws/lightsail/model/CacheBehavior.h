/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
   * <p>Describes the default cache behavior of an Amazon Lightsail content delivery
   * network (CDN) distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CacheBehavior">AWS
   * API Reference</a></p>
   */
  class CacheBehavior
  {
  public:
    AWS_LIGHTSAIL_API CacheBehavior();
    AWS_LIGHTSAIL_API CacheBehavior(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CacheBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cache behavior of the distribution.</p> <p>The following cache behaviors
     * can be specified:</p> <ul> <li> <p> <b> <code>cache</code> </b> - This option is
     * best for static sites. When specified, your distribution caches and serves your
     * entire website as static content. This behavior is ideal for websites with
     * static content that doesn't change depending on who views it, or for websites
     * that don't use cookies, headers, or query strings to personalize content.</p>
     * </li> <li> <p> <b> <code>dont-cache</code> </b> - This option is best for sites
     * that serve a mix of static and dynamic content. When specified, your
     * distribution caches and serve only the content that is specified in the
     * distribution's <code>CacheBehaviorPerPath</code> parameter. This behavior is
     * ideal for websites or web applications that use cookies, headers, and query
     * strings to personalize content for individual users.</p> </li> </ul>
     */
    inline const BehaviorEnum& GetBehavior() const{ return m_behavior; }

    /**
     * <p>The cache behavior of the distribution.</p> <p>The following cache behaviors
     * can be specified:</p> <ul> <li> <p> <b> <code>cache</code> </b> - This option is
     * best for static sites. When specified, your distribution caches and serves your
     * entire website as static content. This behavior is ideal for websites with
     * static content that doesn't change depending on who views it, or for websites
     * that don't use cookies, headers, or query strings to personalize content.</p>
     * </li> <li> <p> <b> <code>dont-cache</code> </b> - This option is best for sites
     * that serve a mix of static and dynamic content. When specified, your
     * distribution caches and serve only the content that is specified in the
     * distribution's <code>CacheBehaviorPerPath</code> parameter. This behavior is
     * ideal for websites or web applications that use cookies, headers, and query
     * strings to personalize content for individual users.</p> </li> </ul>
     */
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }

    /**
     * <p>The cache behavior of the distribution.</p> <p>The following cache behaviors
     * can be specified:</p> <ul> <li> <p> <b> <code>cache</code> </b> - This option is
     * best for static sites. When specified, your distribution caches and serves your
     * entire website as static content. This behavior is ideal for websites with
     * static content that doesn't change depending on who views it, or for websites
     * that don't use cookies, headers, or query strings to personalize content.</p>
     * </li> <li> <p> <b> <code>dont-cache</code> </b> - This option is best for sites
     * that serve a mix of static and dynamic content. When specified, your
     * distribution caches and serve only the content that is specified in the
     * distribution's <code>CacheBehaviorPerPath</code> parameter. This behavior is
     * ideal for websites or web applications that use cookies, headers, and query
     * strings to personalize content for individual users.</p> </li> </ul>
     */
    inline void SetBehavior(const BehaviorEnum& value) { m_behaviorHasBeenSet = true; m_behavior = value; }

    /**
     * <p>The cache behavior of the distribution.</p> <p>The following cache behaviors
     * can be specified:</p> <ul> <li> <p> <b> <code>cache</code> </b> - This option is
     * best for static sites. When specified, your distribution caches and serves your
     * entire website as static content. This behavior is ideal for websites with
     * static content that doesn't change depending on who views it, or for websites
     * that don't use cookies, headers, or query strings to personalize content.</p>
     * </li> <li> <p> <b> <code>dont-cache</code> </b> - This option is best for sites
     * that serve a mix of static and dynamic content. When specified, your
     * distribution caches and serve only the content that is specified in the
     * distribution's <code>CacheBehaviorPerPath</code> parameter. This behavior is
     * ideal for websites or web applications that use cookies, headers, and query
     * strings to personalize content for individual users.</p> </li> </ul>
     */
    inline void SetBehavior(BehaviorEnum&& value) { m_behaviorHasBeenSet = true; m_behavior = std::move(value); }

    /**
     * <p>The cache behavior of the distribution.</p> <p>The following cache behaviors
     * can be specified:</p> <ul> <li> <p> <b> <code>cache</code> </b> - This option is
     * best for static sites. When specified, your distribution caches and serves your
     * entire website as static content. This behavior is ideal for websites with
     * static content that doesn't change depending on who views it, or for websites
     * that don't use cookies, headers, or query strings to personalize content.</p>
     * </li> <li> <p> <b> <code>dont-cache</code> </b> - This option is best for sites
     * that serve a mix of static and dynamic content. When specified, your
     * distribution caches and serve only the content that is specified in the
     * distribution's <code>CacheBehaviorPerPath</code> parameter. This behavior is
     * ideal for websites or web applications that use cookies, headers, and query
     * strings to personalize content for individual users.</p> </li> </ul>
     */
    inline CacheBehavior& WithBehavior(const BehaviorEnum& value) { SetBehavior(value); return *this;}

    /**
     * <p>The cache behavior of the distribution.</p> <p>The following cache behaviors
     * can be specified:</p> <ul> <li> <p> <b> <code>cache</code> </b> - This option is
     * best for static sites. When specified, your distribution caches and serves your
     * entire website as static content. This behavior is ideal for websites with
     * static content that doesn't change depending on who views it, or for websites
     * that don't use cookies, headers, or query strings to personalize content.</p>
     * </li> <li> <p> <b> <code>dont-cache</code> </b> - This option is best for sites
     * that serve a mix of static and dynamic content. When specified, your
     * distribution caches and serve only the content that is specified in the
     * distribution's <code>CacheBehaviorPerPath</code> parameter. This behavior is
     * ideal for websites or web applications that use cookies, headers, and query
     * strings to personalize content for individual users.</p> </li> </ul>
     */
    inline CacheBehavior& WithBehavior(BehaviorEnum&& value) { SetBehavior(std::move(value)); return *this;}

  private:

    BehaviorEnum m_behavior;
    bool m_behaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
