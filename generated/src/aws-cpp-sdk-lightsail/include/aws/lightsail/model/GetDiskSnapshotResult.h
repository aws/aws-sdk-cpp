/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/DiskSnapshot.h>
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
namespace Lightsail
{
namespace Model
{
  class GetDiskSnapshotResult
  {
  public:
    AWS_LIGHTSAIL_API GetDiskSnapshotResult();
    AWS_LIGHTSAIL_API GetDiskSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDiskSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline const DiskSnapshot& GetDiskSnapshot() const{ return m_diskSnapshot; }

    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline void SetDiskSnapshot(const DiskSnapshot& value) { m_diskSnapshot = value; }

    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline void SetDiskSnapshot(DiskSnapshot&& value) { m_diskSnapshot = std::move(value); }

    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline GetDiskSnapshotResult& WithDiskSnapshot(const DiskSnapshot& value) { SetDiskSnapshot(value); return *this;}

    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline GetDiskSnapshotResult& WithDiskSnapshot(DiskSnapshot&& value) { SetDiskSnapshot(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDiskSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDiskSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDiskSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DiskSnapshot m_diskSnapshot;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
