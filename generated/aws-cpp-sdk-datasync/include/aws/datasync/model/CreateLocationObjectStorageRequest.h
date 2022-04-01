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
  class AWS_DATASYNC_API CreateLocationObjectStorageRequest : public DataSyncRequest
  {
  public:
    CreateLocationObjectStorageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationObjectStorage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the self-managed object storage server. This value is the IP
     * address or Domain Name Service (DNS) name of the object storage server. An agent
     * uses this host name to mount the object storage server in a network. </p>
     */
    inline const Aws::String& GetServerHostname() const{ return m_serverHostname; }

    /**
     * <p>The name of the self-managed object storage server. This value is the IP
     * address or Domain Name Service (DNS) name of the object storage server. An agent
     * uses this host name to mount the object storage server in a network. </p>
     */
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }

    /**
     * <p>The name of the self-managed object storage server. This value is the IP
     * address or Domain Name Service (DNS) name of the object storage server. An agent
     * uses this host name to mount the object storage server in a network. </p>
     */
    inline void SetServerHostname(const Aws::String& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = value; }

    /**
     * <p>The name of the self-managed object storage server. This value is the IP
     * address or Domain Name Service (DNS) name of the object storage server. An agent
     * uses this host name to mount the object storage server in a network. </p>
     */
    inline void SetServerHostname(Aws::String&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::move(value); }

    /**
     * <p>The name of the self-managed object storage server. This value is the IP
     * address or Domain Name Service (DNS) name of the object storage server. An agent
     * uses this host name to mount the object storage server in a network. </p>
     */
    inline void SetServerHostname(const char* value) { m_serverHostnameHasBeenSet = true; m_serverHostname.assign(value); }

    /**
     * <p>The name of the self-managed object storage server. This value is the IP
     * address or Domain Name Service (DNS) name of the object storage server. An agent
     * uses this host name to mount the object storage server in a network. </p>
     */
    inline CreateLocationObjectStorageRequest& WithServerHostname(const Aws::String& value) { SetServerHostname(value); return *this;}

    /**
     * <p>The name of the self-managed object storage server. This value is the IP
     * address or Domain Name Service (DNS) name of the object storage server. An agent
     * uses this host name to mount the object storage server in a network. </p>
     */
    inline CreateLocationObjectStorageRequest& WithServerHostname(Aws::String&& value) { SetServerHostname(std::move(value)); return *this;}

    /**
     * <p>The name of the self-managed object storage server. This value is the IP
     * address or Domain Name Service (DNS) name of the object storage server. An agent
     * uses this host name to mount the object storage server in a network. </p>
     */
    inline CreateLocationObjectStorageRequest& WithServerHostname(const char* value) { SetServerHostname(value); return *this;}


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
    inline CreateLocationObjectStorageRequest& WithServerPort(int value) { SetServerPort(value); return *this;}


    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline const ObjectStorageServerProtocol& GetServerProtocol() const{ return m_serverProtocol; }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline bool ServerProtocolHasBeenSet() const { return m_serverProtocolHasBeenSet; }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline void SetServerProtocol(const ObjectStorageServerProtocol& value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = value; }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline void SetServerProtocol(ObjectStorageServerProtocol&& value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = std::move(value); }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerProtocol(const ObjectStorageServerProtocol& value) { SetServerProtocol(value); return *this;}

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline CreateLocationObjectStorageRequest& WithServerProtocol(ObjectStorageServerProtocol&& value) { SetServerProtocol(std::move(value)); return *this;}


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
    inline CreateLocationObjectStorageRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline CreateLocationObjectStorageRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>The subdirectory in the self-managed object storage server that is used to
     * read data from.</p>
     */
    inline CreateLocationObjectStorageRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>The bucket on the self-managed object storage server that is used to read
     * data from.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The bucket on the self-managed object storage server that is used to read
     * data from.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The bucket on the self-managed object storage server that is used to read
     * data from.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The bucket on the self-managed object storage server that is used to read
     * data from.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The bucket on the self-managed object storage server that is used to read
     * data from.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The bucket on the self-managed object storage server that is used to read
     * data from.</p>
     */
    inline CreateLocationObjectStorageRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The bucket on the self-managed object storage server that is used to read
     * data from.</p>
     */
    inline CreateLocationObjectStorageRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The bucket on the self-managed object storage server that is used to read
     * data from.</p>
     */
    inline CreateLocationObjectStorageRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}


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
    inline CreateLocationObjectStorageRequest& WithAccessKey(const Aws::String& value) { SetAccessKey(value); return *this;}

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline CreateLocationObjectStorageRequest& WithAccessKey(Aws::String&& value) { SetAccessKey(std::move(value)); return *this;}

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline CreateLocationObjectStorageRequest& WithAccessKey(const char* value) { SetAccessKey(value); return *this;}


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
    inline CreateLocationObjectStorageRequest& WithSecretKey(const Aws::String& value) { SetSecretKey(value); return *this;}

    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline CreateLocationObjectStorageRequest& WithSecretKey(Aws::String&& value) { SetSecretKey(std::move(value)); return *this;}

    /**
     * <p>Optional. The secret key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline CreateLocationObjectStorageRequest& WithSecretKey(const char* value) { SetSecretKey(value); return *this;}


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
    inline CreateLocationObjectStorageRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline CreateLocationObjectStorageRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline CreateLocationObjectStorageRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline CreateLocationObjectStorageRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline CreateLocationObjectStorageRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }


    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationObjectStorageRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationObjectStorageRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationObjectStorageRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationObjectStorageRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverHostname;
    bool m_serverHostnameHasBeenSet;

    int m_serverPort;
    bool m_serverPortHasBeenSet;

    ObjectStorageServerProtocol m_serverProtocol;
    bool m_serverProtocolHasBeenSet;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_accessKey;
    bool m_accessKeyHasBeenSet;

    Aws::String m_secretKey;
    bool m_secretKeyHasBeenSet;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
