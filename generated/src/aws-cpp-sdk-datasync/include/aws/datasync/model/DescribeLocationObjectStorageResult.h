/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/ObjectStorageServerProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Array.h>
#include <aws/datasync/model/ManagedSecretConfig.h>
#include <aws/datasync/model/CmkSecretConfig.h>
#include <aws/datasync/model/CustomSecretConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeLocationObjectStorageResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationObjectStorageResponse">AWS
   * API Reference</a></p>
   */
  class DescribeLocationObjectStorageResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationObjectStorageResult() = default;
    AWS_DATASYNC_API DescribeLocationObjectStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationObjectStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the object storage system location.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    DescribeLocationObjectStorageResult& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the object storage system location.</p>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    DescribeLocationObjectStorageResult& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access key (for example, a user name) required to authenticate with the
     * object storage system.</p>
     */
    inline const Aws::String& GetAccessKey() const { return m_accessKey; }
    template<typename AccessKeyT = Aws::String>
    void SetAccessKey(AccessKeyT&& value) { m_accessKeyHasBeenSet = true; m_accessKey = std::forward<AccessKeyT>(value); }
    template<typename AccessKeyT = Aws::String>
    DescribeLocationObjectStorageResult& WithAccessKey(AccessKeyT&& value) { SetAccessKey(std::forward<AccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that your object storage server accepts inbound network traffic on
     * (for example, port 443).</p>
     */
    inline int GetServerPort() const { return m_serverPort; }
    inline void SetServerPort(int value) { m_serverPortHasBeenSet = true; m_serverPort = value; }
    inline DescribeLocationObjectStorageResult& WithServerPort(int value) { SetServerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that your object storage system uses to communicate.</p>
     */
    inline ObjectStorageServerProtocol GetServerProtocol() const { return m_serverProtocol; }
    inline void SetServerProtocol(ObjectStorageServerProtocol value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = value; }
    inline DescribeLocationObjectStorageResult& WithServerProtocol(ObjectStorageServerProtocol value) { SetServerProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the DataSync agents that can connect with your object storage
     * system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    DescribeLocationObjectStorageResult& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    DescribeLocationObjectStorageResult& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeLocationObjectStorageResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate chain for DataSync to authenticate with your object storage
     * system if the system uses a private or self-signed certificate authority
     * (CA).</p>
     */
    inline const Aws::Utils::ByteBuffer& GetServerCertificate() const { return m_serverCertificate; }
    template<typename ServerCertificateT = Aws::Utils::ByteBuffer>
    void SetServerCertificate(ServerCertificateT&& value) { m_serverCertificateHasBeenSet = true; m_serverCertificate = std::forward<ServerCertificateT>(value); }
    template<typename ServerCertificateT = Aws::Utils::ByteBuffer>
    DescribeLocationObjectStorageResult& WithServerCertificate(ServerCertificateT&& value) { SetServerCertificate(std::forward<ServerCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes configuration information for a DataSync-managed secret, such as an
     * authentication token or set of credentials that DataSync uses to access a
     * specific transfer location. DataSync uses the default Amazon Web
     * Services-managed KMS key to encrypt this secret in Secrets Manager.</p>
     */
    inline const ManagedSecretConfig& GetManagedSecretConfig() const { return m_managedSecretConfig; }
    template<typename ManagedSecretConfigT = ManagedSecretConfig>
    void SetManagedSecretConfig(ManagedSecretConfigT&& value) { m_managedSecretConfigHasBeenSet = true; m_managedSecretConfig = std::forward<ManagedSecretConfigT>(value); }
    template<typename ManagedSecretConfigT = ManagedSecretConfig>
    DescribeLocationObjectStorageResult& WithManagedSecretConfig(ManagedSecretConfigT&& value) { SetManagedSecretConfig(std::forward<ManagedSecretConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes configuration information for a DataSync-managed secret, such as an
     * authentication token or set of credentials that DataSync uses to access a
     * specific transfer location, and a customer-managed KMS key.</p>
     */
    inline const CmkSecretConfig& GetCmkSecretConfig() const { return m_cmkSecretConfig; }
    template<typename CmkSecretConfigT = CmkSecretConfig>
    void SetCmkSecretConfig(CmkSecretConfigT&& value) { m_cmkSecretConfigHasBeenSet = true; m_cmkSecretConfig = std::forward<CmkSecretConfigT>(value); }
    template<typename CmkSecretConfigT = CmkSecretConfig>
    DescribeLocationObjectStorageResult& WithCmkSecretConfig(CmkSecretConfigT&& value) { SetCmkSecretConfig(std::forward<CmkSecretConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes configuration information for a customer-managed secret, such as an
     * authentication token or set of credentials that DataSync uses to access a
     * specific transfer location, and a customer-managed KMS key.</p>
     */
    inline const CustomSecretConfig& GetCustomSecretConfig() const { return m_customSecretConfig; }
    template<typename CustomSecretConfigT = CustomSecretConfig>
    void SetCustomSecretConfig(CustomSecretConfigT&& value) { m_customSecretConfigHasBeenSet = true; m_customSecretConfig = std::forward<CustomSecretConfigT>(value); }
    template<typename CustomSecretConfigT = CustomSecretConfig>
    DescribeLocationObjectStorageResult& WithCustomSecretConfig(CustomSecretConfigT&& value) { SetCustomSecretConfig(std::forward<CustomSecretConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLocationObjectStorageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Aws::String m_accessKey;
    bool m_accessKeyHasBeenSet = false;

    int m_serverPort{0};
    bool m_serverPortHasBeenSet = false;

    ObjectStorageServerProtocol m_serverProtocol{ObjectStorageServerProtocol::NOT_SET};
    bool m_serverProtocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::ByteBuffer m_serverCertificate{};
    bool m_serverCertificateHasBeenSet = false;

    ManagedSecretConfig m_managedSecretConfig;
    bool m_managedSecretConfigHasBeenSet = false;

    CmkSecretConfig m_cmkSecretConfig;
    bool m_cmkSecretConfigHasBeenSet = false;

    CustomSecretConfig m_customSecretConfig;
    bool m_customSecretConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
