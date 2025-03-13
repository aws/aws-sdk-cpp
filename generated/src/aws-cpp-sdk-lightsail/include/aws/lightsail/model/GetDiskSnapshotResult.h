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
    AWS_LIGHTSAIL_API GetDiskSnapshotResult() = default;
    AWS_LIGHTSAIL_API GetDiskSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDiskSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline const DiskSnapshot& GetDiskSnapshot() const { return m_diskSnapshot; }
    template<typename DiskSnapshotT = DiskSnapshot>
    void SetDiskSnapshot(DiskSnapshotT&& value) { m_diskSnapshotHasBeenSet = true; m_diskSnapshot = std::forward<DiskSnapshotT>(value); }
    template<typename DiskSnapshotT = DiskSnapshot>
    GetDiskSnapshotResult& WithDiskSnapshot(DiskSnapshotT&& value) { SetDiskSnapshot(std::forward<DiskSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDiskSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DiskSnapshot m_diskSnapshot;
    bool m_diskSnapshotHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
