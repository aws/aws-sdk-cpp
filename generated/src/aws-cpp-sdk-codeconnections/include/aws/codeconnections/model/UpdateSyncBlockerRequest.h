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
  class UpdateSyncBlockerRequest : public CodeConnectionsRequest
  {
  public:
    AWS_CODECONNECTIONS_API UpdateSyncBlockerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSyncBlocker"; }

    AWS_CODECONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODECONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the sync blocker to be updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateSyncBlockerRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateSyncBlockerRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateSyncBlockerRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync type of the sync blocker to be updated.</p>
     */
    inline const SyncConfigurationType& GetSyncType() const{ return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(const SyncConfigurationType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline void SetSyncType(SyncConfigurationType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }
    inline UpdateSyncBlockerRequest& WithSyncType(const SyncConfigurationType& value) { SetSyncType(value); return *this;}
    inline UpdateSyncBlockerRequest& WithSyncType(SyncConfigurationType&& value) { SetSyncType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource for the sync blocker to be updated.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline UpdateSyncBlockerRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline UpdateSyncBlockerRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline UpdateSyncBlockerRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for resolving the sync blocker.</p>
     */
    inline const Aws::String& GetResolvedReason() const{ return m_resolvedReason; }
    inline bool ResolvedReasonHasBeenSet() const { return m_resolvedReasonHasBeenSet; }
    inline void SetResolvedReason(const Aws::String& value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason = value; }
    inline void SetResolvedReason(Aws::String&& value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason = std::move(value); }
    inline void SetResolvedReason(const char* value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason.assign(value); }
    inline UpdateSyncBlockerRequest& WithResolvedReason(const Aws::String& value) { SetResolvedReason(value); return *this;}
    inline UpdateSyncBlockerRequest& WithResolvedReason(Aws::String&& value) { SetResolvedReason(std::move(value)); return *this;}
    inline UpdateSyncBlockerRequest& WithResolvedReason(const char* value) { SetResolvedReason(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SyncConfigurationType m_syncType;
    bool m_syncTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_resolvedReason;
    bool m_resolvedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
