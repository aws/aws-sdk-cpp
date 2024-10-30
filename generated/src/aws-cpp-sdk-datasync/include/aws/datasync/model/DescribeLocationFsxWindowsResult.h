/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeLocationFsxWindowsResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationFsxWindowsResult();
    AWS_DATASYNC_API DescribeLocationFsxWindowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationFsxWindowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the FSx for Windows File Server location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }
    inline DescribeLocationFsxWindowsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline DescribeLocationFsxWindowsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline DescribeLocationFsxWindowsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uniform resource identifier (URI) of the FSx for Windows File Server
     * location.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }
    inline DescribeLocationFsxWindowsResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}
    inline DescribeLocationFsxWindowsResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}
    inline DescribeLocationFsxWindowsResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>For information about configuring security
     * groups for file system access, see the <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/limit-access-security-groups.html">
     * <i>Amazon FSx for Windows File Server User Guide</i> </a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArns = value; }
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArns = std::move(value); }
    inline DescribeLocationFsxWindowsResult& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}
    inline DescribeLocationFsxWindowsResult& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}
    inline DescribeLocationFsxWindowsResult& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArns.push_back(value); return *this; }
    inline DescribeLocationFsxWindowsResult& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArns.push_back(std::move(value)); return *this; }
    inline DescribeLocationFsxWindowsResult& AddSecurityGroupArns(const char* value) { m_securityGroupArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the FSx for Windows File Server location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeLocationFsxWindowsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeLocationFsxWindowsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user with the permissions to mount and access the FSx for Windows File
     * Server file system.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }
    inline void SetUser(const Aws::String& value) { m_user = value; }
    inline void SetUser(Aws::String&& value) { m_user = std::move(value); }
    inline void SetUser(const char* value) { m_user.assign(value); }
    inline DescribeLocationFsxWindowsResult& WithUser(const Aws::String& value) { SetUser(value); return *this;}
    inline DescribeLocationFsxWindowsResult& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}
    inline DescribeLocationFsxWindowsResult& WithUser(const char* value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Microsoft Active Directory domain that the FSx for Windows
     * File Server file system belongs to.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline void SetDomain(const Aws::String& value) { m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domain.assign(value); }
    inline DescribeLocationFsxWindowsResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DescribeLocationFsxWindowsResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DescribeLocationFsxWindowsResult& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLocationFsxWindowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLocationFsxWindowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLocationFsxWindowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    Aws::Vector<Aws::String> m_securityGroupArns;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_user;

    Aws::String m_domain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
