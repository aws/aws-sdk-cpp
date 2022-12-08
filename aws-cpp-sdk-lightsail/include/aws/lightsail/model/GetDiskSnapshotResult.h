/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/DiskSnapshot.h>
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

  private:

    DiskSnapshot m_diskSnapshot;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
