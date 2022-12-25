/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileCacheLifecycle.h>
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
  class DeleteFileCacheResult
  {
  public:
    AWS_FSX_API DeleteFileCacheResult();
    AWS_FSX_API DeleteFileCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteFileCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline const Aws::String& GetFileCacheId() const{ return m_fileCacheId; }

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline void SetFileCacheId(const Aws::String& value) { m_fileCacheId = value; }

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline void SetFileCacheId(Aws::String&& value) { m_fileCacheId = std::move(value); }

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline void SetFileCacheId(const char* value) { m_fileCacheId.assign(value); }

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline DeleteFileCacheResult& WithFileCacheId(const Aws::String& value) { SetFileCacheId(value); return *this;}

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline DeleteFileCacheResult& WithFileCacheId(Aws::String&& value) { SetFileCacheId(std::move(value)); return *this;}

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline DeleteFileCacheResult& WithFileCacheId(const char* value) { SetFileCacheId(value); return *this;}


    /**
     * <p>The cache lifecycle for the deletion request. If the
     * <code>DeleteFileCache</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline const FileCacheLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The cache lifecycle for the deletion request. If the
     * <code>DeleteFileCache</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline void SetLifecycle(const FileCacheLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The cache lifecycle for the deletion request. If the
     * <code>DeleteFileCache</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline void SetLifecycle(FileCacheLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The cache lifecycle for the deletion request. If the
     * <code>DeleteFileCache</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline DeleteFileCacheResult& WithLifecycle(const FileCacheLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The cache lifecycle for the deletion request. If the
     * <code>DeleteFileCache</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline DeleteFileCacheResult& WithLifecycle(FileCacheLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_fileCacheId;

    FileCacheLifecycle m_lifecycle;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
