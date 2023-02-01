/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Contains the results of the <a>DeleteSnapshot</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteSnapshotResult">AWS
   * API Reference</a></p>
   */
  class DeleteSnapshotResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DeleteSnapshotResult();
    AWS_DIRECTORYSERVICE_API DeleteSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DeleteSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the directory snapshot that was deleted.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The identifier of the directory snapshot that was deleted.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The identifier of the directory snapshot that was deleted.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The identifier of the directory snapshot that was deleted.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The identifier of the directory snapshot that was deleted.</p>
     */
    inline DeleteSnapshotResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The identifier of the directory snapshot that was deleted.</p>
     */
    inline DeleteSnapshotResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory snapshot that was deleted.</p>
     */
    inline DeleteSnapshotResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_snapshotId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
