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
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationObjectStorageRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationObjectStorageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationObjectStorage"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the object storage system location that you're
     * updating.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }
    inline UpdateLocationObjectStorageRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline UpdateLocationObjectStorageRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline UpdateLocationObjectStorageRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the port that your object storage server accepts inbound network
     * traffic on (for example, port 443).</p>
     */
    inline int GetServerPort() const{ return m_serverPort; }
    inline bool ServerPortHasBeenSet() const { return m_serverPortHasBeenSet; }
    inline void SetServerPort(int value) { m_serverPortHasBeenSet = true; m_serverPort = value; }
    inline UpdateLocationObjectStorageRequest& WithServerPort(int value) { SetServerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the protocol that your object storage server uses to
     * communicate.</p>
     */
    inline const ObjectStorageServerProtocol& GetServerProtocol() const{ return m_serverProtocol; }
    inline bool ServerProtocolHasBeenSet() const { return m_serverProtocolHasBeenSet; }
    inline void SetServerProtocol(const ObjectStorageServerProtocol& value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = value; }
    inline void SetServerProtocol(ObjectStorageServerProtocol&& value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = std::move(value); }
    inline UpdateLocationObjectStorageRequest& WithServerProtocol(const ObjectStorageServerProtocol& value) { SetServerProtocol(value); return *this;}
    inline UpdateLocationObjectStorageRequest& WithServerProtocol(ObjectStorageServerProtocol&& value) { SetServerProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline UpdateLocationObjectStorageRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline UpdateLocationObjectStorageRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline UpdateLocationObjectStorageRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline const Aws::String& GetAccessKey() const{ return m_accessKey; }
    inline bool AccessKeyHasBeenSet() const { return m_accessKeyHasBeenSet; }
    inline void SetAccessKey(const Aws::String& value) { m_accessKeyHasBeenSet = true; m_accessKey = value; }
    inline void SetAccessKey(Aws::String&& value) { m_accessKeyHasBeenSet = true; m_accessKey = std::move(value); }
    inline void SetAccessKey(const char* value) { m_accessKeyHasBeenSet = true; m_accessKey.assign(value); }
    inline UpdateLocationObjectStorageRequest& WithAccessKey(const Aws::String& value) { SetAccessKey(value); return *this;}
    inline UpdateLocationObjectStorageRequest& WithAccessKey(Aws::String&& value) { SetAccessKey(std::move(value)); return *this;}
    inline UpdateLocationObjectStorageRequest& WithAccessKey(const char* value) { SetAccessKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline const Aws::String& GetSecretKey() const{ return m_secretKey; }
    inline bool SecretKeyHasBeenSet() const { return m_secretKeyHasBeenSet; }
    inline void SetSecretKey(const Aws::String& value) { m_secretKeyHasBeenSet = true; m_secretKey = value; }
    inline void SetSecretKey(Aws::String&& value) { m_secretKeyHasBeenSet = true; m_secretKey = std::move(value); }
    inline void SetSecretKey(const char* value) { m_secretKeyHasBeenSet = true; m_secretKey.assign(value); }
    inline UpdateLocationObjectStorageRequest& WithSecretKey(const Aws::String& value) { SetSecretKey(value); return *this;}
    inline UpdateLocationObjectStorageRequest& WithSecretKey(Aws::String&& value) { SetSecretKey(std::move(value)); return *this;}
    inline UpdateLocationObjectStorageRequest& WithSecretKey(const char* value) { SetSecretKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the DataSync agents that can
     * connect with your object storage system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }
    inline UpdateLocationObjectStorageRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline UpdateLocationObjectStorageRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline UpdateLocationObjectStorageRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    inline UpdateLocationObjectStorageRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }
    inline UpdateLocationObjectStorageRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a certificate chain for DataSync to authenticate with your object
     * storage system if the system uses a private or self-signed certificate authority
     * (CA). You must specify a single <code>.pem</code> file with a full certificate
     * chain (for example,
     * <code>file:///home/user/.ssh/object_storage_certificates.pem</code>).</p> <p>The
     * certificate chain might include:</p> <ul> <li> <p>The object storage system's
     * certificate</p> </li> <li> <p>All intermediate certificates (if there are
     * any)</p> </li> <li> <p>The root certificate of the signing CA</p> </li> </ul>
     * <p>You can concatenate your certificates into a <code>.pem</code> file (which
     * can be up to 32768 bytes before base64 encoding). The following example
     * <code>cat</code> command creates an <code>object_storage_certificates.pem</code>
     * file that includes three certificates:</p> <p> <code>cat
     * object_server_certificate.pem intermediate_certificate.pem
     * ca_root_certificate.pem &gt; object_storage_certificates.pem</code> </p> <p>To
     * use this parameter, configure <code>ServerProtocol</code> to
     * <code>HTTPS</code>.</p> <p>Updating this parameter doesn't interfere with tasks
     * that you have in progress.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetServerCertificate() const{ return m_serverCertificate; }
    inline bool ServerCertificateHasBeenSet() const { return m_serverCertificateHasBeenSet; }
    inline void SetServerCertificate(const Aws::Utils::ByteBuffer& value) { m_serverCertificateHasBeenSet = true; m_serverCertificate = value; }
    inline void SetServerCertificate(Aws::Utils::ByteBuffer&& value) { m_serverCertificateHasBeenSet = true; m_serverCertificate = std::move(value); }
    inline UpdateLocationObjectStorageRequest& WithServerCertificate(const Aws::Utils::ByteBuffer& value) { SetServerCertificate(value); return *this;}
    inline UpdateLocationObjectStorageRequest& WithServerCertificate(Aws::Utils::ByteBuffer&& value) { SetServerCertificate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    int m_serverPort;
    bool m_serverPortHasBeenSet = false;

    ObjectStorageServerProtocol m_serverProtocol;
    bool m_serverProtocolHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_accessKey;
    bool m_accessKeyHasBeenSet = false;

    Aws::String m_secretKey;
    bool m_secretKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::Utils::ByteBuffer m_serverCertificate;
    bool m_serverCertificateHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
