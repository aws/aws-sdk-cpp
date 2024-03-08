/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LocationService
{
namespace Model
{

  /**
   */
  class DeleteKeyRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API DeleteKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKey"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_LOCATIONSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>ForceDelete bypasses an API key's expiry conditions and deletes the key. Set
     * the parameter <code>true</code> to delete the key or to <code>false</code> to
     * not preemptively delete the API key.</p> <p>Valid values: <code>true</code>, or
     * <code>false</code>.</p> <p>Required: No</p>  <p>This action is
     * irreversible. Only use ForceDelete if you are certain the key is no longer in
     * use.</p> 
     */
    inline bool GetForceDelete() const{ return m_forceDelete; }

    /**
     * <p>ForceDelete bypasses an API key's expiry conditions and deletes the key. Set
     * the parameter <code>true</code> to delete the key or to <code>false</code> to
     * not preemptively delete the API key.</p> <p>Valid values: <code>true</code>, or
     * <code>false</code>.</p> <p>Required: No</p>  <p>This action is
     * irreversible. Only use ForceDelete if you are certain the key is no longer in
     * use.</p> 
     */
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }

    /**
     * <p>ForceDelete bypasses an API key's expiry conditions and deletes the key. Set
     * the parameter <code>true</code> to delete the key or to <code>false</code> to
     * not preemptively delete the API key.</p> <p>Valid values: <code>true</code>, or
     * <code>false</code>.</p> <p>Required: No</p>  <p>This action is
     * irreversible. Only use ForceDelete if you are certain the key is no longer in
     * use.</p> 
     */
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }

    /**
     * <p>ForceDelete bypasses an API key's expiry conditions and deletes the key. Set
     * the parameter <code>true</code> to delete the key or to <code>false</code> to
     * not preemptively delete the API key.</p> <p>Valid values: <code>true</code>, or
     * <code>false</code>.</p> <p>Required: No</p>  <p>This action is
     * irreversible. Only use ForceDelete if you are certain the key is no longer in
     * use.</p> 
     */
    inline DeleteKeyRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}


    /**
     * <p>The name of the API key to delete.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the API key to delete.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The name of the API key to delete.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the API key to delete.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the API key to delete.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the API key to delete.</p>
     */
    inline DeleteKeyRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the API key to delete.</p>
     */
    inline DeleteKeyRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the API key to delete.</p>
     */
    inline DeleteKeyRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}

  private:

    bool m_forceDelete;
    bool m_forceDeleteHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
