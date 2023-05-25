/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/elasticfilesystem/model/ResourceIdType.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class PutAccountPreferencesRequest : public EFSRequest
  {
  public:
    AWS_EFS_API PutAccountPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountPreferences"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the EFS resource ID preference to set for the user's Amazon Web
     * Services account, in the current Amazon Web Services Region, either
     * <code>LONG_ID</code> (17 characters), or <code>SHORT_ID</code> (8
     * characters).</p>  <p>Starting in October, 2021, you will receive an error
     * when setting the account preference to <code>SHORT_ID</code>. Contact Amazon Web
     * Services support if you receive an error and must use short IDs for file system
     * and mount target resources.</p> 
     */
    inline const ResourceIdType& GetResourceIdType() const{ return m_resourceIdType; }

    /**
     * <p>Specifies the EFS resource ID preference to set for the user's Amazon Web
     * Services account, in the current Amazon Web Services Region, either
     * <code>LONG_ID</code> (17 characters), or <code>SHORT_ID</code> (8
     * characters).</p>  <p>Starting in October, 2021, you will receive an error
     * when setting the account preference to <code>SHORT_ID</code>. Contact Amazon Web
     * Services support if you receive an error and must use short IDs for file system
     * and mount target resources.</p> 
     */
    inline bool ResourceIdTypeHasBeenSet() const { return m_resourceIdTypeHasBeenSet; }

    /**
     * <p>Specifies the EFS resource ID preference to set for the user's Amazon Web
     * Services account, in the current Amazon Web Services Region, either
     * <code>LONG_ID</code> (17 characters), or <code>SHORT_ID</code> (8
     * characters).</p>  <p>Starting in October, 2021, you will receive an error
     * when setting the account preference to <code>SHORT_ID</code>. Contact Amazon Web
     * Services support if you receive an error and must use short IDs for file system
     * and mount target resources.</p> 
     */
    inline void SetResourceIdType(const ResourceIdType& value) { m_resourceIdTypeHasBeenSet = true; m_resourceIdType = value; }

    /**
     * <p>Specifies the EFS resource ID preference to set for the user's Amazon Web
     * Services account, in the current Amazon Web Services Region, either
     * <code>LONG_ID</code> (17 characters), or <code>SHORT_ID</code> (8
     * characters).</p>  <p>Starting in October, 2021, you will receive an error
     * when setting the account preference to <code>SHORT_ID</code>. Contact Amazon Web
     * Services support if you receive an error and must use short IDs for file system
     * and mount target resources.</p> 
     */
    inline void SetResourceIdType(ResourceIdType&& value) { m_resourceIdTypeHasBeenSet = true; m_resourceIdType = std::move(value); }

    /**
     * <p>Specifies the EFS resource ID preference to set for the user's Amazon Web
     * Services account, in the current Amazon Web Services Region, either
     * <code>LONG_ID</code> (17 characters), or <code>SHORT_ID</code> (8
     * characters).</p>  <p>Starting in October, 2021, you will receive an error
     * when setting the account preference to <code>SHORT_ID</code>. Contact Amazon Web
     * Services support if you receive an error and must use short IDs for file system
     * and mount target resources.</p> 
     */
    inline PutAccountPreferencesRequest& WithResourceIdType(const ResourceIdType& value) { SetResourceIdType(value); return *this;}

    /**
     * <p>Specifies the EFS resource ID preference to set for the user's Amazon Web
     * Services account, in the current Amazon Web Services Region, either
     * <code>LONG_ID</code> (17 characters), or <code>SHORT_ID</code> (8
     * characters).</p>  <p>Starting in October, 2021, you will receive an error
     * when setting the account preference to <code>SHORT_ID</code>. Contact Amazon Web
     * Services support if you receive an error and must use short IDs for file system
     * and mount target resources.</p> 
     */
    inline PutAccountPreferencesRequest& WithResourceIdType(ResourceIdType&& value) { SetResourceIdType(std::move(value)); return *this;}

  private:

    ResourceIdType m_resourceIdType;
    bool m_resourceIdTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
