/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ApiCache.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>UpdateApiCache</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiCacheResponse">AWS
   * API Reference</a></p>
   */
  class UpdateApiCacheResult
  {
  public:
    AWS_APPSYNC_API UpdateApiCacheResult();
    AWS_APPSYNC_API UpdateApiCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API UpdateApiCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ApiCache</code> object.</p>
     */
    inline const ApiCache& GetApiCache() const{ return m_apiCache; }

    /**
     * <p>The <code>ApiCache</code> object.</p>
     */
    inline void SetApiCache(const ApiCache& value) { m_apiCache = value; }

    /**
     * <p>The <code>ApiCache</code> object.</p>
     */
    inline void SetApiCache(ApiCache&& value) { m_apiCache = std::move(value); }

    /**
     * <p>The <code>ApiCache</code> object.</p>
     */
    inline UpdateApiCacheResult& WithApiCache(const ApiCache& value) { SetApiCache(value); return *this;}

    /**
     * <p>The <code>ApiCache</code> object.</p>
     */
    inline UpdateApiCacheResult& WithApiCache(ApiCache&& value) { SetApiCache(std::move(value)); return *this;}

  private:

    ApiCache m_apiCache;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
