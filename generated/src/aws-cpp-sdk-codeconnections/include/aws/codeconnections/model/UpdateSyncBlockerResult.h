/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/SyncBlocker.h>
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
namespace CodeConnections
{
namespace Model
{
  class UpdateSyncBlockerResult
  {
  public:
    AWS_CODECONNECTIONS_API UpdateSyncBlockerResult() = default;
    AWS_CODECONNECTIONS_API UpdateSyncBlockerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API UpdateSyncBlockerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource name for the sync blocker.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    UpdateSyncBlockerResult& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent resource name for the sync blocker.</p>
     */
    inline const Aws::String& GetParentResourceName() const { return m_parentResourceName; }
    template<typename ParentResourceNameT = Aws::String>
    void SetParentResourceName(ParentResourceNameT&& value) { m_parentResourceNameHasBeenSet = true; m_parentResourceName = std::forward<ParentResourceNameT>(value); }
    template<typename ParentResourceNameT = Aws::String>
    UpdateSyncBlockerResult& WithParentResourceName(ParentResourceNameT&& value) { SetParentResourceName(std::forward<ParentResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the sync blocker to be updated.</p>
     */
    inline const SyncBlocker& GetSyncBlocker() const { return m_syncBlocker; }
    template<typename SyncBlockerT = SyncBlocker>
    void SetSyncBlocker(SyncBlockerT&& value) { m_syncBlockerHasBeenSet = true; m_syncBlocker = std::forward<SyncBlockerT>(value); }
    template<typename SyncBlockerT = SyncBlocker>
    UpdateSyncBlockerResult& WithSyncBlocker(SyncBlockerT&& value) { SetSyncBlocker(std::forward<SyncBlockerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSyncBlockerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_parentResourceName;
    bool m_parentResourceNameHasBeenSet = false;

    SyncBlocker m_syncBlocker;
    bool m_syncBlockerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
