﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/Identity.h>
#include <aws/iotsitewise/model/Resource.h>
#include <aws/iotsitewise/model/Permission.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class UpdateAccessPolicyRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateAccessPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessPolicy"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the access policy.</p>
     */
    inline const Aws::String& GetAccessPolicyId() const { return m_accessPolicyId; }
    inline bool AccessPolicyIdHasBeenSet() const { return m_accessPolicyIdHasBeenSet; }
    template<typename AccessPolicyIdT = Aws::String>
    void SetAccessPolicyId(AccessPolicyIdT&& value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId = std::forward<AccessPolicyIdT>(value); }
    template<typename AccessPolicyIdT = Aws::String>
    UpdateAccessPolicyRequest& WithAccessPolicyId(AccessPolicyIdT&& value) { SetAccessPolicyId(std::forward<AccessPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity for this access policy. Choose an IAM Identity Center user, an
     * IAM Identity Center group, or an IAM user.</p>
     */
    inline const Identity& GetAccessPolicyIdentity() const { return m_accessPolicyIdentity; }
    inline bool AccessPolicyIdentityHasBeenSet() const { return m_accessPolicyIdentityHasBeenSet; }
    template<typename AccessPolicyIdentityT = Identity>
    void SetAccessPolicyIdentity(AccessPolicyIdentityT&& value) { m_accessPolicyIdentityHasBeenSet = true; m_accessPolicyIdentity = std::forward<AccessPolicyIdentityT>(value); }
    template<typename AccessPolicyIdentityT = Identity>
    UpdateAccessPolicyRequest& WithAccessPolicyIdentity(AccessPolicyIdentityT&& value) { SetAccessPolicyIdentity(std::forward<AccessPolicyIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT SiteWise Monitor resource for this access policy. Choose either a
     * portal or a project.</p>
     */
    inline const Resource& GetAccessPolicyResource() const { return m_accessPolicyResource; }
    inline bool AccessPolicyResourceHasBeenSet() const { return m_accessPolicyResourceHasBeenSet; }
    template<typename AccessPolicyResourceT = Resource>
    void SetAccessPolicyResource(AccessPolicyResourceT&& value) { m_accessPolicyResourceHasBeenSet = true; m_accessPolicyResource = std::forward<AccessPolicyResourceT>(value); }
    template<typename AccessPolicyResourceT = Resource>
    UpdateAccessPolicyRequest& WithAccessPolicyResource(AccessPolicyResourceT&& value) { SetAccessPolicyResource(std::forward<AccessPolicyResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission level for this access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline Permission GetAccessPolicyPermission() const { return m_accessPolicyPermission; }
    inline bool AccessPolicyPermissionHasBeenSet() const { return m_accessPolicyPermissionHasBeenSet; }
    inline void SetAccessPolicyPermission(Permission value) { m_accessPolicyPermissionHasBeenSet = true; m_accessPolicyPermission = value; }
    inline UpdateAccessPolicyRequest& WithAccessPolicyPermission(Permission value) { SetAccessPolicyPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateAccessPolicyRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPolicyId;
    bool m_accessPolicyIdHasBeenSet = false;

    Identity m_accessPolicyIdentity;
    bool m_accessPolicyIdentityHasBeenSet = false;

    Resource m_accessPolicyResource;
    bool m_accessPolicyResourceHasBeenSet = false;

    Permission m_accessPolicyPermission{Permission::NOT_SET};
    bool m_accessPolicyPermissionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
