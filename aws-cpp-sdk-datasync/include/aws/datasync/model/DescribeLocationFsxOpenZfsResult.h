/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/FsxProtocol.h>
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
  class DescribeLocationFsxOpenZfsResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationFsxOpenZfsResult();
    AWS_DATASYNC_API DescribeLocationFsxOpenZfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationFsxOpenZfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the FSx for OpenZFS location that was described.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The ARN of the FSx for OpenZFS location that was described.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The ARN of the FSx for OpenZFS location that was described.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The ARN of the FSx for OpenZFS location that was described.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The ARN of the FSx for OpenZFS location that was described.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The ARN of the FSx for OpenZFS location that was described.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the FSx for OpenZFS location that was described.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The uniform resource identifier (URI) of the FSx for OpenZFS location that
     * was described.</p> <p>Example:
     * <code>fsxz://us-west-2.fs-1234567890abcdef02/fsx/folderA/folder</code> </p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The uniform resource identifier (URI) of the FSx for OpenZFS location that
     * was described.</p> <p>Example:
     * <code>fsxz://us-west-2.fs-1234567890abcdef02/fsx/folderA/folder</code> </p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The uniform resource identifier (URI) of the FSx for OpenZFS location that
     * was described.</p> <p>Example:
     * <code>fsxz://us-west-2.fs-1234567890abcdef02/fsx/folderA/folder</code> </p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The uniform resource identifier (URI) of the FSx for OpenZFS location that
     * was described.</p> <p>Example:
     * <code>fsxz://us-west-2.fs-1234567890abcdef02/fsx/folderA/folder</code> </p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The uniform resource identifier (URI) of the FSx for OpenZFS location that
     * was described.</p> <p>Example:
     * <code>fsxz://us-west-2.fs-1234567890abcdef02/fsx/folderA/folder</code> </p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The uniform resource identifier (URI) of the FSx for OpenZFS location that
     * was described.</p> <p>Example:
     * <code>fsxz://us-west-2.fs-1234567890abcdef02/fsx/folderA/folder</code> </p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The uniform resource identifier (URI) of the FSx for OpenZFS location that
     * was described.</p> <p>Example:
     * <code>fsxz://us-west-2.fs-1234567890abcdef02/fsx/folderA/folder</code> </p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The ARNs of the security groups that are configured for the FSx for OpenZFS
     * file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>The ARNs of the security groups that are configured for the FSx for OpenZFS
     * file system.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArns = value; }

    /**
     * <p>The ARNs of the security groups that are configured for the FSx for OpenZFS
     * file system.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArns = std::move(value); }

    /**
     * <p>The ARNs of the security groups that are configured for the FSx for OpenZFS
     * file system.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>The ARNs of the security groups that are configured for the FSx for OpenZFS
     * file system.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the security groups that are configured for the FSx for OpenZFS
     * file system.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the security groups that are configured for the FSx for OpenZFS
     * file system.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the security groups that are configured for the FSx for OpenZFS
     * file system.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& AddSecurityGroupArns(const char* value) { m_securityGroupArns.push_back(value); return *this; }


    /**
     * <p>The type of protocol that DataSync uses to access your file system.</p>
     */
    inline const FsxProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The type of protocol that DataSync uses to access your file system.</p>
     */
    inline void SetProtocol(const FsxProtocol& value) { m_protocol = value; }

    /**
     * <p>The type of protocol that DataSync uses to access your file system.</p>
     */
    inline void SetProtocol(FsxProtocol&& value) { m_protocol = std::move(value); }

    /**
     * <p>The type of protocol that DataSync uses to access your file system.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithProtocol(const FsxProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The type of protocol that DataSync uses to access your file system.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithProtocol(FsxProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The time that the FSx for OpenZFS location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the FSx for OpenZFS location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the FSx for OpenZFS location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the FSx for OpenZFS location was created.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the FSx for OpenZFS location was created.</p>
     */
    inline DescribeLocationFsxOpenZfsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    Aws::Vector<Aws::String> m_securityGroupArns;

    FsxProtocol m_protocol;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
