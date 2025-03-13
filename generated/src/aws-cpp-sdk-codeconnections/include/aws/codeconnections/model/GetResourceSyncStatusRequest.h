/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/CodeConnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/SyncConfigurationType.h>
#include <utility>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{

  /**
   */
  class GetResourceSyncStatusRequest : public CodeConnectionsRequest
  {
  public:
    AWS_CODECONNECTIONS_API GetResourceSyncStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceSyncStatus"; }

    AWS_CODECONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODECONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Amazon Web Services resource for the sync status with the Git
     * repository.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    GetResourceSyncStatusRequest& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync type for the sync status with the Git repository.</p>
     */
    inline SyncConfigurationType GetSyncType() const { return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(SyncConfigurationType value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline GetResourceSyncStatusRequest& WithSyncType(SyncConfigurationType value) { SetSyncType(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    SyncConfigurationType m_syncType{SyncConfigurationType::NOT_SET};
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
