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
    AWS_DATASYNC_API DescribeLocationObjectStorageResult();
    AWS_DATASYNC_API DescribeLocationObjectStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationObjectStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the object storage system location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The ARN of the object storage system location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The ARN of the object storage system location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The ARN of the object storage system location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The ARN of the object storage system location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The ARN of the object storage system location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the object storage system location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URL of the object storage system location.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URL of the object storage system location.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URL of the object storage system location.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URL of the object storage system location.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URL of the object storage system location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URL of the object storage system location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URL of the object storage system location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The access key (for example, a user name) required to authenticate with the
     * object storage system.</p>
     */
    inline const Aws::String& GetAccessKey() const{ return m_accessKey; }

    /**
     * <p>The access key (for example, a user name) required to authenticate with the
     * object storage system.</p>
     */
    inline void SetAccessKey(const Aws::String& value) { m_accessKey = value; }

    /**
     * <p>The access key (for example, a user name) required to authenticate with the
     * object storage system.</p>
     */
    inline void SetAccessKey(Aws::String&& value) { m_accessKey = std::move(value); }

    /**
     * <p>The access key (for example, a user name) required to authenticate with the
     * object storage system.</p>
     */
    inline void SetAccessKey(const char* value) { m_accessKey.assign(value); }

    /**
     * <p>The access key (for example, a user name) required to authenticate with the
     * object storage system.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAccessKey(const Aws::String& value) { SetAccessKey(value); return *this;}

    /**
     * <p>The access key (for example, a user name) required to authenticate with the
     * object storage system.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAccessKey(Aws::String&& value) { SetAccessKey(std::move(value)); return *this;}

    /**
     * <p>The access key (for example, a user name) required to authenticate with the
     * object storage system.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAccessKey(const char* value) { SetAccessKey(value); return *this;}


    /**
     * <p>The port that your object storage server accepts inbound network traffic on
     * (for example, port 443).</p>
     */
    inline int GetServerPort() const{ return m_serverPort; }

    /**
     * <p>The port that your object storage server accepts inbound network traffic on
     * (for example, port 443).</p>
     */
    inline void SetServerPort(int value) { m_serverPort = value; }

    /**
     * <p>The port that your object storage server accepts inbound network traffic on
     * (for example, port 443).</p>
     */
    inline DescribeLocationObjectStorageResult& WithServerPort(int value) { SetServerPort(value); return *this;}


    /**
     * <p>The protocol that your object storage system uses to communicate.</p>
     */
    inline const ObjectStorageServerProtocol& GetServerProtocol() const{ return m_serverProtocol; }

    /**
     * <p>The protocol that your object storage system uses to communicate.</p>
     */
    inline void SetServerProtocol(const ObjectStorageServerProtocol& value) { m_serverProtocol = value; }

    /**
     * <p>The protocol that your object storage system uses to communicate.</p>
     */
    inline void SetServerProtocol(ObjectStorageServerProtocol&& value) { m_serverProtocol = std::move(value); }

    /**
     * <p>The protocol that your object storage system uses to communicate.</p>
     */
    inline DescribeLocationObjectStorageResult& WithServerProtocol(const ObjectStorageServerProtocol& value) { SetServerProtocol(value); return *this;}

    /**
     * <p>The protocol that your object storage system uses to communicate.</p>
     */
    inline DescribeLocationObjectStorageResult& WithServerProtocol(ObjectStorageServerProtocol&& value) { SetServerProtocol(std::move(value)); return *this;}


    /**
     * <p>The ARNs of the DataSync agents that can securely connect with your
     * location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The ARNs of the DataSync agents that can securely connect with your
     * location.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArns = value; }

    /**
     * <p>The ARNs of the DataSync agents that can securely connect with your
     * location.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArns = std::move(value); }

    /**
     * <p>The ARNs of the DataSync agents that can securely connect with your
     * location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The ARNs of the DataSync agents that can securely connect with your
     * location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the DataSync agents that can securely connect with your
     * location.</p>
     */
    inline DescribeLocationObjectStorageResult& AddAgentArns(const Aws::String& value) { m_agentArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the DataSync agents that can securely connect with your
     * location.</p>
     */
    inline DescribeLocationObjectStorageResult& AddAgentArns(Aws::String&& value) { m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the DataSync agents that can securely connect with your
     * location.</p>
     */
    inline DescribeLocationObjectStorageResult& AddAgentArns(const char* value) { m_agentArns.push_back(value); return *this; }


    /**
     * <p>The time that the location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the location was created.</p>
     */
    inline DescribeLocationObjectStorageResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the location was created.</p>
     */
    inline DescribeLocationObjectStorageResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The self-signed certificate that DataSync uses to securely authenticate with
     * your object storage system.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetServerCertificate() const{ return m_serverCertificate; }

    /**
     * <p>The self-signed certificate that DataSync uses to securely authenticate with
     * your object storage system.</p>
     */
    inline void SetServerCertificate(const Aws::Utils::ByteBuffer& value) { m_serverCertificate = value; }

    /**
     * <p>The self-signed certificate that DataSync uses to securely authenticate with
     * your object storage system.</p>
     */
    inline void SetServerCertificate(Aws::Utils::ByteBuffer&& value) { m_serverCertificate = std::move(value); }

    /**
     * <p>The self-signed certificate that DataSync uses to securely authenticate with
     * your object storage system.</p>
     */
    inline DescribeLocationObjectStorageResult& WithServerCertificate(const Aws::Utils::ByteBuffer& value) { SetServerCertificate(value); return *this;}

    /**
     * <p>The self-signed certificate that DataSync uses to securely authenticate with
     * your object storage system.</p>
     */
    inline DescribeLocationObjectStorageResult& WithServerCertificate(Aws::Utils::ByteBuffer&& value) { SetServerCertificate(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    Aws::String m_accessKey;

    int m_serverPort;

    ObjectStorageServerProtocol m_serverProtocol;

    Aws::Vector<Aws::String> m_agentArns;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::ByteBuffer m_serverCertificate;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
