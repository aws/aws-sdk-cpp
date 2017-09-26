/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/ClientData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SnapshotDiskContainer.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ImportSnapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportSnapshotRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ImportSnapshotRequest : public EC2Request
  {
  public:
    ImportSnapshotRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The client-specific data.</p>
     */
    inline const ClientData& GetClientData() const{ return m_clientData; }

    /**
     * <p>The client-specific data.</p>
     */
    inline void SetClientData(const ClientData& value) { m_clientDataHasBeenSet = true; m_clientData = value; }

    /**
     * <p>The client-specific data.</p>
     */
    inline void SetClientData(ClientData&& value) { m_clientDataHasBeenSet = true; m_clientData = std::move(value); }

    /**
     * <p>The client-specific data.</p>
     */
    inline ImportSnapshotRequest& WithClientData(const ClientData& value) { SetClientData(value); return *this;}

    /**
     * <p>The client-specific data.</p>
     */
    inline ImportSnapshotRequest& WithClientData(ClientData&& value) { SetClientData(std::move(value)); return *this;}


    /**
     * <p>Token to enable idempotency for VM import requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Token to enable idempotency for VM import requests.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Token to enable idempotency for VM import requests.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Token to enable idempotency for VM import requests.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Token to enable idempotency for VM import requests.</p>
     */
    inline ImportSnapshotRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Token to enable idempotency for VM import requests.</p>
     */
    inline ImportSnapshotRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Token to enable idempotency for VM import requests.</p>
     */
    inline ImportSnapshotRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description string for the import snapshot task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description string for the import snapshot task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description string for the import snapshot task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description string for the import snapshot task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description string for the import snapshot task.</p>
     */
    inline ImportSnapshotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description string for the import snapshot task.</p>
     */
    inline ImportSnapshotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description string for the import snapshot task.</p>
     */
    inline ImportSnapshotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the disk container.</p>
     */
    inline const SnapshotDiskContainer& GetDiskContainer() const{ return m_diskContainer; }

    /**
     * <p>Information about the disk container.</p>
     */
    inline void SetDiskContainer(const SnapshotDiskContainer& value) { m_diskContainerHasBeenSet = true; m_diskContainer = value; }

    /**
     * <p>Information about the disk container.</p>
     */
    inline void SetDiskContainer(SnapshotDiskContainer&& value) { m_diskContainerHasBeenSet = true; m_diskContainer = std::move(value); }

    /**
     * <p>Information about the disk container.</p>
     */
    inline ImportSnapshotRequest& WithDiskContainer(const SnapshotDiskContainer& value) { SetDiskContainer(value); return *this;}

    /**
     * <p>Information about the disk container.</p>
     */
    inline ImportSnapshotRequest& WithDiskContainer(SnapshotDiskContainer&& value) { SetDiskContainer(std::move(value)); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ImportSnapshotRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline ImportSnapshotRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline ImportSnapshotRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline ImportSnapshotRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}

  private:

    ClientData m_clientData;
    bool m_clientDataHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    SnapshotDiskContainer m_diskContainer;
    bool m_diskContainerHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
