/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>Indicates that a requested resource is not found.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_IDENTITYSTORE_API ResourceNotFoundException();
    AWS_IDENTITYSTORE_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An enum object indicating the type of resource in the identity store service.
     * Valid values include USER, GROUP, and IDENTITY_STORE.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>An enum object indicating the type of resource in the identity store service.
     * Valid values include USER, GROUP, and IDENTITY_STORE.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>An enum object indicating the type of resource in the identity store service.
     * Valid values include USER, GROUP, and IDENTITY_STORE.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>An enum object indicating the type of resource in the identity store service.
     * Valid values include USER, GROUP, and IDENTITY_STORE.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>An enum object indicating the type of resource in the identity store service.
     * Valid values include USER, GROUP, and IDENTITY_STORE.</p>
     */
    inline ResourceNotFoundException& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>An enum object indicating the type of resource in the identity store service.
     * Valid values include USER, GROUP, and IDENTITY_STORE.</p>
     */
    inline ResourceNotFoundException& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The identifier for a resource in the identity store that can be used as
     * <code>UserId</code> or <code>GroupId</code>. The format for
     * <code>ResourceId</code> is either <code>UUID</code> or
     * <code>1234567890-UUID</code>, where <code>UUID</code> is a randomly generated
     * value for each resource when it is created and <code>1234567890</code>
     * represents the <code>IdentityStoreId</code> string value. In the case that the
     * identity store is migrated from a legacy SSO identity store, the
     * <code>ResourceId</code> for that identity store will be in the format of
     * <code>UUID</code>. Otherwise, it will be in the <code>1234567890-UUID</code>
     * format.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier for a resource in the identity store that can be used as
     * <code>UserId</code> or <code>GroupId</code>. The format for
     * <code>ResourceId</code> is either <code>UUID</code> or
     * <code>1234567890-UUID</code>, where <code>UUID</code> is a randomly generated
     * value for each resource when it is created and <code>1234567890</code>
     * represents the <code>IdentityStoreId</code> string value. In the case that the
     * identity store is migrated from a legacy SSO identity store, the
     * <code>ResourceId</code> for that identity store will be in the format of
     * <code>UUID</code>. Otherwise, it will be in the <code>1234567890-UUID</code>
     * format.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier for a resource in the identity store that can be used as
     * <code>UserId</code> or <code>GroupId</code>. The format for
     * <code>ResourceId</code> is either <code>UUID</code> or
     * <code>1234567890-UUID</code>, where <code>UUID</code> is a randomly generated
     * value for each resource when it is created and <code>1234567890</code>
     * represents the <code>IdentityStoreId</code> string value. In the case that the
     * identity store is migrated from a legacy SSO identity store, the
     * <code>ResourceId</code> for that identity store will be in the format of
     * <code>UUID</code>. Otherwise, it will be in the <code>1234567890-UUID</code>
     * format.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier for a resource in the identity store that can be used as
     * <code>UserId</code> or <code>GroupId</code>. The format for
     * <code>ResourceId</code> is either <code>UUID</code> or
     * <code>1234567890-UUID</code>, where <code>UUID</code> is a randomly generated
     * value for each resource when it is created and <code>1234567890</code>
     * represents the <code>IdentityStoreId</code> string value. In the case that the
     * identity store is migrated from a legacy SSO identity store, the
     * <code>ResourceId</code> for that identity store will be in the format of
     * <code>UUID</code>. Otherwise, it will be in the <code>1234567890-UUID</code>
     * format.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier for a resource in the identity store that can be used as
     * <code>UserId</code> or <code>GroupId</code>. The format for
     * <code>ResourceId</code> is either <code>UUID</code> or
     * <code>1234567890-UUID</code>, where <code>UUID</code> is a randomly generated
     * value for each resource when it is created and <code>1234567890</code>
     * represents the <code>IdentityStoreId</code> string value. In the case that the
     * identity store is migrated from a legacy SSO identity store, the
     * <code>ResourceId</code> for that identity store will be in the format of
     * <code>UUID</code>. Otherwise, it will be in the <code>1234567890-UUID</code>
     * format.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier for a resource in the identity store that can be used as
     * <code>UserId</code> or <code>GroupId</code>. The format for
     * <code>ResourceId</code> is either <code>UUID</code> or
     * <code>1234567890-UUID</code>, where <code>UUID</code> is a randomly generated
     * value for each resource when it is created and <code>1234567890</code>
     * represents the <code>IdentityStoreId</code> string value. In the case that the
     * identity store is migrated from a legacy SSO identity store, the
     * <code>ResourceId</code> for that identity store will be in the format of
     * <code>UUID</code>. Otherwise, it will be in the <code>1234567890-UUID</code>
     * format.</p>
     */
    inline ResourceNotFoundException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier for a resource in the identity store that can be used as
     * <code>UserId</code> or <code>GroupId</code>. The format for
     * <code>ResourceId</code> is either <code>UUID</code> or
     * <code>1234567890-UUID</code>, where <code>UUID</code> is a randomly generated
     * value for each resource when it is created and <code>1234567890</code>
     * represents the <code>IdentityStoreId</code> string value. In the case that the
     * identity store is migrated from a legacy SSO identity store, the
     * <code>ResourceId</code> for that identity store will be in the format of
     * <code>UUID</code>. Otherwise, it will be in the <code>1234567890-UUID</code>
     * format.</p>
     */
    inline ResourceNotFoundException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a resource in the identity store that can be used as
     * <code>UserId</code> or <code>GroupId</code>. The format for
     * <code>ResourceId</code> is either <code>UUID</code> or
     * <code>1234567890-UUID</code>, where <code>UUID</code> is a randomly generated
     * value for each resource when it is created and <code>1234567890</code>
     * represents the <code>IdentityStoreId</code> string value. In the case that the
     * identity store is migrated from a legacy SSO identity store, the
     * <code>ResourceId</code> for that identity store will be in the format of
     * <code>UUID</code>. Otherwise, it will be in the <code>1234567890-UUID</code>
     * format.</p>
     */
    inline ResourceNotFoundException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The identifier for each request. This value is a globally unique ID that is
     * generated by the identity store service for each sent request, and is then
     * returned inside the exception if the request fails.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The identifier for each request. This value is a globally unique ID that is
     * generated by the identity store service for each sent request, and is then
     * returned inside the exception if the request fails.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The identifier for each request. This value is a globally unique ID that is
     * generated by the identity store service for each sent request, and is then
     * returned inside the exception if the request fails.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The identifier for each request. This value is a globally unique ID that is
     * generated by the identity store service for each sent request, and is then
     * returned inside the exception if the request fails.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The identifier for each request. This value is a globally unique ID that is
     * generated by the identity store service for each sent request, and is then
     * returned inside the exception if the request fails.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The identifier for each request. This value is a globally unique ID that is
     * generated by the identity store service for each sent request, and is then
     * returned inside the exception if the request fails.</p>
     */
    inline ResourceNotFoundException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The identifier for each request. This value is a globally unique ID that is
     * generated by the identity store service for each sent request, and is then
     * returned inside the exception if the request fails.</p>
     */
    inline ResourceNotFoundException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The identifier for each request. This value is a globally unique ID that is
     * generated by the identity store service for each sent request, and is then
     * returned inside the exception if the request fails.</p>
     */
    inline ResourceNotFoundException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
