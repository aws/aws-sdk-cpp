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
  class AWS_DATASYNC_API DescribeLocationObjectStorageResult
  {
  public:
    DescribeLocationObjectStorageResult();
    DescribeLocationObjectStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLocationObjectStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to describe.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to describe.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to describe.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to describe.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to describe.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to describe.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the self-managed object storage server
     * location to describe.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URL of the source self-managed object storage server location that was
     * described.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URL of the source self-managed object storage server location that was
     * described.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URL of the source self-managed object storage server location that was
     * described.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URL of the source self-managed object storage server location that was
     * described.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URL of the source self-managed object storage server location that was
     * described.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URL of the source self-managed object storage server location that was
     * described.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URL of the source self-managed object storage server location that was
     * described.</p>
     */
    inline DescribeLocationObjectStorageResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


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
    inline void SetAccessKey(const Aws::String& value) { m_accessKey = value; }

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline void SetAccessKey(Aws::String&& value) { m_accessKey = std::move(value); }

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline void SetAccessKey(const char* value) { m_accessKey.assign(value); }

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAccessKey(const Aws::String& value) { SetAccessKey(value); return *this;}

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAccessKey(Aws::String&& value) { SetAccessKey(std::move(value)); return *this;}

    /**
     * <p>Optional. The access key is used if credentials are required to access the
     * self-managed object storage server. If your object storage requires a user name
     * and password to authenticate, use <code>AccessKey</code> and
     * <code>SecretKey</code> to provide the user name and password, respectively.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAccessKey(const char* value) { SetAccessKey(value); return *this;}


    /**
     * <p>The port that your self-managed object storage server accepts inbound network
     * traffic on. The server port is set by default to TCP 80 (HTTP) or TCP 443
     * (HTTPS).</p>
     */
    inline int GetServerPort() const{ return m_serverPort; }

    /**
     * <p>The port that your self-managed object storage server accepts inbound network
     * traffic on. The server port is set by default to TCP 80 (HTTP) or TCP 443
     * (HTTPS).</p>
     */
    inline void SetServerPort(int value) { m_serverPort = value; }

    /**
     * <p>The port that your self-managed object storage server accepts inbound network
     * traffic on. The server port is set by default to TCP 80 (HTTP) or TCP 443
     * (HTTPS).</p>
     */
    inline DescribeLocationObjectStorageResult& WithServerPort(int value) { SetServerPort(value); return *this;}


    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline const ObjectStorageServerProtocol& GetServerProtocol() const{ return m_serverProtocol; }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline void SetServerProtocol(const ObjectStorageServerProtocol& value) { m_serverProtocol = value; }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline void SetServerProtocol(ObjectStorageServerProtocol&& value) { m_serverProtocol = std::move(value); }

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline DescribeLocationObjectStorageResult& WithServerProtocol(const ObjectStorageServerProtocol& value) { SetServerProtocol(value); return *this;}

    /**
     * <p>The protocol that the object storage server uses to communicate. Valid values
     * are HTTP or HTTPS.</p>
     */
    inline DescribeLocationObjectStorageResult& WithServerProtocol(ObjectStorageServerProtocol&& value) { SetServerProtocol(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline DescribeLocationObjectStorageResult& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline DescribeLocationObjectStorageResult& AddAgentArns(const Aws::String& value) { m_agentArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline DescribeLocationObjectStorageResult& AddAgentArns(Aws::String&& value) { m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agents associated with the self-managed
     * object storage server location.</p>
     */
    inline DescribeLocationObjectStorageResult& AddAgentArns(const char* value) { m_agentArns.push_back(value); return *this; }


    /**
     * <p>The time that the self-managed object storage server agent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the self-managed object storage server agent was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the self-managed object storage server agent was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the self-managed object storage server agent was created.</p>
     */
    inline DescribeLocationObjectStorageResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the self-managed object storage server agent was created.</p>
     */
    inline DescribeLocationObjectStorageResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    Aws::String m_accessKey;

    int m_serverPort;

    ObjectStorageServerProtocol m_serverProtocol;

    Aws::Vector<Aws::String> m_agentArns;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
