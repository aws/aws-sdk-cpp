/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/AutoSnapshotDetails.h>
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
  class GetAutoSnapshotsResult
  {
  public:
    AWS_LIGHTSAIL_API GetAutoSnapshotsResult() = default;
    AWS_LIGHTSAIL_API GetAutoSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetAutoSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the source instance or disk for the automatic snapshots.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    GetAutoSnapshotsResult& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the automatic snapshot. The possible values are
     * <code>Instance</code>, and <code>Disk</code>.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline GetAutoSnapshotsResult& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the automatic snapshots that are available
     * for the specified source instance or disk.</p>
     */
    inline const Aws::Vector<AutoSnapshotDetails>& GetAutoSnapshots() const { return m_autoSnapshots; }
    template<typename AutoSnapshotsT = Aws::Vector<AutoSnapshotDetails>>
    void SetAutoSnapshots(AutoSnapshotsT&& value) { m_autoSnapshotsHasBeenSet = true; m_autoSnapshots = std::forward<AutoSnapshotsT>(value); }
    template<typename AutoSnapshotsT = Aws::Vector<AutoSnapshotDetails>>
    GetAutoSnapshotsResult& WithAutoSnapshots(AutoSnapshotsT&& value) { SetAutoSnapshots(std::forward<AutoSnapshotsT>(value)); return *this;}
    template<typename AutoSnapshotsT = AutoSnapshotDetails>
    GetAutoSnapshotsResult& AddAutoSnapshots(AutoSnapshotsT&& value) { m_autoSnapshotsHasBeenSet = true; m_autoSnapshots.emplace_back(std::forward<AutoSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutoSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<AutoSnapshotDetails> m_autoSnapshots;
    bool m_autoSnapshotsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
