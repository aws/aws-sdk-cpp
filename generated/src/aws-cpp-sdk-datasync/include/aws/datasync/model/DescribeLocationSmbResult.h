/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/SmbMountOptions.h>
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
   * <p>DescribeLocationSmbResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationSmbResponse">AWS
   * API Reference</a></p>
   */
  class DescribeLocationSmbResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationSmbResult();
    AWS_DATASYNC_API DescribeLocationSmbResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationSmbResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the SMB location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }
    inline DescribeLocationSmbResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline DescribeLocationSmbResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline DescribeLocationSmbResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the SMB location.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }
    inline DescribeLocationSmbResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}
    inline DescribeLocationSmbResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}
    inline DescribeLocationSmbResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the DataSync agents that can connect with your SMB file
     * server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArns = value; }
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArns = std::move(value); }
    inline DescribeLocationSmbResult& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline DescribeLocationSmbResult& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline DescribeLocationSmbResult& AddAgentArns(const Aws::String& value) { m_agentArns.push_back(value); return *this; }
    inline DescribeLocationSmbResult& AddAgentArns(Aws::String&& value) { m_agentArns.push_back(std::move(value)); return *this; }
    inline DescribeLocationSmbResult& AddAgentArns(const char* value) { m_agentArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user that can mount and access the files, folders, and file metadata in
     * your SMB file server.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }
    inline void SetUser(const Aws::String& value) { m_user = value; }
    inline void SetUser(Aws::String&& value) { m_user = std::move(value); }
    inline void SetUser(const char* value) { m_user.assign(value); }
    inline DescribeLocationSmbResult& WithUser(const Aws::String& value) { SetUser(value); return *this;}
    inline DescribeLocationSmbResult& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}
    inline DescribeLocationSmbResult& WithUser(const char* value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Microsoft Active Directory domain that the SMB file server
     * belongs to.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline void SetDomain(const Aws::String& value) { m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domain.assign(value); }
    inline DescribeLocationSmbResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DescribeLocationSmbResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DescribeLocationSmbResult& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that DataSync use to access your SMB file.</p>
     */
    inline const SmbMountOptions& GetMountOptions() const{ return m_mountOptions; }
    inline void SetMountOptions(const SmbMountOptions& value) { m_mountOptions = value; }
    inline void SetMountOptions(SmbMountOptions&& value) { m_mountOptions = std::move(value); }
    inline DescribeLocationSmbResult& WithMountOptions(const SmbMountOptions& value) { SetMountOptions(value); return *this;}
    inline DescribeLocationSmbResult& WithMountOptions(SmbMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the SMB location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeLocationSmbResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeLocationSmbResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLocationSmbResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLocationSmbResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLocationSmbResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    Aws::Vector<Aws::String> m_agentArns;

    Aws::String m_user;

    Aws::String m_domain;

    SmbMountOptions m_mountOptions;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
