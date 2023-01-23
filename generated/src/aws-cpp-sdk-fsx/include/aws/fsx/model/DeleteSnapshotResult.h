/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SnapshotLifecycle.h>
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
  class DeleteSnapshotResult
  {
  public:
    AWS_FSX_API DeleteSnapshotResult();
    AWS_FSX_API DeleteSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the deleted snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the deleted snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The ID of the deleted snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the deleted snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The ID of the deleted snapshot.</p>
     */
    inline DeleteSnapshotResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the deleted snapshot.</p>
     */
    inline DeleteSnapshotResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deleted snapshot.</p>
     */
    inline DeleteSnapshotResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The lifecycle status of the snapshot. If the <code>DeleteSnapshot</code>
     * operation is successful, this status is <code>DELETING</code>.</p>
     */
    inline const SnapshotLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle status of the snapshot. If the <code>DeleteSnapshot</code>
     * operation is successful, this status is <code>DELETING</code>.</p>
     */
    inline void SetLifecycle(const SnapshotLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The lifecycle status of the snapshot. If the <code>DeleteSnapshot</code>
     * operation is successful, this status is <code>DELETING</code>.</p>
     */
    inline void SetLifecycle(SnapshotLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle status of the snapshot. If the <code>DeleteSnapshot</code>
     * operation is successful, this status is <code>DELETING</code>.</p>
     */
    inline DeleteSnapshotResult& WithLifecycle(const SnapshotLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle status of the snapshot. If the <code>DeleteSnapshot</code>
     * operation is successful, this status is <code>DELETING</code>.</p>
     */
    inline DeleteSnapshotResult& WithLifecycle(SnapshotLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotId;

    SnapshotLifecycle m_lifecycle;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
