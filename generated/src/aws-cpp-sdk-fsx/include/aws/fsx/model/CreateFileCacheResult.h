/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileCacheCreating.h>
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
  class CreateFileCacheResult
  {
  public:
    AWS_FSX_API CreateFileCacheResult();
    AWS_FSX_API CreateFileCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateFileCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the cache that was created.</p>
     */
    inline const FileCacheCreating& GetFileCache() const{ return m_fileCache; }

    /**
     * <p>A description of the cache that was created.</p>
     */
    inline void SetFileCache(const FileCacheCreating& value) { m_fileCache = value; }

    /**
     * <p>A description of the cache that was created.</p>
     */
    inline void SetFileCache(FileCacheCreating&& value) { m_fileCache = std::move(value); }

    /**
     * <p>A description of the cache that was created.</p>
     */
    inline CreateFileCacheResult& WithFileCache(const FileCacheCreating& value) { SetFileCache(value); return *this;}

    /**
     * <p>A description of the cache that was created.</p>
     */
    inline CreateFileCacheResult& WithFileCache(FileCacheCreating&& value) { SetFileCache(std::move(value)); return *this;}

  private:

    FileCacheCreating m_fileCache;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
