﻿/**
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
  class GetSyncConfigurationRequest : public CodeConnectionsRequest
  {
  public:
    AWS_CODECONNECTIONS_API GetSyncConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSyncConfiguration"; }

    AWS_CODECONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODECONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The sync type for the sync configuration for which you want to retrieve
     * information.</p>
     */
    inline const SyncConfigurationType& GetSyncType() const{ return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(const SyncConfigurationType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline void SetSyncType(SyncConfigurationType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }
    inline GetSyncConfigurationRequest& WithSyncType(const SyncConfigurationType& value) { SetSyncType(value); return *this;}
    inline GetSyncConfigurationRequest& WithSyncType(SyncConfigurationType&& value) { SetSyncType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services resource for the sync configuration for
     * which you want to retrieve information.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline GetSyncConfigurationRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline GetSyncConfigurationRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline GetSyncConfigurationRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}
  private:

    SyncConfigurationType m_syncType;
    bool m_syncTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
