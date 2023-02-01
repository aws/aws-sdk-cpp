/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/ObjectStorageServerProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Array.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateLocationObjectStorageRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationObjectStorageRequest">AWS
   * API Reference</a></p>
   */
  class CreateLocationObjectStorageRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationObjectStorageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationObjectStorage"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the domain name or IP address of the object storage server. A
     * DataSync agent uses this hostname to mount the object storage server in a
     * network.</p>
     */
    inline const Aws::String& GetServerHostname() const{ return m_serverHostname; }

    /**
     * <p>Specifies the domain name or IP address of the object storage server. A
     * DataSync agent uses this hostname to mount the object storage server in a
     * network.</p>
     */
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }

    /**
     * <p>Specifies the domain name or IP address of the object storage server. A
     * DataSync agent uses this hostname to mount the object storage server in a
     * network.</p>
     */
    inline void SetServerHostname(const Aws::String& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = value; }

    /**
     * <p>Specifies the domain name or IP address of the object storage server. A
     * DataSync agent uses this hostname to mount the object storage server in a
     * network.</p>
     */
    inline void SetServerHostname(Aws::String&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::move(value); }

    /**
     * <p>Specifies the domain name or IP address of the object storage server. A
     * DataSync agent uses this hostname to mount the object storage server in a
     * network.</p>
     */
    inline void SetServerHostname(const char* value) { m_serverHostnameHasBeenSet = true; m_serverHostname.assign(value); }

    /**
     * <p>Specifies the domain name or IP address of the object storage server. A
     * DataSync agent uses this hostname to mount the object storage server in a
     * network.</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerHostname(const Aws::String& value) { SetServerHostname(value); return *this;}

    /**
     * <p>Specifies the domain name or IP address of the object storage server. A
     * DataSync agent uses this hostname to mount the object storage server in a
     * network.</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerHostname(Aws::String&& value) { SetServerHostname(std::move(value)); return *this;}

    /**
     * <p>Specifies the domain name or IP address of the object storage server. A
     * DataSync agent uses this hostname to mount the object storage server in a
     * network.</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerHostname(const char* value) { SetServerHostname(value); return *this;}


    /**
     * <p>Specifies the port that your object storage server accepts inbound network
     * traffic on (for example, port 443).</p>
     */
    inline int GetServerPort() const{ return m_serverPort; }

    /**
     * <p>Specifies the port that your object storage server accepts inbound network
     * traffic on (for example, port 443).</p>
     */
    inline bool ServerPortHasBeenSet() const { return m_serverPortHasBeenSet; }

    /**
     * <p>Specifies the port that your object storage server accepts inbound network
     * traffic on (for example, port 443).</p>
     */
    inline void SetServerPort(int value) { m_serverPortHasBeenSet = true; m_serverPort = value; }

    /**
     * <p>Specifies the port that your object storage server accepts inbound network
     * traffic on (for example, port 443).</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerPort(int value) { SetServerPort(value); return *this;}


    /**
     * <p>Specifies the protocol that your object storage server uses to
     * communicate.</p>
     */
    inline const ObjectStorageServerProtocol& GetServerProtocol() const{ return m_serverProtocol; }

    /**
     * <p>Specifies the protocol that your object storage server uses to
     * communicate.</p>
     */
    inline bool ServerProtocolHasBeenSet() const { return m_serverProtocolHasBeenSet; }

    /**
     * <p>Specifies the protocol that your object storage server uses to
     * communicate.</p>
     */
    inline void SetServerProtocol(const ObjectStorageServerProtocol& value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = value; }

    /**
     * <p>Specifies the protocol that your object storage server uses to
     * communicate.</p>
     */
    inline void SetServerProtocol(ObjectStorageServerProtocol&& value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = std::move(value); }

    /**
     * <p>Specifies the protocol that your object storage server uses to
     * communicate.</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerProtocol(const ObjectStorageServerProtocol& value) { SetServerProtocol(value); return *this;}

    /**
     * <p>Specifies the protocol that your object storage server uses to
     * communicate.</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerProtocol(ObjectStorageServerProtocol&& value) { SetServerProtocol(std::move(value)); return *this;}


    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix. </p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix. </p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix. </p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix. </p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix. </p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix. </p>
     */
    inline CreateLocationObjectStorageRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix. </p>
     */
    inline CreateLocationObjectStorageRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix. </p>
     */
    inline CreateLocationObjectStorageRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>Specifies the name of the object storage bucket involved in the transfer.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>Specifies the name of the object storage bucket involved in the transfer.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>Specifies the name of the object storage bucket involved in the transfer.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>Specifies the name of the object storage bucket involved in the transfer.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>Specifies the name of the object storage bucket involved in the transfer.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>Specifies the name of the object storage bucket involved in the transfer.</p>
     */
    inline CreateLocationObjectStorageRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>Specifies the name of the object storage bucket involved in the transfer.</p>
     */
    inline CreateLocationObjectStorageRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the object storage bucket involved in the transfer.</p>
     */
    inline CreateLocationObjectStorageRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline const Aws::String& GetAccessKey() const{ return m_accessKey; }

    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline bool AccessKeyHasBeenSet() const { return m_accessKeyHasBeenSet; }

    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline void SetAccessKey(const Aws::String& value) { m_accessKeyHasBeenSet = true; m_accessKey = value; }

    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline void SetAccessKey(Aws::String&& value) { m_accessKeyHasBeenSet = true; m_accessKey = std::move(value); }

    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline void SetAccessKey(const char* value) { m_accessKeyHasBeenSet = true; m_accessKey.assign(value); }

    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline CreateLocationObjectStorageRequest& WithAccessKey(const Aws::String& value) { SetAccessKey(value); return *this;}

    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline CreateLocationObjectStorageRequest& WithAccessKey(Aws::String&& value) { SetAccessKey(std::move(value)); return *this;}

    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline CreateLocationObjectStorageRequest& WithAccessKey(const char* value) { SetAccessKey(value); return *this;}


    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline const Aws::String& GetSecretKey() const{ return m_secretKey; }

    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline bool SecretKeyHasBeenSet() const { return m_secretKeyHasBeenSet; }

    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline void SetSecretKey(const Aws::String& value) { m_secretKeyHasBeenSet = true; m_secretKey = value; }

    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline void SetSecretKey(Aws::String&& value) { m_secretKeyHasBeenSet = true; m_secretKey = std::move(value); }

    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline void SetSecretKey(const char* value) { m_secretKeyHasBeenSet = true; m_secretKey.assign(value); }

    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline CreateLocationObjectStorageRequest& WithSecretKey(const Aws::String& value) { SetSecretKey(value); return *this;}

    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline CreateLocationObjectStorageRequest& WithSecretKey(Aws::String&& value) { SetSecretKey(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline CreateLocationObjectStorageRequest& WithSecretKey(const char* value) { SetSecretKey(value); return *this;}


    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * securely connect with your location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * securely connect with your location.</p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * securely connect with your location.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * securely connect with your location.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * securely connect with your location.</p>
     */
    inline CreateLocationObjectStorageRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * securely connect with your location.</p>
     */
    inline CreateLocationObjectStorageRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * securely connect with your location.</p>
     */
    inline CreateLocationObjectStorageRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * securely connect with your location.</p>
     */
    inline CreateLocationObjectStorageRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * securely connect with your location.</p>
     */
    inline CreateLocationObjectStorageRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }


    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. Tags can help you manage, filter, and search for your resources.
     * We recommend creating a name tag for your location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. Tags can help you manage, filter, and search for your resources.
     * We recommend creating a name tag for your location.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. Tags can help you manage, filter, and search for your resources.
     * We recommend creating a name tag for your location.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. Tags can help you manage, filter, and search for your resources.
     * We recommend creating a name tag for your location.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. Tags can help you manage, filter, and search for your resources.
     * We recommend creating a name tag for your location.</p>
     */
    inline CreateLocationObjectStorageRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. Tags can help you manage, filter, and search for your resources.
     * We recommend creating a name tag for your location.</p>
     */
    inline CreateLocationObjectStorageRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. Tags can help you manage, filter, and search for your resources.
     * We recommend creating a name tag for your location.</p>
     */
    inline CreateLocationObjectStorageRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. Tags can help you manage, filter, and search for your resources.
     * We recommend creating a name tag for your location.</p>
     */
    inline CreateLocationObjectStorageRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies a certificate to authenticate with an object storage system that
     * uses a private or self-signed certificate authority (CA). You must specify a
     * Base64-encoded <code>.pem</code> file (for example,
     * <code>file:///home/user/.ssh/storage_sys_certificate.pem</code>). The
     * certificate can be up to 32768 bytes (before Base64 encoding).</p> <p>To use
     * this parameter, configure <code>ServerProtocol</code> to <code>HTTPS</code>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetServerCertificate() const{ return m_serverCertificate; }

    /**
     * <p>Specifies a certificate to authenticate with an object storage system that
     * uses a private or self-signed certificate authority (CA). You must specify a
     * Base64-encoded <code>.pem</code> file (for example,
     * <code>file:///home/user/.ssh/storage_sys_certificate.pem</code>). The
     * certificate can be up to 32768 bytes (before Base64 encoding).</p> <p>To use
     * this parameter, configure <code>ServerProtocol</code> to <code>HTTPS</code>.</p>
     */
    inline bool ServerCertificateHasBeenSet() const { return m_serverCertificateHasBeenSet; }

    /**
     * <p>Specifies a certificate to authenticate with an object storage system that
     * uses a private or self-signed certificate authority (CA). You must specify a
     * Base64-encoded <code>.pem</code> file (for example,
     * <code>file:///home/user/.ssh/storage_sys_certificate.pem</code>). The
     * certificate can be up to 32768 bytes (before Base64 encoding).</p> <p>To use
     * this parameter, configure <code>ServerProtocol</code> to <code>HTTPS</code>.</p>
     */
    inline void SetServerCertificate(const Aws::Utils::ByteBuffer& value) { m_serverCertificateHasBeenSet = true; m_serverCertificate = value; }

    /**
     * <p>Specifies a certificate to authenticate with an object storage system that
     * uses a private or self-signed certificate authority (CA). You must specify a
     * Base64-encoded <code>.pem</code> file (for example,
     * <code>file:///home/user/.ssh/storage_sys_certificate.pem</code>). The
     * certificate can be up to 32768 bytes (before Base64 encoding).</p> <p>To use
     * this parameter, configure <code>ServerProtocol</code> to <code>HTTPS</code>.</p>
     */
    inline void SetServerCertificate(Aws::Utils::ByteBuffer&& value) { m_serverCertificateHasBeenSet = true; m_serverCertificate = std::move(value); }

    /**
     * <p>Specifies a certificate to authenticate with an object storage system that
     * uses a private or self-signed certificate authority (CA). You must specify a
     * Base64-encoded <code>.pem</code> file (for example,
     * <code>file:///home/user/.ssh/storage_sys_certificate.pem</code>). The
     * certificate can be up to 32768 bytes (before Base64 encoding).</p> <p>To use
     * this parameter, configure <code>ServerProtocol</code> to <code>HTTPS</code>.</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerCertificate(const Aws::Utils::ByteBuffer& value) { SetServerCertificate(value); return *this;}

    /**
     * <p>Specifies a certificate to authenticate with an object storage system that
     * uses a private or self-signed certificate authority (CA). You must specify a
     * Base64-encoded <code>.pem</code> file (for example,
     * <code>file:///home/user/.ssh/storage_sys_certificate.pem</code>). The
     * certificate can be up to 32768 bytes (before Base64 encoding).</p> <p>To use
     * this parameter, configure <code>ServerProtocol</code> to <code>HTTPS</code>.</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerCertificate(Aws::Utils::ByteBuffer&& value) { SetServerCertificate(std::move(value)); return *this;}

  private:

    Aws::String m_serverHostname;
    bool m_serverHostnameHasBeenSet = false;

    int m_serverPort;
    bool m_serverPortHasBeenSet = false;

    ObjectStorageServerProtocol m_serverProtocol;
    bool m_serverProtocolHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_accessKey;
    bool m_accessKeyHasBeenSet = false;

    Aws::String m_secretKey;
    bool m_secretKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::ByteBuffer m_serverCertificate;
    bool m_serverCertificateHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
