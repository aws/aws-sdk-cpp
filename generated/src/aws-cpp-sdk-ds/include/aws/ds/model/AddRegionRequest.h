/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectoryVpcSettings.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AddRegionRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API AddRegionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddRegion"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory to which you want to add Region
     * replication.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory to which you want to add Region
     * replication.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory to which you want to add Region
     * replication.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory to which you want to add Region
     * replication.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory to which you want to add Region
     * replication.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory to which you want to add Region
     * replication.</p>
     */
    inline AddRegionRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory to which you want to add Region
     * replication.</p>
     */
    inline AddRegionRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory to which you want to add Region
     * replication.</p>
     */
    inline AddRegionRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The name of the Region where you want to add domain controllers for
     * replication. For example, <code>us-east-1</code>.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The name of the Region where you want to add domain controllers for
     * replication. For example, <code>us-east-1</code>.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The name of the Region where you want to add domain controllers for
     * replication. For example, <code>us-east-1</code>.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The name of the Region where you want to add domain controllers for
     * replication. For example, <code>us-east-1</code>.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The name of the Region where you want to add domain controllers for
     * replication. For example, <code>us-east-1</code>.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The name of the Region where you want to add domain controllers for
     * replication. For example, <code>us-east-1</code>.</p>
     */
    inline AddRegionRequest& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The name of the Region where you want to add domain controllers for
     * replication. For example, <code>us-east-1</code>.</p>
     */
    inline AddRegionRequest& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Region where you want to add domain controllers for
     * replication. For example, <code>us-east-1</code>.</p>
     */
    inline AddRegionRequest& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    
    inline const DirectoryVpcSettings& GetVPCSettings() const{ return m_vPCSettings; }

    
    inline bool VPCSettingsHasBeenSet() const { return m_vPCSettingsHasBeenSet; }

    
    inline void SetVPCSettings(const DirectoryVpcSettings& value) { m_vPCSettingsHasBeenSet = true; m_vPCSettings = value; }

    
    inline void SetVPCSettings(DirectoryVpcSettings&& value) { m_vPCSettingsHasBeenSet = true; m_vPCSettings = std::move(value); }

    
    inline AddRegionRequest& WithVPCSettings(const DirectoryVpcSettings& value) { SetVPCSettings(value); return *this;}

    
    inline AddRegionRequest& WithVPCSettings(DirectoryVpcSettings&& value) { SetVPCSettings(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    DirectoryVpcSettings m_vPCSettings;
    bool m_vPCSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
