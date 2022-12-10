/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncSource.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateResourceDataSyncRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateResourceDataSyncRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceDataSync"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the resource data sync you want to update.</p>
     */
    inline const Aws::String& GetSyncName() const{ return m_syncName; }

    /**
     * <p>The name of the resource data sync you want to update.</p>
     */
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }

    /**
     * <p>The name of the resource data sync you want to update.</p>
     */
    inline void SetSyncName(const Aws::String& value) { m_syncNameHasBeenSet = true; m_syncName = value; }

    /**
     * <p>The name of the resource data sync you want to update.</p>
     */
    inline void SetSyncName(Aws::String&& value) { m_syncNameHasBeenSet = true; m_syncName = std::move(value); }

    /**
     * <p>The name of the resource data sync you want to update.</p>
     */
    inline void SetSyncName(const char* value) { m_syncNameHasBeenSet = true; m_syncName.assign(value); }

    /**
     * <p>The name of the resource data sync you want to update.</p>
     */
    inline UpdateResourceDataSyncRequest& WithSyncName(const Aws::String& value) { SetSyncName(value); return *this;}

    /**
     * <p>The name of the resource data sync you want to update.</p>
     */
    inline UpdateResourceDataSyncRequest& WithSyncName(Aws::String&& value) { SetSyncName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource data sync you want to update.</p>
     */
    inline UpdateResourceDataSyncRequest& WithSyncName(const char* value) { SetSyncName(value); return *this;}


    /**
     * <p>The type of resource data sync. The supported <code>SyncType</code> is
     * SyncFromSource.</p>
     */
    inline const Aws::String& GetSyncType() const{ return m_syncType; }

    /**
     * <p>The type of resource data sync. The supported <code>SyncType</code> is
     * SyncFromSource.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>The type of resource data sync. The supported <code>SyncType</code> is
     * SyncFromSource.</p>
     */
    inline void SetSyncType(const Aws::String& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>The type of resource data sync. The supported <code>SyncType</code> is
     * SyncFromSource.</p>
     */
    inline void SetSyncType(Aws::String&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>The type of resource data sync. The supported <code>SyncType</code> is
     * SyncFromSource.</p>
     */
    inline void SetSyncType(const char* value) { m_syncTypeHasBeenSet = true; m_syncType.assign(value); }

    /**
     * <p>The type of resource data sync. The supported <code>SyncType</code> is
     * SyncFromSource.</p>
     */
    inline UpdateResourceDataSyncRequest& WithSyncType(const Aws::String& value) { SetSyncType(value); return *this;}

    /**
     * <p>The type of resource data sync. The supported <code>SyncType</code> is
     * SyncFromSource.</p>
     */
    inline UpdateResourceDataSyncRequest& WithSyncType(Aws::String&& value) { SetSyncType(std::move(value)); return *this;}

    /**
     * <p>The type of resource data sync. The supported <code>SyncType</code> is
     * SyncFromSource.</p>
     */
    inline UpdateResourceDataSyncRequest& WithSyncType(const char* value) { SetSyncType(value); return *this;}


    /**
     * <p>Specify information about the data sources to synchronize.</p>
     */
    inline const ResourceDataSyncSource& GetSyncSource() const{ return m_syncSource; }

    /**
     * <p>Specify information about the data sources to synchronize.</p>
     */
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }

    /**
     * <p>Specify information about the data sources to synchronize.</p>
     */
    inline void SetSyncSource(const ResourceDataSyncSource& value) { m_syncSourceHasBeenSet = true; m_syncSource = value; }

    /**
     * <p>Specify information about the data sources to synchronize.</p>
     */
    inline void SetSyncSource(ResourceDataSyncSource&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::move(value); }

    /**
     * <p>Specify information about the data sources to synchronize.</p>
     */
    inline UpdateResourceDataSyncRequest& WithSyncSource(const ResourceDataSyncSource& value) { SetSyncSource(value); return *this;}

    /**
     * <p>Specify information about the data sources to synchronize.</p>
     */
    inline UpdateResourceDataSyncRequest& WithSyncSource(ResourceDataSyncSource&& value) { SetSyncSource(std::move(value)); return *this;}

  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    Aws::String m_syncType;
    bool m_syncTypeHasBeenSet = false;

    ResourceDataSyncSource m_syncSource;
    bool m_syncSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
