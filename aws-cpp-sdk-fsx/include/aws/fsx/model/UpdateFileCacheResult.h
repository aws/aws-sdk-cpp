/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileCache.h>
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
namespace FSx
{
namespace Model
{
  class UpdateFileCacheResult
  {
  public:
    AWS_FSX_API UpdateFileCacheResult();
    AWS_FSX_API UpdateFileCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API UpdateFileCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the cache that was updated.</p>
     */
    inline const FileCache& GetFileCache() const{ return m_fileCache; }

    /**
     * <p>A description of the cache that was updated.</p>
     */
    inline void SetFileCache(const FileCache& value) { m_fileCache = value; }

    /**
     * <p>A description of the cache that was updated.</p>
     */
    inline void SetFileCache(FileCache&& value) { m_fileCache = std::move(value); }

    /**
     * <p>A description of the cache that was updated.</p>
     */
    inline UpdateFileCacheResult& WithFileCache(const FileCache& value) { SetFileCache(value); return *this;}

    /**
     * <p>A description of the cache that was updated.</p>
     */
    inline UpdateFileCacheResult& WithFileCache(FileCache&& value) { SetFileCache(std::move(value)); return *this;}

  private:

    FileCache m_fileCache;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
