/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>

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
   * <p>Represents the output of a <code>FlushApiCache</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/FlushApiCacheResponse">AWS
   * API Reference</a></p>
   */
  class FlushApiCacheResult
  {
  public:
    AWS_APPSYNC_API FlushApiCacheResult();
    AWS_APPSYNC_API FlushApiCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API FlushApiCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
