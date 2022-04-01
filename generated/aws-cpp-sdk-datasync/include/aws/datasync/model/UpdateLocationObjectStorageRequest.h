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
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class AWS_DATASYNC_API UpdateLocationObjectStorageRequest : public DataSyncRequest
  {
  public:
    UpdateLocationObjectStorageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationObjectStorage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to be updated.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to be updated.</p>
     */
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to be updated.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to be updated.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to be updated.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to be updated.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to be updated.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to be updated.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The port that your self-managed object storage server accepts inbound network
     * traffic on. The server port is set by default to TCP 80 (HTTP) or TCP 443
     * (HTTPS). You can specify a custom port if your self-managed object storage
     * server requires one.</p>
     */
    inline int GetServerPort() const{ return m_serverPort; }

    /**
     * <p>The port that your self-managed object storage server accepts inbound network
     * traffic on. The server port is set by default to TCP 80 (HTTP) or TCP 443
     * (HTTPS). You can specify a custom port if your self-managed object storage
     * server requires one.</p>
     */
    inline bool ServerPortHasBeenSet() const { return m_serverPortHasBeenSet; }

    /**
     * <p>The port that your self-managed object storage server accepts inbound network
     * traffic on. The server port is set by default to TCP 80 (HTTP) or TCP 443
     * (HTTPS). You can specify a custom port if your self-managed object storage
     * server requires one.</p>
     */
    inline void SetServerPort(int value) { m_serverPortHasBeenSet = true; m_serverPort = value; }

    /**
     * <p>The port that your self-managed object storage server accepts inbound network
     * traffic on. The server port is set by default to TCP 80 (HTTP) or TCP 443
     * (HTTPS). You can specify a custom port if your self-managed object storage
     * server requires one.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithServerPort(int value) { SetServerPort(value); return *this;}


    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are <code>HTTP</code> or <code>HTTPS</code>.</p>
     */
    inline const ObjectStorageServerProtocol& GetServerProtocol() const{ return m_serverProtocol; }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are <code>HTTP</code> or <code>HTTPS</code>.</p>
     */
    inline bool ServerProtocolHasBeenSet() const { return m_serverProtocolHasBeenSet; }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are <code>HTTP</code> or <code>HTTPS</code>.</p>
     */
    inline void SetServerProtocol(const ObjectStorageServerProtocol& value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = value; }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are <code>HTTP</code> or <code>HTTPS</code>.</p>
     */
    inline void SetServerProtocol(ObjectStorageServerProtocol&& value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = std::move(value); }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are <code>HTTP</code> or <code>HTTPS</code>.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithServerProtocol(const ObjectStorageServerProtocol& value) { SetServerProtocol(value); return *this;}

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are <code>HTTP</code> or <code>HTTPS</code>.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithServerProtocol(ObjectStorageServerProtocol&& value) { SetServerProtocol(std::move(value)); return *this;}


    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline const Aws::String& GetAccessKey() const{ return m_accessKey; }

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline bool AccessKeyHasBeenSet() const { return m_accessKeyHasBeenSet; }

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline void SetAccessKey(const Aws::String& value) { m_accessKeyHasBeenSet = true; m_accessKey = value; }

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline void SetAccessKey(Aws::String&& value) { m_accessKeyHasBeenSet = true; m_accessKey = std::move(value); }

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline void SetAccessKey(const char* value) { m_accessKeyHasBeenSet = true; m_accessKey.assign(value); }

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithAccessKey(const Aws::String& value) { SetAccessKey(value); return *this;}

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithAccessKey(Aws::String&& value) { SetAccessKey(std::move(value)); return *this;}

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithAccessKey(const char* value) { SetAccessKey(value); return *this;}


    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline const Aws::String& GetSecretKey() const{ return m_secretKey; }

    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline bool SecretKeyHasBeenSet() const { return m_secretKeyHasBeenSet; }

    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline void SetSecretKey(const Aws::String& value) { m_secretKeyHasBeenSet = true; m_secretKey = value; }

    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline void SetSecretKey(Aws::String&& value) { m_secretKeyHasBeenSet = true; m_secretKey = std::move(value); }

    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline void SetSecretKey(const char* value) { m_secretKeyHasBeenSet = true; m_secretKey.assign(value); }

    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithSecretKey(const Aws::String& value) { SetSecretKey(value); return *this;}

    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithSecretKey(Aws::String&& value) { SetSecretKey(std::move(value)); return *this;}

    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithSecretKey(const char* value) { SetSecretKey(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline UpdateLocationObjectStorageRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline UpdateLocationObjectStorageRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline UpdateLocationObjectStorageRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline UpdateLocationObjectStorageRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet;

    int m_serverPort;
    bool m_serverPortHasBeenSet;

    ObjectStorageServerProtocol m_serverProtocol;
    bool m_serverProtocolHasBeenSet;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet;

    Aws::String m_accessKey;
    bool m_accessKeyHasBeenSet;

    Aws::String m_secretKey;
    bool m_secretKeyHasBeenSet;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
