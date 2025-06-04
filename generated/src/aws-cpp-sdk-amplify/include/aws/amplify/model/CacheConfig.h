/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/CacheConfigType.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p>Describes the cache configuration for an Amplify app.</p> <p>For more
   * information about how Amplify applies an optimal cache configuration for your
   * app based on the type of content that is being served, see <a
   * href="https://docs.aws.amazon.com/amplify/latest/userguide/managing-cache-configuration">Managing
   * cache configuration</a> in the <i>Amplify User guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CacheConfig">AWS
   * API Reference</a></p>
   */
  class CacheConfig
  {
  public:
    AWS_AMPLIFY_API CacheConfig() = default;
    AWS_AMPLIFY_API CacheConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API CacheConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of cache configuration to use for an Amplify app.</p> <p>The
     * <code>AMPLIFY_MANAGED</code> cache configuration automatically applies an
     * optimized cache configuration for your app based on its platform, routing rules,
     * and rewrite rules.</p> <p>The <code>AMPLIFY_MANAGED_NO_COOKIES</code> cache
     * configuration type is the same as <code>AMPLIFY_MANAGED</code>, except that it
     * excludes all cookies from the cache key. This is the default setting.</p>
     */
    inline CacheConfigType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CacheConfigType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CacheConfig& WithType(CacheConfigType value) { SetType(value); return *this;}
    ///@}
  private:

    CacheConfigType m_type{CacheConfigType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
