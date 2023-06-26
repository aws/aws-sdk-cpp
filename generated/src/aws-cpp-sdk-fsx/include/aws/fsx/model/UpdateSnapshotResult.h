/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/Snapshot.h>
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
namespace FSx
{
namespace Model
{
  class UpdateSnapshotResult
  {
  public:
    AWS_FSX_API UpdateSnapshotResult();
    AWS_FSX_API UpdateSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API UpdateSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returned after a successful <code>UpdateSnapshot</code> operation, describing
     * the snapshot that you updated.</p>
     */
    inline const Snapshot& GetSnapshot() const{ return m_snapshot; }

    /**
     * <p>Returned after a successful <code>UpdateSnapshot</code> operation, describing
     * the snapshot that you updated.</p>
     */
    inline void SetSnapshot(const Snapshot& value) { m_snapshot = value; }

    /**
     * <p>Returned after a successful <code>UpdateSnapshot</code> operation, describing
     * the snapshot that you updated.</p>
     */
    inline void SetSnapshot(Snapshot&& value) { m_snapshot = std::move(value); }

    /**
     * <p>Returned after a successful <code>UpdateSnapshot</code> operation, describing
     * the snapshot that you updated.</p>
     */
    inline UpdateSnapshotResult& WithSnapshot(const Snapshot& value) { SetSnapshot(value); return *this;}

    /**
     * <p>Returned after a successful <code>UpdateSnapshot</code> operation, describing
     * the snapshot that you updated.</p>
     */
    inline UpdateSnapshotResult& WithSnapshot(Snapshot&& value) { SetSnapshot(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Snapshot m_snapshot;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
