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
  class AWS_DATASYNC_API DescribeLocationFsxWindowsResult
  {
  public:
    DescribeLocationFsxWindowsResult();
    DescribeLocationFsxWindowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLocationFsxWindowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location
     * that was described.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location
     * that was described.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location
     * that was described.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location
     * that was described.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location
     * that was described.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location
     * that was described.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location
     * that was described.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URL of the FSx for Windows File Server location that was described.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URL of the FSx for Windows File Server location that was described.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URL of the FSx for Windows File Server location that was described.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URL of the FSx for Windows File Server location that was described.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URL of the FSx for Windows File Server location that was described.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URL of the FSx for Windows File Server location that was described.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URL of the FSx for Windows File Server location that was described.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the FSx for Windows File Server file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the FSx for Windows File Server file system.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the FSx for Windows File Server file system.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the FSx for Windows File Server file system.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the FSx for Windows File Server file system.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the FSx for Windows File Server file system.</p>
     */
    inline DescribeLocationFsxWindowsResult& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the FSx for Windows File Server file system.</p>
     */
    inline DescribeLocationFsxWindowsResult& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the FSx for Windows File Server file system.</p>
     */
    inline DescribeLocationFsxWindowsResult& AddSecurityGroupArns(const char* value) { m_securityGroupArns.push_back(value); return *this; }


    /**
     * <p>The time that the FSx for Windows File Server location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the FSx for Windows File Server location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the FSx for Windows File Server location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the FSx for Windows File Server location was created.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the FSx for Windows File Server location was created.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline void SetUser(const Aws::String& value) { m_user = value; }

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline void SetUser(Aws::String&& value) { m_user = std::move(value); }

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline void SetUser(const char* value) { m_user.assign(value); }

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domain = value; }

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domain = std::move(value); }

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline void SetDomain(const char* value) { m_domain.assign(value); }

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline DescribeLocationFsxWindowsResult& WithDomain(const char* value) { SetDomain(value); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    Aws::Vector<Aws::String> m_securityGroupArns;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_user;

    Aws::String m_domain;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
