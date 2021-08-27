/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>

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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Lists refresh cache information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CacheAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API CacheAttributes
  {
  public:
    CacheAttributes();
    CacheAttributes(Aws::Utils::Json::JsonView jsonValue);
    CacheAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Refreshes a file share's cache by using Time To Live (TTL). TTL is the length
     * of time since the last refresh after which access to the directory would cause
     * the file gateway to first refresh that directory's contents from the Amazon S3
     * bucket. The TTL duration is in seconds.</p> <p>Valid Values: 300 to 2,592,000
     * seconds (5 minutes to 30 days)</p>
     */
    inline int GetCacheStaleTimeoutInSeconds() const{ return m_cacheStaleTimeoutInSeconds; }

    /**
     * <p>Refreshes a file share's cache by using Time To Live (TTL). TTL is the length
     * of time since the last refresh after which access to the directory would cause
     * the file gateway to first refresh that directory's contents from the Amazon S3
     * bucket. The TTL duration is in seconds.</p> <p>Valid Values: 300 to 2,592,000
     * seconds (5 minutes to 30 days)</p>
     */
    inline bool CacheStaleTimeoutInSecondsHasBeenSet() const { return m_cacheStaleTimeoutInSecondsHasBeenSet; }

    /**
     * <p>Refreshes a file share's cache by using Time To Live (TTL). TTL is the length
     * of time since the last refresh after which access to the directory would cause
     * the file gateway to first refresh that directory's contents from the Amazon S3
     * bucket. The TTL duration is in seconds.</p> <p>Valid Values: 300 to 2,592,000
     * seconds (5 minutes to 30 days)</p>
     */
    inline void SetCacheStaleTimeoutInSeconds(int value) { m_cacheStaleTimeoutInSecondsHasBeenSet = true; m_cacheStaleTimeoutInSeconds = value; }

    /**
     * <p>Refreshes a file share's cache by using Time To Live (TTL). TTL is the length
     * of time since the last refresh after which access to the directory would cause
     * the file gateway to first refresh that directory's contents from the Amazon S3
     * bucket. The TTL duration is in seconds.</p> <p>Valid Values: 300 to 2,592,000
     * seconds (5 minutes to 30 days)</p>
     */
    inline CacheAttributes& WithCacheStaleTimeoutInSeconds(int value) { SetCacheStaleTimeoutInSeconds(value); return *this;}

  private:

    int m_cacheStaleTimeoutInSeconds;
    bool m_cacheStaleTimeoutInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
