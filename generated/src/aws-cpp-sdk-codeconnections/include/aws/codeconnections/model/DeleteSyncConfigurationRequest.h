/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/CodeConnectionsRequest.h>
#include <aws/codeconnections/model/SyncConfigurationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{

  /**
   */
  class DeleteSyncConfigurationRequest : public CodeConnectionsRequest
  {
  public:
    AWS_CODECONNECTIONS_API DeleteSyncConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSyncConfiguration"; }

    AWS_CODECONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODECONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of sync configuration to be deleted.</p>
     */
    inline const SyncConfigurationType& GetSyncType() const{ return m_syncType; }

    /**
     * <p>The type of sync configuration to be deleted.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>The type of sync configuration to be deleted.</p>
     */
    inline void SetSyncType(const SyncConfigurationType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>The type of sync configuration to be deleted.</p>
     */
    inline void SetSyncType(SyncConfigurationType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>The type of sync configuration to be deleted.</p>
     */
    inline DeleteSyncConfigurationRequest& WithSyncType(const SyncConfigurationType& value) { SetSyncType(value); return *this;}

    /**
     * <p>The type of sync configuration to be deleted.</p>
     */
    inline DeleteSyncConfigurationRequest& WithSyncType(SyncConfigurationType&& value) { SetSyncType(std::move(value)); return *this;}


    /**
     * <p>The name of the Amazon Web Services resource associated with the sync
     * configuration to be deleted.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the Amazon Web Services resource associated with the sync
     * configuration to be deleted.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services resource associated with the sync
     * configuration to be deleted.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the Amazon Web Services resource associated with the sync
     * configuration to be deleted.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services resource associated with the sync
     * configuration to be deleted.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the Amazon Web Services resource associated with the sync
     * configuration to be deleted.</p>
     */
    inline DeleteSyncConfigurationRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services resource associated with the sync
     * configuration to be deleted.</p>
     */
    inline DeleteSyncConfigurationRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services resource associated with the sync
     * configuration to be deleted.</p>
     */
    inline DeleteSyncConfigurationRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    SyncConfigurationType m_syncType;
    bool m_syncTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
