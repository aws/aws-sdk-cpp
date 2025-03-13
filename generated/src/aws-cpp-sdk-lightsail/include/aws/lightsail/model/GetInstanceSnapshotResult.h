/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceSnapshot.h>
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
  class GetInstanceSnapshotResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceSnapshotResult() = default;
    AWS_LIGHTSAIL_API GetInstanceSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstanceSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance snapshot request.</p>
     */
    inline const InstanceSnapshot& GetInstanceSnapshot() const { return m_instanceSnapshot; }
    template<typename InstanceSnapshotT = InstanceSnapshot>
    void SetInstanceSnapshot(InstanceSnapshotT&& value) { m_instanceSnapshotHasBeenSet = true; m_instanceSnapshot = std::forward<InstanceSnapshotT>(value); }
    template<typename InstanceSnapshotT = InstanceSnapshot>
    GetInstanceSnapshotResult& WithInstanceSnapshot(InstanceSnapshotT&& value) { SetInstanceSnapshot(std::forward<InstanceSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInstanceSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceSnapshot m_instanceSnapshot;
    bool m_instanceSnapshotHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
