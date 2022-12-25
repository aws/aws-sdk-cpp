/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CacheAttributes.h>
#include <aws/storagegateway/model/EndpointNetworkConfiguration.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AssociateFileSystemRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API AssociateFileSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateFileSystem"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline AssociateFileSystemRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline AssociateFileSystemRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline AssociateFileSystemRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The password of the user credential.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password of the user credential.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password of the user credential.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of the user credential.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password of the user credential.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password of the user credential.</p>
     */
    inline AssociateFileSystemRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of the user credential.</p>
     */
    inline AssociateFileSystemRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password of the user credential.</p>
     */
    inline AssociateFileSystemRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>A unique string value that you supply that is used by the FSx File Gateway to
     * ensure idempotent file system association creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique string value that you supply that is used by the FSx File Gateway to
     * ensure idempotent file system association creation.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique string value that you supply that is used by the FSx File Gateway to
     * ensure idempotent file system association creation.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique string value that you supply that is used by the FSx File Gateway to
     * ensure idempotent file system association creation.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique string value that you supply that is used by the FSx File Gateway to
     * ensure idempotent file system association creation.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique string value that you supply that is used by the FSx File Gateway to
     * ensure idempotent file system association creation.</p>
     */
    inline AssociateFileSystemRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique string value that you supply that is used by the FSx File Gateway to
     * ensure idempotent file system association creation.</p>
     */
    inline AssociateFileSystemRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique string value that you supply that is used by the FSx File Gateway to
     * ensure idempotent file system association creation.</p>
     */
    inline AssociateFileSystemRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline AssociateFileSystemRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline AssociateFileSystemRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline AssociateFileSystemRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon FSx file system to associate
     * with the FSx File Gateway.</p>
     */
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon FSx file system to associate
     * with the FSx File Gateway.</p>
     */
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon FSx file system to associate
     * with the FSx File Gateway.</p>
     */
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon FSx file system to associate
     * with the FSx File Gateway.</p>
     */
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon FSx file system to associate
     * with the FSx File Gateway.</p>
     */
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon FSx file system to associate
     * with the FSx File Gateway.</p>
     */
    inline AssociateFileSystemRequest& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon FSx file system to associate
     * with the FSx File Gateway.</p>
     */
    inline AssociateFileSystemRequest& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon FSx file system to associate
     * with the FSx File Gateway.</p>
     */
    inline AssociateFileSystemRequest& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}


    /**
     * <p>A list of up to 50 tags that can be assigned to the file system association.
     * Each tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the file system association.
     * Each tag is a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the file system association.
     * Each tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the file system association.
     * Each tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags that can be assigned to the file system association.
     * Each tag is a key-value pair.</p>
     */
    inline AssociateFileSystemRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to the file system association.
     * Each tag is a key-value pair.</p>
     */
    inline AssociateFileSystemRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to the file system association.
     * Each tag is a key-value pair.</p>
     */
    inline AssociateFileSystemRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the file system association.
     * Each tag is a key-value pair.</p>
     */
    inline AssociateFileSystemRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline const Aws::String& GetAuditDestinationARN() const{ return m_auditDestinationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline bool AuditDestinationARNHasBeenSet() const { return m_auditDestinationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline void SetAuditDestinationARN(const Aws::String& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline void SetAuditDestinationARN(Aws::String&& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline void SetAuditDestinationARN(const char* value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline AssociateFileSystemRequest& WithAuditDestinationARN(const Aws::String& value) { SetAuditDestinationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline AssociateFileSystemRequest& WithAuditDestinationARN(Aws::String&& value) { SetAuditDestinationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline AssociateFileSystemRequest& WithAuditDestinationARN(const char* value) { SetAuditDestinationARN(value); return *this;}


    
    inline const CacheAttributes& GetCacheAttributes() const{ return m_cacheAttributes; }

    
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }

    
    inline void SetCacheAttributes(const CacheAttributes& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = value; }

    
    inline void SetCacheAttributes(CacheAttributes&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::move(value); }

    
    inline AssociateFileSystemRequest& WithCacheAttributes(const CacheAttributes& value) { SetCacheAttributes(value); return *this;}

    
    inline AssociateFileSystemRequest& WithCacheAttributes(CacheAttributes&& value) { SetCacheAttributes(std::move(value)); return *this;}


    /**
     * <p>Specifies the network configuration information for the gateway associated
     * with the Amazon FSx file system.</p>  <p>If multiple file systems are
     * associated with this gateway, this parameter's <code>IpAddresses</code> field is
     * required.</p> 
     */
    inline const EndpointNetworkConfiguration& GetEndpointNetworkConfiguration() const{ return m_endpointNetworkConfiguration; }

    /**
     * <p>Specifies the network configuration information for the gateway associated
     * with the Amazon FSx file system.</p>  <p>If multiple file systems are
     * associated with this gateway, this parameter's <code>IpAddresses</code> field is
     * required.</p> 
     */
    inline bool EndpointNetworkConfigurationHasBeenSet() const { return m_endpointNetworkConfigurationHasBeenSet; }

    /**
     * <p>Specifies the network configuration information for the gateway associated
     * with the Amazon FSx file system.</p>  <p>If multiple file systems are
     * associated with this gateway, this parameter's <code>IpAddresses</code> field is
     * required.</p> 
     */
    inline void SetEndpointNetworkConfiguration(const EndpointNetworkConfiguration& value) { m_endpointNetworkConfigurationHasBeenSet = true; m_endpointNetworkConfiguration = value; }

    /**
     * <p>Specifies the network configuration information for the gateway associated
     * with the Amazon FSx file system.</p>  <p>If multiple file systems are
     * associated with this gateway, this parameter's <code>IpAddresses</code> field is
     * required.</p> 
     */
    inline void SetEndpointNetworkConfiguration(EndpointNetworkConfiguration&& value) { m_endpointNetworkConfigurationHasBeenSet = true; m_endpointNetworkConfiguration = std::move(value); }

    /**
     * <p>Specifies the network configuration information for the gateway associated
     * with the Amazon FSx file system.</p>  <p>If multiple file systems are
     * associated with this gateway, this parameter's <code>IpAddresses</code> field is
     * required.</p> 
     */
    inline AssociateFileSystemRequest& WithEndpointNetworkConfiguration(const EndpointNetworkConfiguration& value) { SetEndpointNetworkConfiguration(value); return *this;}

    /**
     * <p>Specifies the network configuration information for the gateway associated
     * with the Amazon FSx file system.</p>  <p>If multiple file systems are
     * associated with this gateway, this parameter's <code>IpAddresses</code> field is
     * required.</p> 
     */
    inline AssociateFileSystemRequest& WithEndpointNetworkConfiguration(EndpointNetworkConfiguration&& value) { SetEndpointNetworkConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_auditDestinationARN;
    bool m_auditDestinationARNHasBeenSet = false;

    CacheAttributes m_cacheAttributes;
    bool m_cacheAttributesHasBeenSet = false;

    EndpointNetworkConfiguration m_endpointNetworkConfiguration;
    bool m_endpointNetworkConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
