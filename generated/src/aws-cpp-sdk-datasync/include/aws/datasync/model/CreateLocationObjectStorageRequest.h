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
#include <aws/datasync/model/CmkSecretConfig.h>
#include <aws/datasync/model/CustomSecretConfig.h>
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
    AWS_DATASYNC_API CreateLocationObjectStorageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationObjectStorage"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the domain name or IP address (IPv4 or IPv6) of the object storage
     * server that your DataSync agent connects to.</p>
     */
    inline const Aws::String& GetServerHostname() const { return m_serverHostname; }
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }
    template<typename ServerHostnameT = Aws::String>
    void SetServerHostname(ServerHostnameT&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::forward<ServerHostnameT>(value); }
    template<typename ServerHostnameT = Aws::String>
    CreateLocationObjectStorageRequest& WithServerHostname(ServerHostnameT&& value) { SetServerHostname(std::forward<ServerHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the port that your object storage server accepts inbound network
     * traffic on (for example, port 443).</p>
     */
    inline int GetServerPort() const { return m_serverPort; }
    inline bool ServerPortHasBeenSet() const { return m_serverPortHasBeenSet; }
    inline void SetServerPort(int value) { m_serverPortHasBeenSet = true; m_serverPort = value; }
    inline CreateLocationObjectStorageRequest& WithServerPort(int value) { SetServerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the protocol that your object storage server uses to communicate.
     * If not specified, the default value is <code>HTTPS</code>.</p>
     */
    inline ObjectStorageServerProtocol GetServerProtocol() const { return m_serverProtocol; }
    inline bool ServerProtocolHasBeenSet() const { return m_serverProtocolHasBeenSet; }
    inline void SetServerProtocol(ObjectStorageServerProtocol value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = value; }
    inline CreateLocationObjectStorageRequest& WithServerProtocol(ObjectStorageServerProtocol value) { SetServerProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the object prefix for your object storage server. If this is a
     * source location, DataSync only copies objects with this prefix. If this is a
     * destination location, DataSync writes all objects with this prefix. </p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    CreateLocationObjectStorageRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the object storage bucket involved in the transfer.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    CreateLocationObjectStorageRequest& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the access key (for example, a user name) if credentials are
     * required to authenticate with the object storage server.</p>
     */
    inline const Aws::String& GetAccessKey() const { return m_accessKey; }
    inline bool AccessKeyHasBeenSet() const { return m_accessKeyHasBeenSet; }
    template<typename AccessKeyT = Aws::String>
    void SetAccessKey(AccessKeyT&& value) { m_accessKeyHasBeenSet = true; m_accessKey = std::forward<AccessKeyT>(value); }
    template<typename AccessKeyT = Aws::String>
    CreateLocationObjectStorageRequest& WithAccessKey(AccessKeyT&& value) { SetAccessKey(std::forward<AccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the secret key (for example, a password) if credentials are
     * required to authenticate with the object storage server.</p>  <p>If you
     * provide a secret using <code>SecretKey</code>, but do not provide secret
     * configuration details using <code>CmkSecretConfig</code> or
     * <code>CustomSecretConfig</code>, then DataSync stores the token using your
     * Amazon Web Services account's Secrets Manager secret.</p> 
     */
    inline const Aws::String& GetSecretKey() const { return m_secretKey; }
    inline bool SecretKeyHasBeenSet() const { return m_secretKeyHasBeenSet; }
    template<typename SecretKeyT = Aws::String>
    void SetSecretKey(SecretKeyT&& value) { m_secretKeyHasBeenSet = true; m_secretKey = std::forward<SecretKeyT>(value); }
    template<typename SecretKeyT = Aws::String>
    CreateLocationObjectStorageRequest& WithSecretKey(SecretKeyT&& value) { SetSecretKey(std::forward<SecretKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Specifies the Amazon Resource Names (ARNs) of the DataSync agents
     * that can connect with your object storage system. If you are setting up an
     * agentless cross-cloud transfer, you do not need to specify a value for this
     * parameter.</p>  <p>Make sure you configure this parameter correctly when
     * you first create your storage location. You cannot add or remove agents from a
     * storage location after you create it.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    CreateLocationObjectStorageRequest& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    CreateLocationObjectStorageRequest& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. Tags can help you manage, filter, and search for your resources.
     * We recommend creating a name tag for your location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateLocationObjectStorageRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateLocationObjectStorageRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
     * <code>HTTPS</code>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetServerCertificate() const { return m_serverCertificate; }
    inline bool ServerCertificateHasBeenSet() const { return m_serverCertificateHasBeenSet; }
    template<typename ServerCertificateT = Aws::Utils::ByteBuffer>
    void SetServerCertificate(ServerCertificateT&& value) { m_serverCertificateHasBeenSet = true; m_serverCertificate = std::forward<ServerCertificateT>(value); }
    template<typename ServerCertificateT = Aws::Utils::ByteBuffer>
    CreateLocationObjectStorageRequest& WithServerCertificate(ServerCertificateT&& value) { SetServerCertificate(std::forward<ServerCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration information for a DataSync-managed secret, which
     * includes the <code>SecretKey</code> that DataSync uses to access a specific
     * object storage location, with a customer-managed KMS key.</p> <p>When you
     * include this paramater as part of a <code>CreateLocationObjectStorage</code>
     * request, you provide only the KMS key ARN. DataSync uses this KMS key together
     * with the value you specify for the <code>SecretKey</code> parameter to create a
     * DataSync-managed secret to store the location access credentials.</p> <p>Make
     * sure the DataSync has permission to access the KMS key that you specify.</p>
     *  <p>You can use either <code>CmkSecretConfig</code> (with
     * <code>SecretKey</code>) or <code>CustomSecretConfig</code> (without
     * <code>SecretKey</code>) to provide credentials for a
     * <code>CreateLocationObjectStorage</code> request. Do not provide both parameters
     * for the same request.</p> 
     */
    inline const CmkSecretConfig& GetCmkSecretConfig() const { return m_cmkSecretConfig; }
    inline bool CmkSecretConfigHasBeenSet() const { return m_cmkSecretConfigHasBeenSet; }
    template<typename CmkSecretConfigT = CmkSecretConfig>
    void SetCmkSecretConfig(CmkSecretConfigT&& value) { m_cmkSecretConfigHasBeenSet = true; m_cmkSecretConfig = std::forward<CmkSecretConfigT>(value); }
    template<typename CmkSecretConfigT = CmkSecretConfig>
    CreateLocationObjectStorageRequest& WithCmkSecretConfig(CmkSecretConfigT&& value) { SetCmkSecretConfig(std::forward<CmkSecretConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration information for a customer-managed Secrets Manager
     * secret where the secret key for a specific object storage location is stored in
     * plain text. This configuration includes the secret ARN, and the ARN for an IAM
     * role that provides access to the secret.</p>  <p>You can use either
     * <code>CmkSecretConfig</code> (with <code>SecretKey</code>) or
     * <code>CustomSecretConfig</code> (without <code>SecretKey</code>) to provide
     * credentials for a <code>CreateLocationObjectStorage</code> request. Do not
     * provide both parameters for the same request.</p> 
     */
    inline const CustomSecretConfig& GetCustomSecretConfig() const { return m_customSecretConfig; }
    inline bool CustomSecretConfigHasBeenSet() const { return m_customSecretConfigHasBeenSet; }
    template<typename CustomSecretConfigT = CustomSecretConfig>
    void SetCustomSecretConfig(CustomSecretConfigT&& value) { m_customSecretConfigHasBeenSet = true; m_customSecretConfig = std::forward<CustomSecretConfigT>(value); }
    template<typename CustomSecretConfigT = CustomSecretConfig>
    CreateLocationObjectStorageRequest& WithCustomSecretConfig(CustomSecretConfigT&& value) { SetCustomSecretConfig(std::forward<CustomSecretConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverHostname;
    bool m_serverHostnameHasBeenSet = false;

    int m_serverPort{0};
    bool m_serverPortHasBeenSet = false;

    ObjectStorageServerProtocol m_serverProtocol{ObjectStorageServerProtocol::NOT_SET};
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

    Aws::Utils::ByteBuffer m_serverCertificate{};
    bool m_serverCertificateHasBeenSet = false;

    CmkSecretConfig m_cmkSecretConfig;
    bool m_cmkSecretConfigHasBeenSet = false;

    CustomSecretConfig m_customSecretConfig;
    bool m_customSecretConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
